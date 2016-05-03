# This file is part of NIT ( http://www.nitlanguage.org ).
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

module test_string_is_numeric

#False
print "d52".is_numeric

#True
print "45".is_numeric

#True
print "45.3".is_numeric

#False
print "45,3".is_numeric

#False
print "1,000.80".is_numeric

#False
print "1,000.45.65".is_numeric

#False
print "6.000,58".is_numeric

#False
print "6.000,58,65".is_numeric

#False
print "6.00.512,32".is_numeric

#False
print "6.000.251,52".is_numeric

#False
print "585,210.52".is_numeric

#False
print "21,52,210.52".is_numeric

var buf = new FlatBuffer

buf.append("45.3")

#True
print buf.is_numeric

buf.append("d")

#False
print buf.is_numeric
