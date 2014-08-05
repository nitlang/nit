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
import ai::backtrack

# The modelization of the friendzs problem.
class FriendzProblem
	super BacktrackProblem[Grid, Action]

	redef var initial_state

	redef fun actions(state, node)
	do
		var last_action = node.action
		if state.won then return null
		if last_action != null then
			var res = state.frees(last_action.tile)
			if not res.is_empty or last_action.tile.nexts != 2 then
				var a = new Array[Action]
				for t in res do a.add t.to_action(last_action.kind)
				return a
			end
		end
		return state.look_start
	end

	redef fun apply_action(state, action)
	do
		action.tile.update(action.kind)
	end

	redef fun backtrack(state, action)
	do
		action.tile.update(0)
	end

	redef fun is_goal(state)
	do
		return state.won
	end
end

redef class Grid
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
	# see `accepts`
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

	# Search free tiles next to lonely monsters
	fun look_start: Array[Action]
	do
		var grid = self
		var start = new Array[Tile]
		var min = 1
		var kind = 0

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
		var res = new Array[Action]
		for t in start do
			res.add t.to_action(kind)
		end
		#print "-------------"
		#print grid
		#dump
		#print "START: {tile} -> {start.join(",")}"
		#print "-------------"
		return res
	end

	# compute and print some metrics about the problem
	fun size_problem
	do
		var grid = self
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
end

class Action
	var tile: Tile
	var kind: Int
	redef fun to_s do return "{tile}->{kind}"
end

redef class Tile
	fun to_action(kind_to_play: Int): Action do return new Action(self, kind_to_play)
end
