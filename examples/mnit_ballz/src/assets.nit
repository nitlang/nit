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


# All the assets needed by the appplication, regrouped in one class
module assets

import app::audio
import mnit::assets


# Contains all the assets
class Assets

	# Sound for the wall destruction
	var wall_destruction = new Sound("walld.wav")

	# Sound when the ball bounce
	var bounce = new Sound("bounce.ogg")

	# Image of the ball
	var ball: Image is noinit

	# Image for the horizontal walls
	var horizontal_wall: Image is noinit

	# Image for the vertical walls
	var vertical_wall: Image is noinit

	# Loads all the assets
	fun load do
		ball = app.load_image("images/ball.png")
		horizontal_wall = app.load_image("images/horizontal_wall.png")
		vertical_wall = app.load_image("images/vertical_wall.png")
		wall_destruction.load
		bounce.load
	end
end
