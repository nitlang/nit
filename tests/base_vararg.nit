# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2009 Jean Privat <jean@pryen.org>
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

import array

fun foo(a: Char...)
do
	for x in a do x.output
	'\n'.output
end

fun bar(b: Char, a: Char...)
do
	b.output
	','.output
	for x in a do x.output
	'\n'.output
end

fun baz(a: Char..., b: Char)
do
	for x in a do x.output
	','.output
	b.output
	'\n'.output
end

fun foobar(b: Char, a: Char..., c: Char)
do
	b.output
	','.output
	for x in a do x.output
	','.output
	c.output
	'\n'.output
end

#alt1#foo
foo('1')
foo('1','2')
#alt2#bar
#alt3#bar('1')
bar('1','2')
bar('1','2','3')
#alt4#baz
#alt5#baz('1')
baz('1','2')
baz('1','2','3')
#alt6#foobar
#alt7#foobar('1')
#alt8#foobar('1','2')
foobar('1','2','3')
foobar('1','2','3','4')
