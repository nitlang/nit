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

# Formal types
package type_formal

import inheritance

redef class MMType
	# The type a indirect type refers to
	meth direct_type: MMType do return self
end

# Formal types are named indirect types
class MMTypeFormal
special MMType
	redef meth is_valid do return _bound != null

	# The name of the type
	readable attr _name: Symbol 

	# The type refered
	meth bound: MMType
	do
		assert is_valid
		return _bound
	end
	attr _bound: MMType

	redef meth <(t) do return t != null and (t == self or t.is_supertype(_bound))
	redef meth is_supertype(t) do return _bound.is_supertype(t)
	redef meth direct_type do return _bound.direct_type
	redef meth local_class do return _bound.local_class

	redef meth to_s do return _name.to_s

	protected init(name: Symbol, bound: MMType)
	do
		_name = name
		_bound = bound
	end
end

