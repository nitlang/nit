# Pep/8 instructions are not reserved as keywords. It is common
# that the identifier of an instruction will be used for a label.
# For this reason, we cannot create precise instruction nodes with
# the parser.
#
# This module manually creates the expected subclass with an additionnal
# OOP hiearchy.

module suffixed_instructions

import rich_instructions

#
# Support classes
#
abstract class ARegisterSuffixed
	super AInstruction

	fun register : Char do return n_id.text.to_upper.last
end

abstract class ADigitSuffixed
	super AInstruction

	fun digit : Int do return n_id.text.last.to_i
	fun digit_max : Int is abstract
end


#
# Other classification
#
redef class AUnaryNopInstruction
	super ADigitSuffixed
	redef fun digit_max do return (1 << 2)-1
end

redef class ANotInstruction
	super ARegisterSuffixed
end

redef class ANegInstruction
	super ARegisterSuffixed
end

redef class AShiftInstruction
	super ARegisterSuffixed
end

redef class ARetInstruction
	super ADigitSuffixed
	redef fun digit_max do return (1 << 3)-1
end

redef abstract class AArithmeticInstruction
	super ARegisterSuffixed
end

redef abstract class ALoadInstruction
	super ARegisterSuffixed
end

redef abstract class AStoreInstruction
	super ARegisterSuffixed
end
