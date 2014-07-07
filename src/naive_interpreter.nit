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
import typing
import auto_super_init
import frontend
import common_ffi

redef class ToolContext
	# --discover-call-trace
	var opt_discover_call_trace: OptionBool = new OptionBool("Trace calls of the first invocation of a method", "--discover-call-trace")

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
		init_naive_interpreter(interpreter, mainmodule)

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)
	end

	private fun init_naive_interpreter(interpreter: NaiveInterpreter, mainmodule: MModule) do
		var sys_type = mainmodule.sys_type
		if sys_type == null then return # no class Sys
		var mainobj = new MutableInstance(sys_type)
		interpreter.mainobj = mainobj
		interpreter.init_instance(mainobj)
		var initprop = mainmodule.try_get_primitive_method("init", sys_type.mclass)
		if initprop != null then
			interpreter.send(initprop, [mainobj])
		end
		var mainprop = mainmodule.try_get_primitive_method("main", sys_type.mclass)
		if mainprop != null then
			interpreter.send(mainprop, [mainobj])
		end
	end
end

# The visitor that interprets the Nit Program by walking on the AST
private class NaiveInterpreter
	# The modelbuilder that know the AST and its associations with the model
	var modelbuilder: ModelBuilder

	# The main moduleof the program (used to lookup methoda
	var mainmodule: MModule

	# The command line arguments of the interpreted program
	# arguments.first is the program name
	# arguments[1] is the first argument
	var arguments: Array[String]

	var mainobj: nullable Instance

	init(modelbuilder: ModelBuilder, mainmodule: MModule, arguments: Array[String])
	do
		self.modelbuilder = modelbuilder
		self.mainmodule = mainmodule
		self.arguments = arguments
		self.true_instance = new PrimitiveInstance[Bool](mainmodule.bool_type, true)
		self.false_instance = new PrimitiveInstance[Bool](mainmodule.bool_type, false)
		self.null_instance = new MutableInstance(mainmodule.model.null_type)
	end

	# Subtype test in the context of the mainmodule
	fun is_subtype(sub, sup: MType): Bool
	do
		return sub.is_subtype(self.mainmodule, self.frame.arguments.first.mtype.as(MClassType), sup)
	end

	fun force_get_primitive_method(name: String, recv: MType): MMethod
	do
		assert recv isa MClassType
		return self.modelbuilder.force_get_primitive_method(self.frame.current_node, name, recv.mclass, self.mainmodule)
	end

	# Is a return executed?
	# Set this mark to skip the evaluation until the end of the specified method frame
	var returnmark: nullable Frame = null

	# Is a break executed?
	# Set this mark to skip the evaluation until a labeled statement catch it with `is_break`
	var breakmark: nullable EscapeMark = null

	# Is a continue executed?
	# Set this mark to skip the evaluation until a labeled statement catch it with `is_continue`
	var continuemark: nullable EscapeMark = null

	# Is a return or a break or a continue executed?
	# Use this function to know if you must skip the evaluation of statements
	fun is_escaping: Bool do return returnmark != null or breakmark != null or continuemark != null

	# The value associated with the current return/break/continue, if any.
	# Set the value when you set a escapemark.
	# Read the value when you catch a mark or reach the end of a method
	var escapevalue: nullable Instance = null

	# If there is a break and is associated with `escapemark`, then return true an clear the mark.
	# If there is no break or if `escapemark` is null then return false.
	# Use this function to catch a potential break.
	fun is_break(escapemark: nullable EscapeMark): Bool
	do
		if escapemark != null and self.breakmark == escapemark then
			self.breakmark = null
			return true
		else
			return false
		end
	end

	# If there is a continue and is associated with `escapemark`, then return true an clear the mark.
	# If there is no continue or if `escapemark` is null then return false.
	# Use this function to catch a potential continue.
	fun is_continue(escapemark: nullable EscapeMark): Bool
	do
		if escapemark != null and self.continuemark == escapemark then
			self.continuemark = null
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
		if implicit_cast_to != null then
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
		if n != null then
			var frame = self.frame
			var old = frame.current_node
			frame.current_node = n
			#n.debug("Execute stmt")
			n.stmt(self)
			frame.current_node = old
		end
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
		var ic = self.mainmodule.get_primitive_class("Int")
		return new PrimitiveInstance[Int](ic.mclass_type, val)
	end

	# Return the char instance associated with `val`.
	fun char_instance(val: Char): Instance
	do
		var ic = self.mainmodule.get_primitive_class("Char")
		return new PrimitiveInstance[Char](ic.mclass_type, val)
	end

	# Return the float instance associated with `val`.
	fun float_instance(val: Float): Instance
	do
		var ic = self.mainmodule.get_primitive_class("Float")
		return new PrimitiveInstance[Float](ic.mclass_type, val)
	end

	# The unique intance of the `true` value.
	var true_instance: Instance

	# The unique intance of the `false` value.
	var false_instance: Instance

	# The unique intance of the `null` value.
	var null_instance: Instance

	# Return a new array made of `values`.
	# The dynamic type of the result is Array[elttype].
	fun array_instance(values: Array[Instance], elttype: MType): Instance
	do
		assert not elttype.need_anchor
		var nat = new PrimitiveInstance[Array[Instance]](self.mainmodule.get_primitive_class("NativeArray").get_mtype([elttype]), values)
		var mtype = self.mainmodule.get_primitive_class("Array").get_mtype([elttype])
		var res = new MutableInstance(mtype)
		self.init_instance(res)
		self.send(self.force_get_primitive_method("with_native", mtype), [res, nat, self.int_instance(values.length)])
		return res
	end

	# Return a new native string initialized with `txt`
	fun native_string_instance(txt: String): Instance
	do
		var val = new FlatBuffer.from(txt)
		val.add('\0')
		var ic = self.mainmodule.get_primitive_class("NativeString")
		return new PrimitiveInstance[Buffer](ic.mclass_type, val)
	end

	# The current frame used to store local variables of the current method executed
	fun frame: Frame do return frames.first

	# The stack of all frames. The first one is the current one.
	var frames: List[Frame] = new List[Frame]

	# Return a stack stace. One line per function
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

	# Exit the program with a message
	fun fatal(message: String)
	do
		if frames.is_empty then
			print message
		else
			self.frame.current_node.fatal(self, message)
		end
		exit(1)
	end

	# Debug on the current node
	fun debug(message: String)
	do
		if frames.is_empty then
			print message
		else
			self.frame.current_node.debug(message)
		end
	end

	# Store known method, used to trace methods as thez are reached
	var discover_call_trace: Set[MMethodDef] = new HashSet[MMethodDef]

	# Common code for calls to injected methods and normal methods
	fun call_commons(mpropdef: MMethodDef, args: Array[Instance]): Array[Instance]
	do
		var vararg_rank = mpropdef.msignature.vararg_rank
		if vararg_rank >= 0 then
			assert args.length >= mpropdef.msignature.arity + 1 # because of self
			var rawargs = args
			args = new Array[Instance]

			args.add(rawargs.first) # recv

			for i in [0..vararg_rank[ do
				args.add(rawargs[i+1])
			end

			var vararg_lastrank = vararg_rank + rawargs.length-1-mpropdef.msignature.arity
			var vararg = new Array[Instance]
			for i in [vararg_rank..vararg_lastrank] do
				vararg.add(rawargs[i+1])
			end
			# FIXME: its it to late to determine the vararg type, this should have been done during a previous analysis
			var elttype = mpropdef.msignature.mparameters[vararg_rank].mtype.anchor_to(self.mainmodule, args.first.mtype.as(MClassType))
			args.add(self.array_instance(vararg, elttype))

			for i in [vararg_lastrank+1..rawargs.length-1[ do
				args.add(rawargs[i+1])
			end
		end
		return args
	end

	# Execute `mpropdef` for a `args` (where `args[0]` is the receiver).
	# Return a falue if `mpropdef` is a function, or null if it is a procedure.
	# The call is direct/static. There is no message-seding/late-binding.
	fun call(mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		args = call_commons(mpropdef, args)
		return call_without_varargs(mpropdef, args)
	end

	# Common code to call and this function
	#
	# Call only executes the variadic part, this avoids
	# double encapsulation of variadic parameters into an Array
	fun call_without_varargs(mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		if self.modelbuilder.toolcontext.opt_discover_call_trace.value and not self.discover_call_trace.has(mpropdef) then
			self.discover_call_trace.add mpropdef
			self.debug("Discovered {mpropdef}")
		end
		assert args.length == mpropdef.msignature.arity + 1 else debug("Invalid arity for {mpropdef}. {args.length} arguments given.")

		# Look for the AST node that implements the property
		var mproperty = mpropdef.mproperty
		if self.modelbuilder.mpropdef2npropdef.has_key(mpropdef) then
			var npropdef = self.modelbuilder.mpropdef2npropdef[mpropdef]
			self.parameter_check(npropdef, mpropdef, args)
			return npropdef.call(self, mpropdef, args)
		else if mproperty.name == "init" then
			var nclassdef = self.modelbuilder.mclassdef2nclassdef[mpropdef.mclassdef]
			self.parameter_check(nclassdef, mpropdef, args)
			return nclassdef.call(self, mpropdef, args)
		else
			fatal("Fatal Error: method {mpropdef} not found in the AST")
			abort
		end
	end

	# Generate type checks in the C code to check covariant parameters
	fun parameter_check(node: ANode, mpropdef: MMethodDef, args: Array[Instance])
	do
		var msignature = mpropdef.msignature
		for i in [0..msignature.arity[ do
			# skip test for vararg since the array is instantiated with the correct polymorphic type
			if msignature.vararg_rank == i then continue

			# skip if the cast is not required
			var origmtype =  mpropdef.mproperty.intro.msignature.mparameters[i].mtype
			if not origmtype.need_anchor then continue

			# get the parameter type
			var mtype = msignature.mparameters[i].mtype
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
			if mproperty.name == "==" then
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
	# Use this method, instead of `send` to execute and control the aditionnal behavior of the call-sites
	fun callsite(callsite: nullable CallSite, arguments: Array[Instance]): nullable Instance
	do
		return send(callsite.mproperty, arguments)
	end

	# Execute `mproperty` for a `args` (where `args[0]` is the receiver).
	# Return a falue if `mproperty` is a function, or null if it is a procedure.
	# The call is polimotphic. There is a message-seding/late-bindng according to te receiver (args[0]).
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

	# Collect attributes of a type in the order of their init
	fun collect_attr_propdef(mtype: MType): Array[AAttrPropdef]
	do
		var cache = self.collect_attr_propdef_cache
		if cache.has_key(mtype) then return cache[mtype]

		var res = new Array[AAttrPropdef]
		var cds = mtype.collect_mclassdefs(self.mainmodule).to_a
		self.mainmodule.linearize_mclassdefs(cds)
		for cd in cds do
			var n = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in n.n_propdefs do
				if npropdef isa AAttrPropdef then
					res.add(npropdef)
				end
			end
		end

		cache[mtype] = res
		return res
	end

	var collect_attr_propdef_cache = new HashMap[MType, Array[AAttrPropdef]]

	# Fill the initial values of the newly created instance `recv`.
	# `recv.mtype` is used to know what must be filled.
	fun init_instance(recv: Instance)
	do
		for npropdef in collect_attr_propdef(recv.mtype) do
			npropdef.init_expr(self, recv)
		end
	end

	# This function determine the correct type according the reciever of the current definition (self).
	fun unanchor_type(mtype: MType): MType
	do
		return mtype.anchor_to(self.mainmodule, self.frame.arguments.first.mtype.as(MClassType))
	end
end

# An instance represents a value of the executed program.
abstract class Instance
	# The dynamic type of the instance
	# ASSERT: not self.mtype.is_anchored
	var mtype: MType

	# return true if the instance is the true value.
	# return false if the instance is the true value.
	# else aborts
	fun is_true: Bool do abort

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

	# The real value encapsulated if the instance is primitive.
	# Else aborts.
	fun val: Object do abort
end

# A instance with attribute (standards objects)
class MutableInstance
	super Instance

	# The values of the attributes
	var attributes: Map[MAttribute, Instance] = new HashMap[MAttribute, Instance]
end

# Special instance to handle primitives values (int, bool, etc.)
# The trick it just to encapsulate the <<real>> value
class PrimitiveInstance[E: Object]
	super Instance

	# The real value encapsulated
	redef var val: E

	init(mtype: MType, val: E)
	do
		super(mtype)
		self.val = val
	end

	redef fun is_true
	do
		if val == true then return true
		if val == false then return false
		abort
	end

	redef fun ==(o)
	do
		if not o isa PrimitiveInstance[Object] then return false
		return self.val == o.val
	end

	redef fun eq_is(o)
	do
		if not o isa PrimitiveInstance[Object] then return false
		return self.val.is_same_instance(o.val)
	end

	redef fun to_s do return "{mtype}#{val.object_id}({val})"

	redef fun to_i do return val.as(Int)

	redef fun to_f do return val.as(Float)
end

# Information about local variables in a running method
private class Frame
	# The current visited node
	# The node is stored by frame to keep a stack trace
	var current_node: ANode
	# The executed property.
	# A Method in case of a call, an attribute in case of a default initialization.
	var mpropdef: MPropDef
	# Arguments of the method (the first is te receiver
	var arguments: Array[Instance]
	# Mapping betwen a variable an the current value
	var map: Map[Variable, Instance] = new HashMap[Variable, Instance]
end

redef class ANode
	# Aborts the program with a message
	# `v` is used to know if a colored message is displayed or not
	private fun fatal(v: NaiveInterpreter, message: String)
	do
		if v.modelbuilder.toolcontext.opt_no_color.value == true then
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
		var f = new Frame(self, self.mpropdef.as(not null), args)
		var res = call_commons(v, mpropdef, args, f)
		v.frames.shift
		if v.returnmark == f then
			v.returnmark = null
			res = v.escapevalue
			v.escapevalue = null
			return res
		end
		return res
	end

	private fun call_commons(v: NaiveInterpreter, mpropdef: MMethodDef, arguments: Array[Instance], f: Frame): nullable Instance
	do
		for i in [0..mpropdef.msignature.arity[ do
			var variable = self.n_signature.n_params[i].variable
			assert variable != null
			f.map[variable] = arguments[i+1]
		end

		v.frames.unshift(f)

		if mpropdef.is_abstract then
			v.fatal("Abstract method `{mpropdef.mproperty.name}` called on `{arguments.first.mtype}`")
			abort
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
				v.callsite(auto_super_init, args)
			end
		end

		if n_block != null then
			v.stmt(self.n_block)
			return null
		else
			return intern_call(v, mpropdef, arguments)
		end
	end

	private fun intern_call(v: NaiveInterpreter, mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		var pname = mpropdef.mproperty.name
		var cname = mpropdef.mclassdef.mclass.name
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
			return v.native_string_instance(txt)
		else if pname == "==" then
			# == is correclt redefined for instances
			return v.bool_instance(args[0] == args[1])
		else if pname == "!=" then
			return v.bool_instance(args[0] != args[1])
		else if pname == "is_same_type" then
			return v.bool_instance(args[0].mtype == args[1].mtype)
		else if pname == "is_same_instance" then
			return v.bool_instance(args[1] != null and args[0].eq_is(args[1]))
		else if pname == "exit" then
			exit(args[1].to_i)
			abort
		else if pname == "sys" then
			return v.mainobj
		else if cname == "Int" then
			var recvval = args[0].to_i
			if pname == "unary -" then
				return v.int_instance(-args[0].to_i)
			else if pname == "+" then
				return v.int_instance(args[0].to_i + args[1].to_i)
			else if pname == "-" then
				return v.int_instance(args[0].to_i - args[1].to_i)
			else if pname == "*" then
				return v.int_instance(args[0].to_i * args[1].to_i)
			else if pname == "%" then
				return v.int_instance(args[0].to_i % args[1].to_i)
			else if pname == "/" then
				return v.int_instance(args[0].to_i / args[1].to_i)
			else if pname == "<" then
				return v.bool_instance(args[0].to_i < args[1].to_i)
			else if pname == ">" then
				return v.bool_instance(args[0].to_i > args[1].to_i)
			else if pname == "<=" then
				return v.bool_instance(args[0].to_i <= args[1].to_i)
			else if pname == ">=" then
				return v.bool_instance(args[0].to_i >= args[1].to_i)
			else if pname == "<=>" then
				return v.int_instance(args[0].to_i <=> args[1].to_i)
			else if pname == "ascii" then
				return v.char_instance(args[0].to_i.ascii)
			else if pname == "to_f" then
				return v.float_instance(args[0].to_i.to_f)
			else if pname == "lshift" then
				return v.int_instance(args[0].to_i.lshift(args[1].to_i))
			else if pname == "rshift" then
				return v.int_instance(args[0].to_i.rshift(args[1].to_i))
			else if pname == "rand" then
				var res = recvval.rand
				return v.int_instance(res)
			else if pname == "bin_and" then
				return v.int_instance(args[0].to_i.bin_and(args[1].to_i))
			else if pname == "bin_or" then
				return v.int_instance(args[0].to_i.bin_or(args[1].to_i))
			else if pname == "bin_xor" then
				return v.int_instance(args[0].to_i.bin_xor(args[1].to_i))
			else if pname == "native_int_to_s" then
				return v.native_string_instance(recvval.to_s)
			else if pname == "strerror_ext" then
				return v.native_string_instance(recvval.strerror)
			end
		else if cname == "Char" then
			var recv = args[0].val.as(Char)
			if pname == "ascii" then
				return v.int_instance(recv.ascii)
			else if pname == "successor" then
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
			else if pname == "rand" then
				return v.float_instance(args[0].to_f.rand)
			else if pname == "abs" then
				return v.float_instance(args[0].to_f.abs)
			else if pname == "hypot_with" then
				return v.float_instance(args[0].to_f.hypot_with(args[1].to_f))
			else if pname == "is_nan" then
				return v.bool_instance(args[0].to_f.is_nan)
			else if pname == "is_inf_extern" then
				return v.bool_instance(args[0].to_f.is_inf != 0)
			end
		else if cname == "NativeString" then
			if pname == "init" then
				return v.native_string_instance("!" * args[1].to_i)
			end
			var recvval = args.first.val.as(Buffer)
			if pname == "[]" then
				var arg1 = args[1].to_i
				if arg1 >= recvval.length or arg1 < 0 then
					debug("Illegal access on {recvval} for element {arg1}/{recvval.length}")
				end
				return v.char_instance(recvval.chars[arg1])
			else if pname == "[]=" then
				var arg1 = args[1].to_i
				if arg1 >= recvval.length or arg1 < 0 then
					debug("Illegal access on {recvval} for element {arg1}/{recvval.length}")
				end
				recvval.chars[arg1] = args[2].val.as(Char)
				return null
			else if pname == "copy_to" then
				# sig= copy_to(dest: NativeString, length: Int, from: Int, to: Int)
				var destval = args[1].val.as(FlatBuffer)
				var lenval = args[2].to_i
				var fromval = args[3].to_i
				var toval = args[4].to_i
				if fromval < 0 then
					debug("Illegal access on {recvval} for element {fromval}/{recvval.length}")
				end
				if fromval + lenval >= recvval.length then
					debug("Illegal access on {recvval} for element {fromval}+{lenval}/{recvval.length}")
				end
				if toval < 0 then
					debug("Illegal access on {destval} for element {toval}/{destval.length}")
				end
				if toval + lenval >= destval.length then
					debug("Illegal access on {destval} for element {toval}+{lenval}/{destval.length}")
				end
				recvval.as(FlatBuffer).copy(fromval, lenval, destval, toval)
				return null
			else if pname == "atoi" then
				return v.int_instance(recvval.to_i)
			else if pname == "file_exists" then
				return v.bool_instance(recvval.to_s.file_exists)
			else if pname == "file_mkdir" then
				recvval.to_s.mkdir
				return null
			else if pname == "file_chdir" then
				recvval.to_s.chdir
				return null
			else if pname == "file_realpath" then
				return v.native_string_instance(recvval.to_s.realpath)
			else if pname == "get_environ" then
				var txt = recvval.to_s.environ
				return v.native_string_instance(txt)
			else if pname == "system" then
				var res = sys.system(recvval.to_s)
				return v.int_instance(res)
			else if pname == "atof" then
				return v.float_instance(recvval.to_f)
			end
		else if pname == "calloc_string" then
			return v.native_string_instance("!" * args[1].to_i)
		else if cname == "NativeArray" then
			if pname == "init" then
				var val = new Array[Instance].filled_with(v.null_instance, args[1].to_i)
				return new PrimitiveInstance[Array[Instance]](args[0].mtype, val)
			end
			var recvval = args.first.val.as(Array[Instance])
			if pname == "[]" then
				if args[1].to_i >= recvval.length or args[1].to_i < 0 then
					debug("Illegal access on {recvval} for element {args[1].to_i}/{recvval.length}")
				end
				return recvval[args[1].to_i]
			else if pname == "[]=" then
				recvval[args[1].to_i] = args[2]
				return null
			else if pname == "length" then
				return v.int_instance(recvval.length)
			else if pname == "copy_to" then
				recvval.copy(0, args[2].to_i, args[1].val.as(Array[Instance]), 0)
				return null
			end
		else if cname == "NativeFile" then
			if pname == "native_stdout" then
				return new PrimitiveInstance[OStream](mpropdef.mclassdef.mclass.mclass_type, sys.stdout)
			else if pname == "native_stdin" then
				return new PrimitiveInstance[IStream](mpropdef.mclassdef.mclass.mclass_type, sys.stdin)
			else if pname == "native_stderr" then
				return new PrimitiveInstance[OStream](mpropdef.mclassdef.mclass.mclass_type, sys.stderr)
			else if pname == "io_open_read" then
				var a1 = args[1].val.as(Buffer)
				return new PrimitiveInstance[IStream](mpropdef.mclassdef.mclass.mclass_type, new IFStream.open(a1.to_s))
			else if pname == "io_open_write" then
				var a1 = args[1].val.as(Buffer)
				return new PrimitiveInstance[OStream](mpropdef.mclassdef.mclass.mclass_type, new OFStream.open(a1.to_s))
			end
			var recvval = args.first.val
			if pname == "io_write" then
				var a1 = args[1].val.as(Buffer)
				recvval.as(OStream).write(a1.substring(0, args[2].to_i).to_s)
				return args[2]
			else if pname == "io_read" then
				var str = recvval.as(IStream).read(args[2].to_i)
				var a1 = args[1].val.as(Buffer)
				new FlatBuffer.from(str).copy(0, str.length, a1.as(FlatBuffer), 0)
				return v.int_instance(str.length)
			else if pname == "io_close" then
				recvval.as(IOS).close
				return v.int_instance(0)
			else if pname == "address_is_null" then
				return v.false_instance
			end
		else if pname == "calloc_array" then
			var recvtype = args.first.mtype.as(MClassType)
			var mtype: MType
			mtype = recvtype.supertype_to(v.mainmodule, recvtype, v.mainmodule.get_primitive_class("ArrayCapable"))
			mtype = mtype.arguments.first
			var val = new Array[Instance].filled_with(v.null_instance, args[1].to_i)
			return new PrimitiveInstance[Array[Instance]](v.mainmodule.get_primitive_class("NativeArray").get_mtype([mtype]), val)
		else if pname == "native_argc" then
			return v.int_instance(v.arguments.length)
		else if pname == "native_argv" then
			var txt = v.arguments[args[1].to_i]
			return v.native_string_instance(txt)
		else if pname == "native_argc" then
			return v.int_instance(v.arguments.length)
		else if pname == "native_argv" then
			var txt = v.arguments[args[1].to_i]
			return v.native_string_instance(txt)
		else if pname == "get_time" then
			return v.int_instance(get_time)
		else if pname == "srand_from" then
			srand_from(args[1].to_i)
			return null
		else if pname == "atan2" then
			return v.float_instance(atan2(args[1].to_f, args[2].to_f))
		else if pname == "pi" then
			return v.float_instance(pi)
		else if pname == "lexer_goto" then
			return v.int_instance(lexer_goto(args[1].to_i, args[2].to_i))
		else if pname == "lexer_accept" then
			return v.int_instance(lexer_accept(args[1].to_i))
		else if pname == "parser_goto" then
			return v.int_instance(parser_goto(args[1].to_i, args[2].to_i))
		else if pname == "parser_action" then
			return v.int_instance(parser_action(args[1].to_i, args[2].to_i))
		else if pname == "file_getcwd" then
			return v.native_string_instance(getcwd)
		else if pname == "errno" then
			return v.int_instance(sys.errno)
		else if pname == "address_is_null" then
			return v.false_instance
		end
		if mpropdef.is_intern then
			fatal(v, "NOT YET IMPLEMENTED intern {mpropdef}")
		else if mpropdef.is_extern then
			fatal(v, "NOT YET IMPLEMENTED extern {mpropdef}")
		else
			fatal(v, "NOT YET IMPLEMENTED <wat?> {mpropdef}")
		end
		abort
	end
end

redef class AbstractArray[E]
	fun copy(start: Int, len: Int, dest: AbstractArray[E], new_start: Int)
	do
		self.copy_to(start, len, dest, new_start)
	end
end

redef class AAttrPropdef
	redef fun call(v, mpropdef, args)
	do
		var recv = args.first
		assert recv isa MutableInstance
		var attr = self.mpropdef.mproperty
		if args.length == 1 then
			return v.read_attribute(attr, recv)
		else
			assert args.length == 2
			recv.attributes[attr] = args[1]
			return null
		end
	end

	# Evaluate and set the default value of the attribute in `recv`
	private fun init_expr(v: NaiveInterpreter, recv: Instance)
	do
		assert recv isa MutableInstance
		var nexpr = self.n_expr
		if nexpr != null then
			var f = new Frame(self, self.mpropdef.as(not null), [recv])
			v.frames.unshift(f)
			var val = v.expr(nexpr)
			assert val != null
			v.frames.shift
			assert not v.is_escaping
			recv.attributes[self.mpropdef.mproperty] = val
			return
		end
		var mtype = self.mpropdef.static_mtype.as(not null)
		mtype = mtype.anchor_to(v.mainmodule, recv.mtype.as(MClassType))
		if mtype isa MNullableType then
			recv.attributes[self.mpropdef.mproperty] = v.null_instance
		end
	end
end

redef class AClassdef
	# Execute an implicit `mpropdef` associated with the current node.
	private fun call(v: NaiveInterpreter, mpropdef: MMethodDef, args: Array[Instance]): nullable Instance
	do
		var super_inits = self.super_inits
		if super_inits != null then
			var args_of_super = args
			if args.length > 1 then args_of_super = [args.first]
			for su in super_inits do
				v.send(su, args_of_super)
			end
		end
		var recv = args.first
		assert recv isa MutableInstance
		var i = 1
		# Collect undefined attributes
		for npropdef in self.n_propdefs do
			if npropdef isa AAttrPropdef and npropdef.n_expr == null then
				recv.attributes[npropdef.mpropdef.mproperty] = args[i]
				i += 1
			end
		end
		return null
	end
end

redef class AExpr
	# Evaluate the node as a possible expression.
	# Return a possible value
	# NOTE: Do not call this method directly, but use `v.expr`
	# This method is here to be implemented by subclasses.
	private fun expr(v: NaiveInterpreter): nullable Instance
	do
		fatal(v, "NOT YET IMPLEMENTED expr {class_name}")
		abort
	end

	# Evaluate the node as a statement.
	# NOTE: Do not call this method directly, but use `v.stmt`
	# This method is here to be implemented by subclasses (no need to return something).
	private fun stmt(v: NaiveInterpreter)
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
	redef fun stmt(v)
	do
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne)
			if i == null then return
			v.frame.map[self.variable.as(not null)] = i
		end
	end
end

redef class AVarExpr
	redef fun expr(v)
	do
		return v.frame.map[self.variable.as(not null)]
	end
end

redef class AVarAssignExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_value)
		if i == null then return null
		v.frame.map[self.variable.as(not null)] = i
		return i
	end
end

redef class AVarReassignExpr
	redef fun stmt(v)
	do
		var vari = v.frame.map[self.variable.as(not null)]
		var value = v.expr(self.n_value)
		if value == null then return
		var res = v.callsite(reassign_callsite, [vari, value])
		assert res != null
		v.frame.map[self.variable.as(not null)] = res
	end
end

redef class ASelfExpr
	redef fun expr(v)
	do
		return v.frame.arguments.first
	end
end

redef class AContinueExpr
	redef fun stmt(v)
	do
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne)
			if i == null then return
			v.escapevalue = i
		end
		v.continuemark = self.escapemark
	end
end

redef class ABreakExpr
	redef fun stmt(v)
	do
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne)
			if i == null then return
			v.escapevalue = i
		end
		v.breakmark = self.escapemark
	end
end

redef class AReturnExpr
	redef fun stmt(v)
	do
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne)
			if i == null then return
			v.escapevalue = i
		end
		v.returnmark = v.frame
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
		v.stmt(self.n_block)
		v.is_break(self.escapemark) # Clear the break (if any)
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
			if v.is_break(self.escapemark) then return
			v.is_continue(self.escapemark) # Clear the break
			if v.is_escaping then return
		end
	end
end

redef class ALoopExpr
	redef fun stmt(v)
	do
		loop
			v.stmt(self.n_block)
			if v.is_break(self.escapemark) then return
			v.is_continue(self.escapemark) # Clear the break
			if v.is_escaping then return
		end
	end
end

redef class AForExpr
	redef fun stmt(v)
	do
		var col = v.expr(self.n_expr)
		if col == null then return
		if col.mtype isa MNullType then fatal(v, "Receiver is null")

		#self.debug("col {col}")
		var iter = v.callsite(method_iterator, [col]).as(not null)
		#self.debug("iter {iter}")
		loop
			var isok = v.callsite(method_is_ok, [iter]).as(not null)
			if not isok.is_true then return
			if self.variables.length == 1 then
				var item = v.callsite(method_item, [iter]).as(not null)
				#self.debug("item {item}")
				v.frame.map[self.variables.first] = item
			else if self.variables.length == 2 then
				var key = v.callsite(method_key, [iter]).as(not null)
				v.frame.map[self.variables[0]] = key
				var item = v.callsite(method_item, [iter]).as(not null)
				v.frame.map[self.variables[1]] = item
			else
				abort
			end
			v.stmt(self.n_block)
			if v.is_break(self.escapemark) then return
			v.is_continue(self.escapemark) # Clear the break
			if v.is_escaping then return
			v.callsite(method_next, [iter])
		end
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

redef class AIntExpr
	redef fun expr(v)
	do
		return v.int_instance(self.value.as(not null))
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
		return v.char_instance(self.value.as(not null))
	end
end

redef class AArrayExpr
	redef fun expr(v)
	do
		var val = new Array[Instance]
		for nexpr in self.n_exprs.n_exprs do
			var i = v.expr(nexpr)
			if i == null then return null
			val.add(i)
		end
		var mtype = v.unanchor_type(self.mtype.as(not null)).as(MClassType)
		var elttype = mtype.arguments.first
		return v.array_instance(val, elttype)
	end
end

redef class AStringFormExpr
	redef fun expr(v)
	do
		var txt = self.value.as(not null)
		var nat = v.native_string_instance(txt)
		var res = v.send(v.force_get_primitive_method("to_s", nat.mtype), [nat]).as(not null)
		return res
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
		var i = v.array_instance(array, v.mainmodule.get_primitive_class("Object").mclass_type)
		var res = v.send(v.force_get_primitive_method("to_s", i.mtype), [i])
		assert res != null
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
		var mtype = v.unanchor_type(self.mtype.as(not null))
		if i.mtype isa MNullType then
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
		var args = [recv]
		for a in self.raw_arguments.as(not null) do
			var i = v.expr(a)
			if i == null then return null
			args.add(i)
		end

		var res = v.callsite(callsite, args)
		return res
	end
end

redef class ASendReassignFormExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return
		var args = [recv]
		for a in self.raw_arguments.as(not null) do
			var i = v.expr(a)
			if i == null then return
			args.add(i)
		end
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
		var args = [recv]
		for a in self.n_args.n_exprs do
			var i = v.expr(a)
			if i == null then return null
			args.add(i)
		end

		var callsite = self.callsite
		if callsite != null then
			# Add additionnals arguments for the super init call
			if args.length == 1 then
				for i in [0..callsite.msignature.arity[ do
					args.add(v.frame.arguments[i+1])
				end
			end
			# Super init call
			var res = v.callsite(callsite, args)
			return res
		end

		if args.length == 1 then
			args = v.frame.arguments
		end

		# stantard call-next-method
		var mpropdef = self.mpropdef
		mpropdef = mpropdef.lookup_next_definition(v.mainmodule, recv.mtype)
		var res = v.call_without_varargs(mpropdef, args)
		return res
	end
end

redef class ANewExpr
	redef fun expr(v)
	do
		var mtype = v.unanchor_type(self.mtype.as(not null))
		var recv: Instance = new MutableInstance(mtype)
		v.init_instance(recv)
		var args = [recv]
		for a in self.n_args.n_exprs do
			var i = v.expr(a)
			if i == null then return null
			args.add(i)
		end
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
		if recv.mtype isa MNullType then fatal(v, "Receiver is null")
		var mproperty = self.mproperty.as(not null)
		return v.read_attribute(mproperty, recv)
	end
end

redef class AAttrAssignExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return
		if recv.mtype isa MNullType then fatal(v, "Receiver is null")
		var i = v.expr(self.n_value)
		if i == null then return
		var mproperty = self.mproperty.as(not null)
		assert recv isa MutableInstance
		recv.attributes[mproperty] = i
	end
end

redef class AAttrReassignExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return
		if recv.mtype isa MNullType then fatal(v, "Receiver is null")
		var value = v.expr(self.n_value)
		if value == null then return
		var mproperty = self.mproperty.as(not null)
		var attr = v.read_attribute(mproperty, recv)
		var res = v.callsite(reassign_callsite, [attr, value])
		assert res != null
		assert recv isa MutableInstance
		recv.attributes[mproperty] = res
	end
end

redef class AIssetAttrExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr)
		if recv == null then return null
		if recv.mtype isa MNullType then fatal(v, "Receiver is null")
		var mproperty = self.mproperty.as(not null)
		assert recv isa MutableInstance
		return v.bool_instance(recv.attributes.has_key(mproperty))
	end
end

redef class ADebugTypeExpr
	redef fun stmt(v)
	do
		# do nothing
	end
end
