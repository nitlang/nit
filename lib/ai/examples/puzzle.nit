# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# The N-puzzle problem, modeled naively as a `SearchProblem`.
#
# A square grid, made of tiles represented with a letter, is scrambled.
# A missing tile, the hole, represented with a dot, is used to move them.
#
# The goal is to found a plan, made of the four basic movements up, down,
# left, and right, that move each letter to its correct position: the solved
# grid list letters alphabetically from left to right then top to bottom.
# The hole must be in the last position (bottom-right).
#
# The argument of the program is a initial position, the program then find
# the best plan to solve the puzzle.
#
# ## Example:
#
# The argument "abcd.fgeh" is the grid
#
# ~~~raw
# abc
# d.f
# geh
# ~~~
#
# The goal is:
#
# ~~~raw
# abc
# def
# gh.
# ~~~
#
# The shortest plan, in two steps, is to move *up* the tile under the hole (e),
# then to move *left* the tile after the hole (h).
module puzzle is example

import ai::search

# The state (`S`) is a square grid, modeled as a one-dimensional array of Tile.
# read from left to right then top to bottom.
#
# An action (`A`) is the relative position of the tile to swap with the hole.
# Therefore, `-1` for left, `1` for right, `-width` for up and `width` for down.
class PuzzleProblem
	super SearchProblem[ArrayCmp[Tile], Int]

	# The initial grid. use letters for tiles, and . for the hole.
	var initial_grid: String

	# The width of the grid.
	# Eg. 3 for a 8-puzzle grid
	var width: Int is noinit

	# Construct a state form `initial_grid`
	redef fun initial_state do
		var g = initial_grid
		var len = g.length
		var width = len.sqrt.to_i
		self.width = width
		if width * width != len then
			print "Error: {g} has {len} tiles. A square number, like {width*width} is needed"
			exit 1
		end
		var res = new ArrayCmp[Tile]
		for i in [0..g.length[ do
			var c = g.chars[i]
			if c == ' ' or c == '.' then
				var hole = new Tile('.', -1)
				self.hole = hole
				res.add hole
			else if c >= '1' and c <= '9' then
				var t = new Tile(c, '1'.distance(c))
				res.add t
			else if c >= 'a' and c <= 'z' then
				var t = new Tile(c, 'a'.distance(c))
				res.add t
			else if c >= 'A' and c <= 'Z' then
				var t = new Tile(c, 'A'.distance(c))
				res.add t
			else
				print "Error: illegal tile {c} in {g}"
				exit 1
			end
		end
		return res
	end

	# Get the four available movements, or 3 on a edge, or 2 in a corner.
	redef fun actions(state)
	do
		var h = get_hole(state)
		var x = h % width
		var y = h / width
		var res = new Array[Int]
		if x >= 1 then res.add(-1)
		if x < width-1 then res.add(1)
		if y >= 1 then res.add(-width)
		if y < width-1 then res.add(width)
		return res
	end

	# Return the state where the tile at hole+action has moved
	redef fun apply_action(state, action)
	do
		# Copy the state
		var res = new ArrayCmp[Tile].with_capacity(state.length)
		res.add_all(state)

		# Get the hole and the tile next to it
		var h = get_hole(res)
		var t = h + action

		# Move (by swapping the tile and the hole)
		res[h] = res[t]
		res[t] = hole

		return res
	end

	# The special empty tile for fast retrieval.
	var hole: Tile is noinit

	# What is the position of the hole?
	fun get_hole(state: Array[Tile]): Int
	do
		return state.index_of(hole)
	end

	# Each tile is at its correct position
	redef fun is_goal(state)
	do
		for i in [0..state.length[ do
			var t = state[i]
			if t != hole and t.goal_idx != i then return false
		end
		return true
	end

	# The sum of the Manhattan distances of each tile to its goal
	# Not the best heuristic but the simplest to implement among the good ones.
	redef fun heuristic(state)
	do
		var p = 0
		var i = -1
		for t in state do
			i += 1

			# The hole does not count
			if t == hole then continue

			var dx = (i % width - t.goal_idx % width).abs
			var dy = (i / width - t.goal_idx / width).abs

			# Add Manhattan distance
			p += dx + dy
		end
		return p.to_f
	end

	# Print the grid
	fun print_state(state: Array[Tile])
	do
		for i in [0..state.length[ do
			var t = state[i]
			if t == hole then
				printn "."
			else
				printn t.symbol
			end
			if (i+1) % width == 0 then print ""
		end
	end

	# Print the plan with words.
	fun print_plan(plan: Sequence[Int])
	do
		var s = new Array[String]
		for i in plan do
			if i == -1 then
				s.add "right(>)"
			else if i == 1 then
				s.add "left(<)"
			else if i == -width then
				s.add "down(v)"
			else if i == width then
				s.add "up(^)"
			else
				abort
			end
		end
		print "Solution in {plan.length} moves: {s.join(" ")}"
	end

	redef fun make_memory do
		var res = super
		res.add new RBTreeMap[ArrayCmp[Tile], SearchNode[ArrayCmp[Tile], Int]]
		res.add new BinTreeMap[ArrayCmp[Tile], SearchNode[ArrayCmp[Tile], Int]]
		return res
	end
end

# A movable tile
# A simple class to encapsulate the symbol and the goal position.
class Tile
	super Comparable
	redef type OTHER: Tile is fixed

	# The symbol written on the tile
	var symbol: Char

	# The expected position in the grid
	var goal_idx: Int

	redef fun to_s do return symbol.to_s
	redef fun ==(o) do return o isa Tile and goal_idx == o.goal_idx
	redef fun <(o) do return goal_idx < o.goal_idx
	redef fun <=>(o) do return goal_idx <=> o.goal_idx
end

var configs = false

if not args.is_empty then
	if args.first == "--configs" then
		configs = true
		args.shift
	end
end

if args.is_empty then
	print """
Usage: puzzle [--configs] initial...

--configs: search and time solutions with various configurations of solvers.
initial:   an initial configuration (letters for the tiles, and dot for the hole). eg:

 8-puzzle:

 goal (0):    abcdefgh.
 easy (4):    abce.fdgh
 medium (10): eabf.cdgh
 hard (20):   feacbh.dg
 harder (31): hfgbedc.a

 15-puzzle:
 goal (0):    abcdefghijklmno.
 easy (30):   bacdefghijlkmno.
 medium (40): fg.jacoheldnibmk
 hard (55):   kleg.mondcafjhbi
 harder (61): lomgkcend.afjhbi

 24-puzzle:
 goal (0):    abcdefghijklmnopqrstuvwx.
 easy (55):   giabcjekmdhrtflqsownpuv.x
 medium (75): giabcjekmdrtwulhs.vnqofpx
 hard (79):   giabcjekmdrtw.uhsvnlqofpx
 harder (80): giabcjekmdrt.wuhsvnlqofpx
"""
	exit 0
end


for arg in args do
	var pb = new PuzzleProblem(arg)
	print "Initial: {arg}"
	pb.print_state(pb.initial_state)

	if configs then
		pb.run_configs(1000000)
		continue
	end

	var s = pb.astar
	s.memorize = true
	var r = s.run
	if r == null then
		print "No solution."
		break
	end

	print "Solved, after looking at {r.steps} positions"
	pb.print_plan(r.plan)
end
