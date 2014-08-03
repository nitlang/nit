# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Business logic of a calculator
module calculator_logic

class CalculatorContext
	var result : nullable Float = null

	var last_op : nullable Char = null

	var current : nullable Float = null
	var after_point : nullable Int = null

	fun push_op( op : Char )
	do
		apply_last_op_if_any
		if op == 'C' then
			self.result = 0.0
			last_op = null
		else
			last_op = op # store for next push_op
		end

		# prepare next current
		after_point = null
		current = null
	end

	fun push_digit( digit : Int )
	do
		var current = current
		if current == null then current = 0.0

		var after_point = after_point
		if after_point == null then
			current = current * 10.0 + digit.to_f
		else
			current = current + digit.to_f * 10.0.pow(after_point.to_f)
			self.after_point -= 1
		end

		self.current = current
	end

	fun switch_to_decimals
	do
		if self.current == null then current = 0.0
		if after_point != null then return

		after_point = -1
	end

	fun apply_last_op_if_any
	do
		var op = last_op

		var result = result
		if result == null then result = 0.0

		var current = current
		if current == null then current = 0.0

		if op == null then
			result = current
		else if op == '+' then
			result = result + current
		else if op == '-' then
			result = result - current
		else if op == '/' then
			result = result / current
		else if op == '*' then
			result = result * current
		end
		self.result = result
		self.current = null
	end
end
