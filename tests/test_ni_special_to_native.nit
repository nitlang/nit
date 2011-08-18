# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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

class A
	fun extern_echo is extern
	fun echo do print "A"
end

class B
special A
	redef fun extern_echo is extern
	redef fun echo do print "B"
end

var a = new A
a.echo
a.extern_echo

var b = new B
b.echo
b.extern_echo

# explicit casts
b.as(A).echo
b.as(A).extern_echo
