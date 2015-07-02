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

# Client `Assets` and client-only services on game elements
module assets is no_warning("attr-in-refinement")

import app::audio

import game

import drawing

redef class App
	redef fun load_image(path)
	do
		var img = super
		img.scale = 0.5
		return img
	end
end

redef class FeatureRule
	# Images of different alternatives
	var images: Array[Image]
end

redef class TankRule
	# Image of the base tank structure, at different health level
	var base_images: Array[Image]

	# Image of the turret
	var turret_image: Image
end

redef class Feature
	# Rotation angle of this feature
	var angle: Float = pi.rand

	# Index within `rule.images` of the image of this instance
	var image_index: Int = rule.images.length.rand is lazy
end

# Collection of assets
class Assets

	# Images from the `art/drawing.svg` file
	var drawing = new DrawingImages
	init do drawing.load_all(app)

	# Firing sound
	var turret_fire = new Sound("sounds/turret_fire.wav")

	# Turret is ready to fire sound
	var turret_ready = new Sound("sounds/turret_ready.mp3")

	# Associate images to the `story` rules
	fun assign_images_to_story(story: Story)
	do
		story.tree.images = drawing.trees
		story.rock.images = drawing.rock
		story.debris.images = drawing.debris

		for tank in story.tanks do
			tank.base_images = drawing.tank_hit
			tank.turret_image = drawing.turret
		end

		story.health.images = [drawing.health]
	end
end
