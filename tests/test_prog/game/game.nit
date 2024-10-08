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

# A game abstraction for RPG.
module game

import rpg

# This is the interface you have to implement to use ure gaming platform.
#
# see http://our.platform.com
interface Game

	# Characters played by human players.
	fun player_characters: List[Character] is abstract

	# Characters players by computer.
	fun computer_characters: List[Character] is abstract

	# Start the game.
	#
	# You have to implement that method!
	fun start_game is abstract

	# Pause the game.
	#
	# You have to implement that method!
	fun pause_game is abstract

	# Stop the game.
	#
	# You have to implement that method!
	fun stop_game is abstract
end

