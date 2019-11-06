# This file is part of NIT ( http://www.nitlanguage.org ).
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

module game_examples is example

import game

# This is an example of how to implement the Game interface
class MyGame
	super Game

	redef var player_characters = new List[Character]

	redef var computer_characters = new List[Character]

	redef fun start_game do end

	redef fun pause_game do end

	redef fun stop_game do end
end
