# This file is part of NIT ( https://nitlanguage.org ).
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

# Races of the game.
#
# All characters belong to a `Race`.
#
# Available races:
#
#  * `Human`
#  * `Dwarf`
#  * `Elf`
module races

import platform

# Race determines basic characteristics and what the character will be able to do in life.
#
# These are base characteristics, they cannot be changed
# but you can add new ones if needed using refinement.
# Objects and spells cannot change those characteristics.
abstract class Race

	# Used to represents how strong the race is.
	var base_strength: Int

	# Used to represents how the race can absorb damage.
	var base_endurance: Int

	# Is this race smart?
	var base_intelligence: Int

	init do end
end

# Humans are able to do everithing.
class Human
	super Race

	init do
		self.base_strength = 50
		self.base_endurance = 50
		self.base_intelligence = 50
	end
end

# Dwarves make strong warriors.
class Dwarf
	super Race

	init do
		self.base_strength = 60
		self.base_endurance = 50
		self.base_intelligence = 40
	end
end

# Elves make good magicians.
class Elf
	super Race

	init do
		self.base_strength = 40
		self.base_endurance = 40
		self.base_intelligence = 70
	end
end

