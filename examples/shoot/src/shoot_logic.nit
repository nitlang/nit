# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Space shooter.
# This program is a fun game but also a good example of the scene2d module
module shoot_logic

import scene2d

# The ship of the player
class Player
	super Sprite

	# Where the player is going
	var going_target = new GoingTarget

	# Activate the `going_target`
	fun goes_to(x,y: Int, speed: Int)
	do
		going_target.x = x
		going_target.y = y
		going_target.active = true
		var angle = angle_to(going_target)
		set_velocity(angle, speed)
	end

	# Current forture of the player
	var money: Int = 0 is writable

	# Number of basic bullets fired together
	var nbshoots: Int = 1 is writable

	# Time bebore the player shoot again a basic bullet (cooldown)
	# Shoot if 0
	var shoot_ttl = 0

	# Number of missiles
	var nbmissiles: Int = 0 is writable

	# Time bebore the player shoot again a missile (cooldown)
	# Shoot if 0
	var missile_ttl = 0

	# Remainind time when the player is protected from impacts
	var protected_ttl = 0

	# The associated play scene
	# (mainly used to registed shoots)
	var scene: PlayScene

	init(scene: PlayScene) do
		self.scene = scene
		self.width = 2400
		self.height = 2400
	end

	redef fun update
	do
		super

		# Out of screen?
		if self.y < 0 then
			self.y = 0
			self.vy = 0
		else if self.y > scene.height then
			self.y = scene.height
			self.vy = 0
		end
		if self.x < 0 then
			self.x = 0
			self.vx = 0
		else if self.x > scene.width then
			self.x = scene.width
			self.vx = 0
		end

		# Update of the player protection if any
		if protected_ttl > 0 then protected_ttl -= 1

		# Need to shoot basic bullets?
		if shoot_ttl > 0 then
			shoot_ttl -= 1
		else
			shoot_ttl = 30
			for i in [0..nbshoots[ do
				var shoot = new Shoot(scene)
				shoot.x = x
				shoot.y = top
				shoot.vy = -500
				shoot.vx = (i - nbshoots / 2) * 100
				scene.player_shoots.add(shoot)
			end
		end

		# Need to shoot missiles?
		if missile_ttl > 0 then
			missile_ttl -= 1
		else if nbmissiles > 0 then
			missile_ttl = 500 / nbmissiles
			var shoot = new Missile(scene)
			shoot.x = x
			shoot.y = top
			shoot.vy = -300
			shoot.vx = 0
			scene.player_shoots.add(shoot)
		end

	end

	# Time before the player is respawned by the scene
	var respawn_ttl: Int = 0

	fun hit
	do
		if self.protected_ttl > 0 then return
		self.scene.explosion(self.x, self.y, 10)
		self.exists = false

		# Reset the position for respawn
		self.x = scene.width / 2
		self.y = scene.height - 10000
		self.vx = 0
		self.vy = 0
		self.respawn_ttl = 50
	end

end

# Sprites that may be hit by the player.
# Eq. enemies, bullets, loots, etc.
class Hitable
	super Sprite

	# What do do when self is hit by the player.
	# By defaut, do nothing
	fun hit_by_player(player: Player) do end
end

# Destination for the player (pointer position)
class GoingTarget
	super Hitable

	# true in on move, false if player is at rest
	var active = false is writable

	init do
		self.width = 500
		self.height = 500
	end

	redef fun hit_by_player(player)
	do
		if not active then return
		active = false
		player.vx = 0
		player.vy = 0
	end
end

# A bullet shooted by a ship
class Shoot
	super Hitable

	# Was the shoot fired by an enemy.
	# Since there is no frendly fire, it is important to distinguish ownership
	var enemy: Bool = false

	# The scene of the sprite
	# Is used with bound limits
	var scene: PlayScene

	init(scene: PlayScene)
	do
		self.scene = scene
		self.width = 800
		self.height = 800
	end

	redef fun update
	do
		super

		# Out of screen ?
		if self.y < -100 * 100 or self.y > scene.height + 10000 or self.x < -100 * 100 or self.x > scene.width + 10000 then
			self.exists = false
		end
	end

	redef fun hit_by_player(player)
	do
		player.hit
		self.exists = false
	end
end

# A advanced bullet that aims a target (player or enemy)
class Missile
	super Shoot

	# The target aquired by the missile
	var target: nullable Sprite = null

	# When ttl is 0 then the angle stay fixed
	# The angle is updated toward the target if ttl>0
	var ttl: Int = 200

	redef fun update
	do
		super

		# Do we still update the angle ?
		if ttl <= 0 then return
		ttl -= 1

		# Do we have a target?
		var target = self.target
		if target == null or not target.exists then return

		# Just update the angle
		var angle = self.angle_to(target)
		self.set_velocity(angle, 300)
	end
end

# A enemy ship
# Various enemies exists, each kind has its own subclass
abstract class Enemy
	super Hitable

	# The scene of the ship
	# Is used to store created bullets or to get info about the player
	var scene: PlayScene

	# Time bebore the enemy shoot again (cooldown)
	# Shoot if 0
	# The default value is used as a grace period to avoid a first shoot on
	# the first update
	var shoot_ttl = 50

	init(scene: PlayScene)
	do
		self.width = 2400
		self.height = 2400
		self.scene = scene
		scene.enemies.add(self)
	end

	redef fun update
	do
		super

		# Out of screen ?
		if self.y > scene.height + 10000 or self.x < -100 * 100 or self.x > scene.width + 10000 then
			# Note: no control on the top to let ennemies appear
			self.exists = false
		end

		# Need to shoot?
		if shoot_ttl > 0 then
			shoot_ttl -= 1
		else
			shoot
		end
	end

	# Each enemy has its own kind of shoot strategy
	# Note: is automatically called by update when shoot_ttl is expired
	fun shoot do end

	# Money given when the enemy is destroyed
	fun loot: Int is abstract

	# What to do when the enemy is hit by a player shoot (or by the player himself)?
	# By default it kill the enemy in an explosion and generate a loot
	fun hit
	do
		self.exists = false
		scene.explosion(self.x, self.y, 5)
		if 100.rand < 3 then
			var upmissile = new UpMissile(scene)
			upmissile.x = self.x
			upmissile.y = self.y
			upmissile.vx = 0
			upmissile.vy = 0
			scene.loots.add(upmissile)
			scene.hitables.add(new LootArea(upmissile, 2000))
		else
			for i in [0..self.loot[ do
				var money = new Money(scene)
				money.x = self.x
				money.y = self.y
				money.set_velocity(100.rand.to_f*pi/50.0, (500+self.loot).rand)
				scene.loots.add(money)
				scene.hitables.add(new LootArea(money, 2000))
			end
		end
	end

	redef fun hit_by_player(player)
	do
		player.hit
		hit
	end
end

# Basic enemy, do not shoot
class Enemy0
	super Enemy

	redef fun loot do return 3

	redef init(scene)
	do
		self.width = 3600
		self.height = 3600
	end
end

# Simple shooter of pairs of basic bullets
class Enemy1
	super Enemy

	redef init(scene)
	do
		self.width = 4400
		self.height = 4400
	end

	redef fun shoot
	do
		# Next shoot
		shoot_ttl = 50

		# two bullets shoot each time
		for dx in [-11, 11] do
			var shoot = new Shoot(scene)
			shoot.enemy = true
			shoot.x = self.x + dx * 100
			shoot.y = self.bottom
			shoot.vy = 500
			scene.enemy_shoots.add(shoot)
		end
	end

	redef fun loot do return 5
end

# Enemy that shoot missiles
class Enemy2
	super Enemy

	redef init(scene)
	do
		self.width = 6000
		self.height = 6000
	end

	redef fun shoot
	do
		# Next shoot
		shoot_ttl = 200

		# The missile targets the player
		var shoot = new Missile(scene)
		shoot.enemy = true
		shoot.x = self.x
		shoot.y = self.bottom
		shoot.vy = 500
		shoot.target = scene.player
		scene.enemy_shoots.add(shoot)
	end

	redef fun loot do return 10
end

# Enemy that shoot rings of basic bullets
class Enemy3
	super Enemy

	redef init(scene)
	do
		self.width = 5800
		self.height = 5800
	end

	redef fun shoot
	do
		# Next shoot
		shoot_ttl = 50

		for i in [0..10[ do
			var shoot = new Shoot(scene)
			shoot.enemy = true
			shoot.x = self.x
			shoot.y = self.bottom
			shoot.set_velocity(pi/5.0*i.to_f, 500)
			scene.enemy_shoots.add(shoot)
		end
	end

	redef fun loot do return 20
end

# Enemy with a turret that shoot burst of bullets toward the player
class Enemy4
	super Enemy

	# The angle of the turret
	var angle: Float = 0.0

	redef init(scene)
	do
		self.width = 4200
		self.height = 4200
	end

	redef fun update
	do
		super

		# Rotate the turret toward the player
		var target = scene.player
		if target.exists then
			angle = self.angle_to(target)
		end
	end

	# Shoots come in burst
	var nbshoots: Int = 0

	redef fun shoot
	do
		# Next shoot: is there still bullets in the burst?
		if self.nbshoots < 10 then
			# Is ther
			self.nbshoots += 1
			shoot_ttl = 5
		else
			self.nbshoots = 0
			shoot_ttl = 80
		end

		# Shoot with the turret angle
		var shoot = new Shoot(scene)
		shoot.enemy = true
		shoot.x = self.x
		shoot.y = self.y
		shoot.set_velocity(angle, 500)
		scene.enemy_shoots.add(shoot)
	end

	redef fun loot do return 20
end

# Enemy that rush directly on the player
class EnemyKamikaze
	super Enemy

	redef init(scene)
	do
		self.width = 3200
		self.height = 3200
	end

	redef fun update
	do
		super

		# Try to target the player
		var target = scene.player
		if not target.exists then return

		var angle = self.angle_to(target)
		self.set_velocity(angle, 600)
	end

	redef fun loot do return 5
end

# The boss has two semi-independent arms
class Boss
	super Enemy

	# Left arm
	var left_part: BossPart

	# Right arm
	var right_part: BossPart

	init(scene)
	do
		super
		self.width = 140 * 100
		self.height = 96 * 100
		self.x = scene.width / 2
		self.y = -100 * 100
		self.left_part = new BossPart(self, -66*100)
		self.right_part = new BossPart(self, 66*100)
	end

	var flick_ttl: Int = 0

	redef fun update
	do
		if flick_ttl > 0 then flick_ttl -= 1

		# Path of the boss (down then left<->right)
		if self.y < 20000 then
			self.vx = 0
			self.vy = 100
		else if self.vx == 0 then
			self.vx = 100
			self.vy = 0
		else if self.x > scene.width - 10000 and self.vx > 0 then
			self.vx = -self.vx
		else if self.x < 10000 and self.vx < 0 then
			self.vx = -self.vx
		end

		super
	end

	redef fun shoot
	do
		# Do not shoot if not ready
		if self.vy != 0 then return

		# Try to target the player
		var target = scene.player
		if not target.exists then return

		# Next shoot: burst if no arms remains
		if left_part.exists or right_part.exists then
			shoot_ttl = 60
		else
			shoot_ttl = 20
		end

		# Shoot the player with a basic bullet
		var shoot = new Shoot(scene)
		shoot.enemy = true
		shoot.x = self.x
		shoot.y = self.bottom
		var angle = shoot.angle_to(target)
		shoot.set_velocity(angle, 500)
		scene.enemy_shoots.add(shoot)
	end

	redef fun loot do return 100

	var live: Int = 20

	redef fun hit
	do
		# Protected while an arm remains
		if left_part.exists or right_part.exists then return

		if live > 0 then
			live -= 1
			flick_ttl = 2
		else
			super
			scene.explosion(self.x, self.y, 30)
		end
	end
end

# An arm of a boss
class BossPart
	super Enemy

	# The associated boss
	var boss: Boss

	# Relative x coordonate (center to center) of the arm
	var relx: Int

	# Relative y coordonate (center to center) of the arm
	var rely: Int = 36 * 100

	var live: Int = 10

	init(boss: Boss, relx: Int)
	do
		self.boss = boss
		self.relx = relx
		super(boss.scene)
		self.width = 38 * 100
		self.height = 48 * 100

		# Alternate the shoots of the arms
		if relx > 0 then
			shoot_ttl += 300
		end
		self.x = boss.x + relx
		self.y = boss.y + rely
	end

	redef fun update
	do
		self.x = boss.x + relx
		self.y = boss.y + rely

		super

		if flick_ttl > 0 then flick_ttl -= 1
	end

	redef fun shoot
	do
		# Do not shoot if not ready
		if self.boss.vy != 0 then return

		# Next shoot
		shoot_ttl = 600

		# Shoot a missile that targets the player
		var shoot = new Missile(scene)
		shoot.enemy = true
		shoot.x = self.x
		shoot.y = self.bottom
		shoot.vy = 500
		shoot.target = scene.player
		scene.enemy_shoots.add(shoot)
	end

	var flick_ttl: Int = 0

	redef fun hit
	do
		if live > 0 then
			live -= 1
			flick_ttl = 2
		else
			super
		end
	end

	redef fun loot do return 10
end

# Whatever reward or bonus that can be picked by the player
abstract class Loot
	super Hitable

	var scene: PlayScene

	init(scene: PlayScene)
	do
		self.scene = scene
		self.width = 400
		self.height = 400
	end

	# Magnet effect: The loot will move to the target if set
	# See LootArea for details
	var target: nullable Sprite = null

	redef fun update
	do
		super

		# Out of screen ?
		if self.y > scene.height + 10000 then
			self.exists = false
		end

		var target = self.target
		if target == null then
			# Not magneted: deploy

			# Heavy fuild friction to stops the explosion
			# Loots are placed with a explosion, see `Enemy::hit'
			self.vx = self.vx*7/8
			self.vy = self.vy*7/8

			# Background scroling
			self.y += 50

		else if target.exists then
			# Magneted: rush toward the target
			var angle = self.angle_to(target)
			self.set_velocity(angle, 800)

		else
			# Magneted but dead target: reset the loot
			self.vx = 0
			self.vy = 0
			self.target = null
		end
	end
end

# Basic money loot
class Money
	super Loot

	redef fun hit_by_player(player)
	do
		self.exists = false
		player.money += 1
		if player.money > 100 then
			player.money -= 100
			player.nbshoots += 1
		end
	end
end

# Increase the number of missiles
class UpMissile
	super Loot

	redef fun hit_by_player(player)
	do
		self.exists = false
		player.nbmissiles += 1
	end
end

# A loot area is an invisible field used to implement the magnet effets of loots
# The principle is:
#  * the loot is an invisible sprite with a hitbox larger than the loot hitbox
#  * the lootbox remains centered on the loot
#  * when the player hit the lootarea, then the loot is set to target the player
#  * when the player hit the loot, then the player gains effectively the loot
class LootArea
	super Hitable

	# The associated loot
	var loot: Loot

	init(loot: Loot, radius: Int)
	do
		self.loot = loot
		self.width = radius * 2 + loot.width
		self.height = radius * 2 + loot.height
	end

	redef fun update
	do
		# position remains centered on the loot
		self.x = loot.x
		self.y = loot.y

		# No area if no loot
		if not loot.exists then self.exists = false

		# the super is useless but it is a good practice to call it
		super
	end

	redef fun hit_by_player(player)
	do
		# Kill the area
		self.exists = false

		# The loot now targets the player
		loot.target = player
	end
end

# A non interactive element of an explosion
# A real explosion is made of many Explosion object
# Use the `PlayScene::explosion` method to generate a full explosion
class Explosion
	super Sprite

	# Time before the sprite vanishes
	var ttl: Int = 10

	redef fun update
	do
		# Heavy fuild friction to stops the explosion
		self.vx = self.vx*7/8
		self.vy = self.vy*7/8

		# Background scrolling
		self.y += 50

		super

		# Vanishes?
		if ttl > 0 then
			ttl -= 1
		else
			exists = false
		end
	end
end

# A star is a non-interactive background element
# Stars are used to simulate a continuous global scroling
class Star
	super Sprite

	# The scene of the sprite
	# Is used with bound limits
	var scene: ShotScene

	init(scene: ShotScene)
	do
		self.scene = scene
		# Randomely places stars on the plane
		self.x = scene.width.rand
		self.y = scene.height.rand
		self.vy = 40.rand + 11
	end

	redef fun update
	do
		super

		# Replace the star on the top
		if self.y > scene.height then
			self.y = 200.rand * -100
			self.x = scene.width.rand
			self.vy = 40.rand + 11
		end
	end
end

class ShotScene
	super Scene

	# When a scene need to be replaced, just assign the next_scene to a non null value
	var next_scene: nullable ShotScene = null is writable

	# The width of the whole scene
	var width: Int is writable

	# The height of the whole scene
	var height: Int is writable

	init(w,h: Int)
	do
		width = w
		height = h
	end
end

# The main play state
class PlayScene
	super ShotScene

	# The player ship
	var player: Player

	# Shoots of the player
	var player_shoots = new LiveGroup[Shoot]

	# Enemy ships
	var enemies = new LiveGroup[Enemy]

	# Soots of the enemy
	var enemy_shoots = new LiveGroup[Shoot]

	# Collectible loots
	var loots = new LiveGroup[Loot]

	# Non active stuff like explosions
	var pasive_stuff = new LiveGroup[LiveObject]

	# Background stuff like stars
	var background = new LiveGroup[LiveObject]

	# All other hitable sprites
	var hitables = new LiveGroup[Hitable]

	# All sprites
	var sprites = new LiveGroup[LiveObject]

	init(w,h)
	do
		super
		self.player = new Player(self)
		player.x = self.width / 2
		player.y = self.height - 10000
		self.sprites.add(background)
		self.sprites.add(pasive_stuff)
		self.sprites.add(loots)
		self.sprites.add(player_shoots)
		self.sprites.add(enemy_shoots)
		self.sprites.add(enemies)
		self.sprites.add(self.player)
		self.sprites.add(hitables)

		for i in [0..100[ do
			background.add(new Star(self))
		end

		hitables.add(player.going_target)
	end

	# Generate an explosion
	fun explosion(x, y: Int, radius: Int)
	do
		# Project explosion parts from the given position
		# The strong friction and the short ttl of each part will achieve the effect
		for i in [0..radius[ do
			var ex = new Explosion
			ex.x = x
			ex.y = y
			ex.set_velocity(100.rand.to_f*pi/50.0, (50*radius).rand)
			ex.ttl += radius.rand
			pasive_stuff.add(ex)
		end
	end

	var enemy_remains: Int = 15
	var boss_wait_ttl: Int = 0
	var boss: nullable Boss

	redef fun update
	do
		sprites.gc
		sprites.update

		if enemy_remains == 0 then
			if boss_wait_ttl > 0 then
				boss_wait_ttl -= 1
			else if boss == null then
				boss = new Boss(self)
				enemy_remains = 15
			else if not boss.exists then
				boss = null
			end
		else if 100.rand < 1 then
			enemy_remains -= 1
			if enemy_remains == 0 then
				boss_wait_ttl = 500
			end
			var rnd = 100.rand
			var enemy: Enemy
			if rnd < 40 then
				enemy = new Enemy0(self)
			else if rnd < 60 then
				enemy = new Enemy1(self)
			else if rnd < 70 then
				enemy = new EnemyKamikaze(self)
			else if rnd < 90 then
				enemy = new Enemy2(self)
			else if rnd < 95 then
				enemy = new Enemy3(self)
			else
				enemy = new Enemy4(self)
			end
			enemy.x = (self.width - 20000).rand + 10000
			enemy.vy = 200.rand + 100
			if 10.rand < 3 then
				enemy.vx = 200.rand - 100
			end
		end

		for ps in player_shoots do
			if not ps.exists then continue
			var target: nullable Enemy = null
			var td = 100000 # big int
			for e in enemies do
				if not e.exists then continue
				if ps.overlaps(e) then
					ps.exists = false
					e.hit
				end
				var d = (e.x - ps.x).abs + (e.y - ps.y).abs
				if td > d then
					target = e
					td = d
				end
			end
			if ps isa Missile and (ps.target == null or not ps.target.exists) then
				ps.target = target
			end
		end

		for e in enemies do
			if not e.exists then continue
			if player.exists and player.overlaps(e) then
				e.hit_by_player(player)
			end
		end
		for s in enemy_shoots do
			if not s.exists then continue
			if player.exists and player.overlaps(s) then
				s.hit_by_player(player)
			end
		end
		for l in loots do
			if not l.exists then continue
			if player.exists and player.overlaps(l) then
				l.hit_by_player(player)
			end
		end
		for l in hitables do
			if not l.exists then continue
			if player.exists and player.overlaps(l) then
				l.hit_by_player(player)
			end
		end
		if not player.exists then
			if player.respawn_ttl > 0 then
				player.respawn_ttl -= 1
			else
				player.exists = true
				player.protected_ttl = 100
				self.sprites.add(self.player)
			end
		end
	end
end

###

class MenuScene
	super ShotScene

	var sprites = new LiveGroup[LiveObject]

	init(w,h)
	do
		super
		for i in [0..100[ do
			sprites.add(new Star(self))
		end
	end

	var play: Bool = false is writable
	var ttl: Int = 50

	redef fun update
	do
		sprites.update

		if not play then return
		if ttl > 0 then
			ttl -= 1
			return
		end
		next_scene = new PlayScene(width,height)
	end
end

fun headless_run
do
	srand_from 0
	print "Headless run"
	# Only run the playscene
	var scene = new PlayScene(80000,60000)
	# beefup the player
	scene.player.nbshoots = 5
	scene.player.nbmissiles = 5
	# play
	print "Play"
	var turns = 10
	if args.length > 0 then
		turns = args.first.to_i
	end
	for i in [0..turns[ do
		for j in [0..10000[ do
			scene.update
		end
		print "{i}: money={scene.player.money} enemies={scene.enemies.length} shoots={scene.player_shoots.length}"
	end
	print "Game Over"
end

headless_run
