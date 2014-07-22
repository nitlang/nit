# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Level managment
module level

import grid

# A level in the game
class Level
	# The associated game
	var game: Game

	init(game: Game, i: Int, code: String)
	do
		self.game = game
		var ls = code.split(";")
		self.number = i
		self.str = ls[0]
		self.par = ls[1].to_i
		if ls.length >= 3 then
			self.status = ls[2]
		end
		self.is_tutorial = i<=4
		self.is_challenge = i>=25
		if self.is_tutorial then
			self.name = "T{i+1}"
			self.fullname = "Tutorial level {i+1}"
		else if not self.is_challenge then
			self.name = (i-4).to_s
			self.fullname = "Level {i-4}"
		else
			self.name = "C{i-24}"
			self.fullname = "Challenge level {i-24}"
		end
	end

	# number the level (0 for first)
	var number: Int

	# initial grid position
	var str: String

	# top score
	var par: Int

	# Help message if any
	var status: String = ""

	# Is the level a tutorial level?
	var is_tutorial: Bool

	# Is the level a challenge level?
	var is_challenge: Bool

	# The short name of the level (eg. "T1")
	var name: String

	# The long name of the level (eg. "Tutorial level 1")
	var fullname: String

	# The player best wining score.
	# 0 it not yet won
	var score = 0

	var l_disabled = 1
	var l_open = 2
	var l_won = 3
	var l_par = 4

	fun get_state: Int
	do
		if self.score == 0 then
			if self.number == 0 or game.levels[self.number-1].score > 0 then return l_open
			if self.number == 25 and game.levels[19].score > 0 then return l_open else return l_disabled
		else if self.score < self.par or not game.levels[9].score > 0 then
			return l_won
		else return l_par
	end

	# Returns true if g is a wining condition for the level.
	fun check_won(g: Grid): Bool
	do
		var w = g.won and (not self.is_challenge or g.number >= self.par)
		if not w then return false
		if g.number > self.score then
			self.score = g.number
			self.save
		end
		return true
	end

	fun save
	do
		#save_cookie("s"+self.hash, self.score>0?self.score:"")
	end
end

# main game object
class Game
	# Game version
	var version = "1.99"

	# Names of kind of monsters @constant
	var colors: Array[nullable String] = [null, "Red", "Cyan", "Green", "Purple", "Yellow", "Orange", "Blue", "Pink", "White"]

	# max grid width
	var gw = 16

	# max grid height
	var gh = 16

	# Number of monster kinds (+1 for empty) @constant
	var monsters = 9

	# The grid to play on
	var grid = new Grid(gw, gh, monsters)

	# LEVELS ******************************************************************

	# Raw level description
	var levels_code: Array[String] = [
	".3#|A2.A|3#.|;6;Connect two monsters",
	".#.|A.#|#.A|;5;Diagonals do not count",
	"2.A|A#.|2.A|;8;Connect all monsters",
	"3A.|3.A|2.A.|;10;Only 1 or 2 neighbors",
	"2.A.|.B.B|2.A.|;12;Build two chains",

	"A.A#|4.|#.#.|A3.|;11",
	"A2.#A|5.|2.A2.|4.#|4.A|;17",
	"A2.B2.|.B2.A.|6.|.AB2.B|6.|6.|;36",
	"A5.|B5.|#.A3.|6.|2.A.B.|.A4.|;26",
	"8.|BA2.B.A.|2.C.C.B.|6.#.|;29",

	".B3.B|6.|.#3.#|.C3.B|.#4.|6.|.C3.C|;30",
	".A.#4.|.C3.A.E|.A6.|6.C.|8.|2.6#|6.E#|5.C2#|;54",
	".A5.A|.A.#3.A|2.#A.#.#|.#.#4.|2.A3.#.|8.|4.A2.A|2.A2.A.#|;37",
	"AB3.C|2.AC2.|6.|.B.CB.|6.|;30",
	"AC5#CA|2.#3.#2.|4.#4.|7.#.|5.#.#.|9.|2.G6.|6.2#.|9.|H#F#G#F#H|;72",

	"AG3.C|2.AC2.|6.|.G2.G.|2.C3.|6.|;32",
	"7.#2.|3.#.#4.|.#8.|7.D2.|2.#.3#3.|2.#3.2#FC|9..|2.2#3.FCD|9..|;71",
	"2.#A4.|6.B.|.C6.|.A.A.AC.|#7.|5.B2.|8.|#A5.C|;56",
	"9.3.|8.#3.|2.B.#3.BA2.|2.AC4.DC2.|2.EA8.|8.#3.|.2#3.#5.|7.#4.|2#3.#B5.|5.CD5.|.2#9.|3.E8.|;119",
	"9.7.|.2#B8#E2#.|.E8.#3.#.|.#3.4#.#.#.#.|.#.#.#4.#.#.#.|.C.#3.2#.#.#.#.|.#.#.4#3.#.#.|.D8.3#.#.|.#.#.4#5.A.|.A5.#2.#.3#.|.3#.#.2#.#2.2#.|.D3.#4.2#2.#.|.#.3#.#.4#.#.|.#5.#6.#.|.3#C6#B3#.|9.7.|;130",

	"8.|.#C2.C#.|.#E2.E#.|8.|8.|.B#2.#A.|.#C2.C#.|8.|8.|.BF2.FA.|.2#2.2#.|8.|8.|.2#2.2#.|.A#2.B#.|8.|;92",
	".A9..|D9.F.|7.CA3.|3.E8.|9.2.H|9.2.#|7.G4.|4.BG2.F3.|2.B6.E2.|9.G2.|.H8.C.|8.D3.|;140",
	"2.F9..|2.C9..|9..C2.|8.AG3.|9.4.|4.2#5.F.|7.E4.#|3.A9.|.G.CF4.C.#.|9.2.E.|;125",
	"9.HCB|.DH9.|.GC9.|9.3.|4.G7.|3.#8.|9.3.|3.B4.D3.|.G9..|8.#3.|2.C2.2#5.|9.3.|;135",
	"9.6.A|6.C9.|2.A.B4.E3.#I.|9.I.#4.|9.7.|2.E3.C9.|7.B8.|5.G6.G3.|6.C6.G2.|9..H3.B.|.CH.#5.#2.C2.|4.H3.#3.H3.|.B3.F5.F4.|.D.D4.D5.D.|9.7.|6.C9.|;244",

	"E6.|7.|.F.E.F.|.F.#.E.|.F.E.E.|7.|6.F|;48",
	"3.2#3.|2.A2.A2.|.C4.C.|8.|3.2#3.|2.A2.A2.|.C4.C.|8.|;56",
	"3.#3.A4.|5.#6.|3.#5.#2.|.#4.#4.#|4.#7.|#6.#4.|8.#3.|.#9..|.#3.#4.#.|3.2#3.#3.|;74",
	"2.A7.|2.D7.|2.A4.A2.|2.G4.G2.|2.A4.D2.|2.D7.|2.A7.|2.G7.|2.D7.|2.G7.|;95",
	"E9.6.|9.H4.#.|9.E2.#3.|9.F2.#2.#|9.3.H2.#|HEF9.3.#|9.7.|6.#9.|6.#2.H3.HEF|.6#2.E6.|9.F6.|5#9.2.|4.#9.#.|.F#3.7#.#.|9.5.#.|9.7.|;225"
	]

	# The loaded levels
	var levels = new Array[Level]

	# Load levels
	# used duting `init`
	fun load_levels
	do
		# Transform level strings into level objects. */
		for i in [0..levels_code.length[ do
			var l = new Level(self,i, levels_code[i])
			levels[i] = l
			#var v = read_cookie("s"+l.hash)
			#l = v
		end
	end

	# The current played level (if any)
	var level: nullable Level = null

	init
	do
		load_levels
	end
end

