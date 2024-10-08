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

# COmbat interactions between characters.
module combat

import character

# Something that can be used to attack someone and inflict damage.
interface Weapon
	# Damage per second inflicted by this weapon.
	fun dps: Float is abstract
end

# Something that can be combatted, it can `attack` and `defend`.
#
# World items can also be `Combatable`.
# `defend` method is then used to determines how the object react to an attack
# Some magical items can even `attack`.
interface Combatable
	fun hit_points: Int is abstract

	# A `Combatable` can attack a `target` that is also a `Combatable`.
	#
	# Attack the `target` using `wepaon` and returns the number of inflicted hit points.
	fun attack(target: Combatable, weapon: Weapon): Int is abstract

	# Like `attack` but cannot be defended.
	fun direct_attack(target: Combatable, weapon: Weapon): Int is abstract

	# `Combatable` can defend against attacks.
	#
	# Defends against a number of received hit points and return the number of pared hit points.
	#
	# @param hit: damage received.
	fun defend(hit: Int): Int is abstract

	# Is the character still have hit_points?
	fun is_dead: Bool do return hit_points > 0
end

# Characters are now `Comabatable`
redef class Character
	super Combatable

	# Use character `health` to determines hit_points.
	redef fun hit_points do return health
end

# Dwarves can be used as weapons.
redef class Dwarf
	super Weapon

	# Dwarf `dps` are based on the dwarf `base_endurance` (represents weight here)
	redef fun dps do return base_endurance.to_f / 10.0
end
