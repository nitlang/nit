# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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
	var x: Object = fail
	var i: Int = 1
	fun y do fail
	fun z: Object do return fail
	fun t do
		_i = fail
		_i += fail
	end

end

fun trash(x: A) do end

#alt1#fun fail: Fail do return new Fail
#alt2#var fail: Fail = new Fail
#alt3#var fail = fail(5)
#alt4#var fail: Object = 5
#alt5#var fail: Object = 5
#alt5#fail = fail2(5)
#alt6#var fail = null
var ok = 5
ok.fail
var nok: Int = fail
trash(nok)
nok.fail
var nok2 = fail
trash(nok2) # no rtype
nok2.fail

fail
trash(fail) # no rtype
fail.trash
fail = ok
ok = fail
fail += 1
ok += fail
fail += fail

do
	fail
end
if fail then trash(0)
if true then fail else fail
trash(if fail then 1 else 2)
trash(if true then 1 else fail) # no rtype
trash(if true then fail else fail) # no rtype

while fail do trash(0)
while true do fail

for i in fail do trash(0) # no rtype (hum...)
for j in [0..1] do fail
assert fail
trash(once fail) # no rtype
trash(fail or true)
trash(true or fail)
trash(fail or fail)
trash(fail and true)
trash(fail and fail)
trash(fail and fail)
trash(not fail)
trash(fail == 1) # no rtype
trash(1 == fail)
trash(fail == fail) # no rtype
trash(fail != 1) # no rtype
trash(1 != fail)
trash(fail != fail) # no rtype
trash(fail.is_same_instance(1))
trash(1.is_same_instance(fail))
trash(fail.is_same_instance(fail))
trash(fail < 1) # no rtype
trash(1 < fail)
trash(fail < fail) # no rtype
trash(fail > 1) # no rtype
trash(1 > fail)
trash(fail > fail) # no rtype
trash(fail <= 1) # no rtype
trash(1 <= fail)
trash(fail <= fail) # no rtype
trash(fail >= 1) # no rtype
trash(1 >= fail)
trash(fail >= fail) # no rtype
trash(fail <=> 1) # no rtype
trash(1 <=> fail)
trash(fail <=> fail) # no rtype
trash(fail + 1) # no rtype
trash(1 + fail)
trash(fail + fail) # no rtype
trash(fail - 1) # no rtype
trash(1 - fail)
trash(fail - fail) # no rtype
trash(fail * 1) # no rtype
trash(1 * fail)
trash(fail * fail) # no rtype
trash(fail / 1) # no rtype
trash(1 / fail)
trash(fail / fail) # no rtype
trash(fail % 1) # no rtype
trash(1 % fail)
trash(fail % fail) # no rtype
trash(-fail) # no rtype

var str = "XXX"
trash(str._fail) # no rtype
str._fail = 1
str._fail += 1

trash(fail._x) # no rtype
fail._x = 4
fail._x += 5

var arr = [1, 2]
trash(arr[fail])
arr[1] = fail
arr[1] += fail
trash(fail[1]) # no rtype
fail[1] = 2
fail[1] += 2
fail[fail] = fail

trash([1..fail]) # no rtype
trash([fail..1]) # no rtype
trash([fail..fail]) # no rtype
trash([1..fail[) # no rtype
trash([fail..1[) # no rtype
trash([fail..fail[) # no rtype
trash([1, fail]) # no rtype
trash([fail, 1]) # no rtype
trash([fail, fail]) # no rtype

trash("hello{fail}world")
trash(fail.as(Int)) # no rtype
trash(fail.as(not null))
trash(fail isa Int) # no rtype

