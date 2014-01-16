# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
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

# Static types and property signatures
module static_type

intrude import abstractmetamodel

redef class MMLocalClass
	# Cached result of get_type
	var _base_type_cache: nullable MMType

	# Return the type of self for this class
	fun get_type: MMType
	do
		if _base_type_cache == null then _base_type_cache = new MMTypeSimpleClass(self)
		return _base_type_cache.as(not null)
	end

	# Register a new ancestor
	protected fun add_ancestor(a: MMAncestor)
	do
		assert not _ancestors.has_key(a.local_class)
		assert a.local_class != self
		_ancestors[a.local_class] = a
	end

	# Array of ancestor that associate each superclass with the corresponding ancestor
	readable var _ancestors: nullable Map[MMLocalClass, MMAncestor]

	# The ancestor type for a given superclass
	fun ancestor(c: MMLocalClass): MMType
	do
		return _ancestors[c].stype
	end
end

redef class MMLocalProperty
	# The signature of the property (where it is declared)
	readable writable var _signature: nullable MMSignature

	var _signatures_cache: HashMap[MMType, MMSignature] = new HashMap[MMType, MMSignature]

	# Return the adapted signature of self for a receiver of type t
	fun signature_for(t: MMType): MMSignature do
		if t == local_class.get_type then return signature.as(not null)

		if _signatures_cache.has_key(t) then return _signatures_cache[t]

		var res = signature.adaptation_to(t)
		_signatures_cache[t] = res
		return res
	end
end

class MMParam
	var mmtype: MMType
	var name: Symbol writable

	init ( t  : MMType, n : Symbol )
	do
	    mmtype = t
	    name = n
	end

	redef fun to_s do return "{name}: {mmtype}"
end

# Signature for local properties
class MMSignature
	# The type of the reveiver
	readable var _recv: MMType

	# The parameter types
	readable var _params: Array[MMParam]

	# The return type
	readable var _return_type: nullable MMType

	# The closure parameters
	readable var _closures: Array[MMClosure] = new Array[MMClosure]

	# Return the closure named 'name'. Null if no such a closure exists.
	fun closure_named(name: Symbol): nullable MMClosure
	do
		for c in _closures do
			if c.name == name then return c
		end
		return null
	end

	# Number of parameters
	fun arity: Int
	do
		return _params.length
	end

	# Is self a valid subtype of an other signature
	fun <(s: MMSignature): Bool
	do
		if self == s then
			return true
		end
		assert _recv.mmmodule == s.recv.mmmodule
		var rt = _return_type
		var srt = s.return_type
		if arity != s.arity or (rt == null) != (srt == null) then return false
		if rt != null and not rt < srt.as(not null) then
			return false
		end

		for i in [0..arity[ do
			if not s[i] < self[i] then
				return false
			end
		end

		if closures.length != s.closures.length then return false
		for i in [0..closures.length[ do
			if not s.closures[i] < closures[i] then return false
		end
		return true
	end

	# The type of the i-th parameter
	fun [](i: Int): MMType
	do
		assert _params.length > i
		return _params[i].mmtype
	end

	redef fun to_s
	do
		var s = new FlatBuffer
		if _params.length > 0 then
			var tmp: String
			var a = new Array[String].with_capacity(_params.length)
			for i in [0.._params.length[ do
				var p = _params[i]
				a.add(p.to_s)
			end
			s.append("({a.join(", ")})")
		end
		var rt = _return_type
		if rt != null then s.append(": {rt}")
		return s.to_s
	end

	# Adapt the signature to a different receiver
	fun adaptation_to(r: MMType): MMSignature
	do
		if _recv == r then
			return self
		end
		var mod = r.mmmodule
		var p = new Array[MMParam]
		for i in _params do
			var new_type = i.mmtype.for_module(mod).adapt_to(r)
			var new_param
			if new_type == i.mmtype then
				new_param = i
			else
				new_param = new MMParam( new_type, i.name )
			end

			p.add( new_param )
		end
		var rv = _return_type
		if rv != null then
			rv = rv.for_module(mod).adapt_to(r)
		end
		var res = new MMSignature(p,rv,r)
		for clos in _closures do
			res.closures.add(clos.adaptation_to(r))
		end
		return res
	end

	var _not_for_self_cache: nullable MMSignature = null

	# Return a type approximation if the reveiver is not self
	# Useful for virtual types
	fun not_for_self: MMSignature
	do
		if _not_for_self_cache != null then return _not_for_self_cache.as(not null)

		var need_for_self = false
		var p = new Array[MMParam]
		for i in _params do
			var new_type = i.mmtype.not_for_self
			var new_param
			if i.mmtype == new_type then
				new_param = i
			else
				need_for_self = true
				new_param = new MMParam( new_type, i.name )
			end

			p.add( new_param )
		end

		var rv = _return_type
		if rv != null then
			rv = rv.not_for_self
			if rv != _return_type then need_for_self = true
		end

		var clos = new Array[MMClosure]
		for c in _closures do
			var c2 = c.not_for_self
			if c2 != c then need_for_self = true
			clos.add(c2)
		end

		var res: MMSignature
		if need_for_self then
			res = new MMSignature(p, rv, _recv)
			res.closures.add_all(clos)
		else
			res = self
		end

		_not_for_self_cache = res
		return res
	end

	init(params: Array[MMParam], return_type: nullable MMType, r: MMType)
	do
		_params = params
		_return_type = return_type
		_recv = r
	end
end


redef class MMExplicitImport
	var signature : MMSignature

	redef init( local_class : MMLocalClass, meth : MMMethod )
	do
		super
		signature = meth.signature.adaptation_to( local_class.get_type )
	end
end

# A closure in a signature
class MMClosure
	# The name of the closure (without the !)
	readable var _name: Symbol

	# The signature of the closure
	readable var _signature: MMSignature

	# Is the closure a brek one
	# aka is defined with the break keyword thus does not return
	readable var _is_break: Bool

	# Is the closure optional?
	# ie is there a default definition
	readable var _is_optional: Bool

	# Adapt the signature to a different receiver
	fun adaptation_to(r: MMType): MMClosure
	do
		return new MMClosure(_name, _signature.adaptation_to(r), _is_break, _is_optional)
	end

	init(name: Symbol, s: MMSignature, is_break: Bool, is_optional: Bool)
	do
		_name = name
		_signature = s
		_is_break = is_break
		_is_optional = is_optional
	end

	fun not_for_self: MMClosure
	do
		var sig = _signature.not_for_self
		if sig != _signature then
			return new MMClosure(_name, sig, _is_break, _is_optional)
		else
			return self
		end
	end

	fun <(c: MMClosure): Bool
	do
		if c.is_optional and not is_optional then return false
		if not c.is_break and is_break then return false
		return c.signature < signature
	end
end

# Inheritance relation between two types
abstract class MMAncestor
	# The inherited type
	writable var _stype: nullable MMType = null

	# The inherited type
	fun stype: MMType do return _stype.as(not null)

	# The inheriter (heir) type
	writable var _inheriter: nullable MMType = null

	# The inheriter (heir) type
	fun inheriter: MMType do return _inheriter.as(not null)

	fun is_reffinement: Bool do
		return stype.mmmodule != stype.mmmodule
	end

	fun is_specialisation: Bool do
		return stype.local_class.global != inheriter.local_class.global
	end

	# The inherited class
	fun local_class: MMLocalClass is abstract

	redef fun to_s
	do
		if _stype == null then
			return local_class.to_s
		else
			return stype.to_s
		end
	end
end

# A static type
# Note that static type is related to a specific module
abstract class MMType
	# The module where self makes sence
	fun mmmodule: MMModule is abstract

	# The local class that self direclty or indirectly refers to
	fun local_class: MMLocalClass is abstract

	# Is the type a valid one
	# For instance, circular dependency on formal types is invalid
	fun is_valid: Bool do return true

	# Is self a valid subtype of t
	fun <(t : MMType): Bool is abstract

	# Is self a valid supertype of t
	# This method must be only called within definition of < if
	# a double dispatch is needed
	fun is_supertype(t: MMType): Bool is abstract

	# Adapt self to another module
	fun for_module(mod: MMModule): MMType is abstract

	# Get the type adapted to another receiver type
	# Useful for formal types
	fun adapt_to(recv: MMType): MMType is abstract

	# Adapt self to another local class context
	# Useful for genericity
	# 'c' Must be a super-class of self
	# Example:
	#   class A[E]
	#   class B[F] super A[F]
	#   class C[G] super B[String]
	#   class D super C[Float]
	# 'A[Int]'.upcast_for('A') -> 'A[Int]'
	# 'A[Int]'.upcast_for('B') -> abort
	# 'B[Int]'.upcast_for('B') -> 'B[Int]'
	# 'B[Int]'.upcast_for('A') -> 'A[Int]'
	# 'B[Int]'.upcast_for('C') -> abort
	# 'C[Int]'.upcast_for('C') -> 'C[Int]'
	# 'C[Int]'.upcast_for('B') -> 'B[String]'
	# 'C[Int]'.upcast_for('A') -> 'A[String]'
	# 'D'.upcast_for('D') -> 'D'
	# 'D'.upcast_for('C') -> 'C[Float]'
	# 'D'.upcast_for('B') -> 'C[String]'
	# 'D'.upcast_for('A') -> 'A[String]'
	fun upcast_for(c: MMLocalClass): MMType is abstract

	# Return a type approximation if the reveiver is not self
	# Useful for virtual types
	fun not_for_self: MMType do return self

	# The nullable version of self (if needed)
	var _as_nullable_cache: nullable MMType = null

	# IS the type can accept null?
	fun is_nullable: Bool do return false

	# Return the nullable version of the type
	# Noop if already nullable
	fun as_nullable: MMType do
		var cache = _as_nullable_cache
		if cache != null then return cache
		var res = new MMNullableType(self)
		_as_nullable_cache = res
		return res
	end

	# Return the not null version of the type
	# Noop if already not null
	fun as_notnull: MMType do return self
end

class MMNullableType
	super MMType
	readable var _base_type: MMType
	redef fun is_valid do return _base_type.is_valid
	redef fun is_nullable: Bool do return true
	redef fun as_notnull do return _base_type
	redef fun as_nullable do return self
	init(t: MMType) do _base_type = t

	redef fun mmmodule do return _base_type.mmmodule

	redef fun local_class do return _base_type.local_class

	redef fun <(t)
	do
		return t isa MMNullableType and _base_type < t.as_notnull
	end

	redef fun to_s
	do
		return "nullable {_base_type}"
	end

	redef fun is_supertype(t)
	do
		return _base_type.is_supertype(t)
	end

	redef fun for_module(mod)
	do
		return _base_type.for_module(mod).as_nullable
	end

	redef fun adapt_to(recv)
	do
		return _base_type.adapt_to(recv).as_nullable
	end

	redef fun upcast_for(c)
	do
		return _base_type.upcast_for(c)
	end

	redef fun not_for_self
	do
		return _base_type.not_for_self.as_nullable
	end
end

abstract class MMTypeClass
	super MMType
	redef readable var _local_class: MMLocalClass
	redef fun mmmodule do return _local_class.mmmodule end
	redef fun <(t) do return t.is_supertype(self)

	redef fun to_s
	do
		return _local_class.to_s
	end

	redef fun upcast_for(c)
	do
		var t: MMType = self
		if _local_class != c then
			t = _local_class.ancestor(c)
		end
		return t
	end

	init(c : MMLocalClass)
	do
		_local_class = c
	end
end

class MMTypeSimpleClass
	super MMTypeClass
	redef fun is_supertype(t)
	do
		return  t.local_class.cshe <= _local_class
	end

	redef fun for_module(mod)
	do
		var t: MMType = self
		if mmmodule != mod then
			t = _local_class.for_module(mod).get_type
		end
		return t
	end

	redef fun adapt_to(recv) do return self

	init(c: MMLocalClass)
	do
		super(c)
	end
end

# The type of null
class MMTypeNone
	super MMType
	redef readable var _mmmodule: MMModule
	redef fun is_nullable: Bool do return true
	redef fun <(t) do return t isa MMTypeNone or t isa MMNullableType
	redef fun to_s do return "null"
	redef fun is_supertype(t) do return false
	redef fun local_class do abort
	redef fun upcast_for(c) do abort
	redef fun as_nullable do return self
	redef fun as_notnull do abort

	private init(m: MMModule) do _mmmodule = m
end

redef class MMModule
	# The type of null
	readable var _type_none: MMTypeNone = new MMTypeNone(self)

	# The type of bool
	fun type_bool: MMType
	do
		return class_by_name(once ("Bool".to_symbol)).get_type
	end
end

# Explicitly imported cast
class MMImportedCast
	readable var _from : MMType
	readable var _to : MMType

	fun is_about_nullable_only : Bool
	do
	    return ( _from.is_nullable and _to.as_nullable == _from ) or
	           ( _to.is_nullable and _from.as_nullable == _to )
	end

	fun is_not_null_to_nullable : Bool
	do
	    return not _from.is_nullable and _to.is_nullable
	end

	fun is_nullable_to_not_null : Bool
	do
	    return _from.is_nullable and not _to.is_nullable
	end

	redef fun == ( o )
	do
		return o isa MMImportedCast and
			o.from == from and o.to == to
	end
end

# Method local properties
redef class MMMethod
	# casts explicitely imported to be available from native implementation
	fun explicit_casts : Set[ MMImportedCast ] is abstract
end
