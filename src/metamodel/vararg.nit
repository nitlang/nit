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

# Handle multiple number of parameters in signatures
package vararg

import genericity

redef class MMSignature
	# Position of the vararg parameter. -1 in no vararg parameter
	readable writable var _vararg_rank: Int 

	# Is there a vararg parameter in the signature?
	fun has_vararg: Bool
	do
		return _vararg_rank >= 0
	end

	redef fun adaptation_to(r)
	do
		var s = super(r)
		s.vararg_rank = _vararg_rank
		return s
	end

	redef fun not_for_self
	do
		var s = super
		s.vararg_rank = _vararg_rank
		return s
	end

	redef init(params, return_type, r)
	do
		super
		_vararg_rank = -1
	end
end
