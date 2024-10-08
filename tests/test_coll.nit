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

fun test_coll(c: Sequence[Object], e: Object...)
    do
	print("c: {c.to_s.is_empty}")
	print("empty: {c.is_empty}")
	print("length: {c.length == 0}")
	var e0 = e.pop
	print("count: {c.count(e0)==0}")
	c.add(e0)
	print("add...")
	print("count: {c.count(e0)==1}")
	print("c[0]: {c[0]==e0}")
	print("empty: {not c.is_empty}")
	print("length: {c.length==1}")
	c.remove(e0)
	print("remove...")
	print("empty: {c.is_empty}")
	print("count: {c.count(e0)==0}")
    end
