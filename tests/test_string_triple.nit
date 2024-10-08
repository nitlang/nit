# This file is part of NIT ( https://nitlanguage.org ).
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

var s1 = "a" + "b'b" + "c'c\"c"
print s1

var s2 = """a""" + """"b"b""" + """"c\""" "\"" ""\"
c
"""
print s2

var s3 = '''a''' + '''b'b''' + '''c\''' '\'' ''\'
c
'''
print s3

var s4 = "1{1}1{1}" + "{1+1}{"1"}"
print s4

var s5 = """1{{{1}}}1{{{1}}}""" + """b{b}b""" + """c\{{{ {\{{ {{\{ {{{1}}}"""
print s5

var s6 =
"""
{{{
"""
"""
}}}
"""
print s6

var s9 = """*{{{ 1 }**{ 2 }}}***{{{ 3 }***" + "${ 4 }}}$"""
print s9
