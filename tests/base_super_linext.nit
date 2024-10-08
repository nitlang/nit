# This file is part of NIT ( https://nitlanguage.org ).
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
	fun work do
		foo
		'\n'.output
		bar.output
		'\n'.output
	end
	fun foo do 'A'.output
	fun bar: Char do return 'A'
	init do end
end

class B
	super A
	redef fun foo
	do
		'B'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'B'
	end
	init do end
end

class C
	super A
	redef fun foo
	do
		'C'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'C'
	end
	init do end
end

class D
	super B
	super C
	redef fun foo
	do
		'D'.output
		'['.output
		super
		']'.output
	end
	redef fun bar
	do 
		super.output
		return 'D'
	end
	init do end
end

(new A).work
(new B).work
(new C).work
(new D).work
