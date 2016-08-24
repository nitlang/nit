# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Johann DUBOIS <johann.dubois@outlook.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Functional example of SCA module
module test

import sca
import addition
import multiplication
import calculator

# Example of a calculator in SCA 
# With use of two components: addition and multiplication 
# The calculator component uses the other two to perform the operations


# Create the composite
var composite = new SCAComposite.with_name("calculatrice")

# the addition component
var c_addition = new Addition(composite)

# the multiplication component
var c_multiplication = new Multiplication(composite)

# the calculator component who will use the other two
var c_calculator = new Calculator(composite)


# Using the Calculator 
# The calculator component is recovered
var calculator = composite.get("calculator").as(Calculator)
# Sum is performed ...
var sum = calculator.addition(10, 10) 
# ... and multiplication
var result = calculator.multiplication(sum, 2)

# print the results
print "calculator.addition(10, 10) : {sum}"
print "calculator.multiplication({sum}, 2) : {result}"
