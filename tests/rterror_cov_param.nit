# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

import kernel
class A
	meth bar(a: Object)
	do
		a.output
	end
	redef meth output
	do
		'A'.output
	end

	meth ret_test
	# see rterror_cov_ret
	do
		ret.output
	end
	meth ret: A
	do
		return self
	end

	init do end
end

class B
special A
	redef meth bar(a: B)
	do
		a.output
	end
	redef meth output
	do
		'B'.output
	end
	redef meth ret: B
	do
		return self
	end

	init do end
end

var a = new A
var b = a
b = new B
b.bar(5)
