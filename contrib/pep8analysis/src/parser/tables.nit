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

# Module that interfaces the parsing tables.
module tables

# Interface allowing the acces of the tables used during the parsing.
interface TablesCapable
	# The goto value of the lexer at row i, column j-1
	# Note that the length of the row r is stored at (r, 0)
	fun lexer_goto(i, j: Int): Int is extern "lexer_goto"

	# The accept value of the lexer at i
	fun lexer_accept(i: Int): Int is extern "lexer_accept"

	# The goto value of the parser at row i, column j-1
	# Note that the length of the row r is stored at (r, 0)
	fun parser_goto(i, j: Int): Int is extern "parser_goto"

	# The action value of the parser at row i, column j-1
	# Note that the length of the row r is stored at (r, 0)
	fun parser_action(i, j: Int): Int is extern "parser_action"
end
