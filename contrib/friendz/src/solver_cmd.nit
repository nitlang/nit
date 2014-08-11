# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Solver of levels on the command-line
module solver_cmd

import solver
import level


if args.is_empty then
	print "Usage: solver_cmd levelnumber"
	exit 0
end
var l = args.first.to_i
var game = new Game
var g = game.grid

g.load(game.levels[l].str)
g.size_problem

var p = new FriendzProblem(g)
var s = p.solve
while s.is_running do
	var r = s.run_steps(500000)
	if r != null then
		print "WON"
		break
	else if s.is_running then
		print s
		print g
	end
end
print s
printn g
