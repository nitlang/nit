# This file is part of NIT ( https://nitlanguage.org ).
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Font support showcase
module fonts_showcase is
	example
	app_name "gamnit fonts"
	app_namespace "org.gamnit.fonts_showcase"
	app_version(1, 0, git_revision)
	android_api_target 10
	android_manifest_activity """android:screenOrientation="sensorLandscape" """
end

import gamnit::flat
import gamnit::bmfont

redef class App

	# Asset font used to display text
	var font = new BMFontAsset("Josefin_Sans/font.fnt")

	# Anchor texture identifying the anchor coordinates of each `TextSprites`
	var anchor = new Texture("anchor.png")

	# Bottom right corner
	var corner = new Texture("corner.png")

	redef fun create_scene
	do
		super

		for tex in all_root_textures do
			var error = tex.error
			if error != null then print_error "Texture '{tex}' failed to load: {error}"
		end

		update_text
	end

	# Draw or redraw all the `TextSprites`
	fun update_text
	do
		# Remove existing text and sprites
		ui_sprites.clear
		var texts = new Array[TextSprites]

		# Shared content
		var description = "The anchor icon identifies the coordinate of TextSprites::anchor."
		var lorem_ipsum = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et [dolore magna](my_link asdf) aliqua."
		var color = [0.0, 0.25, 0.5]

		# ---
		# TextSprites (the interesting part)

		# Aligned text (no max_width)
		texts.add new TextSprites(font,
			ui_camera.top.offset(-400.0, 0.0, 0.0),
			"Left, align=0.0:\n"+description)

		texts.add new TextSprites(font,
			ui_camera.top.offset(-400.0, -100.0, 0.0),
			"Right, align=1.0:\n"+description, align=1.0)

		texts.add new TextSprites(font,
			ui_camera.top.offset(-400.0, -200.0, 0.0),
			"Center, align=0.5:\n"+description, align=0.5)

		texts.add new TextSprites(font,
			ui_camera.top.offset(-400.0, -300.0, 0.0),
			"Weird, align=0.2:\n"+description, align=0.2)

		# Aligned with max width
		texts.add new TextSprites(font,
			ui_camera.top_left.offset(100.0, -400.0, 0.0),
			"Left, max_width=400.0:\n"+lorem_ipsum,
			align=0.0, max_width=400.0)

		texts.add new TextSprites(font,
			ui_camera.top_left.offset(1000.0, -400.0, 0.0),
			"Right, max_width=400.0, scale=0.66:\n"+lorem_ipsum,
			align=1.0, max_width=400.0, scale=0.66)

		texts.add new TextSprites(font,
			ui_camera.top_left.offset(300.0, -700.0, 0.0),
			"Center, max_width=400.0:\n"+lorem_ipsum,
			align=0.5, max_width=400.0)

		texts.add new TextSprites(font,
			ui_camera.top_left.offset(680.0, -700.0, 0.0),
			"Weird, max_width=400.0:\n"+lorem_ipsum,
			align=0.2, max_width=400.0)

		# Max width & height
		texts.add new TextSprites(font,
			ui_camera.top_left.offset(1100.0, -400.0, 0.0),
			"max_width & max_height:\n"+lorem_ipsum,
			max_width=600.0, max_height=150.0)

		# Thin max_width with overflows
		texts.add new TextSprites(font,
			ui_camera.top_left.offset(1100.0, -600.0, 0.0),
			"The 1{plu}st{pld} word of a line can always overflow:\n"+lorem_ipsum,
			 max_width=100.0, max_height=400.0)

		# No wrap
		texts.add new TextSprites(font,
			ui_camera.top_left.offset(1300.0, -600.0, 0.0),
			"wrap=false:\nLong lines are cut short blah blah blah\n"+lorem_ipsum,
			max_width=400.0, wrap=false)

		# Bottom align
		texts.add new TextSprites(font,
			ui_camera.top_left.offset(1300.0, -1000.0, 0.0),
			"valign=1.0:\n"+lorem_ipsum,
			max_width=400.0, valign=1.0)

		# Center valign
		texts.add new TextSprites(font,
			ui_camera.top_left.offset(1500.0, -220.0, 0.0),
			"align=0.5, valign=0.5:\n"+lorem_ipsum,
			max_width=400.0, align=0.5, valign=0.5)

		# ---
		# Links

		for ts in texts do
			for link_name, sprites in ts.links do
				print "Link: {link_name}"
				for s in sprites do s.green = 0.0
			end
		end

		# ---
		# Anchors and background boxes

		# Gradient background for the max_width texts
		var box = new CustomTexture(400.0, 200.0)
		for x in 400.times do for y in 150.times do
			var p = 1.0-1.0*y.to_f/150.0
			p = p.sqrt
			box[x, y] = color + [p]
		end
		box.load
		for i in [4..8[ do
			var t = texts[i]
			ui_sprites.add new Sprite(box,
				t.anchor.offset((-t.align+0.5)*t.max_width.as(not null),
				-100.0, -1.0))
		end

		# Plain boxes for max_width and max_height boxes
		var large_box = new CustomTexture(600.0, 150.0)
		large_box.fill color
		large_box.load
		ui_sprites.add new Sprite(large_box, texts[8].anchor.offset(300.0, -75.0, -1.0))

		var thin_box = new CustomTexture(100.0, 400.0)
		thin_box.fill color
		thin_box.load
		ui_sprites.add new Sprite(thin_box, ui_camera.top_left.offset(1150.0, -800.0, -1.0))

		# Other TextSprites
		ui_sprites.add new Sprite(box, texts[10].anchor.offset(200.0, -100.0, -1.0))

		var s = new Sprite(box, texts[11].anchor.offset(200.0, 100.0, -1.0))
		s.rotation = pi
		ui_sprites.add s

		ui_sprites.add new Sprite(box, texts[12].anchor.offset(0.0, 0.0, -1.0))

		# Add the anchor effects to all TextSprites
		for t in texts do ui_sprites.add new Sprite(anchor, t.anchor)

		for t in texts do
			# Bottom right
			var br = t.anchor.offset(t.width*(1.0-t.align), -t.height*(1.0-t.valign), 1.0)
			ui_sprites.add new Sprite(corner, br)
		end
	end

	redef fun accept_event(event)
	do
		if event isa QuitEvent or
		  (event isa KeyEvent and event.name == "escape" and event.is_up) then
			# Quit abruptly
			exit 0
		else if event isa KeyEvent and event.is_up then
			update_text
		end

		return false
	end
end
