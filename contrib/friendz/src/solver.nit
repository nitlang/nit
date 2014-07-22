# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Basic game solver
module solver
intrude import grid

# A solver with a deep-first search algorithm
# Instead of storig grids in memory, it plays by placing monsters and backtrack by removing placed monsters.
class Solver
	# Return true if grid accepts kind at tile t.
	# Accepts means that
	# * the tile is playble (free and not fixed)
	# * the new monster will not be angry
	# * the new monster will not make neighbor angry
	fun accepts(t: Tile, kind: Int): Bool
	do
		var grid = t.grid
		if t.kind != 0 or t.fixed then return false
		#if t.x<0 or t.x>=grid.width or t.y<0 or t.y>=grid.height then return false
		var cpt = 0
		for i in [-1..1] do
			for j in [-1..1] do
				if i==0 and j==0 or i!=0 and j!=0 then continue
				var x2 = t.x+i
				var y2 = t.y+j
				if x2<0 or x2>=grid.width or y2<0 or y2>=grid.height then continue
				var t2 = grid.grid[x2][y2]
				if t2.kind == kind then
					if t2.nexts >= 2 then return false
					cpt += 1
					if cpt>=3 then return false
				end
			end
		end
		return true
	end

	# Return the list of accepting neighbors of t
	fun frees(t: Tile): Array[Tile]
	do
		var grid = t.grid
		var res = new Array[Tile]
		for i in [-1..1] do
			for j in [-1..1] do
				if i==0 and j==0 or i!=0 and j!=0 then continue
				var x2 = t.x+i
				var y2 = t.y+j
				if x2<0 or x2>=grid.width or y2<0 or y2>=grid.height then continue
				var t2 = grid.grid[x2][y2]
				if accepts(t2, t.kind) then res.push(t2)
			end
		end
		return res
	end

	# The grid played on
	var grid: Grid

	# Open moves to play
	# If empty, it means the next move will be backtraking
	var tries = new Array[Tile]

	# The color played for `tries`
	var kind = 1

	# Search free tiles next to lonely monsters
	# Used to initialize `tries`
	fun look_start: Array[Tile]
	do
		var start = new Array[Tile]
		var min = 1
		kind = 0

		var tile: nullable Tile = null

		for x in [0..grid.width[ do
			for y in [0..grid.height[ do
				var t = grid.grid[x][y]
				var k = t.kind
				if k == 0 or grid.monsters[k].chain then continue
				var n = t.nexts

				if n > min then continue

				var fs = frees(t)
				var l = fs.length
				if l == 0 then continue

				tile = t
				if n == 0 then
					if min == 1 or start.length > l then
						start = fs
						kind = k
					end
				else if kind == 0 or kind == k then
					start.add_all fs
					kind = k
				end

				min = n
			end
		end
		#print "-------------"
		#print grid
		#dump
		#print "START: {tile} -> {start.join(",")}"
		#print "-------------"
		return start
	end

	# compute and print some metrics about the problem
	fun size_problem
	do
		var free = 0
		for x in [0..grid.width[ do
			for y in [0..grid.height[ do
				var t = grid.grid[x][y]
				if t.kind == 0 and not t.fixed then free += 1
			end
		end
		print "FREE: {free}"
		var ms = 0
		for m in grid.monsters do
			if m.number > 0 then ms += 1
		end
		print "KINDS: {ms}"
		print "SIZE: {(ms+1).to_f.pow(free.to_f)}"
	end

	init(grid: Grid)
	do
		self.grid = grid
		size_problem
		tries = look_start
	end

	# Zipper in the search tree as a FIFO
	var history = new Array[Move]

	# Perform a backtrack step
	# Remove the placed monsters and go for the other tries
	fun backtrack: Bool
	do
		if history.is_empty then
			is_over = true
			return true
		end
		var h = history.pop
		tries = h.tries
		opens -= tries.length
		h.tile.update(0)
		kind = h.kind
		return false
	end

	# Number of player steps
	var steps = 0

	# Number of open in the
	# real opens is `opens+tries.length`
	var opens = 0

	fun dump
	do
		print "STEPS: {steps}"
		print "OPENS: {opens+tries.length}"
		print "DEPTH: {history.length}"
		print "NEXTS: {tries.join(", ")}"
	end

	# Is the last step exhausted all the possibilities?
	var is_over = false

	# Compute the next step.
	# Return tru on a wining position (`grid.won`) or when the solver `is_over`
	fun step: Bool
	do
		#print "=========="
		#print grid
		#dump
		#print "=========="
		steps += 1
		if tries.is_empty then
			return backtrack
		end
		var t = tries.pop
		var eval = 0
		var fail = t.update(kind)
		if not fail then
			#eval = evaluate_new_tile(t)
			#fail = (eval == -1)
		end
		if not fail then
			opens += tries.length
			var h = new Move(t, tries, kind)
			history.push(h)
			if grid.won then
				tries = new Array[Tile]
				return true
			end
			if t.nexts == 2 then
				tries = look_start
			else
				tries = frees(t)
			end
		else
			t.update(0)
		end
		return false
	end
end

# A stored move in the `Solver::history`
class Move
	# The tile played
	var tile: Tile

	# The remainig alternatives to try
	var tries: Array[Tile]

	# to color for the moves
	var kind: Int
end
