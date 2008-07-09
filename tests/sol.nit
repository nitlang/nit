# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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


import game

class Playing
special SDL_EventListener
	redef meth on_mouse_button(evt: SDL_MouseButtonEvent)
	do
		if evt.is_pressed then
			if evt.button == 1 then
				print(_fps)
			else if evt.button == 4 then
				load_level(_level + 1)
			else if evt.button == 5 then
				load_level(_level - 1)
			else if evt.button == 3 then
				_quit_requested = true
			end	
		end
	end

	redef meth on_mouse_motion(evt: SDL_MouseMotionEvent)
	do
		_mouse_x = evt.x
		_mouse_y = evt.y
	end

	redef meth on_quit
	do
		_quit_requested = true
	end

	readable attr _quit_requested: Bool 

	attr _last_t: Int
	meth update
	do
		var t = sdl_get_ticks	# Current time (ms)
		var quantum = 10	# Quantum of time (ms) for one step

		var frames = 0
		while _last_t < t do
			update_one_step
			_last_t = _last_t + quantum
			frames = frames + 1
		end

		_fps.update_with(t)

		#if _fps.update(t) then
		#	printn("FPS: ")
		#	_fps.count.output
		#end

		update_draw(frames)

		draw
	end

private
	meth update_one_step
	do
		var mx = _mouse_x
		var my = _mouse_y
		_player.update_one_step(mx, my)

		var i = 0
		while i < _boxes.length do
			var b = _boxes[i]
			if b.gettable and b.collide(_player) then
				_boxes[i] = _boxes.last
				_boxes.pop
				
				var bx = b.x
				var by = b.y
				var boxnumber = 50
				if _boxes.is_empty then
					boxnumber = 500
					load_level(_level + 1)
				end
				for j in [0..boxnumber[ do
					var angle = (2.0*pi).rand
					var force = 2.0.rand
					_others.add(new Particle(bx, by, angle.cos * force, angle.sin * force, 10 + 100.rand))
				end
			else
				b.update_one_step
				i = i + 1
			end
		end

		i = 0
		while i < _others.length do
			var s = _others[i]
			if s.update_one_step then
				_others[i] = _others.last
				_others.pop
			else
				i = i + 1
			end
		end
	end

	meth update_draw(frames: Int)
	do
		_player.update_draw(frames)
	end

	meth draw
	do
		_screen.clear
		for b in _boxes do
			b.blit_on(_screen)
		end
		_player.blit_on(_screen)
		for b in _others do
			b.blit_on(_screen)
		end
		_screen.flip
	end

	private meth load_level(l: Int)
	do
		_level = l
		_boxes.clear

		var levels = once load_levels("data/levels.txt")
		if _level > levels.length then
			print("You win")
			_level = 1
		end
	
		var lev = levels[_level - 1]
		print("Level {lev.number}: {lev.name}")
		init_level(lev.data)
	end

	private meth init_level(s: String)
	do
		var height = 1
		var width = 0
		var w = 0
		for i in [0..s.length[ do
			var c = s[i]
			if c == '\n' then
				w = 0
				height = height + 1
			else if c == ' ' then
				w = w + 1
			else
				w = w + 1
				if w > width then
					width = w
				end
			end
		end
		var dx = _screen.width / width
		var dy = _screen.height / height
	
		w = 0
		var h = 0
		for i in [0..s.length[ do
			var c = s[i]
			if c == '\n' then
				h = h + 1
				w = -1
			else if c == '#' then
				_boxes.add(new Box(dx/2 + dx * w, dy/2 + dy * h))
			else if c == '*' then
				_boxes.add(new Box(dx/2 + dx * w, dy/2 + dy * h))
			end
			w = w + 1
		end
	end

private
	attr _screen: SDL_Screen

	attr _mouse_x: Int
	attr _mouse_y: Int

	attr _fps: TickCounter
	attr _player: Player
	attr _boxes: Array[Box]
	attr _others: Array[Particle]

	attr _level: Int
	


	init(s: SDL_Screen)
	do
		_screen = s

		_player = new Player(320, 240)

		_boxes = new Array[Box]
		_others = new Array[Particle]
		_fps = new TickCounter
		
		_last_t = sdl_get_ticks

		load_level(1)
		
	end
end

redef class Sprite
	private meth load_images(name: String, number: Int): Array[SDL_Surface]
	do
		print("load images '{name}' ({number})")
		var res = new Array[SDL_Surface].with_capacity(number)
		var ten = 10
		if number < 10 then
			ten = number
		end
		for i in [0..ten[ do
			res.add(sdl_load_bmp("data/{name}-0{i}.png"))
		end
		for i in [10..number[ do
			res.add(sdl_load_bmp("data/{name}-{i}.png"))
		end
		return res
	end
end

class MovingSprite
special Sprite
	attr _rx: Float # Real X axis (sub-pixel)
	attr _ry: Float # Real Y axix (sub-pixel)
	readable attr _vx: Float # X velocity (speed)
	readable attr _vy: Float # Y velovity (speed)
	
	redef meth x=(x: Int)
	do
		_x = x
		_rx = x.to_f
	end
	redef meth y=(y: Int)
	do
		_y = y
		_ry = y.to_f
	end
end

class Player
special MovingSprite

	meth update_one_step(mx: Int, my: Int)
	do
		var vx = _vx
		var vy = _vy

		# Calculate objective distance
		var dbmx = mx - _x
		var dbmy = my - _y
		var dbm2 = dbmx * dbmx + dbmy * dbmy

		# Calculate acceleration and update speed
		if dbm2 > 10 then
			var dbm = dbm2.to_f.sqrt

			var force = 0.200 # maximal force
			if dbm < 50.0 then
				# Less force if near the objective
				_boost = false
				force = force * dbm / 100.0
			else if not _boost and dbm > 60.0 then
				_boost = true
			end
			
			var ax = dbmx.to_f / dbm * force
			var ay = dbmy.to_f / dbm * force
			
			vx = vx + ax
			vy = vy + ay
		end

		# Speed modifier (min/max)
		var dv2 = vx*vx + vy*vy # Absolute speed
		if dv2 > 5.0 then
			# Hard brake
			vx = vx / dv2 * 5.0
			vy = vy / dv2 * 5.0
		else if dv2 < 1.0 then
			# Accel
			vx = vx / dv2
			vy = vy / dv2
		end

		# Update position
		var rx = _rx + vx
		var ry = _ry + vy

		_vx = vx
		_vy = vy
		_rx = rx
		_ry = ry
		_x = rx.to_i
		_y = ry.to_i
	end

	meth update_draw(frames: Int)
	do
		var a = - atan2(_vx, _vy)
		var x = ((a / 2.0 / pi + 0.5) * 16.0 + 0.5).to_i % 16
		if _boost then
			x = x * 2 + 1
		else
			x = x * 2
		end
		var imgs = _images[x]
		
		var inum = _image_number + frames
		if inum >= imgs.length * 8 then
			inum = inum % (imgs.length * 8)
		end
		_image = imgs[inum / 8]
		_image_number = inum
	end

	attr _boost: Bool 
	attr _images: Array[Array[SDL_Surface]]
	attr _image_number: Int
	

	init(x: Int, y: Int)
	do
		set_xy(x, y)
		_vx = 0.0
		_vy = 0.0
		_images = once load_ship_images
		_image_number = 0
		set_centered_image(_images.first.first)
		#set_centered_image(once sdl_load_bmp("data/ship-up.png"))
	end
	meth load_ship_images: Array[Array[SDL_Surface]]
	do
		var res = new Array[Array[SDL_Surface]]
		for i in ["up", "22", "45", "68", "90", "112", "135", "158", "180", "202", "225", "248", "270", "292", "315", "338"] do
			res.add(load_images("ship-{i}", 4))
			res.add(load_images("ship2-{i}", 4))
		end
		return res
	end
end

class Box
special Sprite
	attr _images: Array[SDL_Surface]
	attr _image_number: Int
	attr _image_delay: Int
	attr _back_rotate: Bool

	meth update_one_step
	do
		_image_delay = _image_delay + 1
		if _image_delay > 0 and _image_delay % 8 == 0 then
			var n = _image_number + 1
			if n >= _images.length then
				n = 0
			end
			if _back_rotate then
				_image = _images[n]
			else
				_image = _images[_images.length - n - 1]
			end
			_image_number = n
		end
	end

	redef meth blit_on(s: SDL_Surface)
	do
		if _image_delay > 0 then
			_image.blit_on_xy(s, _x - _x_image, _y - _y_image)
		end
	end

	meth gettable: Bool
	do
		return _image_delay > 0
	end


	init(x: Int, y: Int)
	do

		set_xy(x, y)
		_images = once load_images("box", 15)
		_image_delay = - (30 + 20.rand)
		_image_number = _images.length.rand
		_back_rotate = 2.rand == 1
		set_centered_image(_images.first)
	end

end

class Particle
special MovingSprite
	meth update_one_step: Bool
	do
		_ttl = _ttl - 1
		if _ttl < 0 then
			return true
		end

		_rx = _rx + _vx
		_ry = _ry + _vy
		_x = _rx.to_i
		_y = _ry.to_i

		if _ttl % 4 == 0 then
			var n = (_ttl / 4) % _images.length
			_image = _images[n]
		end

		return false
	end

	attr _ttl: Int
	attr _images: Array[SDL_Surface]


	init(x: Int, y: Int, vx: Float, vy: Float, ttl: Int)
	do
		set_xy(x, y)
		_vx = vx
		_vy = vy
		_ttl = ttl
		_images = once load_images("debris4", 8)
		_image = _images.first
	end
end

class Level
	readable attr _number: Int 
	readable attr _name: String 
	readable attr _data: String 

	redef meth to_s: String
	do
		return "level {_number}"
	end


	init(n: Int, name: String, d: String)
	do
		_number = n
		_name = name
		_data = d
	end
end

meth load_levels(filename: String): Array[Level]
do
	var levels = new Array[Level]
	var f = new IFStream.open(filename)
	var name = ""
	var data = ""
	while not f.eof do
		var l = f.read_line
		if l[0] == ';' then
			# comment
		else if l[0] == '>' then
			# Level name
			name = l.substring_from(1)
		else if l[0] == '<' then
			# Second name
		else if l[0] == '!' then
			# End of level
			levels.add(new Level(levels.length + 1, name, data))
			name = ""
			data = ""
		else
			# Level data
			if data.length > 0 then
				data.add('\n')
			end
			data.append(l)
		end
	end
	f.close
	return levels
end

srand
sdl_init

sdl_show_cursor = true

#var screen = sdl_set_video_mode(800, 600, 32)
var screen = sdl_set_fullscreen_video_mode(800, 600, 32)

var evt_proc = new SDL_EventProcessor
var evt_list = new Playing(screen)

evt_proc.add_listener(evt_list)

while not evt_list.quit_requested do
	evt_proc.process_all_events
	evt_list.update
	sdl_delay(1)
end

