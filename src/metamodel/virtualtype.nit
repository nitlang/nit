# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Virtual type (property of type type)
package virtualtype

import type_formal

redef class MMGlobalProperty
	# Is self a virtual type
	meth is_virtual_type: Bool do return intro isa MMTypeProperty
end

# Virtual type properties
class MMTypeProperty
special MMLocalProperty
	redef meth inherit_to(t)
	do
		return new MMImplicitType(self, t)
	end

	# Cached result of stype
	attr _stype_cache: MMVirtualType

	# The virtual static type associated
	meth stype: MMVirtualType
	do
		# If the signature is not build: Circular definition
		if signature == null then return null

		var r = _stype_cache
		if r == null then
			r = new MMVirtualType(self)
			_stype_cache = r
		end
		return r
	end
end

redef class MMType
	# Select a virtual type property by its name
	meth select_virtual_type(name: Symbol): MMTypeProperty
	do
		assert local_class != null
		assert name != null
		var res = select_property(local_class.virtual_type(name))
		assert res isa MMTypeProperty
		return res
	end
end

class MMVirtualType
special MMTypeFormal
	# The property associed
	readable attr _property: MMTypeProperty

	protected init(p: MMTypeProperty)
	do
		super(p.name, p.signature.return_type)
		_property = p
	end

	redef meth for_module(mod)
	do
		var recv = _property.signature.recv.for_module(mod)
		return adapt_to(recv)
	end

	redef meth not_for_self
	do
		return bound.not_for_self
	end

	redef meth adapt_to(recv)
	do
		# print "adapt {self} from {_property.signature.recv.module}::{_property.signature.recv} to {recv.module}::{recv}"
		var prop = recv.select_property(_property.global)
		assert prop isa MMTypeProperty
		return prop.stype
	end
end

redef class MMLocalClass
	meth virtual_type(s: Symbol): MMGlobalProperty
	do
		var prop = get_property_by_name(s)
		if prop.is_virtual_type then
			return prop
		end
		return null
	end
end

class MMImplicitType
special MMTypeProperty
special MMImplicitProperty
	init(p, t) do super
end
