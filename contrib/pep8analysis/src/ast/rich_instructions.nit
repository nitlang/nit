# Pep/8 instructions are not reserved as keywords. It is common
# that the identifier of an instruction will be used for a label.
# For this reason, we cannot create precise instruction nodes with
# the parser.
#
# This module manually creates the expected subclass with an additionnal
# OOP hiearchy.

module rich_instructions

import backbone
intrude import parser
import ast_base

redef class AnalysisManager
	redef fun build_ast(filename, stream)
	do
		var ast = super
		if ast != null then
		#fun enrich_ast( ast : AListing ) do
			for line in ast.n_lines do
				if line isa AInstructionLine then
					line.enrich
				end
			end
		end
		return ast
	end
end

redef class AInstructionLine
	# TODO move to AnalysisManager as private?
	private fun enrich
	do
		var instr: AInstruction = n_instruction
		var new_instr : AInstruction

		var id = instr.n_id.text.to_upper
		if instr isa ABinaryInstruction then
			if id == "BR" then
				new_instr = new ABrInstruction.from(instr)
			else if id == "BRLE" then
				new_instr = new ABrleInstruction.from(instr)
			else if id == "BRLT" then
				new_instr = new ABrltInstruction.from(instr)
			else if id == "BREQ" then
				new_instr = new ABreqInstruction.from(instr)
			else if id == "BRNE" then
				new_instr = new ABrneInstruction.from(instr)
			else if id == "BRGE" then
				new_instr = new ABrgeInstruction.from(instr)
			else if id == "BRGT" then
				new_instr = new ABrgtInstruction.from(instr)
			else if id == "BRV" then
				new_instr = new ABrvInstruction.from(instr)
			else if id == "BRC" then
				new_instr = new ABrcInstruction.from(instr)
			else if id == "CALL" then
				new_instr = new ACallInstruction.from(instr)
			else if id == "NOP" then
				new_instr = new ABinaryNopInstruction.from(instr)
			else if id == "DECI" then
				new_instr = new ADeciInstruction.from(instr)
			else if id == "DECO" then
				new_instr = new ADecoInstruction.from(instr)
			else if id == "STRO" then
				new_instr = new AStroInstruction.from(instr)
			else if id == "CHARI" then
				new_instr = new AChariInstruction.from(instr)
			else if id == "CHARO" then
				new_instr = new ACharoInstruction.from(instr)
			else if id == "ADDSP" then
				new_instr = new AAddspInstruction.from(instr)
			else if id == "SUBSP" then
				new_instr = new ASubspInstruction.from(instr)
			else if id.has_prefix("ADD") then
				new_instr = new AAddInstruction.from(instr)
			else if id.has_prefix("SUB") then
				new_instr = new ASubInstruction.from(instr)
			else if id.has_prefix("AND") then
				new_instr = new AAndInstruction.from(instr)
			else if id.has_prefix("OR") then
				new_instr = new AOrInstruction.from(instr)
			else if id.has_prefix("CP") then
				new_instr = new ACpInstruction.from(instr)
			else if id.has_prefix("LDBYTE") then
				new_instr = new ALdbyteInstruction.from(instr)
			else if id.has_prefix("LD") then
				new_instr = new ALdInstruction.from(instr)
			else if id.has_prefix("STBYTE") then
				new_instr = new AStbyteInstruction.from(instr)
			else if id.has_prefix("ST") then
				new_instr = new AStInstruction.from(instr)
			else
				# error
				print "error {instr.location}: invalid instruction {id} with data access"
				abort
			end
		else if instr isa AUnaryInstruction then
			if id == "STOP" then
				new_instr = new AStopInstruction.from(instr)
			else if id == "RETTR" then
				new_instr = new ARettrInstruction.from(instr)
			else if id == "MOVSPA" then
				new_instr = new AMovspaInstruction.from(instr)
			else if id == "MOVFLGA" then
				new_instr = new AMovflgaInstruction.from(instr)
			else if id.has_prefix("NOT") then
				new_instr = new ANotInstruction.from(instr)
			else if id.has_prefix("NEG") then
				new_instr = new ANegInstruction.from(instr)
			else if id.has_prefix("ASL") then
				new_instr = new AAslInstruction.from(instr)
			else if id.has_prefix("ASR") then
				new_instr = new AAsrInstruction.from(instr)
			else if id.has_prefix("ROL") then
				new_instr = new ARolInstruction.from(instr)
			else if id.has_prefix("ROR") then
				new_instr = new ARorInstruction.from(instr)
			else if id.has_prefix("NOP") then
				new_instr = new AUnaryNopInstruction.from(instr)
			else if id.has_prefix("RET") then
				new_instr = new ARetInstruction.from(instr)
			else
				# error
				print "error {instr.location}: invalid instruction {id} without data access"
				abort
			end
		else abort

		# TODO check, one of those 2 might not be necessary
		replace_child( instr, new_instr )
		#n_instruction = new_instr
	end
end

#
# Support classes
#
abstract class ARichBinaryInstruction
	super ABinaryInstruction

	init from( src: ABinaryInstruction ) do
		_n_operand = src.n_operand
		_n_id = src.n_id
		parent = src.parent

		init
		_location = src.location
	end
end

abstract class ARichUnaryInstruction
	super AUnaryInstruction

	init from( src: AUnaryInstruction ) do
		_n_id = src.n_id
		parent = src.parent

		init
		_location = src.location
	end
end

#
# Categories
#
abstract class ABranchInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end

class ABrInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrleInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrltInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABreqInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrneInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrgeInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrgtInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrvInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ABrcInstruction
	super ABranchInstruction
	init from( src ) do super
end
class ACallInstruction
	super ABranchInstruction
	init from( src ) do super
end


abstract class ANopInstruction
	super AInstruction
end
class ABinaryNopInstruction
	super ANopInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
class AUnaryNopInstruction
	super ANopInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end


abstract class AOutputInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
abstract class AInputInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
# TODO add category for ADecInstruction?
class ADeciInstruction
	super AInputInstruction
	init from( src ) do super
end
class ADecoInstruction
	super AOutputInstruction
	init from( src ) do super
end

class AStroInstruction
	super AOutputInstruction
	init from( src ) do super
end

class AChariInstruction
	super AInputInstruction
	init from( src ) do super
end
class ACharoInstruction
	super AOutputInstruction
	init from( src ) do super
end


abstract class AStackInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
class AAddspInstruction
	super AStackInstruction
	init from( src ) do super
end
class ASubspInstruction
	super AStackInstruction
	init from( src ) do super
end

# Misc
class AStopInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end

class ARettrInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end

abstract class AMovInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end
class AMovspaInstruction
	super AMovInstruction
	init from( src ) do super
end
class AMovflgaInstruction
	super AMovInstruction
	init from( src ) do super
end


class ANotInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end

class ANegInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end

abstract class AShiftInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end
class AAslInstruction
	super AShiftInstruction
	init from( src ) do super
end
class AAsrInstruction
	super AShiftInstruction
	init from( src ) do super
end
class ARolInstruction
	super AShiftInstruction
	init from( src ) do super
end
class ARorInstruction
	super AShiftInstruction
	init from( src ) do super
end

class ARetInstruction
	super ARichUnaryInstruction
	init from( src ) do super
end


# TODO find a better name
abstract class AArithmeticInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
class AAddInstruction
	super AArithmeticInstruction
	init from( src ) do super
end
class ASubInstruction
	super AArithmeticInstruction
	init from( src ) do super
end
class AAndInstruction
	super AArithmeticInstruction
	init from( src ) do super
end
class AOrInstruction
	super AArithmeticInstruction
	init from( src ) do super
end

class ACpInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end


abstract class ALoadInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
class ALdInstruction
	super ALoadInstruction
	init from( src ) do super
end
class ALdbyteInstruction
	super ALoadInstruction
	init from( src ) do super
end

abstract class AStoreInstruction
	super ARichBinaryInstruction
	init from( src ) do super
end
class AStInstruction
	super AStoreInstruction
	init from( src ) do super
end
class AStbyteInstruction
	super AStoreInstruction
	init from( src ) do super
end
