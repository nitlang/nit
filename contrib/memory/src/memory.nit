# This file is part of NIT (http://www.nitlanguage.org).
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

# A game of memory using shapes and colors
#
# # Features and TODO
#
# * [X] Various shapes, colors and sounds
# * [X] 3 difficulty modes
# * [X] Saved high scores
# * [ ] Level selection
#
# The remaining issues are
#
# * Crappy event system
# * Crappy UI element placement
module memory is
	app_name("Memorize Shapes and Colors")
	app_namespace "org.nitlanguage.memory"
	app_version(0, 1, git_revision)
end

import mnit
import app::audio
import mnit::opengles1
import app::data_store

import drawing

# A figure to click on
class Button
	# The place, starting from 0.
	# Will be used to derive the display place.
	var place: Int

	# The color of the figure
	var color: Color

	# The shape of the figure
	var shape: Image

	# The sound of the figure
	var sound: Sound

	# x-coordinate on the display
	var x: Float = 0.0
	# y-coordinate on the display
	var y: Float = 0.0
	# width on the display
	var w: Float = 0.0
	# height the display
	var h: Float = 0.0

	# Event time to live (from 1.0 downto 0.0)
	var ttl: Float = 0.0

	# Is there a big error on the button?
	var error = false

	# The initial position (according to shuffle)
	var from: Pos is noinit

	# The current path if shuffling
	var path: nullable BPath = null

	# The second path if hard shuffling
	var path2: nullable BPath = null

	# Is there an hard shuffling?
	var hard = false

	# The optional text on the button (in the menu)
	var text: nullable Image = null

	# The color of the text
	var text_color: nullable Color = null

	# The high score on the menu button
	var text_max: Int = 0

	# Draw on the display
	fun blit_on(display: Display)
	do
		if ttl > 0.0 then
			ttl -= 0.1
			if ttl <= 0.0 then
				ttl = 0.0
				path = path2
				path2 = null
				if path != null then ttl = path.duration
				error = false
			end
		end

		var x = self.x
		var y = self.y
		var p = 0.0
		if ttl > 0.0 then
			if path != null then
				var pos = to_pos
				path.update(pos, ttl)
				x = pos.x
				y = pos.y
				if hard then
					p = ttl/5.0
					if path2 != null then
						p = 1.0 - p
					end
				end
			else if error then
				# nothing
			else
				y -= ttl * h / 10.0
			end
		end

		if not app.player then
			p = 0.2.lerp(p, 1.0)
		end

		color.set(display, p)
		display.blit_centered(shape, x, y)
		var text = self.text
		if text != null then
			text.scale = shape.scale
			text_color.set(display, p)
			display.blit_centered(text, x, y - h/8.0)
			if text_max > 0 then
				app.blit_number(text_max, app.scale, x, y + h/8.0)
			end
		end
		if display isa Opengles1Display then
			display.reset_color
		end
		if error then
			app.drawing.error.scale = app.scale
			display.blit_centered(app.drawing.error, x, y)
		end
	end

	redef fun to_s do
		return "{place},{color},{shape},{sound}"
	end

	# Check collision
	fun has(x,y: Float): Bool
	do
		return (self.x - x).abs*2.0 <= w and (self.y - y).abs*2.0 <= h
	end

	# Return a new pos centered on the button
	fun to_pos: Pos do return new Pos(x, y)
end

# A rbg color
class Color
	# red (from 0.0 to 1.0)
	var r: Float
	# green (from 0.0 to 1.0)
	var g: Float
	# blue (from 0.0 to 1.0)
	var b: Float

	# Globally change the color of the display.
	# The color will be used for the next blit operations.
	# The color of the display has to be reseted manually (see `Opengles1Display::reset_color`).
	fun set(display: Display, p: Float)
	do
		if display isa Opengles1Display then
			display.color(p.lerp(r,1.0),p.lerp(g,1.0),p.lerp(b,1.0),p.lerp(1.0,0.0))
		end
	end
end

# A point in the display coordinates
class Pos
	# x coordinate
	var x: Float
	# y coordinate
	var y: Float
	redef fun to_s do return "({x},{y})"
end

# A cubic Bézier path between two points with two handles.
class BPath
	# The origin point
	var from: Pos
	# The handle of the origin point
	var from_handle: Pos
	# The handle of the destination point
	var to_handle: Pos
	# The destination point
	var to: Pos
	# The duration on the path
	var duration: Float

	# Update the coordinates of `cursor` for an absolute time to destination `ttd`
	fun update(cursor: Pos, ttd: Float)
	do
		var p = 1.0 - ttd / duration
		if p <= 0.0 then
			cursor.x = from.x
			cursor.y = from.y
			return
		end
		if p >= 1.1 then
			cursor.x = to.x
			cursor.y = to.y
		end
		var bx = p.cerp(from.x, from_handle.x, to_handle.x, to.x)
		var by = p.cerp(from.y, from_handle.y, to_handle.y, to.y)
		cursor.x = bx
		cursor.y = by
	end
end

redef class App

	# # Assets and resources

	# All the images assets
	var drawing = new DrawingImages

	# Array of all available colors for the figures
	var colors = new Array[Color]

	# Array of all available shapes for the figures
	var shapes = new Array[Image]

	# Array of all available sounds for the figures
	var sounds = new Array[Sound]

	# The sound to play on error (error)
	var snd_penalty: Sound is noautoinit

	# The sound of other ui element
	var snd_click: Sound is noautoinit

	redef fun on_create
	do
		colors.clear
		colors.add new Color(0.9, 0.6, 0.0)
		colors.add new Color(0.6, 0.0, 0.9)
		colors.add new Color(0.6, 0.5, 0.4)
		colors.add new Color(1.0, 0.0, 0.0)
		colors.add new Color(1.0, 1.0, 0.0)
		colors.add new Color(1.0, 0.0, 1.0)
		colors.add new Color(0.0, 1.0, 0.0)
		colors.add new Color(0.0, 1.0, 1.0)
		colors.add new Color(0.0, 0.0, 1.0)

		drawing.load_all(self)
		shapes.clear
		shapes.add drawing.circle
		shapes.add drawing.rect
		shapes.add drawing.cross
		shapes.add drawing.penta
		shapes.add drawing.star
		shapes.add drawing.triangle
		shapes.add drawing.heart
		shapes.add drawing.diamond
		shapes.add drawing.moon
		shapes.add drawing.spiral

		number_images = new NumberImages(drawing.n)

		sounds.clear
		sounds.add new Sound("bing.wav")
		sounds.add new Sound("boing.wav")
		sounds.add new Sound("cymbal.wav")
		sounds.add new Sound("dart.wav")
		sounds.add new Sound("duh.wav")
		sounds.add new Sound("grunt.wav")
		sounds.add new Sound("honkhonk.wav")
		sounds.add new Sound("line_end.wav")
		sounds.add new Sound("squishy-hit.wav")
		sounds.add new Sound("woodthunk.wav")
		sounds.add new Sound("whip.wav")

		snd_penalty = new Sound("penalty.wav")
		snd_click = new Sound("click.wav")

		# Force load the sounds. Required because bug #1728
		for s in sounds do s.load
		snd_penalty.load

		is_menu = data_store["game"] != true
		mode = data_int("mode") or else 0
		current_level = data_int("level") or else 0

		max_levels[0] = data_int("max_0") or else 0
		max_levels[1] = data_int("max_1") or else 0
		max_levels[2] = data_int("max_2") or else 0

		print "max_levels: {max_levels}"

		reload = new Button(-1, new Color(1.0,1.0,1.0), drawing.reload, snd_click)

		if is_menu then
			new_menu
		else
			new_game
		end
	end

	# Get a positive numeric value from the store
	fun data_int(name: String): nullable Int
	do
		var x = data_store[name]
		if x isa Int then return x else return null
	end

	# # Level information

	# Number of buttons for the next game
	var size = 5

	# Length of the memory sequence for the next game
	var length = 5

	# Do a hard deal?
	var hard_deal = false

	# No shuffle (0), easy shuffle (1), or hard shuffle (2)?
	var shuffling = 0

	# Is a new deal make on replay?
	# If true, a new set of figures and a new sequence is produced
	# If false, the same is reused.
	var deal_on_replay = true

	# Current buttons in the game
	var buttons = new Array[Button]

	# The sequence of the buttons to memorize
	var level = new Array[Button]

	# The number of errors (crosses) in the current level. (in [0..3])
	var error = 0

	# Is the player playing?
	# If false it means that the game is showing the sequence to memorize
	var player = false

	# Next button on the level (to show or guess according to `player`)
	var cpt = 0

	# Time to live before the next event
	var ttl = 0.0

	# Are we in the menu?
	var is_menu = true

	# In the end of game, is this a win of a lose?
	var is_win = false

	# Reset everything and create a menu
	fun new_menu
	do
		is_menu = true
		size = 3
		length = 0
		shuffling = 0

		data_store["game"] = false

		colors.shuffle
		shapes.shuffle
		sounds.shuffle

		buttons.clear
		for i in [0..size[ do
			var b = new Button(i, colors[i], shapes[i], sounds[i])
			buttons.add b
			b.text = drawing.hard[i]
			b.text_color = colors[3+i]
			b.text_max = max_levels[i]
		end

		# Start the scene
		start_scene
	end

	# The current mode: easy (0), medium (1), hard (2)
	var mode = 0

	# The current level (from 0)
	var current_level = 0

	# Hight scores of each mode
	var max_levels: Array[Int] = [0, 0, 0]

	# Reset everything and create a new game using `mode` and `level`
	fun new_game
	do
		print "Next game: mode={mode} level={current_level}"
		data_store["game"] = true
		data_store["mode"] = mode
		data_store["level"] = current_level
		if max_levels[mode] < current_level then
			max_levels[mode] = current_level
			data_store["max_{mode}"] = current_level
		end

		if mode == 0 then
			hard_deal = false
			shuffling = 0
			deal_on_replay = false
			size = 2
			length = 1
		else if mode == 1 then
			hard_deal = false
			shuffling = 1
			deal_on_replay = true
			size = 3
			length = 3
		else
			hard_deal = true
			shuffling = 2
			deal_on_replay = true
			size = 3
			length = 3
		end
		for i in [0..current_level[ do
			length += 1
			if length > size + 2 then
				size += 1
				length -= 1
			end
			if size > 16 then size = 16
		end

		deal_game
	end

	# Reset the buttons and deal a new game using `size` and `length`
	fun deal_game
	do
		is_menu = false

		# Randomize the deal
		colors.shuffle
		shapes.shuffle
		sounds.shuffle

		# Setup the figure
		buttons.clear
		if not hard_deal then
			# With the easy deal, each button is easily distinguishable
			for i in [0..size[ do
				var b = new Button(i, colors[i%colors.length], shapes[i%shapes.length], sounds[i%sounds.length])
				buttons.add b
			end
		else
			# With the hard deal, use overlapping combinations of colors and shapes
			var sqrt = size.to_f.sqrt
			var ncol = sqrt.floor.to_i
			var nsha = sqrt.ceil.to_i
			while ncol*nsha < size do ncol += 1

			# Randomly swap the numbers of colors/shapes
			if 2.rand == 0 then
				var t = ncol
				ncol = nsha
				nsha = t
			end

			# Deal combinations (up to `size`)
			for i in [0..ncol[ do
				for j in [0..nsha[ do
					if buttons.length >= size then break
					var b = new Button(buttons.length, colors[i], shapes[j], sounds.rand)
					buttons.add b
				end
			end

			# A last shuffle to break the colors/shapes grid
			buttons.shuffle
		end

		# Deal the level (i.e. sequence to memorize)
		# To increase distribution, determinate a maximum number of repetition
		# of a single button
		var rep = (length.to_f / size.to_f).ceil.to_i
		var pool = buttons * rep
		pool.shuffle

		level.clear
		for i in [0..length[ do
			level.add pool[i]
		end

		print "newgame size={size} length={length}"

		# Start the scene
		start_scene
	end

	# Cause a replay on the same level
	# On easy mode, the same level is replayed exactly
	# On other modes, a new deal is made
	fun replay_game
	do
		if deal_on_replay then
			deal_game
		else
			start_scene
		end
	end

	# Reset the state of the scene and start with `fly_in`
	fun start_scene
	do
		player = false
		cpt = -1
		path = null
		error = 0

		# Ask for a redraw
		first_frame = true
	end

	# # Placement and moves

	# Locations used to place buttons on the screen
	private var locations: Array[Array[Float]] = [
		[0.0, 1.0],
		[0.0, 1.0, 0.5],
		[0.0, 1.0, 0.0, 1.0],
		[0.0, 1.0, 2.0, 0.5, 1.5],
		[0.0, 1.0, 2.0, 0.0, 1.0, 2.0],
		[0.5, 1.5, 0.0, 1.0, 2.0, 0.5, 1.5],
		[0.0, 1.0, 2.0, 0.0, 2.0, 0.0, 1.0, 2.0],
		[0.0, 1.0, 2.0, 0.0, 1.0, 2.0, 0.0, 1.0, 2.0],
		[0.5, 1.5, 2.5, 0.0, 1.0, 2.0, 3.0, 0.5, 1.5, 2.5],
		[0.0, 1.0, 2.0, 3.0, 0.0, 1.5, 3.0, 0.0, 1.0, 2.0, 3.0],
		[0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0],
		[0.5, 1.5, 2.5, 0.0, 1.5, 3.0, 0.0, 1.0, 2.0, 3.0, 0.5, 1.5, 2.5],
		[0.5, 1.5, 2.5, 0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0, 0.5, 1.5, 2.5],
		[0.5, 1.5, 2.5, 0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0],
		[0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 3.0]]


	# The scale of the figures.
	# According to the screen dimensions and the number of figures
	var scale = 0.0

	# The scale of the UI
	# According to the screen dimensions
	var ui_scale = 0.0

	# Compute then location on the display for each button
	#
	# The method can be called when there is a change in the buttons (or the display).
	fun locate(display: Display)
	do
		# The locations depend of the number of buttons (from 2 to 9)
		var n = buttons.length
		var locs = locations[n-2]
		var columns = if n <= 4 then 2 else if n <= 9 then 3 else 4
		var rows = if n <= 2 then 1 else if n <= 6 then 2 else if n <= 12 then 3 else 4

		# Compute basic dimensions according to the screen
		var slotw = display.width / columns
		var sloth = display.height / rows
		var subw = slotw - slotw/5
		var subh = sloth - sloth/5

		# Compute the figure scale
		var img = drawing.circle
		var xs = subw.to_f / img.width.to_f
		var ys = subh.to_f / img.height.to_f
		scale = xs.min(ys)

		# Compute the UI scale
		xs = display.width.to_f / img.width.to_f
		ys = display.height.to_f / img.height.to_f
		ui_scale = xs.min(ys) / 4.0

		var last = -1.0
		var row = 0.0
		var cpt = 0
		for b in buttons do
			b.place = cpt
			var col = locs[cpt]
			if col <= last then
				row += 1.0
			end
			last = col

			b.x = (col + 0.5) * slotw.to_f
			b.y = (row + 0.5) * sloth.to_f
			img = b.shape
			img.scale = scale
			b.w = (img.width.to_f * scale)
			b.h = (img.height.to_f * scale)

			cpt += 1
		end

		left.x = -150.0 * scale
		left.y = (display.height / 2).to_f
		right.x = display.width.to_f + 150.0 * scale
		right.y = left.y

		# Other UI elements

		if not is_menu then
			var reload = self.reload
			drawing.reload.scale = ui_scale
			reload.x = display.width.to_f - (drawing.reload.width.to_f / 2.0 * 1.2 ) * ui_scale
			reload.y = drawing.reload.height.to_f / 2.0 * 1.2 * ui_scale
			reload.w = drawing.reload.width.to_f * ui_scale
			reload.h = drawing.reload.height.to_f * ui_scale
		end
	end

	# The origin point of the cursor on the left
	var left = new Pos(0.0, 0.0)

	# The destination point of the cursor on the right
	var right = new Pos(0.0, 0.0)

	# The current cursor position
	var cursor = new Pos(0.0, 0.0)

	# The current cursor path
	var path: nullable BPath = null

	# The reload button
	var reload: Button is noautoinit

	# Safe point for a cursor on the i-th button of the level
	fun path_pos(i: Int): Pos
	do
		if i < 0 then return left
		if i >= level.length then return right
		return level[i].to_pos
	end

	# A random point outside of the screen
	fun far_away(display: Display): Pos
	do
		var a = (2.0*pi).rand
		var w = display.width.to_f / 2.0
		var h = display.height.to_f / 2.0
		var x = w + a.cos * w * 1.8
		var y = h + a.sin * h * 1.8
		return new Pos(x, y)
	end

	# Create a BPath between two point with some nice handle values
	fun new_path(from, to: Pos, ttl: Float): BPath
	do
		var a = atan2(to.y-from.y, to.x-from.x)
		a += pi * (2.0.rand - 1.0)
		var radius = 300.0 * scale
		var fh = new Pos(from.x + a.cos*radius, from.y + a.sin*radius)
		#var th = new Pos(to.x - a.cos*radius, to.y - a.sin*radius)
		var path = new BPath(from, fh, to, to, ttl)
		return path
	end

	# Initial placement of buttons
	fun fly_in(display: Display)
	do
		for b in buttons do
			var from = far_away(display)
			var to = b.to_pos
			var path = new_path(from, to, 5.0)
			b.path = path
			b.ttl = 5.0
		end
		ttl = 6.0
	end

	# Final leaving of buttons
	fun fly_out(display: Display)
	do
		for b in buttons do
			var from = b.to_pos
			var to = far_away(display)
			b.x = to.x
			b.y = to.y
			var path = new_path(from, to, 5.0)
			b.path = path
			b.ttl = 5.0
			b.hard = false
		end
		ttl = 6.0
	end

	# Randomly permute the content of `buttons` such that no element appears in its original position.
	fun derangement
	do
		# The simplest algorithm is to shuffle until no buttons is at the same place
		# This is also quite efficient and converges extremely quickly
		var redo = true
		while redo do
			redo = false
			buttons.shuffle
			for i in [0..size[ do
				if i == buttons[i].place then
					redo = true
					break
				end
			end
		end
	end

	# Shuffling the place of each button on the screen
	fun shuffle(display: Display)
	do
		for b in buttons do
			b.from = b.to_pos
		end

		derangement

		locate(display)
		for b in buttons do
			var from = b.from
			var to = b.to_pos
			#print "shuffle move {b.place}: {from} -> {to}"
			b.path = new_path(from, to, 5.0)
			b.ttl = 5.0
		end
		ttl = 5.0
	end

	# Shuffle the place of each button in a hard way
	fun hard_shuffle(display: Display)
	do
		for b in buttons do
			b.from = b.to_pos
			b.hard = true
		end

		derangement

		locate(display)
		for b in buttons do
			var from = b.from
			var to = b.to_pos
			var midx = display.width.to_f / 2.0
			var midy = display.height.to_f / 2.0
			var mid = new Pos(midx, midy)
			#print "shuffle move {b.place}: {from} -> {to}"
			b.path = new_path(from, mid, 5.0)
			b.path2 = new_path(mid, to, 5.0)
			b.ttl = 5.0
		end
		ttl = 5.0
	end

	# Setup the next cursor path
	fun setpath
	do
		if is_menu then return
		var from = path_pos(cpt-1)
		var to = path_pos(cpt)
		#print "cursor {cpt-1}->{cpt}: {from} -> {to}"
		path = new_path(from, to, 4.0)
		cursor.x = from.x
		cursor.y = from.y
		ttl = 5.0
	end

	# Main loop, drawing and inputs

	# Flag used to ask for a (re-)computation of the display layout
	private var first_frame = true

	redef fun frame_core(display)
	do
		if first_frame then
			locate(display)
			if cpt == -1 then
				fly_in(display)
			end
			first_frame = false
		end

		# Clear the screen
		display.clear(1.0, 1.0, 1.0)

		# Manage events
		# This is a crappy ad hoc organic implementation
		if not player then
			ttl -= 0.1
			if path != null then path.update(cursor, ttl)
			if ttl <= 0.0 then
				ttl = 0.0
				if is_menu then
					# Menu animation is over
					player = true
				else if cpt < 0 then
					# Level place animation is over
					cpt += 1
					setpath
				else if cpt < level.length then
					# The cursor is playing
					var b = level[cpt]
					b.ttl = 1.0
					b.sound.play
					cpt += 1
					setpath
				else if cpt == level.length then
					# The cursor is out, run the shuffle
					path = null
					if shuffling == 1 then
						shuffle(display)
					else if shuffling > 1 then
						hard_shuffle(display)
					end
					cpt += 1
				else
					# The shuffling is over, start playing
					player = true
					cpt = 0
				end
			end
		else if ttl > 0.0 then
			ttl -= 0.1
			if ttl <= 0.0 then
				ttl = 0.0
				if cpt == level.length then
					fly_out(display)
					cpt += 1
				else
					if is_menu then
						new_game
					else if is_win then
						current_level += 1
						new_game
					else
						replay_game
					end
				end
			end
		end

		# Display each button
		for b in buttons do
			b.blit_on(display)
		end

		# Display the cursor
		if path != null then
			drawing.cursor.scale = scale
			display.blit(drawing.cursor, cursor.x, cursor.y)
		end

		if not is_menu then
			blit_number(current_level, ui_scale, 10.0 * scale, 10.0 * scale)
			reload.blit_on(display)
		end
	end

	# Blit a number somewhere
	fun blit_number(number: Int, scale: Float, x, y: Float)
	do
		for img in number_images.imgs do img.scale = scale
		display.blit_number(number_images, number, x.to_i, y.to_i)
	end

	# Images with the numbers
	private var number_images: NumberImages is noautoinit

	# A player click on a button
	fun action(b: Button)
	do
		if is_menu then
			b.sound.play
			mode = b.place
			current_level = 0
			ttl = 0.1
			cpt = level.length
			is_win = true
			return
		end
		if cpt >= level.length then return
		if b == level[cpt] then
			b.sound.play
			b.ttl = 1.0

			cpt += 1
			if cpt >= level.length then
				is_win = true
				print "Won!"
				ttl = 2.0
			end
		else
			error += 1
			print "Err {error}"
			b.error = true
			b.ttl = 3.0
			snd_penalty.play
			if error > 2 then
				is_win = false
				print "Lose!"
				for b2 in buttons do
					b2.error = true
					b2.ttl = 3.0
				end
				ttl = 3.0
				cpt = level.length
			end
		end
	end

	redef fun input(ie)
	do
		# Quit?
		if ie isa QuitEvent then
			quit = true
			return true
		end

		# On click (or tap)
		if ie isa PointerEvent and ie.depressed then
			if player then
				for b in buttons do
					if b.has(ie.x, ie.y) then
						action(b)
						return true
					end
				end
			end

			if not is_menu then
				if reload.has(ie.x, ie.y) then
					reload.sound.play
					reload.ttl = 1.0
					replay_game
					return true
				end
			end
		end

		# Special commands
		if ie isa KeyEvent and ie.is_down then
			var c = ie.name

			if c == "4" or c == "escape" then
				# 4 is *back* on android
				if is_menu then
					# quit = true # broken
					new_menu
				else
					new_menu
				end
				return true
			end

			if is_menu then
				return false
			end

			if c == "[+]" or c == "=" then
				# [+] is keypad `+`
				size += 1
				deal_game
				return true
			else if c == "[-]" or c == "-" then
				size -= 1
				deal_game
				return true
			else if c == "[*]" or c == "]" then
				length += 1
				deal_game
				return true
			else if c == "[/]" or c == "[" then
				length -= 1
				deal_game
				return true
			else if c == "space" or c == "82" then
				# 82 is *menu* on android
				reload.sound.play
				reload.ttl = 1.0
				replay_game
				return true
			end

			print "got keydown: `{c}`"
		end

		return false
	end
end
