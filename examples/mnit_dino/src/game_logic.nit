# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Entire game logic for the Dino game
# Depends only on Nit standard library
module game_logic

interface Turnable
	fun do_turn( turn : Turn ) is abstract
end

class Game
	var nbr_wanted_cavemen : Int

	var dino = new Dino
	var cavemen = new Array[Caveman]
	var javelins_in_air = new Array[Javelin]
	var items_on_ground = new Array[Entity]
	var entities = new Array[Entity].with_items(dino)
	var turn_nbr = 0

	var over_since = 0

	var score: Ref[Int]

	var random_radius_min = 200
	var random_radius_max = 400
	protected var random_radius_diff : Int =
		random_radius_max - random_radius_min

	var entities_sorter = new EntitiesSorter

	init( cavemen_nbr : Int, score: Ref[Int] )
	do
		srand_from(cavemen_nbr)

		self.score = score

		nbr_wanted_cavemen = cavemen_nbr

		for n in [0..nbr_wanted_cavemen[ do
			var man = new Caveman
			cavemen.add( man )
			entities.add( man )

			var radius = (random_radius_min + random_radius_diff.rand).to_f
			var angle = (2.0*pi).rand
			man.pos.x = ( angle.cos * radius ).to_i
			man.pos.y = ( angle.sin * radius ).to_i
		end

		for b in 24.times do
			var bush = new Bush
			bush.pos = new GamePos([-300..300[.rand, [-400..400[.rand)
			items_on_ground.add bush
			entities.add bush
		end
	end

	fun do_turn : Turn
	do
		turn_nbr += 1
		var turn = new Turn( self )

		dino.do_turn( turn )
		for man in cavemen do
			man.do_turn( turn )
			if not man.is_alive then
				cavemen.remove( man )
				score.item += 1
			end
		end

		for j in javelins_in_air do
			j.do_turn( turn )
			if j.hit_dino then
				javelins_in_air.remove( j )
				entities.remove( j )
			else if j.hit_ground then
				javelins_in_air.remove( j )
				items_on_ground.add( j )
			end
		end

		if over and over_since == 0 then
			over_since = turn.nbr
		end

		# sort for blitting, firsts and in the back
		entities_sorter.sort entities

		return turn
	end

	fun add_javelin( j : Javelin )
	do
		javelins_in_air.add( j )
		entities.add( j )
	end

	fun over : Bool do return dino.life <= 0 or cavemen.is_empty
	fun won : Bool do return cavemen.is_empty and dino.is_alive
	fun lost : Bool do return not won

	fun ready_to_start_over : Bool do return over_since + 80 < turn_nbr
end

class Turn
	var game : Game
	var nbr : Int

	init ( g : Game )
	do
		game = g
		nbr = game.turn_nbr
	end
end

class GamePos
	var x : Int
	var y : Int

	init ( x, y : Int )
	do
		self.x = x
		self.y = y
	end

	init copy( src : GamePos )
	do
		x = src.x
		y = src.y
	end

	fun squared_dist_with( other : GamePos ) : Int
	do
		var dx = other.x - x
		var dy = other.y - y

		return dx*dx + dy*dy
	end

	redef fun to_s do return "<{x}|{y}>"
end

class Entity
	super Turnable

	fun run_over_distance_x: Int do return 50
	fun run_over_distance_y: Int do return 16

	var pos = new GamePos( 0, 0 )

	fun squared_dist_with_dino( game : Game ) : Int
	do
		return pos.squared_dist_with( game.dino.pos )
	end

	fun under_dino(game: Game): Bool
	do
		var dy = pos.y - game.dino.pos.y
		if dy.abs > run_over_distance_y then return false

		var dx = pos.x - game.dino.pos.x
		return dx.abs <= run_over_distance_x
	end
end

class MovingEntity
	super Entity

	var going_to : nullable GamePos = null is writable

	fun speed : Int is abstract

	var going_left = false
	var going_right = false

	redef fun do_turn( t )
	do
		if going_to != null then
			var ds = pos.squared_dist_with( going_to.as(not null) )
			if ds < speed*speed then
				going_to = null # is there
			else
				var dx = going_to.x - pos.x
				var dy = going_to.y - pos.y
				var a = atan2( dy.to_f, dx.to_f )
				var mx = a.cos*speed.to_f
				var my = a.sin*speed.to_f

				pos.x += mx.to_i
				pos.y += my.to_i

				going_left = mx < 0.0
				going_right = mx > 0.0
			end
		end
	end
end

class MortalEntity
	super Entity

	fun is_alive : Bool is abstract
end

class Dino
	super MovingEntity
	super MortalEntity

	#var running_until = 0
	var total_life = 20
	var life : Int = total_life

	redef fun speed do return 8

	redef fun is_alive do return life > 0

	fun hit( hitter : Entity, damage : Int )
	do
		if is_alive then
			life -= damage
		end
	end

	redef fun do_turn( t )
	do
		if is_alive then
			super
		end

		for i in t.game.items_on_ground do
			if i.under_dino(t.game) then
				t.game.items_on_ground.remove i
				t.game.entities.remove i
			end
		end
	end
end

class Caveman
	super MovingEntity
	super MortalEntity

	var afraid_until = 0
	var cannot_throw_until = 0

	var throw_distance : Int = 400*40+10.rand
	var fear_distance : Int = 300*20+8.rand
	var flee_distance : Int = 600*60+16.rand

	var fear_duration : Int = 80+40.rand
	var throw_period : Int = 40+8.rand

	var variance_angle: Float = 2.0*pi.rand
	var variance_dist: Int = throw_distance.to_f.sqrt.to_i-4
	var variance_x: Int = (variance_angle.cos*variance_dist.to_f).to_i
	var variance_y: Int = (variance_angle.sin*variance_dist.to_f).to_i

	redef var is_alive : Bool = true

	redef var speed: Int = 3+3.rand

	fun is_afraid( turn : Turn ) : Bool do return turn.nbr < afraid_until
	fun can_throw( turn : Turn ) : Bool do return cannot_throw_until < turn.nbr
	fun die(turn: Turn) do is_alive = false

	redef fun do_turn( t )
	do
		if is_alive then
			if under_dino(t.game) then
				if t.game.dino.is_alive then die(t)
				return
			else if is_afraid( t ) then
				# going to destination
			else if t.game.dino.life <= 0 then
				# dino is dead, chill
			else
				var dwd = squared_dist_with_dino( t.game )
				if dwd < fear_distance then
					afraid_until = t.nbr + fear_duration

					var dino_pos = t.game.dino.pos
					var dx = dino_pos.x - pos.x
					var dy = dino_pos.y - pos.y
					var a = atan2( dy.to_f, dx.to_f )
					a += pi # get opposite
					a += [-100..100[.rand.to_f*pi/3.0/100.0
					var x = a.cos*flee_distance.to_f
					var y = a.sin*flee_distance.to_f
					going_to = new GamePos( x.to_i, y.to_i )
				else if dwd < throw_distance then
					if can_throw( t ) then
						cannot_throw_until = t.nbr + throw_period
						var javelin = new Javelin( pos, t.game.dino.pos )
						t.game.add_javelin( javelin )
						going_to = null
					end
				else
					# get closer to dino
					var dino_pos = t.game.dino.pos
					going_to = new GamePos(dino_pos.x+variance_x, dino_pos.y+variance_y)
				end
			end

			super
		end
	end
end

class Javelin
	super Entity

	var z = 400
	var angle : Float = pi/2.0

	var thrown_angle_xy : Float
	#var thrown_angle_z
	var speed_z = 60

	var hit_ground = false
	var hit_dino = false

	var speed : Int = 10+2.rand
	var hit_dino_distance = 128
	var hit_damage = 1
	var gravity : Int = -3

	init ( from : GamePos, to : GamePos )
	do
		var dx = to.x-from.x
		var dy = to.y-from.y
		thrown_angle_xy = atan2( dy.to_f, dx.to_f )
		pos = new GamePos.copy( from )
	end

	redef fun do_turn( t )
	do
		var dwd = squared_dist_with_dino( t.game )
		if dwd < hit_dino_distance and t.game.dino.is_alive then
			t.game.dino.hit( self, hit_damage )
			hit_dino = true
		else
			if z <= 0 then
				hit_ground = true
				if thrown_angle_xy.cos > 0.0 then
					angle = pi*5.0/8.0+(pi/4.0).rand
				else
					# left of the screen
					angle = pi*9.0/8.0+(pi/4.0).rand
				end
			else
				# in the air
				speed_z += gravity
				z += speed_z

				var mx = (thrown_angle_xy.cos * speed.to_f).to_i
				pos.x += mx
				pos.y += (thrown_angle_xy.sin * speed.to_f).to_i

				if mx > 0 then
					angle = atan2( (speed_z/10).to_f, -1.0*speed.to_f )-pi/2.0
				else
					angle = atan2( (speed_z/10).to_f, speed.to_f )-pi/2.0
				end
			end
		end
	end
end

class Bush super Entity end

# Sort entities on screen in order of Y, entities in the back are drawn first
class EntitiesSorter
	super Comparator
	redef type COMPARED: Entity

	redef fun compare(a, b) do return b.pos.y <=> a.pos.y
end
