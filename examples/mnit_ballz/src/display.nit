# this file is part of NIT ( http://www.nitlanguage.org ).
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

# Handles the drawing of all the game
module display

import game_logic

redef class Ball

	# Draw `self` onto `display` with image from `assets`
	fun draw(display: Display, assets: Assets)
	do
		display.blit_centered(assets.ball, center.x, center.y)
	end
end

redef class Wall

	# Draw `self` onto `display` with image from `assets`
	fun draw(display: Display, assets: Assets)
	do
		display.blit_rotated(assets.vertical_wall, center.x, center.y, angle)
	end
end

redef class Game

	# Draw all the entities onto `display`
	fun draw(display: Display, assets: Assets)
	do
		display.clear (0.0, 0.0, 0.0)
		ball.draw(display, assets)
		for wall in walls do wall.draw(display, assets)
	end
end
