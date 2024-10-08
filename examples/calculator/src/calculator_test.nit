# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Test the business logic
module calculator_test

import calculator_logic

# context tests
var context = new CalculatorContext
context.push_digit( 1 )
context.push_digit( 2 )
context.push_op( "+" )
context.push_digit( 3 )
context.push_op( "*" )
context.push_digit( 2 )
context.push_op( "=" )
var r = context.result
assert r == 30 else print r or else "-"

context = new CalculatorContext
context.push_digit( 1 )
context.push_digit( 4 )
context.switch_to_decimals
context.push_digit( 1 )
context.push_op( "*" )
context.push_digit( 3 )
context.push_op( "=" )
r = context.result
assert r == 42.3 else print r or else "-"

context.push_op( "+" )
context.push_digit( 1 )
context.push_digit( 1 )
context.push_op( "=" )
r = context.result
assert r == 53.3 else print r or else "-"

context = new CalculatorContext
context.push_digit( 4 )
context.push_digit( 2 )
context.switch_to_decimals
context.push_digit( 3 )
context.push_op( "/" )
context.push_digit( 3 )
context.push_op( "=" )
r = context.result
assert r == 14.1 else print r or else "-"

#test multiple decimals
context = new CalculatorContext
context.push_digit( 5 )
context.push_digit( 0 )
context.switch_to_decimals
context.push_digit( 1 )
context.push_digit( 2 )
context.push_digit( 3 )
context.push_op( "+" )
context.push_digit( 1 )
context.push_op( "=" )
r = context.result
assert r == 51.123 else print r or else "-"

#test "C" button
context = new CalculatorContext
context.push_digit( 1 )
context.push_digit( 0 )
context.push_op( "+" )
context.push_digit( 1 )
context.push_digit( 0 )
context.push_op( "=" )
context.push_op( "C" )
r = context.result
assert r == null else print r
