# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

# Base classes for Nit intermediate code representation
package icode_base

import metamodel

## UTILITY CLASSES ##

# Register store local variable and intermediate results
class IRegister
	# The static type
	readable var _stype: MMType
	init(s: MMType)
	do
		_stype = s
	end
end

# A mark used to associate IEscapes to ISeqs
class IEscapeMark
end

# A Closure declaration
class IClosureDecl
	# The associated closure definition
	readable var _closure: MMClosure

	# The default implementation
	readable writable var _default: nullable IRoutine

	init(c: MMClosure) do _closure = c
end

# A routine is a sequence of icodes with entry iregisters (params) and an exit iregister (result)
class IRoutine
	# The parameters of the routine
	readable var _params: Sequence[IRegister]

	# The closure declared
	readable writable var _closure_decls: nullable Sequence[IClosureDecl] = null

	# The local variables (excluding params and result)
	readable var _registers: Set[IRegister] = new HashSet[IRegister]

	# The result of the routine
	readable var _result: nullable IRegister

	# The local escapes marks of the routine
	readable var _escape_marks: Set[IEscapeMark] = new HashSet[IEscapeMark]

	# The sequence of icode
	readable var _body: ISeq = new ISeq

	# The location of the iroutine (if any)
	readable writable var _location: nullable Location = null

	init(p: Sequence[IRegister], r: nullable IRegister)
	do
		_params = p.to_a
		_result = r
	end
end

# A closure definition in a iroutine body
class IClosureDef
	super IRoutine
	init(p: Array[IRegister], r: nullable IRegister)
	do
		super(p, r)
	end
end

## INTERMEDIATE CODE ##

# The root of the intermediate code representation
abstract class ICode
	# The number of registers used by the icode
	fun arity: Int is abstract

	# The result of the icode (if any)
	readable writable var _result: nullable IRegister = null

	# The location of the icode (if any)
	readable writable var _location: nullable Location = null

	# Is the icode side effect free?
	fun is_pure: Bool do return false
end

# An icode that uses no registers (no args)
abstract class ICode0
	super ICode
	redef fun arity do return 0
end

# An icode that uses a single register (1 arg)
abstract class ICode1
	super ICode
	redef fun arity do return 1

	# The single argument
	readable var _expr: IRegister

	init(e: IRegister) do _expr = e
end

# An icode that uses two single registers (2 args)
abstract class ICode2
	super ICode
	redef fun arity do return 2

	# The first argument
	readable var _expr1: IRegister

	# The second argument
	readable var _expr2: IRegister

	init(e1, e2: IRegister)
	do
		_expr1 = e1
		_expr2 = e2
	end
end

# An icode that uses a variable number of registers (n args) and a variable number of closure definitions
abstract class ICodeN
	super ICode
	redef fun arity do return _exprs.length

	# All arguments
	readable var _exprs: Sequence[IRegister]

	# All closure definition
	readable writable var _closure_defs: nullable Sequence[nullable IClosureDef]

	init(e: nullable Sequence[IRegister])
	do
		if e == null then
			_exprs = new Array[IRegister]
		else
			_exprs = e
		end
	end
end

#################################################

# A linear sequence of ICode
class ISeq
	super ICode0
	# The sequence of icode
	readable var _icodes: List[ICode] = new List[ICode]

	# The associated iescape_mark (if any)
	readable writable var _iescape_mark: nullable IEscapeMark

	init do end
end

# An infinite loop of ICode
# Use IEscape to exit
class ILoop
	super ISeq
	init do end
end

# A Condidianal if-then-else statement
# expr is the condition
class IIf
	super ICode1
	# The 'then' sequence of icode
	readable var _then_seq: ISeq = new ISeq
	# The 'else' sequence of icode
	readable var _else_seq: ISeq = new ISeq
	init(e: IRegister) do super
end

# Escape to to end of a parent sequence
class IEscape
	super ICode0
	# The seqeuence to escape
	# The control flow continues at the next icode after the associated sequence
	readable var _iescape_mark: IEscapeMark
	init(mark: IEscapeMark) do _iescape_mark = mark
end

# An abort statement
class IAbort
	super ICode0
	# The reason the abort occured
	# tests.first is the format
	readable var _texts: Array[String]
	# The module that has the abort
	readable var _module_location: MMModule
	init(t: Array[String], ml: MMModule)
	do
		_texts = t
		_module_location = ml
	end
end

#################################################

# The root of all method invocations
abstract class IAbsCall
	super ICodeN
	# The called method
	readable var _property: MMMethod

	# if this call is to be made from native code
	var is_explicit_from_extern : Bool writable = false

	init(p: MMMethod, e: Sequence[IRegister])
	do
		super(e)
		_property = p
	end
end

# A simple procedure or function call
# exprs.first is the reciever, other are arguments
class ICall
	super IAbsCall
	init(p, e) do super
end

# A super method call
# exprs.first is the reciever, other are arguments
class ISuper
	super IAbsCall
	init(p, e) do super
end

# An instantiation
# no reciever, all exprs are arguments
# Will call in order:
# - IAllocateInstance
# - IInitAttributes
# - IStaticCall -> target Initializer
# - ICheckInstance
class INew
	super IAbsCall
	# The type to instantiate
	readable var _stype: MMType
	init(t: MMType, p: MMMethod, a: Sequence[IRegister])
	do
		super(p, a)
		_stype = t
	end
end

# An allocation of a new object
# No receivers, returns a new object of type 't'
# Will allocate memory and ensure dynamic type and object identity
class IAllocateInstance
	super ICode0
	# The type to allocate
	readable var _stype: MMType
	init(t: MMType)
	do
		_stype = t
	end
end

# A static call to a specific method
class IStaticCall
	super IAbsCall
	init(p: MMMethod, a: Sequence[IRegister]) do super
end

# A validation of a newly constructed instance
class ICheckInstance
	super ICode1
	# The type to allocate
	readable var _stype: MMType
	init(t: MMType, e: IRegister)
	do
		super(e)
		_stype = t
	end
end

# Initialisation of default attributes of a new instance
class IInitAttributes
	super ICode1
	# The type to initialize
	readable var _stype: MMType
	init(t: MMType, e: IRegister)
	do
		super(e)
		_stype = t
	end
end

# A closure call
# exprs are the arguments
class IClosCall
	super ICodeN
	# The called closure
	readable var _closure_decl: IClosureDecl

	# The !break sequence (if any)
	readable writable var _break_seq: nullable ISeq = null

	init(c: IClosureDecl, e: Sequence[IRegister])
	do
		super(e)
		_closure_decl = c
	end
end

# A native inlined call
# Native are associated to local properties to distinguish them
# expr are the arguments
class INative
	super ICodeN
	# The associated local property
	readable var _method: MMMethod

	init(m: MMMethod, e: nullable Sequence[IRegister])
	do
                # Checks that arguments contains at least one IRegister element
                assert e.length == m.signature.arity + 1
		
                super(e)
		_method = m
	end

	redef readable writable var _is_pure: Bool = false
end

# A literal Int value
class IIntValue
	super ICode0
	# The value
	readable var _value: String

	init(v: String) do _value = v

	redef fun is_pure do return true
end

# A literal Bool value
class IBoolValue
	super ICode0
	# The value
	readable var _value: Bool

	init(v: Bool) do _value = v

	redef fun is_pure do return true
end

# A literal NativeString value
class IStringValue
	super ICode0
	# The value
	readable var _value: String

	init(v: String) do _value = v

	redef fun is_pure do return true
end

# A literal Float value
class IFloatValue
	super ICode0
	# The value
	readable var _value: String

	init(v: String) do _value = v

	redef fun is_pure do return true
end

# A literal Char value
class ICharValue
	super ICode0
	# The value
	readable var _value: String

	init(v: String) do _value = v

	redef fun is_pure do return true
end

# A register assigment
# expr is the assigned value
# result is the register assigned
class IMove
	super ICode1
	init(r: IRegister, e: IRegister)
	do
		super(e)
		_result = r
	end

	redef fun is_pure do return true
end

# An attribute read access
# expr is the reciever
class IAttrRead
	super ICode1
	# The accessed attribute
	readable var _property: MMAttribute

	init(p: MMAttribute, r: IRegister)
	do
		super(r)
		_property = p
	end

	redef fun is_pure do return true
end

# An attribute assignment
# expr1 is the receiver, expr2 is the assigned value
class IAttrWrite
	super ICode2
	# The accessed attribute
	readable var _property: MMAttribute

	init(p: MMAttribute, r: IRegister, v: IRegister)
	do
		super(r, v)
		_property = p
	end
end


# An attribute is_set check
# expr is the reciever
class IAttrIsset
	super ICode1
	# The accessed attribute
	readable var _property: MMAttribute

	init(p: MMAttribute, r: IRegister)
	do
		super(r)
		_property = p
	end

	redef fun is_pure do return true
end

# A type check
# expr1 is the type reciever (self)
# expr2 is the expression checked
class ITypeCheck
	super ICode2
	# The static type checkes to
	readable var _stype: MMType

	init(e1, e2: IRegister, t: MMType)
	do
		super(e1, e2)
		_stype = t
	end

	redef fun is_pure do return true
end

# The 'is' operator
# expr1 and expr2 are both operands
class IIs
	super ICode2
	init(e1, e2: IRegister)
	do
		super
	end

	redef fun is_pure do return true
end

# The unary 'not' operation
# expr is the operand
class INot
	super ICode1
	init(e: IRegister)
	do
		super
	end

	redef fun is_pure do return true
end

# Evaluate body once them return the same value again and again
# if result is not null, then it must also be assigned in the body
class IOnce
	super ICode0
	readable var _body: ISeq = new ISeq
	init do end
end

# Is a closure given as a parameter?
class IHasClos
	super ICode0
	# The called closure
	readable var _closure_decl: IClosureDecl

	init(c: IClosureDecl)
	do
		_closure_decl = c
	end

	redef fun is_pure do return true
end

#################################################

redef class MMAttribute
	# The attached initialisation iroutine if any
	# To call between the allocate-instance and the initialize-instance
	fun iroutine: nullable IRoutine is abstract
end

redef class MMMethod
	# The attached body iroutine if any
	fun iroutine: nullable IRoutine is abstract
end
