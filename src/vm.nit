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
module vm

intrude import naive_interpreter
import model_utils
import perfect_hashing

redef class ModelBuilder
	redef fun run_naive_interpreter(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** NITVM STARTING ***", 1)

		var interpreter = new VirtualMachine(self, mainmodule, arguments)
		init_naive_interpreter(interpreter, mainmodule)

		var time1 = get_time
		self.toolcontext.info("*** NITVM STOPPING : {time1-time0} ***", 2)
	end
end

# A virtual machine based on the naive_interpreter
class VirtualMachine super NaiveInterpreter

	# Perfect hashing and perfect numbering
	var ph: Perfecthashing = new Perfecthashing

	# Handles memory and garbage collection
	var memory_manager: MemoryManager = new MemoryManager

	# Subtyping test for the virtual machine
	redef fun is_subtype(sub, sup: MType): Bool
	do
		var anchor = self.frame.arguments.first.mtype.as(MClassType)
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

		# An unfixed formal type can only accept itself
		if sup isa MParameterType or sup isa MVirtualType then
			return sub == sup
		end
		
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

		# Create the sup vtable if not create
		if not sup.mclass.loaded then create_class(sup.mclass)

		# Sub can be discovered inside a Generic type during the subtyping test
		if not sub.mclass.loaded then create_class(sub.mclass)

		if anchor == null then anchor = sub
		if sup isa MGenericType then
			var sub2 = sub.supertype_to(mainmodule, anchor, sup.mclass)
			assert sub2.mclass == sup.mclass

			for i in [0..sup.mclass.arity[ do
				var sub_arg = sub2.arguments[i]
				var sup_arg = sup.arguments[i]
				var res = is_subtype(sub_arg, sup_arg)

				if res == false then return false
			end
			return true
		end

		var super_id = sup.mclass.vtable.id
		var mask = sub.mclass.vtable.mask

		return inter_is_subtype(super_id, mask, sub.mclass.vtable.internal_vtable)
	end

	# Subtyping test with perfect hashing
	private fun inter_is_subtype(id: Int, mask:Int, vtable: Pointer): Bool `{
		// hv is the position in hashtable
		int hv = id & mask;

		// Follow the pointer to somewhere in the vtable
		long unsigned int *offset = (long unsigned int*)(((long int *)vtable)[-hv]);
		
		// If the pointed value is corresponding to the identifier, the test is true, otherwise false
		return *offset == id;
	`}
	
	# Redef init_instance to simulate the loading of a class
	redef fun init_instance(recv: Instance)
	do
		if not recv.mtype.as(MClassType).mclass.loaded then create_class(recv.mtype.as(MClassType).mclass)

		recv.vtable = recv.mtype.as(MClassType).mclass.vtable

		assert(recv isa MutableInstance)
 
		recv.internal_attributes = init_internal_attributes(null_instance, recv.mtype.as(MClassType).mclass.cached_attributes.length)

		super
	end
		
	# Initialize the internal representation of an object (its attribute values)
	private fun init_internal_attributes(null_instance: Instance, size: Int): Pointer
		import Array[Instance].length, Array[Instance].[] `{
		
		Instance* attributes = malloc(sizeof(Instance) * size);

		int i;
		for(i=0; i<size; i++)
			attributes[i] = null_instance;

		Instance_incr_ref(null_instance);
		return attributes;
	`}

	# Creates the runtime structures for this class
	fun create_class(mclass: MClass) do	mclass.make_vt(self)

	# Return the value of the attribute `mproperty for the object `recv
	redef fun read_attribute(mproperty: MAttribute, recv: Instance): Instance
	do
		assert recv isa MutableInstance

		# Read the attribute value with perfect hashing
		var id = mproperty.intro_mclassdef.mclass.vtable.id
		
		var i = read_attribute_ph(recv.internal_attributes, recv.vtable.internal_vtable,
					recv.vtable.mask, id, mproperty.offset)
		
		return i
	end

	# Return the attribute value in `instance with a sequence of perfect_hashing
	#     `instance is the attributes array of the receiver
	#     `vtable is the pointer to the virtual table of the class (of the receiver)
	#     `mask is the perfect hashing mask of the class
	#     `id is the identifier of the class
	#     `offset is the relative offset of this attribute
	private fun read_attribute_ph(instance: Pointer, vtable: Pointer, mask: Int, id: Int, offset: Int): Instance `{
		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);
		
		// pointer+1 is the position where the delta of the class is
		int absolute_offset = *(pointer + 1);

		Instance res = ((Instance *)instance)[absolute_offset + offset];
		
		return res;
	`}

	# Replace in `recv the value of the attribute `mproperty by `value
	redef fun write_attribute(mproperty: MAttribute, recv: Instance, value: Instance)
	do
		assert recv isa MutableInstance

		var id = mproperty.intro_mclassdef.mclass.vtable.id
		
		# Replace the old value of mproperty in recv
		write_attribute_ph(recv.internal_attributes, recv.vtable.internal_vtable,
					recv.vtable.mask, id, mproperty.offset, value)
	end

	# Replace the value of an attribute in an instance
	#     `instance is the attributes array of the receiver
	#     `vtable is the pointer to the virtual table of the class (of the receiver)
	#     `mask is the perfect hashing mask of the class
	#     `id is the identifier of the class
	#     `offset is the relative offset of this attribute
	# 	  `value is the new value for this attribute
	private fun write_attribute_ph(instance: Pointer, vtable: Pointer, mask: Int, id: Int, offset: Int, value: Instance) `{
		// Perfect hashing position
		int hv = mask & id;
		long unsigned int *pointer = (long unsigned int*)(((long int *)vtable)[-hv]);

		// pointer+1 is the position where the delta of the class is
		int absolute_offset = *(pointer + 1);

		((Instance *)instance)[absolute_offset + offset] = value;
		Instance_incr_ref(value);
	`}
end

redef class MClass
	# A reference to the virtual table of this class
	var vtable: nullable VTable

	# True when the class is effectively loaded by the vm, false otherwise
	var loaded: Bool = false

	# Cached attributes for faster instanciations of this class
	var cached_attributes: Array[MAttribute] = new Array[MAttribute]

	# Allocates a VTable for this class and gives it an id
	private fun make_vt(v: VirtualMachine)
	do
		if loaded then return

		# Superclasses contains all superclasses except self
		var superclasses = new Array[MClass]
		superclasses.add_all(ancestors)
		superclasses.remove(self)
		v.mainmodule.linearize_mclasses(superclasses)

		# Make_vt for super-classes
		var ids = new Array[Int]
		var nb_methods = new Array[Int]
		var nb_attributes = new Array[Int]

		for parent in superclasses do
			if parent.vtable == null then parent.make_vt(v)
			
			# Get the number of introduced methods and attributes for this class
			var methods = 0
			var attributes = 0

			for p in parent.intro_mproperties(none_visibility) do
				if p isa MMethod then methods += 1
				if p isa MAttribute then
					attributes += 1
				end
			end
			
			ids.push(parent.vtable.id)
			nb_methods.push(methods)
			nb_attributes.push(attributes)
		end
		
		# When all super-classes have their identifiers and vtables, allocate current one
		allocate_vtable(v, ids, nb_methods, nb_attributes)
		loaded = true
		# The virtual table now needs to be filled with pointer to methods
	end

	# Allocate a single vtable
	# 	ids : Array of superclasses identifiers
	# 	nb_methods : Array which contain the number of introducted methods for each class in ids
	# 	nb_attributes : Array which contain the number of introducted attributes for each class in ids
	private fun allocate_vtable(v: VirtualMachine, ids: Array[Int], nb_methods: Array[Int], nb_attributes: Array[Int])
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
		var self_attributes = 0
		
		# For self attributes, fixing offsets
		var relative_offset = 0
		for p in intro_mproperties(none_visibility) do
			if p isa MMethod then self_methods += 1
			if p isa MAttribute then 
				self_attributes += 1
				p.offset = relative_offset
				relative_offset += 1
				cached_attributes.push(p)
			end
		end

		nb_methods_total.add_all(nb_methods)
		nb_methods_total.push(self_methods)

		nb_attributes_total.add_all(nb_attributes)
		nb_attributes_total.push(self_attributes)

		# Since we have the number of attributes for each class, calculate the delta 
		var d = calculate_delta(nb_attributes_total)
		vtable.internal_vtable = v.memory_manager.init_vtable(ids_total, nb_methods_total, d, vtable.mask)
	end

	# Computes delta for each class
	# A delta represents the offset for this group of attributes in the object
	#    nb_attributes : number of attributes for each class (classes are linearized from Object to current)
	#    return deltas for each class
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
end

redef class MAttribute
	# Represents the relative offset of this attribute in the runtime instance
	var offset: Int
end

# Redef MutableInstance to improve implementation of attributes in objects
redef class MutableInstance
	
	# C-array to store pointers to attributes of this Object
	var internal_attributes: Pointer
end

# A VTable contains the virtual method table for the dispatch
# and informations to perform subtyping tests
class VTable
	# The mask to perform perfect hashing
	var mask: Int

	# Unique identifier given by perfect hashing
	var id: Int

	# Pointer to the c-allocated area, represents the virtual table
	var internal_vtable: Pointer

	# The short classname of this class
	var classname: String

	init do end
end

redef class Instance
	var vtable: nullable VTable
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
				vtable[hv] contains a pointer to the group of introducted methods
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
end
