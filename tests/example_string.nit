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

# A procedural program (without explicit class).
# It displays the value of a local variable.
# It exhibs ways to concatenate strings.

var a = 10
# First way: Multiple parameters.
# Pro: Simple.
# Con: Only for multi parameters methods.
printn("The value of a is: ", a, ".\n")

# Second way: Build a string and display it.
# Pro: Eiffel way (rigourous).
# Con: Eiffel way (heavy).
var s = new FlatBuffer.from("The value of a is: ")
s.append(a.to_s)
s.append(".\n")
printn(s)

# Third way: Use a intern string evaluation.
# Pro: Script way (easy).
# Con: Script way (unreadeable on complexes cases).
printn("The value of a is: {a}.\n")

# Fourth way: String concatenation
# Pro: Easy.
# Con: Unefficient (slow and consumes memory).
printn("The value of a is: " + a.to_s + ".\n")

# Fiveth way: Join arrays.
# Pro: Sometime efficient on complex concatenation.
# Con: Crazy.
printn(["The value of a is: ", a.to_s, ".\n"].join(""))
