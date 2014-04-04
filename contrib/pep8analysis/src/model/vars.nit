module vars

import ast

import operands

class Var
end

class RegisterVar
	super Var

	init (register: Char) do self.register = register

	var register: Char

	redef fun to_s do return "r{register}"

	redef fun ==(o) do return o isa RegisterVar and register == o.register
	redef fun hash do return 128 + register.hash
end

class StackVar
	super Var

	init (offset: Int) do self.offset = offset

	var offset: Int

	redef fun ==(o) do return o isa StackVar and offset == o.offset
	redef fun hash do return 512 + offset.hash
end

class MemVar
	super Var

	init (index: Int) do self.index = index

	var index: Int

	# need Object::AnalysisManager
	#redef fun to_s is abstract

	redef fun ==(o) do return o isa MemVar and index == o.index
	redef fun hash do return 1024 + index.hash
end

redef class AInstruction
	fun def_var: nullable Var is abstract
	fun src_var: nullable Var is abstract
end

redef class ABinaryInstruction
	fun mem_var: nullable Var do return n_operand.to_var
end

redef class ALoadInstruction
	redef fun def_var do return new RegisterVar(register)
	redef fun src_var do return n_operand.to_var
end

redef class AStoreInstruction
	redef fun def_var do return n_operand.to_var
	redef fun src_var do return new RegisterVar(register)
end

redef class AInputInstruction
	redef fun def_var do return n_operand.to_var
end

redef class ARegisterSuffixed
	fun reg_var: Var do return new RegisterVar(register)
end

redef class AArithmeticInstruction
end

redef class AOperand
	fun to_var: nullable Var is abstract
end

redef class AImmediateOperand
	redef fun to_var do return null
end

redef class AAnyOperand
	fun addressing_mode: String do return n_id.text
	redef fun to_var
	do
		if addressing_mode == "i" then
		else if addressing_mode == "d" then
			return new MemVar(n_value.to_i)
		else if addressing_mode == "n" then
		else if addressing_mode == "s" then
			return new StackVar(n_value.to_i)
		else if addressing_mode == "sf" then
		else if addressing_mode == "x" then
		else if addressing_mode == "sx" then
		else if addressing_mode == "sxf" then
		end

		return null
	end
end

