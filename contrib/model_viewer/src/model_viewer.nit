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

# Portable game to destroy asteroids
module model_viewer is
	app_name "Model Viewer"
	app_namespace "org.nitlanguage.model_viewer"
	app_version(1, 0, git_revision)

	android_manifest_activity """android:screenOrientation="landscape""""
	android_api_target 10
end

import gamnit::depth

import globe

redef class App

	# All available models
	var models: Array[Model] = [
		new LeafModel(new Cube, new Material),
		new LeafModel(new UVSphere(4.0, 32, 16), new Material),
		new LeafModel(new UVSphere(4.0, 32, 16), new NormalsMaterial),
		new Model("models/Tree_01.obj"),
		new Model("models/Oak_Fall_01.obj"),
		new Model("models/Quandtum_BA-2_v1_1.obj"),
		new GlobeModel]

	# Index of the current model in `models`
	var model_index = 0

	# Texture "Previous model"
	var ui_prev = new Texture("ui/prev.png")

	# Texture "Next model"
	var ui_next = new Texture("ui/next.png")

	redef fun on_create
	do
		super

		# Show splash screen
		var logo = new Texture("splash.png")
		show_splash_screen logo

		# Load all models passed as command line argument
		for arg in args.to_a.reversed do
			# Force an absolute path, this only works on desktop, but so does command args
			arg = getcwd / arg

			var model = new Model(arg)
			models.unshift model
		end

		world_camera.near = 0.1
		world_camera.far = 100.0

		for model in models do model.load
		for texture in asset_textures_by_name.values do texture.load

		# Display the first model
		model = models[model_index]

		# Setup UI
		# Use 800 px in height as screen reference
		ui_camera.reset_height 800.0

		var prev_sprite = new Sprite(ui_prev,
			ui_camera.bottom_left.offset(200, 40, 0))
		prev_sprite.scale = 0.5
		ui_sprites.add prev_sprite

		var next_sprite = new Sprite(ui_next,
			ui_camera.bottom_right.offset(-165, 40, 0))
		next_sprite.scale = 0.5
		ui_sprites.add next_sprite
	end

	# Set the currently displayed model
	fun model=(model: Model)
	do
		if model isa ModelAsset then print "Model: {model.path}"

		var actor = new Actor(model, new Point3d[Float](0.0, 0.0, 0.0))

		# Align on Y only
		actor.center.y -= model.center.y

		# Fit in viewport
		var height = model.dimensions.x
		height = height.max(model.dimensions.y)
		height = height.max(model.dimensions.z)
		world_camera.reset_height(height * 1.5)

		actors.clear
		actors.add actor
	end

	# Cycle to the next or previous model, changing the index by `d`
	fun cycle_model(d: Int)
	do
		model_index = (model_index + d + models.length) % models.length
		model = models[model_index]
	end

	redef fun accept_event(event)
	do
		var display = display
		if display == null then return super

		if event isa QuitEvent then
			exit 0
		else if event isa KeyEvent and event.is_down then
			if event.is_arrow_right then
				cycle_model 1
			else if event.is_arrow_left then
				cycle_model -1
			end
		else if event isa PointerEvent and not event.is_move and event.depressed then
			if event.x.to_i > display.width / 2 then
				cycle_model 1
			else cycle_model -1
		end

		return super
	end

	private var clock = new Clock

	redef fun update(dt)
	do
		super

		var t = clock.total.to_f

		# Rotate the model
		actors.first.rotation = t

		# Move the light source
		var dist_to_light = 20.0
		t *= 1.33
		light.position.x = dist_to_light * t.cos
		light.position.y = 4.0
		light.position.z = dist_to_light * t.sin
	end
end
