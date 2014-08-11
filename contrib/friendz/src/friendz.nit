# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Full UI for the game
module friendz is
	app_name("ChainZ of FriendZ")
	app_version(0, 1, git_revision)
end

import mnit
import realtime
import solver
import mnit::tileset

intrude import grid
intrude import level

redef class Grid
	# Zoom level in %
	# higher means more dense grid
	var ratio = 100

	# Various grid sizes from large to small (16x16, 12x12, 8x8, 6x6)
	var ratios: Array[Int] = [200, 150, 100, 75]

	redef fun resize(w,h)
	do
		super
		for r in ratios do
			if w*100/r <= 8 and h*100/r <= 8 then self.ratio = r
		end
	end
end

#   * ENTITIES ****************************************************************

# A game entity is something that is displayed and may interact with the player.
abstract class Entity
	# The associated game
	var game: Game

	# X left coordinate (in pixel).
	var x: Int

	# Y top coordinate (in pixel).
	var y: Int

	# X right coordinate (in pixel).
	fun x2: Int do return x + width

	# Y bottom coordinate (in pixel).
	fun y2: Int do return y + height

	# Width
	var width: Int

	# Height
	var height: Int

	# Tool tip text (if any)
	var over: nullable String = null

	# can the entity intercepts drag ang drop events?
	var draggable = false

	# Draw function. To implement
	fun draw(ctx: Display) do end

	# Update function. Called each loop. To implement
	fun update do end

	# Enter function. Called when the cursor enter in the element. To implement
	fun enter(ev: Event) do end

	# Click function. Called when the player click in the element.
	# (or activate it with a shortcut).
	fun click(ev: Event) do end

	# keyboard shortcut do activate the entity, if any
	var shortcut: nullable String = null

	# Are events received?
	var enabled = true

	fun bw: Int do return game.bw
	fun bh: Int do return game.bh

	# Should the entity be redrawn
	var dirty = true
end

# TEXT BUTTONS ***********************************************************/

# Button entity displayed as a simple text.
# if `over1` is null, then the button is a simple pasive label
# if `over1` is set but `over2` is null, then the button is a normal button
# if both `over1` and `over2` arew set, then the button is a toggleable button with two states
class TextButton
	super Entity
	var str: String
	init(game: Game, str: String, x,y: Int, color: nullable String, over, over2: nullable String)
	do
		var w = 10 # TODO
		super(game, x,y,w,24)
		self.str = str
		self.color = color or else "purple"
		self.over = over
		self.over1 = over
		self.over2 = over2
		self.textx = x
		if self.toggleable then
			self.x -= bw/2 + 4
		end
	end

	var color: String

	# The description of the button action
	var over1: nullable String
	# The description of the state2 button action
	var over2: nullable String

	# is the button a two-state button
	fun toggleable: Bool do return over2 != null

	# is the toggleable button in its second state?
	var toggled = false

	# ttl for highlighting
	var ttl = 0

	# position of the start of the text
	# in a toggleable button, there is space for the mark between `x` and `textx`
	var textx: Int

	redef fun draw(ctx) do
		var x = self.x
		if self.toggleable then
			var w
			if self.toggled or not self.enabled then w = 6 else w = 7
			ctx.blit(game.img2[w,0], self.x, self.y)
		end
		var c
		if self.enabled then c = self.color else c = "gray"
		var c2= null
		if self.ttl > 0 then c2 = "rgba(255,255,255,{self.ttl/10})"
		ctx.textx(self.str, self.textx, self.y, self.height, c, c2)
		self.width = ctx.measureText(self.str, self.height)
		if self.toggleable then self.width += bw/2 + 4
	end

	redef fun update
	do
		if game.statusbar.over_what != self and self.ttl > 0 then
			self.ttl-=1
			self.dirty = true
		end
	end

	redef fun enter(ev)
	do
		if over1 == null then return
		if not self.enabled then return
		game.snd_click.replay
		self.ttl = 10
		self.dirty = true
		self.enter2
	end

	# Called by `enter` do perform additionnal work if the button is active
	# Specific button should implement this instead of `enter`
	fun enter2 do end

	redef fun click(ev)
	do
		if not self.enabled then
			game.snd_bing.replay
		else
			if self.toggleable then
				self.toggled = not self.toggled
				if self.toggled then self.over = self.over2 else self.over = self.over1
				game.statusbar.over_txt = self.over
			end
			game.snd_whip.replay
		end
		self.click2(ev)
	end

	# Called by `click` do perform additionnal work if the button is active
	# Specific button should implement this instead of `click`
	fun click2(ev: Event) do end

end

# LEVEL BUTTONS ***********************************************************/

# button to play a level in the menu screen
class LevelButton
	super Entity

	# The associated level to play
	var level: Level

	init(l: Level)
	do
		self.level = l
		var i = l.number
		super(l.game, (i%5)*56 + 54, (i/5)*56 + 55, l.game.bw, l.game.bh)

		self.over = self.level.fullname
		if self.level.get_state >= l.l_won then
			if game.levels[9].get_state >= l.l_won then self.over += " --- {self.level.score}/{self.level.par}"
		else if self.level.get_state >= l.l_open then
			if game.levels[9].get_state >= l.l_open then self.over +=  " --- ?/{self.level.par}"
		end
		#self.enabled = l.get_state >= l.l_open
	end

	redef fun draw(ctx)
	do
		var l = level
		var s = self.level.get_state
		var ix = 5 + l.number % 2
		var iy = 0
		if s == l.l_disabled then
			ix = 3
			iy = 3
		else if s == l.l_open then
			ix = 1
			iy = 1
			ctx.blit(game.img[ix,iy], self.x, self.y)
			ix = 0
			iy = 0
		end
		ctx.blit(game.img[ix,iy], self.x, self.y)

		if s == l.l_par then
			ctx.blit(game.img2[7,0], self.x + bw*5/8, self.y-bh*1/8)
		end
		ctx.textx(self.level.name, self.x+5, self.y+5, 24, null, null)
	end

	redef fun click(ev)
	do
		if self.enabled then
			game.snd_whip.replay
			game.play(self.level)
		else
			game.snd_bing.replay
			game.statusbar.set_tmp("Locked level", "red")
		end
	end

end

# ACHIEVEMENTS ************************************************************/

# Achievement (monster-like) button in the menu screen
class Achievement
	super Button

	# The number of the achievement (0 is first)
	var number: Int

	# The name of the achievement
	var name: String

	init(game: Game, i: Int, name: String)
	do
		super(game, 5*56 + 54, i*56 + 55, game.bw, game.bh)
		self.over = name
		self.number = i
		self.name = name
		var l =  game.levels[number*5+4]
		enabled = l.get_state >= l.l_won
		if self.enabled then self.over = name + " (unlocked)" else self.over = name + " (locked)"
	end

	redef fun draw(ctx)
	do
		var w
		if self.enabled then w = 5 else w = 3
		ctx.blit(game.img[w,self.number+5], self.x, self.y)
	end

	redef fun click(ev)
	do
		if not self.enabled then
			game.snd_bing.replay
			game.statusbar.set_tmp("Locked achievement!", "red")
		else
			game.snd_whip.replay
			self.click2(ev)
		end
	end

	fun click2(ev: Event) do
		# TODO
	end
end


# BOARD (THE GRID) *******************************************************/

# The board game element.
class Board
	super Entity
	init(game: Game)
	do
		super(game, game.xpad, game.ypad, 8*game.bw, 8*game.bh)
		draggable = true
	end

	redef fun draw(ctx)
	do
		var grid = game.grid
		var bwr = bw*100/grid.ratio
		var bhr = bh*100/grid.ratio
		var w = grid.width
		var h = grid.height
		if game.selected_button == game.button_size then
			bwr = bw/2
			bhr = bh/2
			w = game.gw
			h = game.gh
		end
		self.x = game.xpad+(48*8/2)-w*bwr/2
		self.y = game.ypad+(48*8/2)-h*bhr/2
		self.width = w*bwr
		self.height = h*bhr
		for i in [0..w[ do
			for j in [0..h[ do
				var t = grid.grid[i][j]
				var dx = i * bwr + self.x
				var dy = j * bhr + self.y
				if (i+j)%2 == 0 then
					ctx.blit_scaled(game.img[5,0], dx, dy, bwr, bhr)
				else
					ctx.blit_scaled(game.img[6,0], dx, dy, bwr, bhr)
				end
				if t.fixed then
					if t.shape != null and not game.editing then
						#ctx.drawImage(game.img, t.shape.x*bw, (2+t.shape.y)*bh, bw, bh, i * bwr + self.x, j * bhr + self.y, bwr, bhr)
						ctx.blit_scaled(game.img[3,3], dx, dy, bwr, bhr)
					else
						ctx.blit_scaled(game.img[3,3], dx, dy, bwr, bhr)
					end
				end
				if t.kind>0 then
					var m = grid.monsters[t.kind]
					var s = 0
					if t.blink > 0 then s = 1
					if t.nexts > 2 then s = 3
					if t.nexts == 0 then s = 6
					if m.chain then s = 5
					if t.shocked>0 then s = 2
					ctx.blit_scaled(game.img[s,(4+t.kind)], dx, dy, bwr, bhr)
				end
				#ctx.textx(t.chain_mark.to_s, dx, dy, 20, "", null)
			end
		end
		if game.selected_button == game.button_size then
			var x0 = self.x
			var x1 = (grid.width) * bwr - bwr/2 + self.x
			var y0 = self.y
			var y1 = (grid.height) * bhr - bhr/2 + self.y
			ctx.blit_scaled(game.img2[0,0], x0, y0, bwr/2, bhr/2)
			ctx.blit_scaled(game.img2[1,0], x1, y0, bwr/2, bhr/2)
			ctx.blit_scaled(game.img2[1,1], x1, y1, bwr/2, bhr/2)
			ctx.blit_scaled(game.img2[0,1], x0, y1, bwr/2, bhr/2)
			ctx.textx("{grid.width}x{grid.height}",self.x + grid.width*bwr/2,self.y+grid.height*bhr/2,20,"orange",null)
		end
	end

	redef fun update
	do
		var grid = game.grid
		for i in [0..grid.width[ do
			for j in [0..grid.height[ do
				var t = grid.grid[i][j]
				if t.kind == 0 then continue
				if t.blink > 0 then
					t.blink-=1
					self.dirty=true
				end
				if t.shocked > 0 then
					t.shocked-=1
					self.dirty=true
				else if 100.rand == 0 then
					t.blink = 5
					self.dirty=true
				end
			end
		end
	end

	# Last clicked tile
	# Uded to filter drag events
	private var last: nullable Tile = null

	redef fun click(ev)
	do
		var grid = game.grid
		var r = grid.ratio
		if game.selected_button == game.button_size then r = 200
		var x = ev.game_x * r / bw / 100
		var y = ev.game_y * r / bh / 100
		var t = grid.grid[x][y]

		if ev.drag and last == t then return
		last = t

		if game.selected_button != game.button_size and (x>=grid.width or y>=grid.height) then return

		# print "{ev.game_x},{ev.game_y},{ev.drag} -> {x},{y}:{t}"

		if game.selected_button != null then
			game.selected_button.click_board(ev, t)
		end
	end
end

# BUTTONS *****************************************************************/

# A in-game selectable button for monsters or tools
class Button
	super Entity

	# The x tile
	var imgx: Int = 0

	# The y tile
	var imgy: Int = 0

	# The associated monster tile
	# >0 for monsters, <=0 for tools
	var kind = 0

	redef fun draw(ctx)
	do
		ctx.blit(game.img[self.imgx, self.imgy], self.x, self.y)
		if game.selected_button == self then ctx.blit(game.img[0, 0], self.x, self.y)
	end

	redef fun click(ev)
	do
		var sel = game.selected_button
		if game.selected_button == game.button_size then game.board.dirty=true
		if sel != null then sel.dirty=true
		game.selected_button = self
		game.snd_click.replay
	end

	# Current inputed chain
	# Used for drag
	private var chain = new Array[Tile]

	# Board click. Called when the player click on the board with the button selected.
	fun click_board(ev: Event, t: Tile)
	do
		game.score.dirty = true
		if ev.drag and self.kind>0 and not chain.is_empty then
			if self.chain.length >= 2 and self.chain[1] == t then
				var t2 = self.chain.shift
				game.snd_click.replay
				if t2.fixed and not game.editing then return
				t2.update(0)
				return
			end
			if t.fixed and t.kind == self.kind then
				self.chain.unshift(t)
				game.snd_click.replay
				return
			end
			if (self.chain[0].x - t.x).abs + (self.chain[0].y - t.y).abs != 1 then return
			if t.fixed and not game.editing then
				game.snd_bing.replay
				return
			end
			if t.kind != 0 and t.kind != self.kind then
				t.shocked = 5
				game.snd_duh.replay
				return
			end
			self.chain.unshift(t)
			if t.kind == self.kind then return
			game.snd_click.replay
			t.update(self.kind)
			return
		end

		if t.fixed and not game.editing then
			if t.kind == 0 then
				game.snd_bing.replay
				return
			end
			if t.kind != self.kind and not ev.drag then
				game.buttons[t.kind].click(ev)
				game.buttons[t.kind].chain = [t]
			else
				self.chain = [t]
				game.snd_bing.replay
			end
			return
		end
		if t.fixed and game.editing and self == game.button_erase and t.kind == 0 then
			t.fixed = false
			game.snd_click.replay
			return
		end

		var nkind = 0 # the new kind
		if ev.drag then
			# Here we clean
			if t.kind == 0 then return
			if self.kind != 0 and t.kind != self.kind then
				t.shocked = 5
				game.snd_duh.replay
				return
			end
			nkind = 0
		else if t.kind != self.kind then
			nkind = self.kind
			self.chain = [t]
		else if t.kind != 0 then
			nkind = 0
			self.chain.clear
		end
		if nkind == t.kind then return
		game.snd_click.replay
		t.update(nkind)
	end
end

# A monster button
class MonsterButton
	super Button

	# TTL for the monster being angry
	var angries = 0
	# TTL for the monster being happy
	var happy = 0
	# TTL for the monster being shocked
	var shocked = 0
	# TTL for the monster blinking
	var blink = 0

	init(game: Game, i: Int)
	do
		self.game = game
		var x = 440 + 58 * ((i-1).abs%3)
		var y = 150 + (bh+5) * ((i-1)/3)
		super(game, x, y, game.bw, game.bh)
		if i == 0 then return
		kind = i
		imgx = 0
		imgy = (4+i)
		over = game.colors[i] + " monster ({i})"
		shortcut = i.to_s # code for 1 trough 9
	end

	redef fun click(ev)
	do
		super
		self.shocked = 5
	end

	redef fun update
	do
		if self.happy > 0 then
			self.happy-=1
			self.dirty=true
		end
		if self.shocked > 0 then
			self.shocked-=1
			self.dirty=true
		end
		if self.blink > 0 then
			self.blink-=1
			self.dirty=true
		else if 100.rand == 0 then
			self.blink = 5
			self.dirty=true
		end
	end

	redef fun draw(ctx)
	do
		var s = self.imgx
		if self.angries>0 then
			s += 3
		else if self.happy > 5 then
			s += 5
		else if self.shocked > 0 then
			s += 5
		else if self.blink > 0 then
			s += 1
		end
		ctx.blit(game.img[s, self.imgy], self.x, self.y)
		if game.selected_button == self then ctx.blit(game.img[0, 0], self.x, self.y)
	end
end

# Erase button.
class EraseButton
	super Button
	init(game: Game) do
		super(game, 440, 92, game.bh, 22+game.bh)
		imgx = 4
		imgy = 13
		kind = 0
		over = "Eraser (0)"
		shortcut = "0"
	end
end

# Metal (fixed) button.
class MetalButton
	super Button
	init(game: Game)
	do
		super(game, 498, 92, game.bh, 20+game.bh)
		imgx = 3
		imgy = 3
		kind = -1
		over = "Metal block (q)"
		shortcut = "q"
	end

	private var fixed = false

	redef fun click_board(ev,t)
	do
		if not ev.drag then self.fixed = not t.fixed
		if t.fixed == self.fixed then return
		t.fixed = self.fixed
		game.snd_click.replay
	end
end

# Resize button.
class ResizeButton
	super Button

	init(game: Game)
	do
		super(game,556, 92, game.bh, 20+game.bh)
		kind = -2
		over = "Resize the grid"
	end

	redef fun draw(ctx)
	do
		for i in [0..3[ do
			for j in [0..3[ do
				var x = self.x + i*bw/3
				var y = self.y + j*bh/3
				ctx.blit_scaled(game.img[5+(i+j)%2,0], x, y, bw/3, bh/3)
			end
		end
		if game.selected_button == self then ctx.blit(game.img[0, 0], self.x, self.y)
	end

	redef fun click(ev)
	do
		if game.selected_button != game.button_size then
			super
		else
			game.selected_button = null
			game.board.dirty=true
		end
	end

	redef fun click_board(evt, t)
	do
		var grid = t.grid
		var w = t.x+1
		var h = t.y+1
		if w < 3 or h < 3 then
			game.snd_bing.replay
			game.statusbar.set_tmp("Too small!", "red")
			return
		end
		var aborts = false
		for i in [0..grid.width[ do
			for j in [0..grid.height[ do
				if i>=w or j>=h then
					var t2 = grid.grid[i][j]
					if t2.kind > 0 then
						aborts = true
						t2.shocked = 5
					end
				end
			end
		end
		if aborts then
			game.snd_duh.replay
			game.statusbar.set_tmp("Monsters on the way!", "red")
			return
		end
		game.snd_click.replay
		grid.resize(w,h)
	end
end

# Inactive area used to display the score
class Score
	super Entity
	init(game: Game)
	do
		super(game,440,310,199,62)
	end
	redef fun draw(ctx)
	do
		ctx.textx("MONSTERS: {game.grid.number}",self.x,self.y+1,21,"cyan",null)
		var level = game.level
		if level == null then return
		if level.get_state >= level.l_won then
			ctx.textx("BEST: {level.score}",self.x,self.y+22,21,"pink", null)
		else
			ctx.textx("BEST: -",self.x,self.y+22,21,"pink", null)
		end
		if game.levels[9].get_state >= level.l_won then
			if level.is_challenge then
				ctx.textx("GOAL: {level.par}",self.x,self.y+44,21,"yellow",null)
			else
				ctx.textx("PAR: {level.par}",self.x,self.y+44,21,"yellow",null)
			end
		end
	end
end

# Status bar element.
class StatusBar
	super Entity
	init(game: Game)
	do
		super(game,24, 440, 418-24, 30)
	end

	# Permanant text, if any
	var main_txt: nullable String = null

	# Text to display when the cursor if over an entity (`over_what`), if any
	var over_txt: nullable String = null

	# What is the entity for `over_txt`
	var over_what: nullable Entity

	# Text to temporally display, for some game event, if any
	var tmp_txt: nullable String = null

	# time-to-live for the `tmp_txt`
	var tmp_txt_ttl = 0

	# Color used to display `tmp_txt`
	var tmp_txt_color: nullable String = null

	# reset the status
	fun clear do
		self.main_txt = null
		self.over_txt = null
		self.tmp_txt = null
		self.over = null
	end

	# set a temporary text
	fun set_tmp(txt, color: String)
	do
		print "***STATUS** {txt}"
		self.tmp_txt = txt
		self.tmp_txt_ttl = 20
		self.tmp_txt_color = color
	end

	redef fun draw(ctx)
	do
		var tmp_txt = self.tmp_txt
		var over_txt = self.over_txt
		var main_txt = self.main_txt
		if tmp_txt != null and self.tmp_txt_ttl>0 then
			ctx.textx(tmp_txt,24,442,24,self.tmp_txt_color,null)
		else if over_txt != null then
			ctx.textx(over_txt,24,442,24,"yellow",null)
		else if main_txt != null then
			ctx.textx(main_txt,24,442,24,"white",null)
		end
	end

	redef fun update
	do
		if self.tmp_txt_ttl>0 then
			self.tmp_txt_ttl-=1
			self.dirty=true
		end
	end
end

# ************************************************************************/

# Simple audio asset
class Audio
	var path: String

	# placebo
	fun play do end

	# placebo
	fun pause do end

	# Play a sound.
	fun replay
	do
		sys.system("aplay assets/{path} &")
	end
end

redef class Display
	# Display a text
	fun textx(str: String, x, y, height: Int, color, color2: nullable String)
	do
		#var w = measureText(str, height)
		#rect(x,y,w,height)
		text(str.to_upper, app.game.font, x, y)
	end

	# give the width for a giver text
	fun measureText(str: String, height: Int): Int
	do
		var font = app.game.font
		return str.length * (app.game.font.width + app.game.font.hspace)
	end

	# displays a debug rectangle
	fun rect(x,y,w,h:Int)
	do
		var image = once app.load_image("hitbox.png")
		blit_scaled(image, x, y, w, h)
	end
end

# Simple basic class for event
class Event
	# Is a drag event?
	var drag = false
	# screen x
	var offset_x: Int
	# screen y
	var offset_y: Int
	# entity x
	var game_x = 0
	# entity y
	var game_y = 0
	# key pressed
	var char_code: String
end

redef class Game
	# width of a tile, used for most width reference in the game
	var bw = 48
	# height a tile, used for most width reference in the game
	var bh = 48
	# x-coordinate of the board (padding)
	var xpad = 24
	# y-coordinate of the board (padding)
	var ypad = 24

	# Load tiles

	# Basic tileset
	var img = new TileSet(app.load_image("tiles2.png"),48,48)

	# Sub tileset (for marks or other)
	var img2 = new TileSet(app.load_image("tiles2.png"),24,24)

	# background image
	var back: Image = app.load_image("background.png")

	# Logo image
	var logo: Image = app.load_image("logo.png")

	# Font
	var font = new TileSetFont(app.load_image("deltaforce_font.png"), 16, 17, "ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789.:;!?\"'() -,/")

	var xxx = """
	fun save_cookie(name, val:String) do
	var days = 365
	var date = new Date()
	date.setTime(date.getTime()+(days*24*60*60*1000))
	document.cookie = name+"="+val+"; expires="+date.toGMTString()+"; path=/"
	end

	fun read_cookie(name:String):String do
	var key = name + "="
	var ca = document.cookie.split(';')
	for(var i=0; i<ca.length; i++) do
	var c = ca[i]
	while (c[0]==' ') c = c.substring(1, c.length)
	if (c.indexOf(key) == 0) return c.substring(key.length)
	end
	return null
	end
	"""

	# DISPLAY *****************************************************************

	# Is the game in editing mode
	var editing = false

	# The selected button, if any
	var selected_button: nullable Button = null

	# SOUND

	# Is the music muted?
	var music_muted: Bool = true #read_cookie("music_muted")

	# Is the sound effects muted?
	var sfx_muted: Bool = true #read_cookie("sfx_muted")

	# The background music resource. */
	var music = new Audio("music.ogg")

	# Click sound
	var snd_click = new Audio("click.wav")

	# Wining soulf
	var snd_win = new Audio("level.wav")

	# Shocked sound
	var snd_duh = new Audio("duh.wav")

	# metal sound
	var snd_bing = new Audio("bing.wav")

	# transition sound
	var snd_whip = new Audio("whip.wav")

	# INPUT ******************************************************************

	# Current grid edited (if any).
	var grid_edit: nullable Grid = null

	# Sequence of current entities
	var entities = new Array[Entity]

	# The current statusbar
	var statusbar = new StatusBar(self)

	# The grid board
	var board = new Board(self)

	# The current score board
	var score = new Score(self)

	# Monster button game elements.
	var buttons = new Array[MonsterButton]

	# MetalButton
	var button_wall = new MetalButton(self)

	# EraseButton
	var button_erase = new EraseButton(self)

	# ResizeButton
	var button_size = new ResizeButton(self)

	# fill `buttons`
	fun init_buttons
	do
		for i in [0..9] do
			buttons[i] = new MonsterButton(self, i)
		end
	end

	# Play a level in player mode.
	fun play(l: Level)
	do
		level = l
		grid.load(level.str)
		init_play_menu(false)
		if level.status != "" then
			statusbar.main_txt = level.status
		else
			statusbar.main_txt = level.fullname
		end
		var t = new NextLevelButton(self)
		entities.push(t)
		run
	end

	# Play the next level.
	fun play_next
	do
		play(levels[level.number+1])
	end


	# Helper function to initialize all states.
	# Set up buttons for music and SFX.
	fun init_game
	do
		editing = false
		solver = null
		entities.clear
		entities.push(new MusicButton(self))
		entities.push(new SFXButton(self))
		entities.push(new MenuButton(self))
		statusbar.clear
		entities.push(statusbar)
	end

	# Helper function to initialize monster menu entries.
	fun init_play_menu(full: Bool)
	do
		init_game
		entities.push(board)
		entities.push(new ResetButton(self))
		entities.push(button_erase)
		# Push monster buttons and determine the selected one
		var sel: nullable Button = null
		for i in [1..monsters] do
			if grid.monsters[i].number > 0 or full then
				if selected_button == buttons[i] or sel == null then
					sel = buttons[i]
				end
				entities.push(buttons[i])
			end
		end
		selected_button = sel
		entities.push(score)
	end

	# Play a arbitrary grid in try mode.
	fun play_grid(g: Grid)
	do
		grid = g
		init_play_menu(false)
		statusbar.main_txt = "User level"
		if grid_edit != null then
			entities.push(new EditButton(self))
		end
		entities.push(new WonButton(self))
		run
	end

	# Launch the editor starting with a grid.
	fun edit_grid(g: Grid)
	do
		grid = g
		init_play_menu(true)
		editing = true
		statusbar.main_txt = "Level editor"
		if level != null then statusbar.main_txt += ": level "+level.name
		entities.push(button_wall)
		entities.push(button_size)
		entities.push(new TestButton(self))
		entities.push(new SaveButton(self))
		entities.push(new LoadButton(self))
		run
	end

	# Launch the title screen
	fun title
	do
		init_menu
		entities.push(new Splash(self))
		run
	end

	# Helper function to initialize the menu (and tile) screen
	fun init_menu
	do
		init_game
		level = null
		var i = levels.first
		for l in levels do
			if l.get_state == l.l_open then break
			i = l
		end
		entities.push(new StartButton(self, i))
	end

	# Launch the menu.
	fun menu
	do
		init_menu
		var t
		t = new TextButton(self,"LEVEL SELECT", 120, ypad, "white", null, null)
		entities.push(t)
		for i in [0..levels.length[ do
			var b = new LevelButton(levels[i])
			entities.push(b)
		end
		t = new Achievement(self, 0, "Training")
		entities.push(t)
		t = new Achievement(self, 1, "Par")
		entities.push(t)
		t = new Achievement(self, 2, "Editor")
		entities.push(t)
		t = new Achievement(self, 3, "Challenge")
		entities.push(t)
		t = new Achievement(self, 4, "Congraturation")
		entities.push(t)
		t = new Achievement(self, 5, "Awesome")
		entities.push(t)
		run
	end

	# Last function called when the lauch state is ready
	fun run do
		dirty_all = true
	end

	init
	do
		load_levels
		init_buttons
		entities.clear
		title
	end

	# Should all entity redrawn?
	var dirty_all = true

	# Draw all game entities.
	fun draw(display: Display) do
		dirty_all = true
		if dirty_all then display.blit(back, 0, 0)
		for g in entities do
			if g.dirty or dirty_all then
				g.dirty = false
				#if g.x2-g.x>0 and g.y2-g.y>0 then ctx.drawImage(back, g.x, g.y, g.x2-g.x, g.y2-g.y, g.x, g.y, g.x2-g.x, g.y2-g.y)
				g.draw(display)
				#ctx.rect(g.x, g.y, g.width, g.height)
			end
		end
		var ev = lastev
		if ev isa Event then
			display.blit(img[4,0],ev.offset_x-42,ev.offset_y-6)
		end
		dirty_all = false
	end

	# Update all game entities.
	fun step do
		if solver != null and not solver_pause then
			if solver.run_steps(solver_steps) != null then solver_pause = true
			print solver.to_s
			if not solver.is_running then solver = null
		end
		for g in entities do
			g.update
		end
	end

	# Return the game entity located at a mouse event.
	fun get_game_element(ev: Event): nullable Entity
	do
		var x = ev.offset_x
		var y = ev.offset_y
		for g in entities do
			if x>=g.x and x<g.x2 and y>g.y and y<g.y2 then
				ev.game_x = x-g.x
				ev.game_y = y-g.y
				#print "get {g}"
				return g
			end
		end
		return null
	end

	# The game entlty the mouse went down on
	var drag: nullable Entity = null

	# Last mouse event. Used to dray the cursor
	var lastev: nullable Event = null

	# Callback when the mouse is pressed
	fun onMouseDown(ev: Event) do
		lastev = ev
		var g = get_game_element(ev)
		if g != null then
			g.click(ev)
			g.dirty = true
		end
		drag = g
	end

	# Callback when the mouse is releassed
	fun onMouseUp(ev: Event) do
		drag = null
	end

	# Callback when the mouse if moved while pressed
	fun onMouseMove(ev: Event) do
		lastev = ev
		var g = get_game_element(ev)
		if g == null then
			statusbar.dirty = true
			statusbar.over_txt = null
			statusbar.over_what = null
			return
		end
		if statusbar.over_what != g then
			statusbar.dirty = true
			var go = g.over
			statusbar.over_txt = go
			statusbar.over_what = g
			g.enter(ev)
			if go != null then print "***OVER*** {go}"
		end
		# We moved abode a element that accepts drag event
		if drag == g and g.draggable then
			# print "DRAG {g}"
			ev.drag = true
			g.click(ev)
			g.dirty = true
		end
	end

	# Current solver, if any
	var solver: nullable BacktrackSolver[Grid, Action] = null

	# Is the solver paused?
	var solver_pause = false

	# Number of solver steps played in a single game `update`
	var solver_steps = 20000

	# Callback when a keyboard event is recieved
	fun onKeyDown(ev: Event) do
		var kc = ev.char_code
		if kc == "e" then
			grid_edit = grid.copy(true)
			edit_grid(grid)
		else if kc == "s" then
			if solver == null then
				solver = (new FriendzProblem(grid)).solve
				solver_pause = false
			else
				solver_pause = not solver_pause
			end
			#solver.step
		else if kc == "d" then
			if solver == null then
				solver = (new FriendzProblem(grid)).solve
				solver_pause = true
			else
				solver.run_steps(1)
			end
		else if kc == "+" then
			solver_steps += 100
			print solver_steps
		else if kc == "-" then
			solver_steps -= 100
			print solver_steps
		else for g in entities do
			if kc == g.shortcut then
				g.click(ev)
				g.dirty = true
			end
		end
	end
end

# The spash title image
class Splash
	super Entity
	init(game: Game)
	do
		super(game,game.xpad,game.ypad,380,350)
	end
	redef fun draw(ctx)
	do
		ctx.blit(game.logo, game.xpad, game.ypad)
	end
	redef fun click(ev)
	do
		game.snd_whip.replay
		game.menu
	end
end

class NextLevelButton
	super TextButton
	init(game: Game)
	do
		super(game, "NEXT LEVEL", 440, 24, "cyan", "Play next level", null)
		enabled = false
	end

	redef fun update
	do
		var w = game.level.check_won(game.grid)
		if self.enabled != w then
			self.dirty = true
			self.enabled = w
			if w then
				game.snd_win.replay
				game.statusbar.set_tmp("Level solved!", "cyan")
			end
		end
	end

	redef fun click(ev)
	do
		if not self.enabled then
			game.snd_duh.replay
			var grid = game.grid
			var monsters = grid.monsters
			var angry = new Array[Tile]
			var lonely = new Array[Tile]
			var edges = new Array[Tile]
			for i in [0..grid.width[ do
				for j in [0..grid.height[ do
					var t = grid.grid[i][j]
					if t.kind == 0 then continue
					if t.nexts == 0 then lonely.push(t)
					if t.nexts == 1 and not monsters[t.kind].chain then edges.push(t)
					if t.nexts > 2 then angry.push(t)
				end
			end

			var l
			if angry.length>0 then
				l = angry
			else if lonely.length>0 then
				l = lonely
			else
				l = edges
			end
			for i in l do i.shocked=5

			if angry.length>0 then
				game.statusbar.set_tmp("Angry monsters!", "red")
			else if lonely.length>0 then
				game.statusbar.set_tmp("Lonely monsters!", "red")
			else if not grid.won then
				game.statusbar.set_tmp("Unconnected monsters!", "red")
			else
				game.statusbar.set_tmp("Not enough monsters!", "red")
			end
			return
		end

		game.snd_whip.replay
		game.play_next
	end
end

class MusicButton
	super TextButton
	init(game: Game)
	do
		super(game, "MUSIC", 470, 412, "purple", "Mute the music", "Unmute the music")
	end
	redef fun click2(ev)
	do
		game.music_muted = self.toggled
		if game.music_muted then game.music.pause else game.music.play
		#game.save_cookie("music_muted",music_muted?"true":"")
	end
end

class SFXButton
	super TextButton
	init(game: Game)
	do
		super(game, "SOUND FX", 470, 382, "purple", "Mute the sound effects", "Unmute the sound effects")
	end

	redef fun click2(ev)
	do
		game.sfx_muted = self.toggled
		if not game.sfx_muted then game.snd_whip.replay # Because the automatic one was muted
		#save_cookie("sfx_muted",sfx_muted?"true":"")
	end
end

class MenuButton
	super TextButton
	init(game: Game)
	do
		super(game, "MENU", 470, 442, "purple", "Exit to the main menu", null)
		shortcut = "back"
	end

	redef fun click2(ev)
	do
		game.menu
	end
end

class ResetButton
	super TextButton
	init(game: Game)
	do
		super(game,"RESET", 440, 61, "purple", "Clear the grid",null)
	end

	var count = 0

	redef fun click2(ev)
	do
		self.count += 1
		if self.count==1 then
			game.statusbar.set_tmp("Click again to reset","white")
		else if self.count==2 then
			game.grid.reset(false)
			if game.editing then
				game.statusbar.set_tmp("Click again to clear all","white")
			end
		else if game.editing then
			game.grid.reset(true)
		end
		game.dirty_all = true
	end

	redef fun enter2
	do
		self.count = 0
	end
end

class EditButton
	super TextButton
	init(game: Game)
	do
		super(game,"EDIT", 540, 24, "purple", "Return to the editor",null)
	end

	redef fun click2(ev)
	do
		var ge = game.grid_edit
		assert ge != null
		game.edit_grid(ge)
	end
end

class WonButton
	super TextButton
	init(game: Game)
	do
		super(game,"WON", 440, 24, "cyan", "", null)
		enabled = false
	end
	redef fun click2(ev)
	do
		var ge = game.grid_edit
		if not self.enabled then
			game.statusbar.set_tmp("Solve the level first!", "red")
		else if ge != null then
			game.snd_whip.replay
			game.edit_grid(ge)
		else
			game.snd_whip.replay
			game.menu
		end
	end

	redef fun update
	do
		var w = game.grid.won
		if self.enabled != w then
			self.dirty = true
			self.enabled = w
			if w then
				game.snd_win.replay
				game.statusbar.set_tmp("Level solved!", "cyan")
			end
		end
	end
end

class TestButton
	super TextButton
	init(game: Game)
	do
		super(game,"TEST", 440, 24, "cyan", "Try to play the level", null)
	end

	redef fun click2(ev)
	do
		game.grid_edit = game.grid
		game.play_grid(game.grid.copy(false))
	end
end

class SaveButton
	super TextButton
	init(game: Game)
	do
		super(game, "SAVE", 540, 24, "purple", "Save the level", null)
	end

	redef fun click2(ev)
	do
		var res = game.grid.save
		print "SAVE: {res}"
	end
end

class LoadButton
	super TextButton
	init(game: Game)
	do
		super(game,"LOAD", 540, 61, "purple", "Load an user level", null)
	end

	redef fun click2(ev)
	do
		var grid2 = new Grid(game.gw,game.gh,game.monsters)
		if grid2.load("") then
			game.grid = grid2
		end
		game.dirty_all = true
	end
end

class ContinueButton
	super TextButton
	init(game: Game)
	do
		super(game,"CONTINUE", 440, 24, "purple", "Continue playing", null)
	end

	redef fun click2(ev)
	do
		game.play_next
	end
end

class StartButton
	super TextButton
	var level: Level
	init(game: Game, level: Level)
	do
		self.level = level
		if level.number == 0 then
			super(game,"START", 440, 24, "purple", "Play the first level", null)
		else
			super(game,"CONTINUE", 440, 24, "purple", "Continue from level "+level.name, null)
		end
	end

	redef fun click2(ev)
	do
		game.play(level)
	end
end

#

redef class App

	# The game
	var game: Game

	# Wanted screen width
	var screen_width = 640

	# Wanted screen height
	var screen_height = 480

	redef fun window_created
	do
		super
		game = new Game
		game.font.hspace = -2
		if args.length > 0 then
			game.play(game.levels[args.first.to_i])
		end
		# img loading?
	end

	# Maximum wanted frame per second
	var max_fps = 30

	# clock used to track FPS
	private var clock = new Clock

	redef fun frame_core(display)
	do
		game.step
		game.draw(display)
		var dt = clock.lapse
		var target_dt = 1000000000 / max_fps
		if dt.sec == 0 and dt.nanosec < target_dt then
			var sleep_t = target_dt - dt.nanosec
			sys.nanosleep(0, sleep_t)
		end
	end

	redef fun input(input_event)
	do
		#print input_event
		if input_event isa QuitEvent then # close window button
			quit = true # orders system to quit
		else if input_event isa PointerEvent then
			var ev = new Event(input_event.x.to_i, input_event.y.to_i, "")
			if input_event.is_motion then
				game.onMouseMove(ev)
			else if input_event.pressed then
				game.onMouseDown(ev)
			else
				game.onMouseUp(ev)
			end
			return true
		else if input_event isa KeyEvent and input_event.is_down then
			var ev = new Event(0, 0, input_event.key_name)
			game.onKeyDown(ev)
			return true
		end

		return false
	end
end

redef class PointerEvent
	fun is_motion: Bool do return false
end

redef class KeyEvent
	fun key_name: String
	do
		var c = to_c
		if c != null then return c.to_s
		return "unknown"
	end
end
