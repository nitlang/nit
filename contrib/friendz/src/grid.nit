# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Game login on the grid of monsters
module grid

# Grid of monsters.
class Grid
	# width of the current grid
	var width: Int is noinit

	# maximum width of the grid
	var max_width: Int

	# height of the current grid
	var height: Int is noinit

	# maximum height of the grid
	var max_height: Int

	# nm is the number of monster + 1 for the empty tile
	var nb_monsters: Int

	# the data grid
	private var grid = new Array[Array[Tile]]

	init do clear

	# Reinitialize the grid with new empty tiles and monsters info
	fun clear
	do
		self.number = 0
		self.error = 0
		self.won = false
		for i in [0..max_width[ do
			self.grid[i] = new Array[Tile]
			for j in [0..max_height[ do
				var t = new Tile(self, i, j)
				self.grid[i][j] = t
			end
		end
		self.monsters = new Array[MonsterInfo]
		for i in [0..nb_monsters] do
			self.monsters[i] = new MonsterInfo
		end
		self.resize(max_width,max_height)
	end

	# Clear all monsters
	# if `fixed` is false, fixed monsters remains
	fun reset(fixed: Bool): Bool
	do
		var r = false
		for i in [0..width[ do
			for j in [0..height[ do
				var t = self.grid[i][j]
				if fixed then t.fixed = false
				if not t.fixed and t.kind>0 then
					t.update(0)
					r = true
				end
			end
		end
		return r
	end

	# Total number of monsters in the grid
	var number = 0

	# Number of monsters alone or with >=3 next
	var error = 0

	# information about each kind of monsters
	var monsters = new Array[MonsterInfo]

	# Last result of win.
	var won = false

	# Check that the monster of `kind` form a complete chain.
	# if not null, `t` is used as a starting tile to check the chain
	fun check_chain(kind: Int, t: nullable Tile): Bool
	do
		var m = monsters[kind]
		if m.angry > 0 or m.lonely > 0 or m.single > 2 then
			# easy case for no chain
			# print "easy {kind} chain: false"
			m.chain = false
			return false
		else
			if t == null then
				# Search for a starting
				for x in [0..width[ do for y in [0..height[ do
					var t2 = get(x,y)
					if t2 == null or t2.kind != kind then continue
					t = t2
					break label found
				end label found
				if t == null then
					assert m.number == 0
					m.chain = true
					return m.chain
				end
				# print "get neighbor {t}"
			end
			assert t.kind == kind
			var c = count_chain(t, 1000.rand)
			# print "old {kind} chain? {c} / {m.number}"
			m.chain = c == m.number
			return m.chain
		end
	end

	# The total number of monsters connected to the chain of `t`
	# `mark` is a uniq number used to mark tiles
	fun count_chain(t: Tile, mark: Int): Int
	do
		t.chain_mark = mark
		var res = 1
		for i in [-1..1] do
			for j in [-1..1] do
				if (i==0 and j==0) or (i!=0 and j!=0) then continue
				var t2 = get(t.x+i,t.y+j)
				if t2 == null then continue
				if t2.chain_mark == mark or t2.kind != t.kind then continue
				res += count_chain(t2, mark)
			end
		end
		return res
	end

	# Resize the grid. Do not touch the content.
	fun resize(w,h: Int)
	do
		self.width = w
		self.height = h
	end

	# Try to get the tila at `x`,`y`.
	# Returns null if the position is out of bound.
	fun get(x,y: Int): nullable Tile
	do
		if x<0 or x>=self.width or y<0 or y>=self.height then return null
		return self.grid[x][y]
	end


	var fixed_shaped = """[
	[{x:1,y:0},{x:2,y:0},{x:1,y:1},{x:2,y:1}],
	[{x:0,y:0},{x:0,y:1},{x:0,y:2}],
	[{x:1,y:2},{x:2,y:2},{x:3,y:2}],
	[{x:4,y:1},{x:4,y:2}],
	[{x:3,y:0},{x:4,y:0}],
	[{x:3,y:1}]
	]"""

	# Set shapes for the fixed blocks.
	fun metalize
	do
		for i in [0..width[ do
			for j in [0..height[ do
				var t = self.grid[i][j]
				if t.fixed then t.shape = null
			end
		end
		for shape in fixed_shaped.split(",") do
			for i in [0..width[ do
				for j in [0..height[ do
					var ts = new Array[Tile]
					for l in [0..shape.length[ do
						#var t = self.get(i+shape[l].x-shape[0].x,j+shape[l].y-shape[0].y)
						var t = self.get(i,j)
						if t != null and t.fixed and t.shape == null then ts.push(t)
					end
					if ts.length == shape.length then
						for l in [0..shape.length[ do
							ts[l].shape = shape[l]
						end
					end
				end
			end
		end
	end

	# Return the serialization of the fixed tiles. */
	fun save: String
	do
		var res = ""
		var str = ".#ABCDEFGHI"
		for y in [0..height[ do
			var rle = 0
			var last: nullable Int = null
			for x in [0..width[ do
				var t = self.grid[x][y]
				var tk = 0
				if t.fixed then tk = t.kind + 1
				if tk == last and rle<9 then
					rle += 1
				else
					if last != null then
						if rle>1 then res += rle.to_s
						res += str.chars[last].to_s
					end
					rle = 1
					last = tk
				end
			end
			if last != null then
				if rle>1 then res += rle.to_s
				res += str.chars[last].to_s
			end
			res += "|"
		end
		return res
	end

	# Load a new grid from a seialization.
	fun load(str: String): Bool
	do
		self.clear
		var l = str.length
		var x = 0
		var y = 0
		var mx = 1
		var my = 1
		var rle = 1
		for i in [0..l[ do
			var z = rle
			while z > 0 do
				z -= 1
				rle = 1
				var c = str.chars[i]
				if c == '|' then
					if x > mx then mx = x
					x = 0
					y += 1
				else if c == '.' then
					x += 1
				else if c == '#' then
					var t = self.get(x,y)
					t.fixed = true
					x += 1
				else if c >= 'A' and c <= 'I' then
					var t = self.get(x,y)
					assert t != null
					t.update(c.ascii-'A'.ascii+1)
					t.fixed = true
					x += 1
				else if c >= '1' and c <= '9' then
					rle = c.to_i
				else
					abort
				end
			end
		end
		if x>0 then y += 1
		if x > mx then mx = x
		if y > my then my = y
		if mx<3 or my<3 or mx>=max_width or my>=max_height then
			return false
		end
		self.resize(mx,my)
		self.metalize
		return true
	end

	# A ASCII version of the grid.
	redef fun to_s: String
	do
		var ansicols = once ["37;1","31","36;1","32;1","35;1","33;1","33","34;1","31;1","37"]
		var b = new FlatBuffer
		b.append("{width}x{height}\n")
		for j in [0..height[ do
			for i in [0..width[ do
				var t = grid[i][j]
				var k = t.kind
				var c = ' '
				if k == 0 then
					if t.fixed then c = '#'
				else
					b.add(0x1b.ascii)
					b.add('[')
					b.append ansicols[k]
					c = (k + 'a'.ascii - 1).ascii
					if t.fixed then c = c.to_upper
					b.append("m")
				end
				b.add(c)
				if k != 0 then
					b.add(0x1b.ascii)
					b.append("[0m")

				end
			end
			b.append "|\n"
		end
		return b.to_s
	end

	# Return a copy of the current grid.
	# if (!no_fixed) copy only the fixed tiles.
	fun copy(no_fixed: Bool): Grid
	do
		var g = new Grid(self.max_width, self.max_height, self.nb_monsters)
		g.resize(width, height)
		for y in [0..height[ do
			for x in [0..width[ do
				var t = self.grid[x][y]
				if no_fixed or t.fixed then
					var t2 = g.grid[x][y]
					t2.update(t.kind)
					t2.fixed = t.fixed
				end
			end
		end
		g.metalize
		return g
	end

	# Internal check of the validity of tile and monster informations
	fun check_grid
	do
		var m2 = new Array[MonsterInfo]
		for m in [0..nb_monsters] do
			m2[m] = new MonsterInfo
		end
		for x in [0..width[ do
			for y in [0..height[ do
				var n = 0
				var f = 0
				var t = get(x,y)
				assert t != null
				assert t.x == x
				assert t.y == y
				var k = t.kind
				if k == 0 then continue

				for i in [-1..1] do
					for j in [-1..1] do
						if i == j or (i != 0 and j != 0) then continue
						var t2 = get(x+i, y+j)
						if t2 == null then continue
						if t2.kind == k then
							n += 1
						else if t2.kind == 0 and not t2.fixed then
							f += 1
						end
					end
				end
				assert n == t.nexts else
					print self
					print "{t} says {t.nexts} nexts, found {n}"
				end
				#assert f == t.frees else

				var m = m2[k]
				m.number += 1
				if n == 0 then
					m.lonely += 1
				else if n == 1 then
					m.single += 1
				else if n > 2 then
					m.angry += 1
				end
			end
		end
		for m in [1..nb_monsters] do
			assert m2[m].number == monsters[m].number
			assert m2[m].lonely == monsters[m].lonely
			assert m2[m].single == monsters[m].single
			assert m2[m].angry == monsters[m].angry
		end
	end
end

# Information about each kind of monsters
class MonsterInfo
	# number of monsters of this kind on board
	var number = 0
	# number of monsters of this kind to place, -1 if no limit
	var remains: Int = -1
	# number of monsters that have exactly 1 next
	var single = 0
	# number of monsters that have exactly 0 next
	var lonely = 0
	# number of monsters that have 3 or more next
	var angry = 0
	# Are all monsters form a wining chain?
	var chain = false
end

# A localized tile of a grid, can contain a monster and be fixed.
class Tile
	# The grid of the tile.
	var grid: Grid

	# The x coordinate in the grid (starting from 0).
	var x: Int

	# The y coordinate in the grid (starting from 0).
	var y: Int

	# The kind of monster in the grid. 0 means empty.
	var kind = 0

	# blink time to live (0 means no blinking).
	var blink = 0

	# shocked time to live (0 means not shocked)
	var shocked = 0

	# number of neighbors of the same kind.
	var nexts = 0

	# number of free non fixed next tiles
	var frees = 0

	# is the tile editable (metal block)
	var fixed = false

	redef fun to_s
	do
		var s
		if fixed then
			s = "#ABCDEFGHI"
		else
			s = ".abcdefghi"
		end
		return "\{{x},{y}:{s.chars[kind]}\}"
	end

	# Shape for metal block
	var shape: nullable Object = null

	# Flag for `count_chain` computation.
	private var chain_mark = 0

	# Set a new kind of monster on tile
	# Return true is the move made the grid unsolvable (bad move)
	fun update(nkind: Int): Bool
	do
		var t = self
		var g = self.grid
		var res = false
		var okind = t.kind
		if okind == nkind then return false


		# First, remove it and update info.
		if okind > 0 then
			var m = g.monsters[okind]
			var n = t.nexts
			if n > 2 then
				g.error -= 1
				m.angry -= 1
			else if n == 1 then
				m.single -= 1
			else if n == 0 then
				g.error -= 1
				m.lonely -= 1
			end
			m.number -= 1
			g.number -= 1
		end
		t.nexts = 0
		t.blink = 5
		t.frees = 0

		var a_neigbor: nullable Tile = null
		# update neighbors
		for i in [-1..1] do
			for j in [-1..1] do
				if (i==0 and j==0) or (i!=0 and j!=0) then continue
				var t2 = g.get(t.x+i,t.y+j)
				if t2 == null then continue
				if t2.kind == 0 then
					if not t2.fixed then t.frees += 1
					continue
				end
				var m = g.monsters[t2.kind]

				if t2.kind == okind then
					if a_neigbor == null then a_neigbor = t2
					# same than old, thus dec neighbors
					t2.nexts -=1
					var n = t2.nexts
					if n == 2 then
						g.error -= 1
						m.angry -= 1
					else if n == 1 then
						m.single += 1
						g.error += 1
					else if n == 0 then
						m.single -= 1
						m.lonely += 1
					end
					# print "+ {t} one less next: {t2} ; +({i}x{j})"
				end

				if t2.kind == nkind then
					# Same than new, thus inc neighbors
					t2.nexts += 1
					t.nexts += 1
					var n = t2.nexts
					if n > 3 then
						res = true
					else if n == 3 then
						g.error += 1
						m.angry += 1
						res = true
					else if n == 2 then
						m.single -= 1
						g.error -= 1
					else if n == 1 then
						m.single += 1
						m.lonely -= 1
					end
					# print "+ {t} one more next: {t2}"
				end
			end
		end

		# Add and update neighbors info
		t.kind = nkind
		if nkind > 0 then
			var m = g.monsters[nkind]
			var n = t.nexts
			if n > 2 then
				g.error += 1
				m.angry += 1
			else if n == 1 then
				m.single += 1
				g.error += 1
			else if n == 0 then
				g.error += 1
				m.lonely += 1
			end
			m.number+=1
			g.number+=1

			g.check_chain(nkind, t)
		end

		# check if the old kind broke, or create a chain
		if okind > 0 then
			g.check_chain(okind, a_neigbor)
		end

		# update win status
		g.won = true
		for m in g.monsters do
			if m.number > 0 and not m.chain then g.won = false
		end

		#grid.check_grid

		return res
	end
end

