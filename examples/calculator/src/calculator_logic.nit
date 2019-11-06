# This file is part of NIT ( http://www.nitlanguage.org ).
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

import serialization

# Hold the state of the calculator and its services
class CalculatorContext
	auto_serializable

	# Result of the last operation
	var result: nullable Numeric = null

	# Last operation pushed with `push_op`
	var last_op: nullable Text = null

	# Is `last_op` an unary operation or a '='?
	var last_op_was_unary = false

	# Value currently being entered
	var current: nullable String = null

	# Text to display on screen
	fun display_text: String
	do
		var buf = new FlatBuffer

		var last_op = last_op
		var result = result
		if result != null then
			if last_op_was_unary then buf.append "{last_op or else "?"} "

			buf.append result.to_s
			buf.add ' '
		end

		if last_op != null and not last_op_was_unary then
			buf.append last_op
			buf.add ' '
		end

		var current = current
		if current != null then
			buf.append current.to_s
			buf.add ' '
		end

		return buf.to_s
	end

	# Push operation `op`, will usually execute the last operation
	fun push_op(op: Text)
	do
		# Constants
		# TODO Protect constants to preserve full precision and to forbid appending extra digits
		if op == "π" then
			if last_op_was_unary then clear
			current = pi.to_s
			return
		else if op == "e" then
			if last_op_was_unary then clear
			current = 2.718282.to_s
			return

		# Clear screen
		else if op == "C" then
			clear
			return

		# Unary -
		else if op == "-" then
			if current == null then
				if last_op_was_unary then clear
				current = "-"
				return
			else if current == "-" then
				current = null
				return
			end
		end

		# For all operators, apply pending operators
		apply_last_op_if_any

		var result = self.result or else 0

		last_op = op
		last_op_was_unary = true

		# Unary operators
		if op == "√" then
			self.result = result.to_f.sqrt
		else if op == "x²" then
			self.result = result.to_f.pow(2.0)
		else if op == "x!" then
			self.result = result.to_i.factorial
		else if op == "sin" then
			self.result = result.to_f.sin
		else if op == "cos" then
			self.result = result.to_f.cos
		else if op == "tan" then
			self.result = result.to_f.tan

		# =
		else if op == "=" then
			current = null

		# Binary operators
		else
			self.result = result # Set as same or 0
			last_op_was_unary = false
			current = null
		end
	end

	# Clear all state
	private fun clear
	do
		result = null
		last_op = null
		last_op_was_unary = false
		current = null
	end

	# Push a digit
	fun push_digit(digit: Int)
	do
		if last_op_was_unary then clear

		var current = current
		if current == null then current = ""
		current += digit.to_s
		self.current = current
	end

	# Switch entry mode from integer to decimal
	fun switch_to_decimals
	do
		var current = current
		if current == null then current = "0"
		if not current.chars.has('.') then current += "."
		self.current = current
	end

	# Execute the last operation it not null
	protected fun apply_last_op_if_any
	do
		var op = last_op
		var result = result
		var current = current
		self.current = null

		if current == null then return

		if op == null then
			result = current.to_n
		else if result != null then
			if op == "+" then
				result = result.add(current.to_n)
			else if op == "-" then
				result = result.sub(current.to_n)
			else if op == "/" or op == "÷" then
				result = result.div(current.to_n)
			else if op == "*" or op == "×" then
				result = result.mul(current.to_n)
			else if op == "%" then
				result = result.to_i % current.to_i
			else if op == "xⁿ" then
				result = result.to_f.pow(current.to_f)
			else if op == "log" then
				result = result.to_f.log_base(current.to_f)
			end
		end

		self.result = result
	end
end

redef universal Float
	redef fun to_s do return to_precision(6)
end
