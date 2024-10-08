# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

import end

interface Object
end

class Int
	fun output is intern
end

class Foo
	var a1: Int is noinit
	var a2: Int is noinit
	fun run
	do
		_a1.output
		_a2.output
	end

	init
	do
		_a1 = 1
		_a2 = 2
	end
end

class Bar
	super Foo
	var a3: Int is noinit
	redef fun run
	do
		_a1.output
		_a2.output
		_a3.output
	end

	init 
	do 
		_a1 = 10
		_a2 = 20
		_a3 = 30
	end
end

var f = new Foo
var b = new Bar
f.run
b.run
