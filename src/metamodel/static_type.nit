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
package static_type

intrude import abstractmetamodel

redef class MMLocalClass
	# Cached result of get_type
	attr _base_type_cache: MMType

	# Return the type of self for this class
	meth get_type: MMType
	do
		if _base_type_cache == null then _base_type_cache = new MMTypeSimpleClass(self)
		return _base_type_cache
	end

	# Register a new ancestor
	protected meth add_ancestor(a: MMAncestor)
	do
		assert not _ancestors.has_key(a.local_class)
		assert a.local_class != self
		_ancestors[a.local_class] = a
	end

	# Array of ancestor that associate each superclass with the corresponding ancestor
	readable attr _ancestors: Map[MMLocalClass, MMAncestor]

	# The ancestor type for a given superclass
	meth ancestor(c: MMLocalClass): MMType
	do
		assert _ancestors != null
		if _ancestors.has_key(c) then
			return _ancestors[c].stype
		end
		return null
	end
end

redef class MMLocalProperty
	# The cached result of signature
	attr _signature_cache: MMSignature

	# return signature for this property
	meth signature: MMSignature # FIXME must rewrite
	do
		if _signature_cache == null then
			if _super_prop == null then
				_signature_cache = _concrete_property.signature
			else
				_signature_cache = _super_prop.signature
			end
		end
		assert _signature_cache != null
		return _signature_cache
	end

	meth signature=(s: MMSignature) do _signature_cache = s
end

# Signature for local properties
class MMSignature
	# The type of the reveiver
	readable attr _recv: MMType 

	# The parameter types
 	attr _params: Array[MMType]

	# The return type
 	readable attr _return_type: MMType 

	# Number of parameters
	meth arity: Int
	do
		assert _params != null
		return _params.length
	end

	# Is self a valid subtype of an other signature
	meth <(s: MMSignature): Bool
	do
		assert s != null
		if self == s then
			return true
		end
		assert _recv.module == s.recv.module
		assert arity == s.arity
		assert (_return_type == null) == (s.return_type == null)
		if _return_type != null and not _return_type < s.return_type then
			return false
		end

		for i in [0..arity[ do
			if not s[i] < self[i] then
				return false
			end
		end
		return true
	end

	# The type of the i-th parameter
	meth [](i: Int): MMType
	do
		assert _params.length > i
		return _params[i]
	end

	redef meth to_s
	do
		var s: String
		if _params != null and _params.length > 0 then
			var tmp: String
			var a = new Array[String].with_capacity(_params.length)
			for i in [0.._params.length[ do
				#var pn = _params_name[i]
				var p = _params[i]
				#a.add("{pn}: {p}")
				a.add(p.to_s)
			end
			s = "({a.join(",")})"
		else
			s = ""
		end
		if _return_type != null then
			s.append(": {_return_type}")
		end
		return s
	end

	init(params: Array[MMType], return_type: MMType, r: MMType)
	do
		assert params != null
		_params = params
		_return_type = return_type
		_recv = r
	end
end

# Inheritance relation between two types
abstract class MMAncestor
	# The inherited type
	readable writable attr _stype: MMType 

	# The inheriter (heir) type
	readable writable attr _inheriter: MMType 

	meth is_reffinement: Bool do
		return stype.module != stype.module
	end

	meth is_specialisation: Bool do
		return stype.local_class.global != inheriter.local_class.global
	end

	# The inherited class
	meth local_class: MMLocalClass is abstract

	redef meth to_s
	do
		if stype == null then
			return local_class.to_s
		else
			return stype.to_s
		end
	end
end

# A static type
# Note that static type a related to a specific module
abstract class MMType
	# The module where self makes sence
	meth module: MMModule is abstract

	# The local class that self direclty or indirectly refers to
	meth local_class: MMLocalClass is abstract

	# Is self a valid subtype of t
	meth <(t : MMType): Bool is abstract

	# Is self a valid supertype of t
	# This method must be only called within definition of < if
	# a double dispatch is needed
	meth is_supertype(t: MMType): Bool is abstract

	# Select a method from its name
	meth select_method(name: Symbol): MMMethod
	do
		assert local_class != null
		assert name != null
		var res = select_property(local_class.method(name))
		assert res isa MMMethod
		return res
	end
	
	# Select an attribute from its name
	meth select_attribute(name: Symbol): MMAttribute
	do
		assert name != null
		assert local_class != null
		var res = select_property(local_class.attribute(name))
		assert res isa MMAttribute
		return res
	end

	# Select a local property from its global property
	meth select_property(t: MMGlobalProperty): MMLocalProperty is abstract

	# Adapt self to another module
	meth for_module(mod: MMModule): MMType is abstract

	# Get the type adapted to another receiver type
	# Useful for formal types
	meth adapt_to(recv: MMType): MMType is abstract

	# Adapt self to another local class context
	# Useful for genericity
	meth upcast_for(c: MMLocalClass): MMType is abstract

	# Return a type approximation if the reveiver is not self
	# Useful for virtual types
	meth not_for_self: MMType do return self
end

class MMTypeClass 
special MMType
	redef readable attr _local_class: MMLocalClass
	redef meth module do return _local_class.module end
	redef meth <(t) do return t != null and t.is_supertype(self)

	redef meth to_s
	do
		return _local_class.to_s
	end

	redef meth upcast_for(c)
	do
		assert _local_class != null
		assert c != null

		var t: MMType = self
		if _local_class != c then
			t = _local_class.ancestor(c)
		end
		assert t != null
		return t
	end

	init(c : MMLocalClass)
	do
		_local_class = c
	end
end

class MMTypeSimpleClass
special MMTypeClass
	redef meth is_supertype(t)
	do
		return  t.local_class.cshe <= _local_class
	end

	redef meth select_property(g)
	do
		assert _local_class != null
		if g == null then
			return null
		end
		return _local_class[g]
	end

	redef meth for_module(mod)
	do
		var t: MMType = self
		if module != mod then
			t = _local_class.for_module(mod).get_type
		end
		assert t != null
		return t
	end

	redef meth adapt_to(recv) do return self

	redef init(c: MMLocalClass)
	do
		super(c)
	end
end

# The type of null
class MMTypeNone
special MMType
 	redef readable attr _module: MMModule
 	redef meth <(t) do return true
 	redef meth is_supertype(t) do return false
 	redef meth local_class do abort
 	redef meth upcast_for(c) do return self

	private init(m: MMModule) do _module = m
end

redef class MMModule
	# The type of null
	readable attr _type_none: MMTypeNone = new MMTypeNone(self)
end
