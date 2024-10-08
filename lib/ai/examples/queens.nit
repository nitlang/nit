# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Example of the famous eight-queens problem solved with the `ai::backtrack` module.
#
# The game is to places n queens on a n*n chessboard.
# The constraint is that two queens cannot be on the same row, column or diagonal.
#
# Eg. a solution to the 8-queens problem is
# ~~~raw
# +--------+
# |Q.......|
# |....Q...|
# |.......Q|
# |.....Q..|
# |..Q.....|
# |......Q.|
# |.Q......|
# |...Q....|
# +--------+
#
# This program takes an integer n as argument then display all solutions for the
# n-queens proglem (ie. on a n*n board).
module queens is example

import ai::backtrack

# The (eight-)queens problem, modeled naively as a `BacktrackProblem`.
#
# The state (`S`) is a board, modeled as an array of occupied rows.
# The integer in each row indicates the column occupied by the queen.
# Since there can be only one queen by row, a single `Int` is
# enough for each row, and the whole board `rows` is just an `Array[Int]`.
# Only the occupied rows are stored, thus the length of `rows` indicates
# the number of occupied rows, the remaining virtual rows are considered free.
#
# An action (`A`) is the column where to put a queen in the first free row,
# so modeled as an Int.
# Actions are applied until all rows are occupied by a queen.
class QueenProblem
	super BacktrackProblem[Array[Int], Int]

	# The initial state has no queens; so, no occupied rows.
	redef fun initial_state do return new Array[Int]

	# The board size.
	# Hint: use 8 to be traditional.
	var size: Int

	# What are the available columns for a queen in the first free row?
	# Just look at occupied rows above and cancel the possible columns one by one.
	redef fun actions(rows, node)
	do
		# No more than 8 rows
		if rows.length >= size then return null

		# Available columns. At first, all are available.
		var columns = new Array[Bool].filled_with(true, size)

		# Look at each occupied row and cancel columns
		var i = rows.length # delta for each diagonal
		for r in rows do
			columns[r] = false # no queen under `r`
			var d = r - i
			if d >= 0 then columns[d] = false # no queen on the first diagonal
			d = r + i
			if d < size then columns[d] = false # no queen on the second diagonal
			i -= 1
		end

		# Collect the remaining columns, those that were not cancelled.
		var res = new Array[Int]
		for c in [0..size[ do if columns[c] then res.add(c)

		return res
	end

	# The first free row become occupied with a queen placed where indicated.
	redef fun apply_action(rows, column)
	do
		rows.add column
	end

	# Just `free` the last occupied row.
	redef fun backtrack(rows, column)
	do
		rows.pop
	end

	# Are all rows are occupied?
	redef fun is_goal(rows) do return rows.length >= size

	# Draw a nice board
	fun print_state(rows: Array[Int])
	do
		printn "+"
		for i in [0..size[ do printn "-"
		print "+"
		for r in rows do
			printn "|"
			for i in [0..r[ do printn "."
			printn "Q"
			for i in [r+1..size[ do printn "."
			print  "|"
		end
		for r in [rows.length..size[ do
			printn "|"
			for i in [0..size[ do printn "."
			print  "|"
		end
		printn "+"
		for i in [0..size[ do printn "-"
		print "+"
	end
end

# just cont solutions (no not print them)
var quiet = false

# The board size
var size = 8

# Basic argument parsing
if args.length > 0 and args.first == "-q" then
	args.shift
	quiet = true
end
if args.length > 0 then
	size = args.first.to_i
	if size <= 0 then
		print "usage: queens [-q] [size]\n -q for quiet"
		exit 1
	end
end

print "The {size}-queens problem"
var pb = new QueenProblem(size)
var s = pb.solve
var sols = 0
while s.is_running do
	if s.run != null then
		if not quiet then pb.print_state(s.state)
		sols += 1
	end
end
print "Found {sols} solutions"
