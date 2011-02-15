# This file is part of NIT ( http://www.nitlanguage.org ).
#
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

import kernel

class A
	init do
		'A'.output
		' '.output
	end
	init inita do init
	fun work do '\n'.output
end

class B
	super A
	init do
		'B'.output
		'1'.output
		' '.output
		inita
		'B'.output
		'2'.output
		' '.output
	end
	init initb do init
end

class C
	super A
	init do
		'C'.output
		'1'.output
		' '.output
		inita
		'C'.output
		'2'.output
		' '.output
	end
	init initc do init
end

class D
	super B
	super C
	init do
		'D'.output
		'0'.output
		' '.output
#alt1#		inita
#alt3#		inita
#alt5#		inita
#alt7#		inita
#alt9#		inita
#alt11#		inita
#alt13#		inita
#alt15#		inita
		'D'.output
		'1'.output
		' '.output
#alt2#		initb
#alt3#		initb
#alt6#		initb
#alt7#		initb
#alt10#		initb
#alt11#		initb
#alt14#		initb
#alt15#		initb
		'D'.output
		'2'.output
		' '.output
#alt4#		initc
#alt5#		initc
#alt6#		initc
#alt7#		initc
#alt12#		initc
#alt13#		initc
#alt14#		initc
#alt15#		initc
		'D'.output
		'3'.output
		' '.output
#alt8#		inite
#alt9#		inite
#alt10#		inite
#alt11#		inite
#alt12#		inite
#alt13#		inite
#alt14#		inite
#alt15#		inite
		'D'.output
		'4'.output
		' '.output
	end

	init inite do
		'E'.output
		'1'.output
		' '.output
		inita
		'E'.output
		'2'.output
		' '.output
		initb
		'E'.output
		'3'.output
		' '.output
		initc
		'E'.output
		'4'.output
		' '.output
	end
end

#alt0#(new A).work
#alt0#(new B).work
#alt0#(new C).work
(new D).work
#alt0#(new D.inite).work
