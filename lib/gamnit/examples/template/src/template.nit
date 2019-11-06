# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Template for a 2D gamnit game
module template is
	example
	app_name "gamnit template"
	app_namespace "org.gamnit.template"
	app_version(0, 1, git_revision)
	android_api_target 10
end

import gamnit::flat # The 2D API, use `gamnit::depth` for 3D

redef class App

	# Texture, loaded in `create_scene`
	var texture = new Texture("fighter.png")

	# Sound effect, lazy loaded at first use
	var sound = new Sound("laser.mp3")

	# Sprite, must be loaded in or after `on_create`
	var sprite = new Sprite(texture, new Point3d[Float](0.0, 0.0, 0.0)) is lazy

	redef fun create_scene
	do
		super

		# Report errors on all loaded textures.
		# Root textures are associated to pixel data,
		# whereas other texture may be subtextures of root textures.
		for tex in all_root_textures do
			var error = tex.error
			if error != null then print_error "Texture '{tex}' failed to load: {error}"
		end

		# Draw the texture as pixelated, it looks better for such
		# a small texture.
		texture.as(TextureAsset).pixelated = true

		# Create the sprite and make it visible.
		sprites.add sprite

		# Make the sprite smaller, by default each pixel corresponds to 1 world unit.
		# However, it is often preferable to make 1 world unit correspond to
		# something meaningful in the game world, such as 1 meter.
		#
		# Scale the ship so it is approximately 5 world units wide.
		sprite.scale = 5.0 / texture.width

		# Move the camera to show 20 world units on the Y axis at Z = 0.
		# The `sprite` should take approximately 1/4 of the height of the screen.
		world_camera.reset_height 20.0

		# Move the near clip wall closer to the camera because our world unit
		# range is small. Moving the clip wall too close to the camera can
		# cause glitches on mobiles devices with small depth buffer.
		world_camera.near = 1.0

		# Make the background sky blue and opaque.
		glClearColor(0.5, 0.8, 1.0, 1.0)

		# If the first command line argument is an integer, add extra sprites.
		if args.not_empty and args.first.is_int then
			# It's a performance test, unlock the framerate.
			maximum_fps = -1.0

			# Add `args.first` sprites.
			for i in args.first.to_i.times do
				var s = new Sprite(texture, new Point3d[Float](30.0.rand - 15.0, 20.0.rand - 10.0, 0.0 - 30.0.rand))
				s.scale = 0.1
				sprites.add s
			end
		end
	end

	redef fun update(dt)
	do
		# Update game logic here.
		sprite.rotation += 0.1*pi*dt

		# Move `sprite` with the keyboard arrows.
		# Set the speed according to the elapsed time since the last frame `dt`
		# for a smooth animation.
		var unit_per_second = 2.0
		for key in pressed_keys do
			if key == "left" then
				sprite.center.x -= unit_per_second*dt
			else if key == "right" then
				sprite.center.x += unit_per_second*dt
			else if key == "up" then
				sprite.center.y += unit_per_second*dt
			else if key == "down" then
				sprite.center.y -= unit_per_second*dt
			end
		end
	end

	redef fun accept_event(event)
	do
		if super then return true

		if event isa QuitEvent or
		  (event isa KeyEvent and event.name == "escape" and event.is_up) then
			# When window close button, escape or back key is pressed
			print "Ran at {current_fps} FPS in the last few seconds"

			print "Performance statistics to detect bottlenecks:"
			print sys.perfs

			# Quit abruptly
			exit 0
		else if event isa KeyEvent and event.is_down then
			if event.name == "space" then
				# Play a sound when space bar is pressed.
				sound.play
				return true
			else if event.name == "s" then
				# Remove a random sprite.
				if sprites.not_empty then sprites.remove sprites.rand
			else if event.name == "w" then
				# Add a random sprite.
				var s = new Sprite(texture, new Point3d[Float](30.0.rand - 15.0, 20.0.rand - 10.0, 0.0 - 30.0.rand))
				s.scale = 0.1
				s.tint[1] = 0.0
				s.tint[2] = 0.0
				sprites.add s
			end
		end

		return false
	end
end
