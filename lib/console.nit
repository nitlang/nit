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

# Defines some ANSI Terminal Control Escape Sequences.
module console

# A ANSI/VT100 escape sequence.
abstract class TermEscape
	# The US-ASCII ESC character.
	protected fun esc: Char do return 27.ascii

	# The Control Sequence Introducer (CSI).
	protected fun csi: String do return "{esc}["
end

# Abstract class of the ANSI/VT100 escape sequences for directional moves.
abstract class TermDirectionalMove
	super TermEscape

	# The length of the move.
	var magnitude: Int = 1 is protected writable

	redef fun to_s do
		if magnitude == 1 then return "{csi}{code}"
		return "{csi}{magnitude}{code}"
	end

	# The code of the command.
	protected fun code: String is abstract
end

# ANSI/VT100 code to move the cursor up by `magnitude` rows (CUU).
class TermMoveUp
	super TermDirectionalMove

	init do end

	# Move by the specified number of cells.
	init by(magnitude: Int) do self.magnitude = magnitude

	redef fun code do return "A"
end

# ANSI/VT100 code to move the cursor down by `magnitude` rows (CUD).
class TermMoveDown
	super TermDirectionalMove

	init do end

	# Move by the specified number of cells.
	init by(magnitude: Int) do self.magnitude = magnitude

	redef fun code do return "B"
end

# ANSI/VT100 code to move the cursor foward by `magnitude` columns (CUF).
class TermMoveFoward
	super TermDirectionalMove

	init do end

	# Move by the specified number of cells.
	init by(magnitude: Int) do self.magnitude = magnitude

	redef fun code do return "C"
end

# ANSI/VT100 code to move the cursor backward by `magnitude` columns (CUB).
class TermMoveBackward
	super TermDirectionalMove

	init do end

	# Move by the specified number of cells.
	init by(magnitude: Int) do self.magnitude = magnitude

	redef fun code do return "D"
end

# ANSI/VT100 code to move the cursor at the specified position (CUP).
class TermMove
	super TermEscape

	# Vertical position.
	#
	# 1 is the top.
	var row: Int = 1

	# Horizontal position.
	#
	# 1 is the left.
	var column: Int = 1

	init do end

	# Move at the specified position.
	#
	# (1, 1) is the top-left corner of the display.
	init at(row: Int, column: Int) do
		self.row = row
		self.column = column
	end

	redef fun to_s do
		if row == 1 then
			if column == 1 then return "{csi}H"
			return "{csi};{column}H"
		else
			if column == 1 then return "{csi}{row}H"
			return "{csi}{row};{column}H"
		end
	end
end

# ANSI/VT100 code to clear from the cursor to the end of the screen (ED 0).
class TermEraseDisplayDown
	super TermEscape
	redef fun to_s do return "{csi}J"
end

# ANSI/VT100 code to clear from the cursor to the beginning of the screen (ED 1).
class TermEraseDisplayUp
	super TermEscape
	redef fun to_s do return "{csi}1J"
end

# ANSI/VT100 code to clear the entire display and move the cursor to the top left of screen (ED 2).
#
# Note: Some terminals always move the cursor when the screen is cleared. So we
# force this behaviour to ensure interoperability of the code.
class TermClearDisplay
	super TermEscape
	redef fun to_s do return "{csi}2J{csi}H"
end

# ANSI/VT100 code to erase anything after the cursor in the line (EL 0).
class TermEraseLineFoward
	super TermEscape
	redef fun to_s do return "{csi}K"
end

# ANSI/VT100 code to erase anything before the cursor in the line (EL 1).
class TermEraseLineBackward
	super TermEscape
	redef fun to_s do return "{csi}1K"
end

# ANSI/VT100 code to clear everything in the current line (EL 2).
class TermClearLine
	super TermEscape
	redef fun to_s do return "{csi}2K"
end

# ANSI/VT100 code to save the current cursor position (SCP).
class TermSaveCursor
	super TermEscape
	redef fun to_s do return "{csi}s"
end

# ANSI/VT100 code to restore the current cursor position (RCP).
class TermRestoreCursor
	super TermEscape
	redef fun to_s do return "{csi}u"
end

# ANSI/VT100 code to change character look (SGR).
#
# By default, resets everything to the terminal’s defaults.
#
# Note:
#
# The escape sequence inserted at the end of the string by terminal-related
# methods of `String` resets all character attributes to the terminal’s
# defaults. So, when combining format `a` and `b`, something like
# `("foo".a + " bar").b` will not work as expected, but `"foo".a.b + " bar".b`
# will. You may also use `TermCharFormat` (this class).
#
# Usage example:
#
#     print "{(new TermCharFormat).yellow_fg.bold}a{(new TermCharFormat).yellow_fg}b{new TermCharFormat}"
class TermCharFormat
	super TermEscape

	private var attributes: Array[String] = new Array[String]

	# Copies the attributes from the specified format.
	init from(format: TermCharFormat) do
		attributes.add_all(format.attributes)
	end

	redef fun to_s: String do return "{csi}{attributes.join(";")}m"

	# Apply the specified SGR and return `self`.
	private fun apply(sgr: String): TermCharFormat do
		attributes.add(sgr)
		return self
	end

	# Apply normal (default) format and return `self`.
	fun default: TermCharFormat do return apply("0")

	# Apply bold weight and return `self`.
	fun bold: TermCharFormat do return apply("1")

	# Apply underlining and return `self`.
	fun underline: TermCharFormat do return apply("4")

	# Apply blinking or bold weight and return `self`.
	fun blink: TermCharFormat do return apply("5")

	# Apply reverse video and return `self`.
	fun inverse: TermCharFormat do return apply("7")

	# Apply normal weight and return `self`.
	fun normal_weight: TermCharFormat do return apply("22")

	# Add the attribute that disable inderlining and return `self`.
	fun not_underlined: TermCharFormat do return apply("24")

	# Add the attribute that disable blinking and return `self`.
	fun steady: TermCharFormat do return apply("25")

	# Add the attribute that disable reverse video and return `self`.
	fun positive: TermCharFormat do return apply("27")

	# Apply a black foreground and return `self`.
	fun black_fg: TermCharFormat do return apply("30")

	# Apply a red foreground and return `self`.
	fun red_fg: TermCharFormat do return apply("31")

	# Apply a green foreground and return `self`.
	fun green_fg: TermCharFormat do return apply("32")

	# Apply a yellow foreground and return `self`.
	fun yellow_fg: TermCharFormat do return apply("33")

	# Apply a blue foreground and return `self`.
	fun blue_fg: TermCharFormat do return apply("34")

	# Apply a mangenta foreground and return `self`.
	fun magenta_fg: TermCharFormat do return apply("35")

	# Apply a cyan foreground and return `self`.
	fun cyan_fg: TermCharFormat do return apply("36")

	# Apply a white foreground and return `self`.
	fun white_fg: TermCharFormat do return apply("37")

	# Apply the default foreground and return `self`.
	fun default_fg: TermCharFormat do return apply("39")

	# Apply a black backgroud and return `self`.
	fun black_bg: TermCharFormat do return apply("40")

	# Apply a red backgroud and return `self`.
	fun red_bg: TermCharFormat do return apply("41")

	# Apply a green backgroud and return `self`.
	fun green_bg: TermCharFormat do return apply("42")

	# Apply a yellow backgroud and return `self`.
	fun yellow_bg: TermCharFormat do return apply("43")

	# Apply a blue backgroud and return `self`.
	fun blue_bg: TermCharFormat do return apply("44")

	# Apply a mangenta backgroud and return `self`.
	fun magenta_bg: TermCharFormat do return apply("45")

	# Apply a cyan backgroud and return `self`.
	fun cyan_bg: TermCharFormat do return apply("46")

	# Apply a white backgroud and return `self`.
	fun white_bg: TermCharFormat do return apply("47")

	# Apply the default backgroud and return `self`.
	fun default_bg: TermCharFormat do return apply("49")
end

# Redefine the `String` class to add functions to color the string.
redef class String
	private fun apply_format(f: TermCharFormat): String do
		return "{f}{self}{normal}"
	end

	private fun normal: TermCharFormat do return new TermCharFormat

	# Make the text appear in dark gray (or black) in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun gray: String do return apply_format(normal.black_fg)

	# Make the text appear in red in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun red: String do return apply_format(normal.red_fg)

	# Make the text appear in green in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun green: String do return apply_format(normal.green_fg)

	# Make the text appear in yellow in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun yellow: String do return apply_format(normal.yellow_fg)

	# Make the text appear in blue in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun blue: String do return apply_format(normal.blue_fg)

	# Make the text appear in mangenta in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun purple: String do return apply_format(normal.magenta_fg)

	# Make the text appear in cyan in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun cyan: String do return apply_format(normal.cyan_fg)

	# Make the text appear in light gray (or white) in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun light_gray: String do return apply_format(normal.white_fg)

	# Make the text appear in bold in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun bold: String do return apply_format(normal.bold)

	# Make the text underlined in a ANSI/VT100 terminal.
	#
	# WARNING: SEE: `TermCharFormat`
	fun underline: String do return apply_format(normal.underline)
end
