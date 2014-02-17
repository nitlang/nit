# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# By Flop

var s = "totototo.nit"
var p = "toto"
var e = ".nit"

print("substring: {s.substring(-1,5)}")
print("substring_from: {s.substring_from(4)}")
print("has_substring: {s.has_substring(p,4)}")
print("has_substring: {s.has_substring(p,0)}")
print("has_substring: {s.has_substring(p,1)}")
print("has_prefix: {s.has_prefix(p)}")
print("has_prefix: {s.has_prefix(e)}")
print("has_suffix: {s.has_suffix(e)}")
print("has_suffix: {s.has_suffix(p)}")

var test = "test"

print("test[0] == 't' => {test.chars[0] == 't'}")
print("test[1] == 'e' => {test.chars[1] == 'e'}")
print("test[2] == 's' => {test.chars[2] == 's'}")
print("test[3] == 't' => {test.chars[3] == 't'}")

print("test.substring(0,1) == \"t\" => {test.substring(0,1) == "t"}")
print("test.substring(0,2) == \"te\" => {test.substring(0,2) == "te"}")
print("test.substring(0,3) == \"tes\" => {test.substring(0,3) == "tes"}")
print("test.substring(0,4) == \"test\" => {test.substring(0,4) == "test"}")

print("test.has_substring(\"t\", 0) => {test.has_substring("t", 0)}")
print("test.has_substring(\"te\", 0) => {test.has_substring("te", 0)}")
print("test.has_substring(\"tes\", 0) => {test.has_substring("tes", 0)}")
print("test.has_substring(\"test\", 0) => {test.has_substring("test", 0)}")
print("test.has_substring(\"e\", 1) => {test.has_substring("e", 1)}")
print("test.has_substring(\"es\", 1) => {test.has_substring("es", 1)}")
print("test.has_substring(\"est\", 1) => {test.has_substring("est", 1)}")
print("test.has_substring(\"s\", 2) => {test.has_substring("s", 2)}")
print("test.has_substring(\"st\", 2) => {test.has_substring("st", 2)}")
print("test.has_substring(\"t\", 3) => {test.has_substring("t", 3)}")
print("test.has_substring(\"z\", 3) => {test.has_substring("z", 3)}")
print("test.has_substring(\"ze\", 0) => {test.has_substring("ze", 0)}")
print("test.has_substring(\"bas\", 0) => {test.has_substring("bas", 0)}")
print("test.has_substring(\"foot\", 0) => {test.has_substring("foot", 0)}")

print("test.has_prefix(\"t\") => {test.has_prefix("t")}")
print("test.has_prefix(\"te\") => {test.has_prefix("te")}")
print("test.has_prefix(\"tes\") => {test.has_prefix("tes")}")
print("test.has_prefix(\"test\") => {test.has_prefix("test")}")
print("test.has_prefix(\"ze\") => {test.has_prefix("ze")}")
print("test.has_prefix(\"bas\") => {test.has_prefix("bas")}")
print("test.has_prefix(\"foot\") => {test.has_prefix("foot")}")

print("test.has_suffix(\"t\") => {test.has_suffix("t")}")
print("test.has_suffix(\"st\") => {test.has_suffix("st")}")
print("test.has_suffix(\"est\") => {test.has_suffix("est")}")
print("test.has_suffix(\"test\") => {test.has_suffix("test")}")
print("test.has_suffix(\"bt\") => {test.has_suffix("bt")}")
print("test.has_suffix(\"bat\") => {test.has_suffix("bat")}")
print("test.has_suffix(\"foot\") => {test.has_suffix("foot")}")

