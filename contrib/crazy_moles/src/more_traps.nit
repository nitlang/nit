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

# Add more traps
module more_traps

import moles
import effects

# Nuclear trap
class Nuke
	super Trap

	redef fun penalty_img do return app.assets.penalty_hundred

	redef fun flashes do return [
		new Flash(5.0, 0.0, 1.0, 0.0, 0.0, 1.25, 2.0),
		new Flash(0.2, 0.0, 1.0, 1.0, 1.0, 1.0, 2.0)]
end

# Large cactus trap
class BigTrap
	super Trap

	redef fun penalty_img do return app.assets.penalty_twenty
end

redef class Game

	# Nuclear trap
	var nuke = new Nuke(app.assets.nuke, 180.0*display_scale, 780.0*display_scale, 100) is lazy

	# Large cactus trap
	var big_cactus = new BigTrap(app.assets.big_cactus, 242.0*display_scale, 820.0*display_scale, 20) is lazy
end

redef class Hole
	redef fun to_pop
	do
		if game.points > 25 then
			if 25.rand == 0 then return game.big_cactus
			if game.points > 50 and 100.rand == 0 then return game.nuke
		end

		return super
	end
end
