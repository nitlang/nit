# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Julien Pagès <julien.pages@lirmm.fr>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Implementation of the Nit virtual machine
module virtual_machine

import interpreter::naive_interpreter
import perfect_hashing

redef class ModelBuilder
	fun run_virtual_machine(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** NITVM STARTING ***", 1)

		var interpreter = new VirtualMachine(self, mainmodule, arguments)
		interpreter.start(mainmodule)

		var time1 = get_time
		self.toolcontext.info("*** NITVM STOPPING : {time1-time0} ***", 2)
	end
end

# A virtual machine based on the naive_interpreter
class VirtualMachine super NaiveInterpreter

	# Perfect hashing and perfect numbering
	var ph: Perfecthashing = new Perfecthashing

	# Handles memory allocated in C
	var memory_manager: MemoryManager = new MemoryManager

	# The unique instance of the `MInit` value
	var initialization_value: Instance is noinit

	init
	do
		var init_type = new MInitType(mainmodule.model)
		initialization_value = new MutableInstance(init_type)
		super
	end

	# Runtime subtyping test
	redef fun is_subtype(sub, sup: MType): Bool
	do
		if sub == sup then return true

		var anchor = self.frame.arguments.first.mtype.as(MClassType)

		# `sub` or `sup` are formal or virtual types, resolve them to concrete types
		if sub isa MParameterType or sub isa MVirtualType then
			sub = sub.resolve_for(anchor.mclass.mclass_type, anchor, mainmodule, false)
		end
		if sup isa MParameterType or sup isa MVirtualType then
			sup = sup.resolve_for(anchor.mclass.mclass_type, anchor, mainmodule, false)
		end

		var sup_accept_null = false
		if sup isa MNullableType then
			sup_accept_null = true
			sup = sup.mtype
		else if sup isa MNullType then
			sup_accept_null = true
		end

		# Can `sub` provides null or not?
		# Thus we can match with `sup_accept_null`
		# Also discard the nullable marker if it exists
		if sub isa MNullableType then
			if not sup_accept_null then return false
			sub = sub.mtype
		else if sub isa MNullType then
			return sup_accept_null
		end
		# Now the case of direct null and nullable is over

		if sub isa MParameterType or sub isa MVirtualType then
			sub = sub.anchor_to(mainmodule, anchor)
			# Manage the second layer of null/nullable
			if sub isa MNullableType then
				if not sup_accept_null then return false
				sub = sub.mtype
			else if sub isa MNullType then
				return sup_accept_null
			end
		end

		assert sub isa MClassType

		# `sup` accepts only null
		if sup isa MNullType then return false

		assert sup isa MClassType

		# `sub` and `sup` can be discovered inside a Generic type during the subtyping test
		if not sup.mclass.loaded then create_class(sup.mclass)
		if not sub.mclass.loaded then create_class(sub.mclass)

		# For now, always use perfect hashing for subtyping test
		var super_id = sup.mclass.vtable.id
		var mask = sub.mclass.vtable.mask

		var res = inter_is_subtype_ph(super_id, mask, sub.mclass.vtable.internal_vtable)
		if res == false then return false
		# sub and sup can be generic types, each argument of generics has to be tested

		if not sup isa MGenericType then return true
		var sub2 = sub.supertype_to(mainmodule, anchor, sup.mclass)

		# Test each argument of a generic by recursive calls
		for i in [0..sup.mclass.arity[ do
			var sub_arg = sub2.arguments[i]
			var sup_arg = sup.arguments[i]
			var res2 = is_subtype(sub_arg, sup_arg)
			if res2 == false then return false
		end
		return true
	end

	# Subtyping test with perfect hashing
	# * `id` is the identifier of the target class
	# * `mask` is the perfect hashing mask of the receiver class
	# * `vtable` is the pointer to the virtual table of the receiver class
	fun inter_is_subtype_ph(id: Int, mask:Int, vtable: Pointer): Bool `{
		// hv is the position in hashtable
		int hv = id & mask;

		// Follow the pointer to somewhere in the vtable
		long unsigned int *offset = (long unsigned int*)(((long int *)vtable)[-hv]);

		// If the pointed value is corresponding to the identifier, the test is true, otherwise false
		return *offset == id;
	`}

	# Subtyping test with Cohen test (direct access)
	# * `id` is the identifier of the target class
	# * `mask` is the absolute position of the target identifier in the virtual table
	# * `vtable` is the pointer to the virtual table of the receiver class
	fun inter_is_subtype_sst(id: Int, position: Int, vtable: Pointer): Bool `{
		// Direct access to the position given in parameter
		int tableid = (long unsigned int)((long int *)vtable)[position];

		return id == tableid;
	`}

	# Redef init_instance to simulate the loading of a class
	redef fun init_instance(recv: Instance)
	do
		if not recv.mtype.as(MClassType).mclass.loaded then create_class(recv.mtype.as(MClassType).mclass)

		recv.vtable = recv.mtype.as(MClassType).mclass.vtable

		assert recv isa MutableInstance

		recv.internal_attributes = init_internal_attributes(initialization_value, recv.mtype.as(MClassType).mclass.mattributes.length)
		super
	end

	# Associate a `PrimitiveInstance` to its `VTable`
	redef fun init_instance_primitive(recv: Instance)
	do
		if not recv.mtype.as(MClassType).mclass.loaded then create_class(recv.mtype.as(MClassType).mclass)

		recv.vtable = recv.mtype.as(MClassType).mclass.vtable
	end

	# Initialize the internal representation of an object (its attribute values)
	# `init_instance` is the initial value of attributes
	private fun init_internal_attributes(init_instance: Instance, size: Int): Pointer
		import Array[Instance].length, Array[Instance].[] `{

		Instance* attributes = malloc(sizeof(Instance) * size);

		int i;
		for(i=0; i<size; i++)
			attributes[i] = init_instance;

		Instance_incr_ref(init_instance);
		return attributes;
	`}

	# Creates the runtime structures for this class
	fun create_class(mclass: MClass) do	mclass.make_vt(self)

	# Execute `mproperty` for a `args` (where `args[0]` is the receiver).
	redef fun send(mproperty: MMethod, args: Array[Instance]): nullable Instance
	do
		var recv = args.first
		var mtype = recv.mtype
		var ret = send_commons(mproperty, args, mtype)
		if ret != null then return ret

		var propdef = method_dispatch(mproperty, recv.vtable.as(not null), recv)

		return self.call(propdef, args)
	end

	# Method dispatch, for a given global method `mproperty`
	# returns the most specific local method in the class corresponding to `vtable`
	private fun method_dispatch(mproperty: MMethod, vtable: VTable, recv: Instance): MMethodDef
	do
		if mproperty.intro_mclassdef.mclass.positions_methods[recv.mtype.as(MClassType).mclass] != -1 then
			return method_dispatch_sst(vtable.internal_vtable, mproperty.absolute_offset)
		else
			return method_dispatch_ph(vtable.internal_vtable, vtable.mask,
				mproperty.intro_mclassdef.mclass.vtable.id, mproperty.offset)
		end
	end

	# Execute a method dispatch with perfect hashing and return the appropriate `MMethodDef`
	# * `vtable` Pointer to the internal virtual table of the class
	# * `mask` Perfect hashing mask of the receiver class
	# * `id` Identifier of the class which introduce the method
	# * `offset` Relative offset of the method from the beginning of the block
	fun method_dispatch_ph(vtable: Pointer, mask: Int, id: Int, offset: Int): MMethodDef `{
		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+2 is the position where methods are
		// Add the offset of property and get the method implementation
		MMethodDef propdef = (MMethodDef)*(pointer + 2 + offset);

		return propdef;
	`}

	# Execute a method dispatch with direct access and return the appropriate `MMethodDef`
	# * `vtable` Pointer to the internal virtual table of the class
	# * `absolute_offset` Absolute offset from the beginning of the virtual table
	fun method_dispatch_sst(vtable: Pointer, absolute_offset: Int): MMethodDef `{
		// pointer+2 is the position where methods are
		// Add the offset of property and get the method implementation
		MMethodDef propdef = (MMethodDef)((long int *)vtable)[absolute_offset];

		return propdef;
	`}

	# Return the value of the attribute `mproperty` for the object `recv`
	redef fun read_attribute(mproperty: MAttribute, recv: Instance): Instance
	do
		assert recv isa MutableInstance

		var i: Instance

		if mproperty.intro_mclassdef.mclass.positions_attributes[recv.mtype.as(MClassType).mclass] != -1 then
			# if this attribute class has an unique position for this receiver, then use direct access
			i = read_attribute_sst(recv.internal_attributes, mproperty.absolute_offset)
		else
			# Otherwise, read the attribute value with perfect hashing
			var id = mproperty.intro_mclassdef.mclass.vtable.id

			i = read_attribute_ph(recv.internal_attributes, recv.vtable.internal_vtable,
					recv.vtable.mask, id, mproperty.offset)
		end

		# If we get a `MInit` value, throw an error
		if i == initialization_value then
			fatal("Uninitialized attribute {mproperty.name}")
			abort
		end

		return i
	end

	# Return the attribute value in `instance` with a sequence of perfect_hashing
	# * `instance` is the attributes array of the receiver
	# * `vtable` is the pointer to the virtual table of the class (of the receiver)
	# * `mask` is the perfect hashing mask of the class
	# * `id` is the identifier of the class
	# * `offset` is the relative offset of this attribute
	fun read_attribute_ph(instance: Pointer, vtable: Pointer, mask: Int, id: Int, offset: Int): Instance `{
		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+1 is the position where the delta of the class is
		int absolute_offset = *(pointer + 1);

		Instance res = ((Instance *)instance)[absolute_offset + offset];

		return res;
	`}

	# Return the attribute value in `instance` with a direct access (SST)
	# * `instance` is the attributes array of the receiver
	# * `offset` is the absolute offset of this attribute
	fun read_attribute_sst(instance: Pointer, offset: Int): Instance `{
		/* We can make a direct access to the attribute value
		   because this attribute is always at the same position
		   for the class of this receiver */
		Instance res = ((Instance *)instance)[offset];

		return res;
	`}

	# Replace in `recv` the value of the attribute `mproperty` by `value`
	redef fun write_attribute(mproperty: MAttribute, recv: Instance, value: Instance)
	do
		assert recv isa MutableInstance

		# Replace the old value of mproperty in recv
		if mproperty.intro_mclassdef.mclass.positions_attributes[recv.mtype.as(MClassType).mclass] != -1 then
			# if this attribute class has an unique position for this receiver, then use direct access
			write_attribute_sst(recv.internal_attributes, mproperty.absolute_offset, value)
		else
			# Otherwise, use perfect hashing to replace the old value
			var id = mproperty.intro_mclassdef.mclass.vtable.id

			write_attribute_ph(recv.internal_attributes, recv.vtable.internal_vtable,
					recv.vtable.mask, id, mproperty.offset, value)
		end
	end

	# Replace the value of an attribute in an instance
	# * `instance` is the attributes array of the receiver
	# * `vtable` is the pointer to the virtual table of the class (of the receiver)
	# * `mask` is the perfect hashing mask of the class
	# * `id` is the identifier of the class
	# * `offset` is the relative offset of this attribute
	# * `value` is the new value for this attribute
	fun write_attribute_ph(instance: Pointer, vtable: Pointer, mask: Int, id: Int, offset: Int, value: Instance) `{
		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+1 is the position where the delta of the class is
		int absolute_offset = *(pointer + 1);

		((Instance *)instance)[absolute_offset + offset] = value;
		Instance_incr_ref(value);
	`}

	# Replace the value of an attribute in an instance with direct access
	# * `instance` is the attributes array of the receiver
	# * `offset` is the absolute offset of this attribute
	# * `value` is the new value for this attribute
	fun write_attribute_sst(instance: Pointer, offset: Int, value: Instance) `{
		// Direct access to the position with the absolute offset
		((Instance *)instance)[offset] = value;
		Instance_incr_ref(value);
	`}

	# Is the attribute `mproperty` initialized in the instance `recv`?
	redef fun isset_attribute(mproperty: MAttribute, recv: Instance): Bool
	do
		assert recv isa MutableInstance

		# Read the attribute value with internal perfect hashing read
		# because we do not want to throw an error if the value is `initialization_value`
		var id = mproperty.intro_mclassdef.mclass.vtable.id

		var i = read_attribute_ph(recv.internal_attributes, recv.vtable.internal_vtable,
					recv.vtable.mask, id, mproperty.offset)

		return i != initialization_value
	end
end

redef class MClass
	# A reference to the virtual table of this class
	var vtable: nullable VTable

	# True when the class is effectively loaded by the vm, false otherwise
	var loaded: Bool = false

	# Color for Cohen subtyping test : the absolute position of the id
	# of this class in virtual tables
	var color: Int

	# For each loaded subclass, keep the position of the group of attributes
	# introduced by self class in the object
	var positions_attributes: HashMap[MClass, Int] = new HashMap[MClass, Int]

	# For each loaded subclass, keep the position of the group of methods
	# introduced by self class in the vtable
	var positions_methods: HashMap[MClass, Int] = new HashMap[MClass, Int]

	# The `MAttribute` this class introduced
	var intro_mattributes = new Array[MAttribute]

	# The `MMethod` this class introduced
	var intro_mmethods = new Array[MMethod]

	# All `MAttribute` this class contains
	var mattributes = new Array[MAttribute]

	# All `MMethod` this class contains
	var mmethods = new Array[MMethod]

	# Allocates a VTable for this class and gives it an id
	private fun make_vt(v: VirtualMachine)
	do
		if loaded then return

		# `superclasses` contains the order of superclasses for virtual tables
		var superclasses = superclasses_ordering(v)
		superclasses.remove(self)

		# Make_vt for super-classes
		var ids = new Array[Int]
		var nb_methods = new Array[Int]
		var nb_attributes = new Array[Int]

		# Absolute offset of attribute from the beginning of the attributes table
		var offset_attributes = 0

		# Absolute offset of method from the beginning of the methods table,
		# is initialize to 3 because the first position is empty in the virtual table
		# and the second and third are respectively class id and delta
		var offset_methods = 3

		# The previous element in `superclasses`
		var previous_parent: nullable MClass = null
		if superclasses.length > 0 then	previous_parent = superclasses[0]
		for parent in superclasses do
			if not parent.loaded then parent.make_vt(v)

			# Get the number of introduced methods and attributes for this class
			var methods = parent.intro_mmethods.length
			var attributes = parent.intro_mattributes.length

			# Updates `mmethods` and `mattributes`
			mmethods.add_all(parent.intro_mmethods)
			mattributes.add_all(parent.intro_mattributes)

			ids.push(parent.vtable.id)
			nb_methods.push(methods)
			nb_attributes.push(attributes)

			# Update `positions_attributes` and `positions_methods` in `parent`.
			# If the position is invariant for this parent, store this position
			# else store a special value (-1)
			var pos_attr = -1
			var pos_meth = -1

			if previous_parent.as(not null).positions_attributes[parent] == offset_attributes then pos_attr = offset_attributes
			if previous_parent.as(not null).positions_methods[parent] == offset_methods then pos_meth = offset_methods

			parent.update_positions(pos_attr, pos_meth, self)

			offset_attributes += attributes
			offset_methods += methods
			offset_methods += 2 # Because each block starts with an id and the delta
		end

		# When all super-classes have their identifiers and vtables, allocate current one
		allocate_vtable(v, ids, nb_methods, nb_attributes, offset_attributes, offset_methods)
		loaded = true

		# Set the absolute position of the identifier of this class in the virtual table
		color = offset_methods - 2

		# The virtual table now needs to be filled with pointer to methods
		superclasses.add(self)
		for cl in superclasses do
			fill_vtable(v, vtable.as(not null), cl)
		end
	end

	# Allocate a single vtable
	# * `ids : Array of superclasses identifiers
	# * `nb_methods : Array which contain the number of introduced methods for each class in ids
	# * `nb_attributes : Array which contain the number of introduced attributes for each class in ids
	# * `offset_attributes : Offset from the beginning of the table of the group of attributes
	# * `offset_methods : Offset from the beginning of the table of the group of methods
	private fun allocate_vtable(v: VirtualMachine, ids: Array[Int], nb_methods: Array[Int], nb_attributes: Array[Int],
			offset_attributes: Int, offset_methods: Int)
	do
		vtable = new VTable
		var idc = new Array[Int]

		vtable.mask = v.ph.pnand(ids, 1, idc) - 1
		vtable.id = idc[0]
		vtable.classname = name

		# Add current id to Array of super-ids
		var ids_total = new Array[Int]
		ids_total.add_all(ids)
		ids_total.push(vtable.id)

		var nb_methods_total = new Array[Int]
		var nb_attributes_total = new Array[Int]

		var self_methods = 0
		var nb_introduced_attributes = 0

		# Fixing offsets for self attributes and methods
		var relative_offset_attr = 0
		var relative_offset_meth = 0

		# Update `intro_mmethods` and `intro_mattributes`
		# For each MClassdef this MClass has
		for classdef in mclassdefs do
			# For each property this MClassdef introduce
			for p in classdef.intro_mproperties do
				# Collect properties and fixing offsets
				if p isa MMethod then
					self_methods += 1
					p.offset = relative_offset_meth
					p.absolute_offset = offset_methods + relative_offset_meth
					relative_offset_meth += 1

					intro_mmethods.add(p)
				end
				if p isa MAttribute then
					nb_introduced_attributes += 1
					p.offset = relative_offset_attr
					p.absolute_offset = offset_attributes + relative_offset_attr
					relative_offset_attr += 1

					intro_mattributes.add(p)
				end
			end
		end

		# Updates caches with introduced attributes of `self` class
		mattributes.add_all(intro_mattributes)
		mmethods.add_all(intro_mmethods)

		nb_methods_total.add_all(nb_methods)
		nb_methods_total.push(self_methods)

		nb_attributes_total.add_all(nb_attributes)
		nb_attributes_total.push(nb_introduced_attributes)

		# Save the offsets of self class
		update_positions(offset_attributes, offset_methods, self)

		# Since we have the number of attributes for each class, calculate the delta
		var deltas = calculate_delta(nb_attributes_total)
		vtable.internal_vtable = v.memory_manager.init_vtable(ids_total, nb_methods_total, deltas, vtable.mask)
	end

	# Fill the vtable with methods of `self` class
	# * `v` : Current instance of the VirtualMachine
	# * `table` : the table of self class, will be filled with its methods
	private fun fill_vtable(v:VirtualMachine, table: VTable, cl: MClass)
	do
		var methods = new Array[MMethodDef]
		for m in cl.intro_mmethods do
			# `propdef` is the most specific implementation for this MMethod
			var propdef = m.lookup_first_definition(v.mainmodule, self.intro.bound_mtype)
			methods.push(propdef)
		end

		# Call a method in C to put propdefs of self methods in the vtables
		v.memory_manager.put_methods(vtable.internal_vtable, vtable.mask, cl.vtable.id, methods)
	end

	# Computes delta for each class
	# A delta represents the offset for this group of attributes in the object
	# *`nb_attributes` : number of attributes for each class (classes are linearized from Object to current)
	# * return deltas for each class
	private fun calculate_delta(nb_attributes: Array[Int]): Array[Int]
	do
		var deltas = new Array[Int]

		var total = 0
		for nb in nb_attributes do
			deltas.push(total)
			total += nb
		end

		return deltas
	end

	# Order superclasses of self
	# Return the order of superclasses in runtime structures of this class
	private fun superclasses_ordering(v: VirtualMachine): Array[MClass]
	do
		var superclasses = new Array[MClass]

		# Add all superclasses of `self`
		superclasses.add_all(self.in_hierarchy(v.mainmodule).greaters)

		var res = new Array[MClass]
		if superclasses.length > 1 then
			# Starting at self
			var ordering = self.dfs(v, res)

			return ordering
		else
			# There is no super-class, self is Object
			return superclasses
		end
	end

	# A kind of Depth-First-Search for superclasses ordering
	# *`v` : the current executed instance of VirtualMachine
	# * `res` : Result Array, ie current superclasses ordering
	private fun dfs(v: VirtualMachine, res: Array[MClass]): Array[MClass]
	do
		# Add this class at the beginning
		res.insert(self, 0)

		var direct_parents = self.in_hierarchy(v.mainmodule).direct_greaters.to_a

		if direct_parents.length > 1 then
			# Prefix represents the class which has the most properties
			# we try to choose it in first to reduce the number of potential recompilations
			var prefix = null
			var max = -1
			for cl in direct_parents do
				# If we never have visited this class
				if not res.has(cl) then
					var properties_length = cl.mmethods.length + cl.mattributes.length
					if properties_length > max then
						max = properties_length
						prefix = cl
					end
				end
			end

			if prefix != null then
				# Add the prefix class ordering at the beginning of our sequence
				var prefix_res = new Array[MClass]
				prefix_res = prefix.dfs(v, prefix_res)

				# Then we recurse on other classes
				for cl in direct_parents do
					if cl != prefix then
						res = new Array[MClass]
						res = cl.dfs(v, res)

						for cl_res in res do
							if not prefix_res.has(cl_res) then prefix_res.push(cl_res)
						end
					end
				end
				res = prefix_res
			end

			res.push(self)
		else
			if direct_parents.length > 0 then
				res = direct_parents.first.dfs(v, res)
			end
		end

		if not res.has(self) then res.push(self)

		return res
	end

	# Update positions of the class `cl`
	# * `attributes_offset`: absolute offset of introduced attributes
	# * `methods_offset`: absolute offset of introduced methods
	private fun update_positions(attributes_offsets: Int, methods_offset:Int, cl: MClass)
	do
		positions_attributes[cl] = attributes_offsets
		positions_methods[cl] = methods_offset
	end
end

redef class MAttribute
	# Relative offset of this attribute in the runtime instance
	# (beginning of the block of its introducing class)
	var offset: Int

	# Absolute offset of this attribute in the runtime instance (beginning of the attribute table)
	var absolute_offset: Int
end

redef class MMethod
	# Relative offset of this method in the virtual table (from the beginning of the block)
	var offset: Int

	# Absolute offset of this method in the virtual table (from the beginning of the vtable)
	var absolute_offset: Int
end

# Redef MutableInstance to improve implementation of attributes in objects
redef class MutableInstance

	# C-array to store pointers to attributes of this Object
	var internal_attributes: Pointer
end

# Redef to associate an `Instance` to its `VTable`
redef class Instance

	# Associate a runtime instance to its virtual table which contains methods, types etc.
	var vtable: nullable VTable
end

# Is the type of the initial value inside attributes
class MInitType
	super MType

	redef var model: Model

	redef fun to_s do return "InitType"
	redef fun as_nullable do return self
	redef fun need_anchor do return false
	redef fun resolve_for(mtype, anchor, mmodule, cleanup_virtual) do return self
	redef fun can_resolve_for(mtype, anchor, mmodule) do return true

	redef fun collect_mclassdefs(mmodule) do return new HashSet[MClassDef]

	redef fun collect_mclasses(mmodule) do return new HashSet[MClass]

	redef fun collect_mtypes(mmodule) do return new HashSet[MClassType]
end

# A VTable contains the virtual method table for the dispatch
# and informations to perform subtyping tests
class VTable
	# The mask to perform perfect hashing
	var mask: Int is noinit

	# Unique identifier given by perfect hashing
	var id: Int is noinit

	# Pointer to the c-allocated area, represents the virtual table
	var internal_vtable: Pointer is noinit

	# The short classname of this class
	var classname: String is noinit
end

# Handle memory, used for allocate virtual table and associated structures
class MemoryManager

	# Allocate and fill a virtual table
	fun init_vtable(ids: Array[Int], nb_methods: Array[Int], nb_attributes: Array[Int], mask: Int): Pointer
	do
		# Allocate in C current virtual table
		var res = intern_init_vtable(ids, nb_methods, nb_attributes, mask)

		return res
	end

	# Construct virtual tables with a bi-dimensional layout
	private fun intern_init_vtable(ids: Array[Int], nb_methods: Array[Int], deltas: Array[Int], mask: Int): Pointer
		import Array[Int].length, Array[Int].[] `{

		// Allocate and fill current virtual table
		int i;
		int total_size = 0; // total size of this virtual table
		int nb_classes = Array_of_Int_length(nb_methods);
		for(i = 0; i<nb_classes; i++) {
			/* - One for each method of this class
			*  - One for the delta (offset of this group of attributes in objects)
			*  - One for the id
			*/
			total_size += Array_of_Int__index(nb_methods, i);
			total_size += 2;
		}

		// Add the size of the perfect hashtable (mask +1)
		// Add one because we start to fill the vtable at position 1 (0 is the init position)
		total_size += mask+2;
		long unsigned int* vtable = malloc(sizeof(long unsigned int)*total_size);

		// Initialisation to the first position of the virtual table (ie : Object)
		long unsigned int *init = vtable + mask + 2;
		for(i=0; i<total_size; i++)
			vtable[i] = (long unsigned int)init;

		// Set the virtual table to its position 0
		// ie: after the hashtable
		vtable = vtable + mask + 1;

		int current_size = 1;
		for(i = 0; i < nb_classes; i++) {
			/*
				vtable[hv] contains a pointer to the group of introduced methods
				For each superclasse we have in virtual table :
					(id | delta | introduced methods)
			*/
			int hv = mask & Array_of_Int__index(ids, i);

			vtable[current_size] = Array_of_Int__index(ids, i);
			vtable[current_size + 1] = Array_of_Int__index(deltas, i);
			vtable[-hv] = (long unsigned int)&(vtable[current_size]);

			current_size += 2;
			current_size += Array_of_Int__index(nb_methods, i);
		}

		return vtable;
	`}

	# Put implementation of methods of a class in `vtable`
	# * `vtable` : Pointer to the C-virtual table
	# * `mask` : perfect-hashing mask of the class corresponding to the vtable
	# * `id` : id of the target class
	# * `methods` : array of MMethodDef of the target class
	fun put_methods(vtable: Pointer, mask: Int, id: Int, methods: Array[MMethodDef])
		import Array[MMethodDef].length, Array[MMethodDef].[] `{

		// Get the area to fill with methods by a sequence of perfect hashing
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long unsigned int *)vtable)[-hv]);

		// pointer+2 is the beginning of the area for methods implementation
		int length = Array_of_MMethodDef_length(methods);
		long unsigned int *area = (pointer + 2);
		int i;

		for(i=0; i<length; i++)
		{
			MMethodDef method = Array_of_MMethodDef__index(methods, i);
			area[i] = (long unsigned int)method;
			MMethodDef_incr_ref(method);
		}
	`}
end
