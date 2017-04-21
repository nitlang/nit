# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Add GNU readline capabilities to nitin
module nitin_readline

import nitin
import readline

redef class ToolContext
	redef fun readline(prompt) do return sys.readline(prompt)
	redef fun readline_add_history(text) do sys.add_history(text)
end
