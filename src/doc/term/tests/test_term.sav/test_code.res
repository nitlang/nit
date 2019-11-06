Code for `test_prog::Character`:

~~~
# Characters can be played by both the human or the machine.
class Character

	# The `Race` of the character.
	var race: Race

	# The current `Career` of the character.
	# Returns `null` if character is unemployed.
	var career: nullable Career = null is writable

	fun quit do
		career = null
	end

	var name: String
	var age: Int
	var sex: Bool

	# The actual strength of the character.
	#
	# Returns `race.base_strength + career.strength_bonus` or just `race.base_strength` is unemployed.
	fun total_strengh: Int do
		if career != null then return race.base_strength + career.strength_bonus
		return race.base_strength
	end

	# The actual endurance of the character.
	fun total_endurance: Int do
		if career != null then return race.base_endurance + career.endurance_bonus
		return race.base_endurance
	end

	# The acutal intelligence of the character.
	fun total_intelligence: Int do
		if career != null then return race.base_intelligence + career.intelligence_bonus
		return race.base_intelligence
	end

	# Maximum health of the character.
	#
	# Based on `total endurance * 10`.
	fun max_health: Int do return total_endurance * 10

	# The current `health` of the character.
	#
	# Starts at `max_health`.
	var health: Int = max_health
end
~~~
