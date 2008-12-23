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
	# The virtual static type associated
	meth stype_for(recv: MMType): MMVirtualType
	do
		var prop = recv.select_property(global)
		assert prop isa MMTypeProperty
		return prop.real_stype_for(recv)
	end

	# Cached results of stype
	attr _stypes_cache: HashMap[MMType, MMVirtualType] = new HashMap[MMType, MMVirtualType]

	private meth real_stype_for(recv: MMType): MMVirtualType
	do
		# If the signature is not build: Circular definition
		if signature == null then return null

		if _stypes_cache.has_key(recv) then return _stypes_cache[recv]

		var res = new MMVirtualType(self, recv)
		_stypes_cache[recv] = res

		return res
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

	# The receiver type
	readable attr _recv: MMType

	protected init(p: MMTypeProperty, recv: MMType)
	do
		super(p.name, p.signature_for(recv).return_type)
		_property = p
		_recv = recv
	end

	redef meth module do return _recv.module

	redef meth for_module(mod)
	do
		if mod == module then return self
		return adapt_to(recv.for_module(mod))
	end

	redef meth not_for_self
	do
		return bound.not_for_self
	end

	redef meth adapt_to(recv)
	do
		return property.stype_for(recv)
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
