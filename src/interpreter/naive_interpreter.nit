# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Interpretation of a Nit program directly on the AST
module naive_interpreter

import literal
import semantize
private import parser::tables
import mixin
private import model::serialize_model
private import frontend::explain_assert_api

redef class ToolContext
	# --discover-call-trace
	var opt_discover_call_trace = new OptionBool("Trace calls of the first invocation of methods", "--discover-call-trace")

	redef init
	do
		super
		self.option_context.add_option(self.opt_discover_call_trace)
	end
end

redef class ModelBuilder
	# Execute the program from the entry point (`Sys::main`) of the `mainmodule`
	# `arguments` are the command-line arguments in order
	# REQUIRE that:
	#   1. the AST is fully loaded.
	#   2. the model is fully built.
	#   3. the instructions are fully analysed.
	fun run_naive_interpreter(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new NaiveInterpreter(self, mainmodule, arguments)
		interpreter.start(mainmodule)

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)
	end
end

# The visitor that interprets the Nit Program by walking on the AST
class NaiveInterpreter
	# The modelbuilder that know the AST and its associations with the model
	var modelbuilder: ModelBuilder

	# The main module of the program (used to lookup method)
	var mainmodule: MModule is writable

	# The command line arguments of the interpreted program
	# arguments.first is the program name
	# arguments[1] is the first argument
	var arguments: Array[String]

	# The main Sys instance
	var mainobj: nullable Instance is noinit

	# Name of all supported functional names
	var routine_types: Set[String] = new HashSet[String]

	init
	do
		if mainmodule.model.get_mclasses_by_name("Bool") != null then
			self.true_instance = new PrimitiveInstance[Bool](mainmodule.bool_type, true)
			init_instance_primitive(self.true_instance)
			self.false_instance = new PrimitiveInstance[Bool](mainmodule.bool_type, false)
			init_instance_primitive(self.false_instance)
		end
		self.null_instance = new PrimitiveInstance[nullable Object](mainmodule.model.null_type, null)

		routine_types.add("RoutineRef")
		for name in ["Proc", "Fun", "ProcRef", "FunRef"] do
			# 20 is a magic number = upper limit of the arity of each functional class.
			# i.e. Proc0, Proc1, ... Proc19
			for i  in [0..20[ do
				routine_types.add("{name}{i}")
			end
		end
	end

	# Starts the interpreter on the main module of a program
	fun start(mainmodule: MModule) do
		var interpreter = self
		var sys_type = mainmodule.sys_type
		if sys_type == null then return # no class Sys
		var mainobj = new MutableInstance(sys_type)
		interpreter.mainobj = mainobj
		interpreter.init_instance(mainobj)
		var initprop = mainmodule.try_get_primitive_method("init", sys_type.mclass)
		if initprop != null then
			interpreter.send(initprop, [mainobj])
		end
		var mainprop = mainmodule.try_get_primitive_method("run", sys_type.mclass) or else
			mainmodule.try_get_primitive_method("main", sys_type.mclass)
		if mainprop != null then
			interpreter.send(mainprop, [mainobj])
		end
	end

	# Subtype test in the context of the mainmodule
	fun is_subtype(sub, sup: MType): Bool
	do
		return sub.is_subtype(self.mainmodule, current_receiver_class, sup)
	end

	# Get a primitive method in the context of the main module
	fun force_get_primitive_method(name: String, recv: MType): MMethod
	do
		assert recv isa MClassType
		return self.modelbuilder.force_get_primitive_method(current_node, name, recv.mclass, self.mainmodule)
	end

	# Is a return, a break or a continue executed?
	# Set this mark to skip the evaluation until a labeled statement catch it with `is_escape`
	var escapemark: nullable EscapeMark = null

	# The count of `catch` blocs that have been encountered and can catch an abort
	var catch_count = 0 is writable

	# The last error thrown on abort/runtime error where catch_count > 0
	var last_error: nullable FatalError = null

	# Is a return or a break or a continue executed?
	# Use this function to know if you must skip the evaluation of statements
	fun is_escaping: Bool do return escapemark != null

	# The value associated with the current return/break/continue, if any.
	# Set the value when you set a escapemark.
	# Read the value when you catch a mark or reach the end of a method
	var escapevalue: nullable Instance = null

	# If there is a break/continue and is associated with `escapemark`, then return true and clear the mark.
	# If there is no break/continue or if `escapemark` is null then return false.
	# Use this function to catch a potential break/continue.
	fun is_escape(escapemark: nullable EscapeMark): Bool
	do
		if escapemark != null and self.escapemark == escapemark then
			self.escapemark = null
			return true
		else
			return false
		end
	end

	# Evaluate `n` as an expression in the current context.
	# Return the value of the expression.
	# If `n` cannot be evaluated, then aborts.
	fun expr(n: AExpr): nullable Instance
	do
		var frame = self.frame
		var old = frame.current_node
		frame.current_node = n
		#n.debug("IN Execute expr")
		var i = n.expr(self)
		if i == null and not self.is_escaping then
			n.debug("inconsitance: no value and not escaping.")
		end
		var implicit_cast_to = n.implicit_cast_to
		if i != null and implicit_cast_to != null then
			var mtype = self.unanchor_type(implicit_cast_to)
			if not self.is_subtype(i.mtype, mtype) then n.fatal(self, "Cast failed. Expected `{implicit_cast_to}`, got `{i.mtype}`")
		end

		#n.debug("OUT Execute expr: value is {i}")
		#if not is_subtype(i.mtype, n.mtype.as(not null)) then n.debug("Expected {n.mtype.as(not null)} got {i}")
		frame.current_node = old
		return i
	end

	# Evaluate `n` as a statement in the current context.
	# Do nothing if `n` is null.
	# If `n` cannot be evaluated, then aborts.
	fun stmt(n: nullable AExpr)
	do
		if n == null then return

		if n.comprehension != null then
			var comprehension = frame.comprehension.as(not null)
			var i = expr(n)
			if i != null then comprehension.add(i)
			return
		end

		var frame = self.frame
		var old = frame.current_node
		frame.current_node = n
		n.stmt(self)
		frame.current_node = old
	end

	# Map used to store values of nodes that must be evaluated once in the system (`AOnceExpr`)
	var onces: Map[ANode, Instance] = new HashMap[ANode, Instance]

	# Return the boolean instance associated with `val`.
	fun bool_instance(val: Bool): Instance
	do
		if val then return self.true_instance else return self.false_instance
	end

	# Return the integer instance associated with `val`.
	fun int_instance(val: Int): Instance
	do
		var t = mainmodule.int_type
		var instance = new PrimitiveInstance[Int](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the byte instance associated with `val`.
	fun byte_instance(val: Byte): Instance
	do
		var t = mainmodule.byte_type
		var instance = new PrimitiveInstance[Byte](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the int8 instance associated with `val`.
	fun int8_instance(val: Int8): Instance
	do
		var t = mainmodule.int8_type
		var instance = new PrimitiveInstance[Int8](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the int16 instance associated with `val`.
	fun int16_instance(val: Int16): Instance
	do
		var t = mainmodule.int16_type
		var instance = new PrimitiveInstance[Int16](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the uint16 instance associated with `val`.
	fun uint16_instance(val: UInt16): Instance
	do
		var t = mainmodule.uint16_type
		var instance = new PrimitiveInstance[UInt16](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the int32 instance associated with `val`.
	fun int32_instance(val: Int32): Instance
	do
		var t = mainmodule.int32_type
		var instance = new PrimitiveInstance[Int32](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the uint32 instance associated with `val`.
	fun uint32_instance(val: UInt32): Instance
	do
		var t = mainmodule.uint32_type
		var instance = new PrimitiveInstance[UInt32](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the char instance associated with `val`.
	fun char_instance(val: Char): Instance
	do
		var t = mainmodule.char_type
		var instance = new PrimitiveInstance[Char](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return the float instance associated with `val`.
	fun float_instance(val: Float): Instance
	do
		var t = mainmodule.float_type
		var instance = new PrimitiveInstance[Float](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# The unique instance of the `true` value.
	var true_instance: Instance is noinit

	# The unique instance of the `false` value.
	var false_instance: Instance is noinit

	# The unique instance of the `null` value.
	var null_instance: Instance is noinit

	# Return a new array made of `values`.
	# The dynamic type of the result is Array[elttype].
	fun array_instance(values: Array[Instance], elttype: MType): Instance
	do
		assert not elttype.need_anchor
		var nat = new PrimitiveInstance[Array[Instance]](mainmodule.native_array_type(elttype), values)
		init_instance_primitive(nat)
		var mtype = mainmodule.array_type(elttype)
		var res = new MutableInstance(mtype)
		self.init_instance(res)
		self.send(self.force_get_primitive_method("with_native", mtype), [res, nat, self.int_instance(values.length)])
		return res
	end

	# Return a instance associated to a primitive class
	# Current primitive classes are `Int`, `Bool`, and `String`
	fun value_instance(object: Object): Instance
	do
		if object isa Int then
			return int_instance(object)
		else if object isa Bool then
			return bool_instance(object)
		else if object isa String then
			return string_instance(object)
		else
			abort
		end
	end

	# Return a new C string initialized with `txt`
	fun c_string_instance(txt: String): Instance
	do
		var instance = c_string_instance_len(txt.byte_length+1)
		var val = instance.val
		val[txt.byte_length] = 0
		txt.to_cstring.copy_to(val, txt.byte_length, 0, 0)

		return instance
	end

	# Return a new C string initialized with `txt`
	fun c_string_instance_from_ns(txt: CString, len: Int): Instance
	do
		var instance = c_string_instance_len(len)
		var val = instance.val
		txt.copy_to(val, len, 0, 0)

		return instance
	end

	# Return a new C string instance sharing the same data space as `txt`
	fun c_string_instance_fast_cstr(txt: CString, from: Int): Instance
	do
		var ncstr = txt.fast_cstring(from)
		var t = mainmodule.c_string_type

		var instance = new PrimitiveInstance[CString](t, ncstr)
		init_instance_primitive(instance)

		return instance
	end

	# Return a new C string initialized of `length`
	fun c_string_instance_len(length: Int): PrimitiveInstance[CString]
	do
		var val = new CString(length)

		var t = mainmodule.c_string_type
		var instance = new PrimitiveInstance[CString](t, val)
		init_instance_primitive(instance)
		return instance
	end

	# Return a new String instance for `txt`
	fun string_instance(txt: String): Instance
	do
		var nat = c_string_instance(txt)
		var res = self.send(self.force_get_primitive_method("to_s_unsafe", nat.mtype), [nat, self.int_instance(txt.byte_length), self.int_instance(txt.length), self.false_instance, self.false_instance])
		assert res != null
		return res
	end

	# The virtual type of the frames used in the execution engine
	type FRAME: Frame

	# The current frame used to store local variables of the current method executed
	fun frame: FRAME do return frames.first

	# The stack of all frames. The first one is the current one.
	var frames = new List[FRAME]

	# Return a stack trace. One line per function
	fun stack_trace: String
	do
		var b = new FlatBuffer
		b.append(",---- Stack trace -- - -  -\n")
		for f in frames do
			b.append("| {f.mpropdef} ({f.current_node.location})\n")
		end
		b.append("`------------------- - -  -")
		return b.to_s
	end

	# The current node, used to print errors, debug and stack-traces
	fun current_node: nullable ANode
	do
		if frames.is_empty then return null
		return frames.first.current_node
	end

	# The dynamic type of the current `self`
	fun current_receiver_class: MClassType
	do
		return frames.first.arguments.first.mtype.as(MClassType)
	end

	# Initialize the environment for a call and return a new Frame
	# *`node` The AST node
	# *`mpropdef` The corresponding mpropdef
	# *`args` Arguments of the call
	fun new_frame(node: ANode, mpropdef: MPropDef, args: Array[Instance]): FRAME
	do
		return new InterpreterFrame(node, mpropdef, args)
	end

	# Exit the program with a message
	fun fatal(message: String)
	do
		var node = current_node
		if node == null then
			print message
		else
			node.fatal(self, message)
		end
		exit(1)
	end

	# Debug on the current node
	fun debug(message: String)
	do
		var node = current_node
		if node == null then
			print message
		else
			node.debug(message)
		end
	end

	# Retrieve the value of the variable in the current frame
	fun read_variable(v: Variable): Instance
	do
		var f = frames.first.as(InterpreterFrame)
		return f.map[v]
	end

	# Assign the value of the variable in the current frame
	fun write_variable(v: Variable, value: Instance)
	do
		var f = frames.first.as(InterpreterFrame)
		f.map[v] = value
	end

	# Store known methods, used to trace methods as they are reached
	var discover_call_trace: Set[MMethodDef] = new HashSet[MMethodDef]

	# Consumes an iterator of expressions and tries to map each element to
	# its corresponding Instance.
	#
	# If any AExprs doesn't resolve to an Instance, then it returns null.
	# Otherwise return an array of instances
	fun aexprs_to_instances(aexprs: Iterator[AExpr]): nullable Array[Instance]
	do
		var accumulator = new Array[Instance]
		for aexpr in aexprs do
			var instance = expr(aexpr)
			if instance == null then return null
			accumulator.push(instance)
		end
		return accumulator
	end

	# Evaluate `args` as expressions in the call of `mpropdef` on `recv`.
	# This method is used to manage varargs in signatures and returns the real array
	# of instances to use in the call.
	# Return `null` if one of the evaluation of the arguments return null.
	fun varargize(mpropdef: MMethodDef, map: nullable SignatureMap, recv: Instance, args: SequenceRead[AExpr]): nullable Array[Instance]
	do
		var msignature = mpropdef.msignature.as(not null)
		var res = new Array[Instance]
		res.add(recv)

		if msignature.arity == 0 then return res

		if map == null then
			assert args.length == msignature.arity else debug("Expected {msignature.arity} args, got {args.length}")
			var rest_args = aexprs_to_instances(args.iterator)
			if rest_args == null then return null
			res.append(rest_args)
			return res
		end

		# Eval in order of arguments, not parameters
		var exprs = aexprs_to_instances(args.iterator)
		if exprs == null then return null

		# Fill `res` with the result of the evaluation according to the mapping
		for i in [0..msignature.arity[ do
			var param = msignature.mparameters[i]
			var j = map.map.get_or_null(i)
			if j == null then
				# default value
				res.add(null_instance)
				continue
			end
			if param.is_vararg and args[i].vararg_decl > 0 then
				var vararg = exprs.sub(j, args[i].vararg_decl)
				var elttype = param.mtype.anchor_to(self.mainmodule, recv.mtype.as(MClassType))
				var arg = self.array_instance(vararg, elttype)
				res.add(arg)
				continue
			end
			res.add exprs[j]
		end
		return res
	end

	# Execute `mpropdef` for a `args` (where `args[0]` is the receiver).
	# Return a value if `mpropdef` is a function, or null if it is a procedure.
	# The call is direct/static. There is no message-sending/late-binding.
	fun call(mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		if self.modelbuilder.toolcontext.opt_discover_call_trace.value and not self.discover_call_trace.has(mpropdef) then
			self.discover_call_trace.add mpropdef
			self.debug("Discovered {mpropdef}")
		end
		assert args.length == mpropdef.msignature.arity + 1 else debug("Invalid arity for {mpropdef}. {args.length} arguments given.")

		# Look for the AST node that implements the property
		var val = mpropdef.constant_value

		var node = modelbuilder.mpropdef2node(mpropdef)
		if mpropdef.is_abstract then
			if node != null then
				self.frames.unshift new_frame(node, mpropdef, args)
			end
			fatal("Abstract method `{mpropdef.mproperty.name}` called on `{args.first.mtype}`")
			abort
		end

		if node isa APropdef then
			self.parameter_check(node, mpropdef, args)
			return node.call(self, mpropdef, args)
		else if node isa AClassdef then
			self.parameter_check(node, mpropdef, args)
			return node.call(self, mpropdef, args)
		else if node != null then
			fatal("Fatal Error: method {mpropdef} associated to unexpected AST node {node.location}")
			abort
		else if val != null then
			return value_instance(val)
		else
			fatal("Fatal Error: method {mpropdef} not found in the AST")
			abort
		end
	end

	# Execute type checks of covariant parameters
	fun parameter_check(node: ANode, mpropdef: MMethodDef, args: Array[Instance])
	do
		var msignature = mpropdef.msignature.as(not null)
		for i in [0..msignature.arity[ do
			var mp = msignature.mparameters[i]

			# skip test for vararg since the array is instantiated with the correct polymorphic type
			if mp.is_vararg then continue

			# skip if the cast is not required
			var origmtype =  mpropdef.mproperty.intro.msignature.mparameters[i].mtype
			if not origmtype.need_anchor then continue

			#print "{mpropdef}: {mpropdef.mproperty.intro.msignature.mparameters[i]}"

			# get the parameter type
			var mtype = mp.mtype
			var anchor = args.first.mtype.as(MClassType)
			var amtype = mtype.anchor_to(self.mainmodule, anchor)
			if not args[i+1].mtype.is_subtype(self.mainmodule, anchor, amtype) then
				node.fatal(self, "Cast failed. Expected `{mtype}`, got `{args[i+1].mtype}`")
			end
		end
	end

	# Common code for runtime injected calls and normal calls
	fun send_commons(mproperty: MMethod, args: Array[Instance], mtype: MType): nullable Instance
	do
		if mtype isa MNullType then
			if mproperty.name == "==" or mproperty.name == "is_same_instance" then
				return self.bool_instance(args[0] == args[1])
			else if mproperty.name == "!=" then
				return self.bool_instance(args[0] != args[1])
			end
			#fatal("Receiver is null. {mproperty}. {args.join(" ")} {self.frame.current_node.class_name}")
			fatal("Receiver is null")
		end
		return null
	end

	# Execute a full `callsite` for given `args`
	# Use this method, instead of `send` to execute and control the additional behavior of the call-sites
	fun callsite(callsite: nullable CallSite, arguments: Array[Instance]): nullable Instance
	do
		if callsite == null then return null
		return send(callsite.mproperty, arguments)
	end

	# Execute `mproperty` for a `args` (where `args[0]` is the receiver).
	# Return a value if `mproperty` is a function, or null if it is a procedure.
	# The call is polymorphic. There is a message-sending/late-binding according to the receiver (args[0]).
	fun send(mproperty: MMethod, args: Array[Instance]): nullable Instance
	do
		var recv = args.first
		var mtype = recv.mtype
		var ret = send_commons(mproperty, args, mtype)
		if ret != null then return ret
		var propdef = mproperty.lookup_first_definition(self.mainmodule, mtype)
		return self.call(propdef, args)
	end

	# Read the attribute `mproperty` of an instance `recv` and return its value.
	# If the attribute in not yet initialized, then aborts with an error message.
	fun read_attribute(mproperty: MAttribute, recv: Instance): Instance
	do
		assert recv isa MutableInstance
		if not recv.attributes.has_key(mproperty) then
			fatal("Uninitialized attribute {mproperty.name}")
			abort
		end
		return recv.attributes[mproperty]
	end

	# Replace in `recv` the value of the attribute `mproperty` by `value`
	fun write_attribute(mproperty: MAttribute, recv: Instance, value: Instance)
	do
		assert recv isa MutableInstance
		recv.attributes[mproperty] = value
	end

	# Is the attribute `mproperty` initialized the instance `recv`?
	fun isset_attribute(mproperty: MAttribute, recv: Instance): Bool
	do
		assert recv isa MutableInstance
		return recv.attributes.has_key(mproperty)
	end

	# Collect attributes of a type in the order of their init
	fun collect_attr_propdef(mtype: MType): Array[AAttrPropdef]
	do
		var cache = self.collect_attr_propdef_cache
		if cache.has_key(mtype) then return cache[mtype]

		var res = new Array[AAttrPropdef]
		var cds = mtype.collect_mclassdefs(self.mainmodule).to_a
		self.mainmodule.linearize_mclassdefs(cds)
		for cd in cds do
			res.add_all(modelbuilder.collect_attr_propdef(cd))
		end

		cache[mtype] = res
		return res
	end

	private var collect_attr_propdef_cache = new HashMap[MType, Array[AAttrPropdef]]

	# Fill the initial values of the newly created instance `recv`.
	# `recv.mtype` is used to know what must be filled.
	fun init_instance(recv: Instance)
	do
		for npropdef in collect_attr_propdef(recv.mtype) do
			npropdef.init_expr(self, recv)
		end
	end

	# A hook to initialize a `PrimitiveInstance`
	fun init_instance_primitive(recv: Instance) do end

	# This function determines the correct type according to the receiver of the current propdef (self).
	fun unanchor_type(mtype: MType): MType
	do
		return mtype.anchor_to(self.mainmodule, current_receiver_class)
	end

	# Placebo instance used to mark internal error result when `null` already have a meaning.
	# TODO: replace with multiple return or something better
	var error_instance = new MutableInstance(modelbuilder.model.null_type) is lazy
end

# A runtime error
class FatalError
	# The error message
	var message: String

	# The problematic node, if any
	var node: nullable ANode
end

# An instance represents a value of the executed program.
abstract class Instance
	# The dynamic type of the instance
	# ASSERT: not self.mtype.is_anchored
	var mtype: MType

	# Return `true` if the instance is the `true` value.
	#
	# Return `false` if the instance is the `false` value.
	# Abort if the instance is not a boolean value.
	fun is_true: Bool do abort

	# Return `true` if the instance is null.
	# Return `false` otherwise.
	fun is_null: Bool do return mtype isa MNullType

	# Return true if `self` IS `o` (using the Nit semantic of is)
	fun eq_is(o: Instance): Bool do return self.is_same_instance(o)

	# Human readable object identity "Type#number"
	redef fun to_s do return "{mtype}"

	# Return the integer value if the instance is an integer.
	# else aborts
	fun to_i: Int do abort

	# Return the integer value if the instance is a float.
	# else aborts
	fun to_f: Float do abort

	# Return the integer value if the instance is a byte.
	# else aborts
	fun to_b: Byte do abort

	# Return the integer value if the instance is a int8.
	# else aborts
	fun to_i8: Int8 do abort

	# Return the integer value if the instance is a int16.
	# else aborts
	fun to_i16: Int16 do abort

	# Return the integer value if the instance is a uint16.
	# else aborts
	fun to_u16: UInt16 do abort

	# Return the integer value if the instance is a int32.
	# else aborts
	fun to_i32: Int32 do abort

	# Return the integer value if the instance is a uint32.
	# else aborts
	fun to_u32: UInt32 do abort

	# The real value encapsulated if the instance is primitive.
	# Else aborts.
	fun val: nullable Object do abort
end

# A instance with attribute (standards objects)
class MutableInstance
	super Instance

	# The values of the attributes
	var attributes: Map[MAttribute, Instance] = new HashMap[MAttribute, Instance]
end

# An instance with the original receiver and callsite (for function reference)
class CallrefInstance
	super Instance

	# The original receiver
	#
	# ~~~nitish
	# var a = new A
	# var f = &a.toto # `a` is the original receiver
	# ~~~
	var recv: Instance

	# The original callsite
	#
	# ~~~nitish
	# var a = new A
	# var f = &a.toto # `toto` is the original callsite
	# ~~~
	var callsite: CallSite
end

# Special instance to handle primitives values (int, bool, etc.)
# The trick is just to encapsulate the “real” value.
class PrimitiveInstance[E]
	super Instance

	# The real value encapsulated
	redef var val: E

	redef fun is_true
	do
		if val == true then return true
		if val == false then return false
		abort
	end

	redef fun ==(o)
	do
		if not o isa PrimitiveInstance[nullable Object] then return false
		return self.val == o.val
	end

	redef fun eq_is(o)
	do
		if not o isa PrimitiveInstance[nullable Object] then return false
		return self.val.is_same_instance(o.val)
	end

	redef fun to_s do return "{mtype}#{val.object_id}({val or else "null"})"

	redef fun to_i do return val.as(Int)

	redef fun to_f do return val.as(Float)

	redef fun to_b do return val.as(Byte)

	redef fun to_i8 do return val.as(Int8)

	redef fun to_i16 do return val.as(Int16)

	redef fun to_u16 do return val.as(UInt16)

	redef fun to_i32 do return val.as(Int32)

	redef fun to_u32 do return val.as(UInt32)
end

# Information about local variables in a running method
abstract class Frame
	# The current visited node
	# The node is stored by frame to keep a stack trace
	var current_node: ANode
	# The executed property.
	# A Method in case of a call, an attribute in case of a default initialization.
	var mpropdef: MPropDef
	# Arguments of the method (the first is the receiver)
	var arguments: Array[Instance]
	# Indicate if the expression has an array comprehension form
	var comprehension: nullable Array[Instance] = null
end

# Implementation of a Frame with a Hashmap to store local variables
class InterpreterFrame
	super Frame

	# Mapping between a variable and the current value
	var map: Map[Variable, Instance] = new HashMap[Variable, Instance]
end

redef class ANode
	# Aborts the program with a message
	# `v` is used to know if a colored message is displayed or not
	fun fatal(v: NaiveInterpreter, message: String)
	do
		# Abort if there is a `catch` block
		if v.catch_count > 0 then
			v.last_error = new FatalError(message, self)
			abort
		end

		if v.modelbuilder.toolcontext.opt_no_color.value then
			sys.stderr.write("Runtime error: {message} ({location.file.filename}:{location.line_start})\n")
		else
			sys.stderr.write("{location}: Runtime error: {message}\n{location.colored_line("0;31")}\n")
			sys.stderr.write(v.stack_trace)
			sys.stderr.write("\n")
		end
		exit(1)
	end
end

redef class APropdef
	# Execute a `mpropdef` associated with the current node.
	private fun call(v: NaiveInterpreter, mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		fatal(v, "NOT YET IMPLEMENTED method kind {class_name}. {mpropdef}")
		abort
	end
end

redef class AMethPropdef
	super TablesCapable

	redef fun call(v, mpropdef, args)
	do
		var f = v.new_frame(self, mpropdef, args)
		var res = call_commons(v, mpropdef, args, f)
		v.frames.shift
		if v.is_escape(self.return_mark) then
			res = v.escapevalue
			return res
		end
		return res
	end

	# Execution of the body of the method
	#
	# It handle the common special cases: super, intern, extern
	fun call_commons(v: NaiveInterpreter, mpropdef: MMethodDef, arguments: Array[Instance], f: Frame): nullable Instance
	do
		v.frames.unshift(f)

		for i in [0..mpropdef.msignature.arity[ do
			var variable = self.n_signature.n_params[i].variable
			assert variable != null
			v.write_variable(variable, arguments[i+1])
		end

		# Call the implicit super-init
		var auto_super_inits = self.auto_super_inits
		if auto_super_inits != null then
			var args = [arguments.first]
			for auto_super_init in auto_super_inits do
				args.clear
				for i in [0..auto_super_init.msignature.arity+1[ do
					args.add(arguments[i])
				end
				assert auto_super_init.mproperty != mpropdef.mproperty
				v.callsite(auto_super_init, args)
			end
		end
		if auto_super_call then
			# standard call-next-method
			var superpd = mpropdef.lookup_next_definition(v.mainmodule, arguments.first.mtype)
			v.call(superpd, arguments)
		end

		# First, try intern
		if mpropdef.is_intern or mpropdef.is_extern then
			var res = intern_call(v, mpropdef, arguments)
			if res != v.error_instance then return res
		end
		# Then, try extern
		if mpropdef.is_extern then
			var res = call_extern(v, mpropdef, arguments, f)
			if res != v.error_instance then return res
		end
		# Else try block
		if n_block != null then
			v.stmt(self.n_block)
			return null
		end

		# Fail if nothing succeed
		if mpropdef.is_intern then
			fatal(v, "NOT YET IMPLEMENTED intern {mpropdef}")
		else if mpropdef.is_extern then
			fatal(v, "NOT YET IMPLEMENTED extern {mpropdef}")
		else
			fatal(v, "NOT YET IMPLEMENTED <wat?> {mpropdef}")
		end
		abort
	end

	# Call this extern method
	protected fun call_extern(v: NaiveInterpreter, mpropdef: MMethodDef, arguments: Array[Instance], f: Frame): nullable Instance
	do
		return v.error_instance
	end

	# Interprets a intern or a shortcut extern method.
	# Returns the result for a function, `null` for a procedure, or `error_instance` if the method is unknown.
	private fun intern_call(v: NaiveInterpreter, mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		var pname = mpropdef.mproperty.name
		var cname = mpropdef.mclassdef.mclass.name

		if pname == "call" and v.routine_types.has(cname) then
			var routine = args.shift
			assert routine isa CallrefInstance
			# Swap the receiver position with the original recv of the call form.
			args.unshift routine.recv
			var res = v.callsite(routine.callsite, args)
			# recover the old args state
			args.shift
			args.unshift routine
			return res
		end

		if pname == "output" then
			var recv = args.first
			recv.val.output
			return null
		else if pname == "object_id" then
			var recv = args.first
			if recv isa PrimitiveInstance[Object] then
				return v.int_instance(recv.val.object_id)
			else
				return v.int_instance(recv.object_id)
			end
		else if pname == "output_class_name" then
			var recv = args.first
			print recv.mtype
			return null
		else if pname == "native_class_name" then
			var recv = args.first
			var txt = recv.mtype.to_s
			return v.c_string_instance(txt)
		else if pname == "==" then
			# == is correctly redefined for instances
			return v.bool_instance(args[0] == args[1])
		else if pname == "!=" then
			return v.bool_instance(args[0] != args[1])
		else if pname == "is_same_type" then
			return v.bool_instance(args[0].mtype == args[1].mtype)
		else if pname == "is_same_instance" then
			return v.bool_instance(args[0].eq_is(args[1]))
		else if pname == "class_inheritance_metamodel_json" then
			return v.c_string_instance(v.mainmodule.flatten_mclass_hierarchy.to_thin_json)
		else if pname == "exit" then
			exit(args[1].to_i)
			abort
		else if pname == "buffer_mode_full" then
			return v.int_instance(sys.buffer_mode_full)
		else if pname == "buffer_mode_line" then
			return v.int_instance(sys.buffer_mode_line)
		else if pname == "buffer_mode_none" then
			return v.int_instance(sys.buffer_mode_none)
		else if pname == "sys" then
			return v.mainobj
		else if cname == "Int" then
			var recvval = args[0].to_i
			if pname == "unary -" then
				return v.int_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.int_instance(recvval + args[1].to_i)
			else if pname == "-" then
				return v.int_instance(recvval - args[1].to_i)
			else if pname == "*" then
				return v.int_instance(recvval * args[1].to_i)
			else if pname == "%" then
				return v.int_instance(recvval % args[1].to_i)
			else if pname == "/" then
				return v.int_instance(recvval / args[1].to_i)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_i)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_i)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_i)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_i)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_i)
			else if pname == "&" then
				return v.int_instance(recvval & args[1].to_i)
			else if pname == "|" then
				return v.int_instance(recvval | args[1].to_i)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_b" then
				return v.byte_instance(recvval.to_b)
			else if pname == "<<" then
				return v.int_instance(recvval << args[1].to_i)
			else if pname == ">>" then
				return v.int_instance(recvval >> args[1].to_i)
			else if pname == "to_i8" then
				return v.int8_instance(recvval.to_i8)
			else if pname == "to_i16" then
				return v.int16_instance(recvval.to_i16)
			else if pname == "to_u16" then
				return v.uint16_instance(recvval.to_u16)
			else if pname == "to_i32" then
				return v.int32_instance(recvval.to_i32)
			else if pname == "to_u32" then
				return v.uint32_instance(recvval.to_u32)
			end
		else if cname == "Byte" then
			var recvval = args[0].to_b
			if pname == "unary -" then
				return v.byte_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.byte_instance(recvval + args[1].to_b)
			else if pname == "-" then
				return v.byte_instance(recvval - args[1].to_b)
			else if pname == "*" then
				return v.byte_instance(recvval * args[1].to_b)
			else if pname == "%" then
				return v.byte_instance(recvval % args[1].to_b)
			else if pname == "/" then
				return v.byte_instance(recvval / args[1].to_b)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_b)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_b)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_b)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_b)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_b)
			else if pname == "&" then
				return v.byte_instance(recvval & args[1].to_b)
			else if pname == "|" then
				return v.byte_instance(recvval | args[1].to_b)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_i" then
				return v.int_instance(recvval.to_i)
			else if pname == "<<" then
				return v.byte_instance(recvval << args[1].to_i)
			else if pname == ">>" then
				return v.byte_instance(recvval >> args[1].to_i)
			else if pname == "to_i8" then
				return v.int8_instance(recvval.to_i8)
			else if pname == "to_i16" then
				return v.int16_instance(recvval.to_i16)
			else if pname == "to_u16" then
				return v.uint16_instance(recvval.to_u16)
			else if pname == "to_i32" then
				return v.int32_instance(recvval.to_i32)
			else if pname == "to_u32" then
				return v.uint32_instance(recvval.to_u32)
			else if pname == "byte_to_s_len" then
				return v.int_instance(recvval.to_s.length)
			end
		else if cname == "Char" then
			var recv = args[0].val.as(Char)
			if pname == "successor" then
				return v.char_instance(recv.successor(args[1].to_i))
			else if pname == "predecessor" then
				return v.char_instance(recv.predecessor(args[1].to_i))
			else if pname == "<" then
				return v.bool_instance(recv < args[1].val.as(Char))
			else if pname == ">" then
				return v.bool_instance(recv > args[1].val.as(Char))
			else if pname == "<=" then
				return v.bool_instance(recv <= args[1].val.as(Char))
			else if pname == ">=" then
				return v.bool_instance(recv >= args[1].val.as(Char))
			else if pname == "<=>" then
				return v.int_instance(recv <=> args[1].val.as(Char))
			end
		else if cname == "Float" then
			var recv = args[0].to_f
			if pname == "unary -" then
				return v.float_instance(-recv)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.float_instance(recv + args[1].to_f)
			else if pname == "-" then
				return v.float_instance(recv - args[1].to_f)
			else if pname == "*" then
				return v.float_instance(recv * args[1].to_f)
			else if pname == "/" then
				return v.float_instance(recv / args[1].to_f)
			else if pname == "<" then
				return v.bool_instance(recv < args[1].to_f)
			else if pname == ">" then
				return v.bool_instance(recv > args[1].to_f)
			else if pname == "<=" then
				return v.bool_instance(recv <= args[1].to_f)
			else if pname == ">=" then
				return v.bool_instance(recv >= args[1].to_f)
			else if pname == "to_i" then
				return v.int_instance(recv.to_i)
			else if pname == "to_b" then
				return v.byte_instance(recv.to_b)
			else if pname == "to_i8" then
				return v.int8_instance(recv.to_i8)
			else if pname == "to_i16" then
				return v.int16_instance(recv.to_i16)
			else if pname == "to_u16" then
				return v.uint16_instance(recv.to_u16)
			else if pname == "to_i32" then
				return v.int32_instance(recv.to_i32)
			else if pname == "to_u32" then
				return v.uint32_instance(recv.to_u32)
			else if pname == "cos" then
				return v.float_instance(args[0].to_f.cos)
			else if pname == "sin" then
				return v.float_instance(args[0].to_f.sin)
			else if pname == "tan" then
				return v.float_instance(args[0].to_f.tan)
			else if pname == "acos" then
				return v.float_instance(args[0].to_f.acos)
			else if pname == "asin" then
				return v.float_instance(args[0].to_f.asin)
			else if pname == "atan" then
				return v.float_instance(args[0].to_f.atan)
			else if pname == "sqrt" then
				return v.float_instance(args[0].to_f.sqrt)
			else if pname == "exp" then
				return v.float_instance(args[0].to_f.exp)
			else if pname == "log" then
				return v.float_instance(args[0].to_f.log)
			else if pname == "pow" then
				return v.float_instance(args[0].to_f.pow(args[1].to_f))
			else if pname == "abs" then
				return v.float_instance(args[0].to_f.abs)
			else if pname == "hypot_with" then
				return v.float_instance(args[0].to_f.hypot_with(args[1].to_f))
			else if pname == "is_nan" then
				return v.bool_instance(args[0].to_f.is_nan)
			else if pname == "is_inf_extern" then
				return v.bool_instance(args[0].to_f.is_inf != 0)
			else if pname == "round" then
				return v.float_instance(args[0].to_f.round)
			end
		else if cname == "CString" then
			if pname == "new" then
				return v.c_string_instance_len(args[1].to_i)
			end
			var recvval = args.first.val.as(CString)
			if pname == "[]" then
				var arg1 = args[1].to_i
				return v.int_instance(recvval[arg1])
			else if pname == "[]=" then
				var arg1 = args[1].to_i
				recvval[arg1] = args[2].val.as(Int)
				return null
			else if pname == "copy_to" then
				# sig= copy_to(dest: CString, length: Int, from: Int, to: Int)
				var destval = args[1].val.as(CString)
				var lenval = args[2].to_i
				var fromval = args[3].to_i
				var toval = args[4].to_i
				recvval.copy_to(destval, lenval, fromval, toval)
				return null
			else if pname == "atoi" then
				return v.int_instance(recvval.atoi)
			else if pname == "fast_cstring" then
				return v.c_string_instance_fast_cstr(args[0].val.as(CString), args[1].to_i)
			else if pname == "fetch_4_chars" then
				return v.uint32_instance(args[0].val.as(CString).fetch_4_chars(args[1].to_i))
			else if pname == "fetch_4_hchars" then
				return v.uint32_instance(args[0].val.as(CString).fetch_4_hchars(args[1].to_i))
			else if pname == "utf8_length" then
				return v.int_instance(args[0].val.as(CString).utf8_length(args[1].to_i, args[2].to_i))
			end
		else if cname == "NativeArray" then
			if pname == "new" then
				var val = new Array[Instance].filled_with(v.null_instance, args[1].to_i)
				var instance = new PrimitiveInstance[Array[Instance]](args[0].mtype, val)
				v.init_instance_primitive(instance)
				return instance
			end
			var recvval = args.first.val.as(Array[Instance])
			if pname == "[]" then
				return recvval[args[1].to_i]
			else if pname == "[]=" then
				recvval[args[1].to_i] = args[2]
				return null
			else if pname == "length" then
				return v.int_instance(recvval.length)
			else if pname == "copy_to" then
				recvval.copy_to(0, args[2].to_i, args[1].val.as(Array[Instance]), 0)
				return null
			end
		else if cname == "Int8" then
			var recvval = args[0].to_i8
			if pname == "unary -" then
				return v.int8_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.int8_instance(recvval + args[1].to_i8)
			else if pname == "-" then
				return v.int8_instance(recvval - args[1].to_i8)
			else if pname == "*" then
				return v.int8_instance(recvval * args[1].to_i8)
			else if pname == "%" then
				return v.int8_instance(recvval % args[1].to_i8)
			else if pname == "/" then
				return v.int8_instance(recvval / args[1].to_i8)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_i8)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_i8)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_i8)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_i8)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_i8)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_i" then
				return v.int_instance(recvval.to_i)
			else if pname == "to_b" then
				return v.byte_instance(recvval.to_b)
			else if pname == "to_i16" then
				return v.int16_instance(recvval.to_i16)
			else if pname == "to_u16" then
				return v.uint16_instance(recvval.to_u16)
			else if pname == "to_i32" then
				return v.int32_instance(recvval.to_i32)
			else if pname == "to_u32" then
				return v.uint32_instance(recvval.to_u32)
			else if pname == "<<" then
				return v.int8_instance(recvval << (args[1].to_i))
			else if pname == ">>" then
				return v.int8_instance(recvval >> (args[1].to_i))
			else if pname == "&" then
				return v.int8_instance(recvval & args[1].to_i8)
			else if pname == "|" then
				return v.int8_instance(recvval | args[1].to_i8)
			else if pname == "^" then
				return v.int8_instance(recvval ^ args[1].to_i8)
			else if pname == "unary ~" then
				return v.int8_instance(~recvval)
			end
		else if cname == "Int16" then
			var recvval = args[0].to_i16
			if pname == "unary -" then
				return v.int16_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.int16_instance(recvval + args[1].to_i16)
			else if pname == "-" then
				return v.int16_instance(recvval - args[1].to_i16)
			else if pname == "*" then
				return v.int16_instance(recvval * args[1].to_i16)
			else if pname == "%" then
				return v.int16_instance(recvval % args[1].to_i16)
			else if pname == "/" then
				return v.int16_instance(recvval / args[1].to_i16)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_i16)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_i16)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_i16)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_i16)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_i16)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_i" then
				return v.int_instance(recvval.to_i)
			else if pname == "to_b" then
				return v.byte_instance(recvval.to_b)
			else if pname == "to_i8" then
				return v.int8_instance(recvval.to_i8)
			else if pname == "to_u16" then
				return v.uint16_instance(recvval.to_u16)
			else if pname == "to_i32" then
				return v.int32_instance(recvval.to_i32)
			else if pname == "to_u32" then
				return v.uint32_instance(recvval.to_u32)
			else if pname == "<<" then
				return v.int16_instance(recvval << (args[1].to_i))
			else if pname == ">>" then
				return v.int16_instance(recvval >> (args[1].to_i))
			else if pname == "&" then
				return v.int16_instance(recvval & args[1].to_i16)
			else if pname == "|" then
				return v.int16_instance(recvval | args[1].to_i16)
			else if pname == "^" then
				return v.int16_instance(recvval ^ args[1].to_i16)
			else if pname == "unary ~" then
				return v.int16_instance(~recvval)
			end
		else if cname == "UInt16" then
			var recvval = args[0].to_u16
			if pname == "unary -" then
				return v.uint16_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.uint16_instance(recvval + args[1].to_u16)
			else if pname == "-" then
				return v.uint16_instance(recvval - args[1].to_u16)
			else if pname == "*" then
				return v.uint16_instance(recvval * args[1].to_u16)
			else if pname == "%" then
				return v.uint16_instance(recvval % args[1].to_u16)
			else if pname == "/" then
				return v.uint16_instance(recvval / args[1].to_u16)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_u16)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_u16)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_u16)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_u16)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_u16)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_i" then
				return v.int_instance(recvval.to_i)
			else if pname == "to_b" then
				return v.byte_instance(recvval.to_b)
			else if pname == "to_i8" then
				return v.int8_instance(recvval.to_i8)
			else if pname == "to_i16" then
				return v.int16_instance(recvval.to_i16)
			else if pname == "to_i32" then
				return v.int32_instance(recvval.to_i32)
			else if pname == "to_u32" then
				return v.uint32_instance(recvval.to_u32)
			else if pname == "<<" then
				return v.uint16_instance(recvval << (args[1].to_i))
			else if pname == ">>" then
				return v.uint16_instance(recvval >> (args[1].to_i))
			else if pname == "&" then
				return v.uint16_instance(recvval & args[1].to_u16)
			else if pname == "|" then
				return v.uint16_instance(recvval | args[1].to_u16)
			else if pname == "^" then
				return v.uint16_instance(recvval ^ args[1].to_u16)
			else if pname == "unary ~" then
				return v.uint16_instance(~recvval)
			end
		else if cname == "Int32" then
			var recvval = args[0].to_i32
			if pname == "unary -" then
				return v.int32_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.int32_instance(recvval + args[1].to_i32)
			else if pname == "-" then
				return v.int32_instance(recvval - args[1].to_i32)
			else if pname == "*" then
				return v.int32_instance(recvval * args[1].to_i32)
			else if pname == "%" then
				return v.int32_instance(recvval % args[1].to_i32)
			else if pname == "/" then
				return v.int32_instance(recvval / args[1].to_i32)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_i32)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_i32)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_i32)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_i32)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_i32)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_i" then
				return v.int_instance(recvval.to_i)
			else if pname == "to_b" then
				return v.byte_instance(recvval.to_b)
			else if pname == "to_i8" then
				return v.int8_instance(recvval.to_i8)
			else if pname == "to_i16" then
				return v.int16_instance(recvval.to_i16)
			else if pname == "to_u16" then
				return v.uint16_instance(recvval.to_u16)
			else if pname == "to_u32" then
				return v.uint32_instance(recvval.to_u32)
			else if pname == "<<" then
				return v.int32_instance(recvval << (args[1].to_i))
			else if pname == ">>" then
				return v.int32_instance(recvval >> (args[1].to_i))
			else if pname == "&" then
				return v.int32_instance(recvval & args[1].to_i32)
			else if pname == "|" then
				return v.int32_instance(recvval | args[1].to_i32)
			else if pname == "^" then
				return v.int32_instance(recvval ^ args[1].to_i32)
			else if pname == "unary ~" then
				return v.int32_instance(~recvval)
			end
		else if cname == "UInt32" then
			var recvval = args[0].to_u32
			if pname == "unary -" then
				return v.uint32_instance(-recvval)
			else if pname == "unary +" then
				return args[0]
			else if pname == "+" then
				return v.uint32_instance(recvval + args[1].to_u32)
			else if pname == "-" then
				return v.uint32_instance(recvval - args[1].to_u32)
			else if pname == "*" then
				return v.uint32_instance(recvval * args[1].to_u32)
			else if pname == "%" then
				return v.uint32_instance(recvval % args[1].to_u32)
			else if pname == "/" then
				return v.uint32_instance(recvval / args[1].to_u32)
			else if pname == "<" then
				return v.bool_instance(recvval < args[1].to_u32)
			else if pname == ">" then
				return v.bool_instance(recvval > args[1].to_u32)
			else if pname == "<=" then
				return v.bool_instance(recvval <= args[1].to_u32)
			else if pname == ">=" then
				return v.bool_instance(recvval >= args[1].to_u32)
			else if pname == "<=>" then
				return v.int_instance(recvval <=> args[1].to_u32)
			else if pname == "to_f" then
				return v.float_instance(recvval.to_f)
			else if pname == "to_i" then
				return v.int_instance(recvval.to_i)
			else if pname == "to_b" then
				return v.byte_instance(recvval.to_b)
			else if pname == "to_i8" then
				return v.int8_instance(recvval.to_i8)
			else if pname == "to_i16" then
				return v.int16_instance(recvval.to_i16)
			else if pname == "to_u16" then
				return v.uint16_instance(recvval.to_u16)
			else if pname == "to_i32" then
				return v.int32_instance(recvval.to_i32)
			else if pname == "<<" then
				return v.uint32_instance(recvval << (args[1].to_i))
			else if pname == ">>" then
				return v.uint32_instance(recvval >> (args[1].to_i))
			else if pname == "&" then
				return v.uint32_instance(recvval & args[1].to_u32)
			else if pname == "|" then
				return v.uint32_instance(recvval | args[1].to_u32)
			else if pname == "^" then
				return v.uint32_instance(recvval ^ args[1].to_u32)
			else if pname == "unary ~" then
				return v.uint32_instance(~recvval)
			end
		else if pname == "native_argc" then
			return v.int_instance(v.arguments.length)
		else if pname == "native_argv" then
			var txt = v.arguments[args[1].to_i]
			return v.c_string_instance(txt)
		else if pname == "lexer_goto" then
			return v.int_instance(lexer_goto(args[1].to_i, args[2].to_i))
		else if pname == "lexer_accept" then
			return v.int_instance(lexer_accept(args[1].to_i))
		else if pname == "parser_goto" then
			return v.int_instance(parser_goto(args[1].to_i, args[2].to_i))
		else if pname == "parser_action" then
			return v.int_instance(parser_action(args[1].to_i, args[2].to_i))
		end
		return v.error_instance
	end
end

redef class AAttrPropdef
	redef fun call(v, mpropdef, args)
	do
		var recv = args.first
		assert recv isa MutableInstance
		var attr = self.mpropdef.mproperty
		if mpropdef == mreadpropdef then
			assert args.length == 1
			if not is_lazy or v.isset_attribute(attr, recv) then return v.read_attribute(attr, recv)
			var f = v.new_frame(self, mpropdef, args)
			return evaluate_expr(v, recv, f)
		else if mpropdef == mwritepropdef then
			assert args.length == 2
			var arg = args[1]
			if is_optional and arg.is_null then
				var f = v.new_frame(self, mpropdef, args)
				arg = evaluate_expr(v, recv, f)
			end
			v.write_attribute(attr, recv, arg)
			return null
		else
			abort
		end
	end

	# Evaluate and set the default value of the attribute in `recv`
	private fun init_expr(v: NaiveInterpreter, recv: Instance)
	do
		if is_lazy or is_optional then return
		if has_value then
			var f = v.new_frame(self, mreadpropdef.as(not null), [recv])
			evaluate_expr(v, recv, f)
			return
		end
		var mpropdef = self.mpropdef
		if mpropdef == null then return
		var mtype = self.mtype.as(not null)
		mtype = mtype.anchor_to(v.mainmodule, recv.mtype.as(MClassType))
		if mtype isa MNullableType then
			v.write_attribute(self.mpropdef.mproperty, recv, v.null_instance)
		end
	end

	private fun evaluate_expr(v: NaiveInterpreter, recv: Instance, f: Frame): Instance
	do
		assert recv isa MutableInstance
		v.frames.unshift(f)

		var val

		var nexpr = self.n_expr
		var nblock = self.n_block
		if nexpr != null then
			val = v.expr(nexpr)
		else if nblock != null then
			v.stmt(nblock)
			assert v.escapemark == return_mark
			val = v.escapevalue
			v.escapemark = null
		else
			abort
		end
		assert val != null

		v.frames.shift
		assert not v.is_escaping
		v.write_attribute(self.mpropdef.mproperty, recv, val)
		return val
	end
end

redef class AClassdef
	# Execute an implicit `mpropdef` associated with the current node.
	private fun call(v: NaiveInterpreter, mpropdef: MMethodDef, arguments: Array[Instance]): nullable Instance
	do
		if mpropdef.mproperty.is_root_init then
			assert arguments.length == 1
			if not mpropdef.is_intro then
				# standard call-next-method
				var superpd = mpropdef.lookup_next_definition(v.mainmodule, arguments.first.mtype)
				v.call(superpd, arguments)
			end
			return null
		else if mclassdef.auto_init == mpropdef then
			var recv = arguments.first
			var initializers = mpropdef.initializers
			var no_init = false
			if not initializers.is_empty then
				var i = 1
				for p in initializers do
					if p isa MMethod then
						var args = [recv]
						for x in p.intro.msignature.mparameters do
							args.add arguments[i]
							i += 1
						end
						v.send(p, args)
						if p.intro.is_calling_init then no_init = true
					else if p isa MAttribute then
						assert recv isa MutableInstance
						v.write_attribute(p, recv, arguments[i])
						i += 1
					else abort
				end
				assert i == arguments.length
			end
			if not no_init then v.send(mclass.the_root_init_mmethod.as(not null), [recv])
			return null
		else
			abort
		end
	end
end

redef class AExpr
	# Evaluate the node as a possible expression.
	# Return a possible value
	# NOTE: Do not call this method directly, but use `v.expr`
	# This method is here to be implemented by subclasses.
	protected fun expr(v: NaiveInterpreter): nullable Instance
	do
		fatal(v, "NOT YET IMPLEMENTED expr {class_name}")
		abort
	end

	# Evaluate the node as a statement.
	# NOTE: Do not call this method directly, but use `v.stmt`
	# This method is here to be implemented by subclasses (no need to return something).
	protected fun stmt(v: NaiveInterpreter)
	do
		expr(v)
	end

end

redef class ABlockExpr
	redef fun expr(v)
	do
		var last = self.n_expr.last
		for e in self.n_expr do
			if e == last then break
			v.stmt(e)
			if v.is_escaping then return null
		end
		return last.expr(v)
	end

	redef fun stmt(v)
	do
		for e in self.n_expr do
			v.stmt(e)
			if v.is_escaping then return
		end
	end
end

redef class AVardeclExpr
	redef fun expr(v)
	do
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne)
			if i == null then return null
			v.write_variable(self.variable.as(not null), i)
			return i
		end
		return null
	end
end

redef class AVarExpr
	redef fun expr(v)
	do
		return v.read_variable(self.variable.as(not null))
	end
end

redef class AVarAssignExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_value)
		if i == null then return null
		v.write_variable(self.variable.as(not null), i)
		return i
	end
end

redef class AVarReassignExpr
	redef fun stmt(v)
	do
		var variable = self.variable.as(not null)
		var vari = v.read_variable(variable)
		var value = v.expr(self.n_value)
		if value == null then return
		var res = v.callsite(reassign_callsite, [vari, value])
		assert res != null
		v.write_variable(variable, res)
	end
end

redef class ASelfExpr
	redef fun expr(v)
	do
		return v.frame.arguments.first
	end
end

redef class AImplicitSelfExpr
	redef fun expr(v)
	do
		if not is_sys then return super
		return v.mainobj
	end
end

redef class AEscapeExpr
	redef fun stmt(v)
	do
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne)
			if i == null then return
			v.escapevalue = i
		else
			v.escapevalue = null
		end
		v.escapemark = self.escapemark
	end
end

redef class AAbortExpr
	redef fun stmt(v)
	do
		fatal(v, "Aborted")
		exit(1)
	end
end

redef class AIfExpr
	redef fun expr(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return null
		if cond.is_true then
			return v.expr(self.n_then.as(not null))
		else
			return v.expr(self.n_else.as(not null))
		end
	end

	redef fun stmt(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return
		if cond.is_true then
			v.stmt(self.n_then)
		else
			v.stmt(self.n_else)
		end
	end
end

redef class AIfexprExpr
	redef fun expr(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return null
		if cond.is_true then
			return v.expr(self.n_then)
		else
			return v.expr(self.n_else)
		end
	end
end

redef class ADoExpr
	redef fun stmt(v)
	do
		# If this bloc has a catch, handle it with a do ... catch ... end
		if self.n_catch != null then
			var frame = v.frame
			v.catch_count += 1
			do
				v.stmt(self.n_block)
				v.is_escape(self.break_mark) # Clear the break (if any)
				v.catch_count -= 1
			catch
				# Restore the current frame if needed
				while v.frame != frame do v.frames.shift
				v.catch_count -= 1
				v.stmt(self.n_catch)
			end
		else
			v.stmt(self.n_block)
			v.is_escape(self.break_mark)
		end
	end
end

redef class AWhileExpr
	redef fun stmt(v)
	do
		loop
			var cond = v.expr(self.n_expr)
			if cond == null then return
			if not cond.is_true then return
			v.stmt(self.n_block)
			if v.is_escape(self.break_mark) then return
			v.is_escape(self.continue_mark) # Clear the break
			if v.is_escaping then return
		end
	end
end

redef class ALoopExpr
	redef fun stmt(v)
	do
		loop
			v.stmt(self.n_block)
			if v.is_escape(self.break_mark) then return
			v.is_escape(self.continue_mark) # Clear the break
			if v.is_escaping then return
		end
	end
end

redef class AForExpr
	redef fun stmt(v)
	do
		var iters = new Array[Instance]

		for g in n_groups do
			var col = v.expr(g.n_expr)
			if col == null then return
			if col.is_null then fatal(v, "Receiver is null")

			var iter = v.callsite(g.method_iterator, [col]).as(not null)
			iters.add iter
		end

		loop
			for g in n_groups, iter in iters do
				var isok = v.callsite(g.method_is_ok, [iter]).as(not null)
				if not isok.is_true then break label
				if g.variables.length == 1 then
					var item = v.callsite(g.method_item, [iter]).as(not null)
					#self.debug("item {item}")
					v.write_variable(g.variables.first, item)
				else if g.variables.length == 2 then
					var key = v.callsite(g.method_key, [iter]).as(not null)
					v.write_variable(g.variables[0], key)
					var item = v.callsite(g.method_item, [iter]).as(not null)
					v.write_variable(g.variables[1], item)
				else
					abort
				end
			end
			v.stmt(self.n_block)
			if v.is_escape(self.break_mark) then break
			v.is_escape(self.continue_mark) # Clear the break
			if v.is_escaping then break
			for g in n_groups, iter in iters do
				v.callsite(g.method_next, [iter])
			end
		end label
		for g in n_groups, iter in iters do
			var method_finish = g.method_finish
			if method_finish != null then
				v.callsite(method_finish, [iter])
			end
		end
	end
end

redef class AWithExpr
	redef fun stmt(v)
	do
		var expr = v.expr(self.n_expr)
		if expr == null then return

		v.callsite(method_start, [expr])
		v.stmt(self.n_block)
		v.is_escape(self.break_mark) # Clear the break

		# Execute the finally without an escape
		var old_mark = v.escapemark
		v.escapemark = null
		v.callsite(method_finish, [expr])
		# Restore the escape unless another escape was provided
		if v.escapemark == null then v.escapemark = old_mark
	end
end

redef class AAssertExpr
	redef fun stmt(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return
		if not cond.is_true then
			v.stmt(self.n_else)
			if v.is_escaping then return

			# Explain assert if it fails
			var explain_assert_str = explain_assert_str
			if explain_assert_str != null then
				var i = v.expr(explain_assert_str)
				if i isa MutableInstance then
					var res = v.send(v.force_get_primitive_method("to_cstring", i.mtype), [i])
					if res != null then
						var val = res.val
						if val != null then
							print_error "Runtime assert: {val.to_s}"
						end
					end
				end
			end

			var nid = self.n_id
			if nid != null then
				fatal(v, "Assert '{nid.text}' failed")
			else
				fatal(v, "Assert failed")
			end
			exit(1)
		end
	end
end

redef class AOrExpr
	redef fun expr(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return null
		if cond.is_true then return cond
		return v.expr(self.n_expr2)
	end
end

redef class AImpliesExpr
	redef fun expr(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return null
		if not cond.is_true then return v.true_instance
		return v.expr(self.n_expr2)
	end
end

redef class AAndExpr
	redef fun expr(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return null
		if not cond.is_true then return cond
		return v.expr(self.n_expr2)
	end
end

redef class ANotExpr
	redef fun expr(v)
	do
		var cond = v.expr(self.n_expr)
		if cond == null then return null
		return v.bool_instance(not cond.is_true)
	end
end

redef class AOrElseExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr)
		if i == null then return null
		if i != v.null_instance then return i
		return v.expr(self.n_expr2)
	end
end

redef class AIntegerExpr
	redef fun expr(v)
	do
		if value isa Int then return v.int_instance(value.as(Int))
		if value isa Byte then return v.byte_instance(value.as(Byte))
		if value isa Int8 then return v.int8_instance(value.as(Int8))
		if value isa Int16 then return v.int16_instance(value.as(Int16))
		if value isa UInt16 then return v.uint16_instance(value.as(UInt16))
		if value isa Int32 then return v.int32_instance(value.as(Int32))
		if value isa UInt32 then return v.uint32_instance(value.as(UInt32))
		return null
	end
end

redef class AFloatExpr
	redef fun expr(v)
	do
		return v.float_instance(self.value.as(not null))
	end
end

redef class ACharExpr
	redef fun expr(v)
	do
		if is_code_point then
			return v.int_instance(self.value.as(not null).code_point)
		end
		return v.char_instance(self.value.as(not null))
	end
end

redef class AArrayExpr
	redef fun expr(v)
	do
		var val = new Array[Instance]
		var old_comprehension = v.frame.comprehension
		v.frame.comprehension = val
		for nexpr in self.n_exprs do
			if nexpr isa AForExpr then
				v.stmt(nexpr)
			else
				var i = v.expr(nexpr)
				if i == null then return null
				val.add(i)
			end
		end
		v.frame.comprehension = old_comprehension
		var mtype = v.unanchor_type(self.mtype.as(not null)).as(MClassType)
		var elttype = mtype.arguments.first
		return v.array_instance(val, elttype)
	end
end

redef class AugmentedStringFormExpr
	# Factorize the making of a `Regex` object from a literal prefixed string
	fun make_re(v: NaiveInterpreter, rs: Instance): nullable Instance do
		var tore = to_re
		assert tore != null
		var res = v.callsite(tore, [rs])
		if res == null then
			print "Cannot call property `to_re` on {self}"
			abort
		end
		for j in suffix.chars do
			if j == 'i' then
				var prop = ignore_case
				assert prop != null
				v.callsite(prop, [res, v.bool_instance(true)])
				continue
			end
			if j == 'm' then
				var prop = newline
				assert prop != null
				v.callsite(prop, [res, v.bool_instance(true)])
				continue
			end
			if j == 'b' then
				var prop = extended
				assert prop != null
				v.callsite(prop, [res, v.bool_instance(false)])
				continue
			end
			# Should not happen, this needs to be updated
			# along with the addition of new suffixes
			abort
		end
		return res
	end
end

redef class AStringFormExpr
	redef fun expr(v) do return v.string_instance(value)
end

redef class AStringExpr
	redef fun expr(v) do
		var s = v.string_instance(value)
		if is_string then return s
		if is_bytestring then
			var ns = v.c_string_instance_from_ns(bytes.items, bytes.length)
			var ln = v.int_instance(bytes.length)
			var prop = to_bytes_with_copy
			assert prop != null
			var res = v.callsite(prop, [ns, ln])
			if res == null then
				print "Cannot call property `to_bytes` on {self}"
				abort
			end
			s = res
		else if is_re then
			var res = make_re(v, s)
			assert res != null
			s = res
		else
			print "Unimplemented prefix or suffix for {self}"
			abort
		end
		return s
	end
end

redef class ASuperstringExpr
	redef fun expr(v)
	do
		var array = new Array[Instance]
		for nexpr in n_exprs do
			var i = v.expr(nexpr)
			if i == null then return null
			array.add(i)
		end
		var i = v.array_instance(array, v.mainmodule.object_type)
		var res = v.send(v.force_get_primitive_method("plain_to_s", i.mtype), [i])
		assert res != null
		if is_re then res = make_re(v, res)
		return res
	end
end

redef class ACrangeExpr
	redef fun expr(v)
	do
		var e1 = v.expr(self.n_expr)
		if e1 == null then return null
		var e2 = v.expr(self.n_expr2)
		if e2 == null then return null
		var mtype = v.unanchor_type(self.mtype.as(not null))
		var res = new MutableInstance(mtype)
		v.init_instance(res)
		v.callsite(init_callsite, [res, e1, e2])
		return res
	end
end

redef class AOrangeExpr
	redef fun expr(v)
	do
		var e1 = v.expr(self.n_expr)
		if e1 == null then return null
		var e2 = v.expr(self.n_expr2)
		if e2 == null then return null
		var mtype = v.unanchor_type(self.mtype.as(not null))
		var res = new MutableInstance(mtype)
		v.init_instance(res)
		v.callsite(init_callsite, [res, e1, e2])
		return res
	end
end

redef class ATrueExpr
	redef fun expr(v)
	do
		return v.bool_instance(true)
	end
end

redef class AFalseExpr
	redef fun expr(v)
	do
		return v.bool_instance(false)
	end
end

redef class ANullExpr
	redef fun expr(v)
	do
		return v.null_instance
	end
end

redef class AIsaExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr)
		if i == null then return null
		var mtype = v.unanchor_type(self.cast_type.as(not null))
		return v.bool_instance(v.is_subtype(i.mtype, mtype))
	end
end

redef class AAsCastExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr)
		if i == null then return null
		var mtype = self.mtype.as(not null)
		var amtype = v.unanchor_type(mtype)
		if not v.is_subtype(i.mtype, amtype) then
			fatal(v, "Cast failed. Expected `{amtype}`, got `{i.mtype}`")
		end
		return i
	end
end

redef class AAsNotnullExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr)
		if i == null then return null
		if i.is_null then
			fatal(v, "Cast failed")
		end
		return i
	end
end

redef class AParExpr
	redef fun expr(v)
	do
		return v.expr(self.n_expr)
	end
end

redef class AOnceExpr
	redef fun expr(v)
	do
		if v.onces.has_key(self) then
			return v.onces[self]
		else
			var res = v.expr(self.n_expr)
			if res == null then return null
			v.onces[self] = res
			return res
		end
	end
end

redef class ASendExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return null

		# Safe call shortcut if recv is null
		if is_safe and recv.is_null then
			return recv
		end

		var args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, self.raw_arguments)
		if args == null then return null
		var res = v.callsite(callsite, args)
		return res
	end
end

redef class ACallrefExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return null
		var mtype = self.mtype
		assert mtype != null
		# In case we are in generic class where formal parameter can not
		# be resolved.
		var mtype2 = v.unanchor_type(mtype)
		var inst = new CallrefInstance(mtype2, recv, callsite.as(not null))
		return inst
	end
end

redef class ASendReassignFormExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return
		var args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, self.raw_arguments)
		if args == null then return
		var value = v.expr(self.n_value)
		if value == null then return

		var read = v.callsite(callsite, args)
		assert read != null

		var write = v.callsite(reassign_callsite, [read, value])
		assert write != null

		args.add(write)

		v.callsite(write_callsite, args)
	end
end

redef class ASuperExpr
	redef fun expr(v)
	do
		var recv = v.frame.arguments.first

		var callsite = self.callsite
		if callsite != null then
			var args
			if self.n_args.n_exprs.is_empty then
				# Add automatic arguments for the super init call
				args = [recv]
				for i in [0..callsite.msignature.arity[ do
					args.add(v.frame.arguments[i+1])
				end
			else
				args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, self.n_args.n_exprs)
				if args == null then return null
			end

			# Super init call
			var res = v.callsite(callsite, args)
			return res
		end

		# Standard call-next-method
		var mpropdef = self.mpropdef
		mpropdef = mpropdef.lookup_next_definition(v.mainmodule, recv.mtype)

		var args
		if self.n_args.n_exprs.is_empty then
			args = v.frame.arguments
		else
			args = v.varargize(mpropdef, signaturemap, recv, self.n_args.n_exprs)
			if args == null then return null
		end

		var res = v.call(mpropdef, args)
		return res
	end
end

redef class ANewExpr
	redef fun expr(v)
	do
		var mtype = v.unanchor_type(self.recvtype.as(not null))
		var recv: Instance = new MutableInstance(mtype)
		v.init_instance(recv)
		var callsite = self.callsite
		if callsite == null then return recv

		var args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, self.n_args.n_exprs)
		if args == null then return null
		var res2 = v.callsite(callsite, args)
		if res2 != null then
			#self.debug("got {res2} from {mproperty}. drop {recv}")
			return res2
		end
		return recv
	end
end

redef class AAttrExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return null
		if recv.is_null then fatal(v, "Receiver is null")
		var mproperty = self.mproperty.as(not null)
		return v.read_attribute(mproperty, recv)
	end
end

redef class AAttrAssignExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return
		if recv.is_null then fatal(v, "Receiver is null")
		var i = v.expr(self.n_value)
		if i == null then return
		var mproperty = self.mproperty.as(not null)
		v.write_attribute(mproperty, recv, i)
	end
end

redef class AAttrReassignExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return
		if recv.is_null then fatal(v, "Receiver is null")
		var value = v.expr(self.n_value)
		if value == null then return
		var mproperty = self.mproperty.as(not null)
		var attr = v.read_attribute(mproperty, recv)
		var res = v.callsite(reassign_callsite, [attr, value])
		assert res != null
		v.write_attribute(mproperty, recv, res)
	end
end

redef class AIssetAttrExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return null
		if recv.is_null then fatal(v, "Receiver is null")
		var mproperty = self.mproperty.as(not null)
		return v.bool_instance(v.isset_attribute(mproperty, recv))
	end
end

redef class AVarargExpr
	redef fun expr(v)
	do
		return v.expr(self.n_expr)
	end
end

redef class ASafeExpr
	redef fun expr(v)
	do
		return v.expr(self.n_expr)
	end
end

redef class ANamedargExpr
	redef fun expr(v)
	do
		return v.expr(self.n_expr)
	end
end

redef class ADebugTypeExpr
	redef fun stmt(v)
	do
		# do nothing
	end
end
