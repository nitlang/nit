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

# Portable client
module client

import mnit
import mnit::opengles1
import performance_analysis

import game
import common

import assets
import context

# A position within the screen
class ScreenPos
	super Point[Float]

	# Convert to a game logic `Pos` by applying camera transformation
	fun to_logic(camera: Camera): Pos do
		return new Pos(x/camera.basic_zoom + camera.dx, y/camera.basic_zoom + camera.dy)
	end
end

redef class Pos
	# Convert to a `ScreenPos` by applying camera transformation
	fun to_screen(camera: Camera): ScreenPos do
		return new ScreenPos((x - camera.dx) * camera.basic_zoom, (y - camera.dy) * camera.basic_zoom)
	end
end

# Camera managing the screen view on the world
class Camera
	# Offset of the top left corner of the screen, X part
	var dx = 0.0

	# Offset of the top left corner of the screen, Y part
	var dy = 0.0

	# Basic zoom, the distance between 2 features
	#
	# In the world logic, the distance is of 1.
	# This value depends on the size of the graphical assets.
	#
	# TODO make it a full zoom by scaling images too, if needed.
	var basic_zoom = 32.0

	# Center of the `display` as world `Pos`
	fun center(display: Display): Pos
	do
		return (new ScreenPos(display.width.to_f * 0.5, display.height.to_f * 0.5)).to_logic(self)
	end

	# Center the `display` on the world `pos`
	fun center_on(display: Display, pos: Pos)
	do
		self.dx = pos.x - display.width.to_f * 0.5 / basic_zoom
		self.dy = pos.y - display.height.to_f * 0.5 / basic_zoom
	end
end

redef class App

	# Collection of assets
	var assets = new Assets is lazy

	redef fun on_create
	do
		super
		maximum_fps = 60
		assets.assign_images_to_story context.game.story
	end

	# Camera managing transformation between world and screen positions
	var camera = new Camera

	# Context of the game, either local or remote
	var context: GameContext is lazy do

		# Server info
		var address = null
		var port = default_listening_port

		if args.not_empty then
			# Use first argument as the server address
			address = args[0]
			if args.length > 1 then port = args[1].to_i
		else
			print "Looking for a server..."

			var s = new UDPSocket
			s.enable_broadcast = true
			s.blocking = false
			s.broadcast(discovery_port, "Server? {handshake_app_name}")
			nanosleep(0, 100_000_000)

			var ptr = new Ref[nullable SocketAddress](null)
			var resp = s.recv_from(1024, ptr)
			var src = ptr.item

			if not resp.is_empty then
				var words = resp.split(" ")
				if words.length == 3 and words[0] == "Server!" and words[1] == handshake_app_name and words[2].is_numeric then
					address = src.address
					port = words[2].to_i
				end
			end
		end

		if address == null then
			print "Launching a local server"

			# No command line
			return new LocalServerContext
		else
			print "Connecting to:{address}:{port}"
			maximum_fps = 0

			# Args are: tinks server_address {port}
			#var address = "riph" # args[0]
			#var port = sys.default_listening_port
			if args.length > 1 then port = args[1].to_i

			# Setup connection config
			var server_config = new RemoteServerConfig(address, port)
			var server = new RemoteServer(server_config)

			# Connect then complete handshake
			assert server.connect else print_error "Connection to server failed with {server.socket.last_error or else "none"}"
			assert server.handshake else print_error "Handshake with server failed"

			# Download and setup remote game
			var context = new RemoteGameContext(server)
			context.setup

			return context
		end
	end

	# `Tank` of the local player, if any
	fun local_tank: nullable Tank
	do
		# FIXME use a ? to one line this
		var local_player = context.local_player
		if local_player == null then return null
		return local_player.tank
	end

	# Square of the minimum distance from the tank for an object to be "far"
	#
	# This value influences which sounds are heard,
	# the strength of vibrations and
	# whether an arrow points to a far unit
	private var far_dist2 = 2000.0

	# Tank tracks tracks on the ground
	#
	# TODO use particles or at least optimize drawing
	var tracks = new List[Couple[Pos, Float]]

	redef fun frame_core(display)
	do
		var clock = new Clock

		var turn = context.do_turn
		sys.perfs["do_turn"].add clock.lapse

		# Draw

		# Update camera
		if down_keys.has("left") then camera.dx -= 1.0
		if down_keys.has("right") then camera.dx += 1.0
		if down_keys.has("up") then camera.dy -= 1.0
		if down_keys.has("down") then camera.dy += 1.0

		var local_tank = local_tank
		if local_tank != null then
			var tank_speed = local_tank.direction_forwards*local_tank.rule.max_speed
			tank_speed = tank_speed.min(0.5).max(-0.5)

			var prop_pos = local_tank.pos + local_tank.heading.to_vector(tank_speed * 16.0)
			var old_pos = camera.center(display)
			var half = old_pos.lerp(prop_pos, 0.02)

			camera.center_on(display, new Pos(half.x, half.y))
		end

		# Grass
		display.clear(0.0, 0.45, 0.0)

		# Past tank tracks
		for track in tracks do
			var pos = track.first.to_screen(camera)
			display.blit_rotated(assets.drawing.track, pos.x, pos.y, track.second)
		end

		# Past blast sites
		for blast in context.game.world.blast_sites do
			var pos = blast.to_screen(camera)
			display.blit_centered(assets.drawing.blast, pos.x, pos.y)
		end

		# Terrain features
		var tl = (new ScreenPos(0.0, 0.0)).to_logic(camera)
		var br = (new ScreenPos(display.width.to_f, display.height.to_f)).to_logic(camera)
		for x in [tl.x.floor.to_i .. br.x.ceil.to_i] do
			for y in [tl.y.floor.to_i .. br.y.ceil.to_i] do
				var feature = context.game.world[x, y]
				if feature != null then
					var pos = feature.pos.to_screen(camera)
					var image = feature.rule.images[feature.image_index]
					display.blit_rotated(image, pos.x, pos.y, feature.angle)
				end
			end
		end

		# Tanks
		for tank in context.game.tanks do
			# Add random tracks
			if (tank.direction_heading != 0.0 and 40.rand == 0) or
			   (tank.direction_forwards != 0.0 and 100.rand == 0) then

				tracks.add new Couple[Pos, Float](tank.pos, tank.heading)
				if tracks.length > 1000 then tracks.shift
			end

			# Get the player stencil
			var player = tank.player
			var stencil = null
			if player != null then stencil = assets.drawing.stencils[player.stencil_index]

			if camera.center(display).dist2(tank.pos) > far_dist2 then
				var hw = (display.width/2).to_f
				var hh = (display.height/2).to_f

				var angle = camera.center(display).atan2(tank.pos)
				var x = hw + angle.cos * (hw-128.0)
				var y = hh + angle.sin * (hh-128.0)

				var screen_pos = new ScreenPos(x, y)
				display.blit_rotated(assets.drawing.arrow, screen_pos.x, screen_pos.y, angle)
				if stencil != null then display.blit_rotated(stencil, screen_pos.x, screen_pos.y, angle)
				continue
			end

			var screen_pos = tank.pos.to_screen(camera)

			var damage = tank.rule.max_health - tank.health
			damage = damage.max(0).min(tank.rule.base_images.length)

			var base_image = tank.rule.base_images[damage]
			display.blit_rotated(base_image, screen_pos.x, screen_pos.y, tank.heading)
			if stencil != null then display.blit_rotated(stencil, screen_pos.x, screen_pos.y, tank.heading)
			display.blit_rotated(tank.rule.turret_image, screen_pos.x, screen_pos.y, tank.turret.heading)

			if debug then
				var corners = tank.corners_at(new Couple[Pos, Float](tank.pos, tank.heading))
				for c in corners do
					var p = c.to_screen(camera)
					display.blit_centered(assets.drawing.red_dot, p.x, p.y)
				end
			end
		end

		# Events
		for event in turn.events do event.client_react(display, turn)

		# Gather and show some performance stats!
		sys.perfs["draw"].add clock.lapse
		if context.game.tick % 300 == 5 then print sys.perfs
	end

	# Keys currently down
	#
	# TODO find a nice API and move up to mnit/gamnit
	var down_keys = new HashSet[String]

	redef fun input(ie)
	do
		var local_tank = local_tank
		var local_player = context.local_player

		# Quit?
		if ie isa QuitEvent or
		  (ie isa KeyEvent and ie.name == "escape") then

			quit = true
			return true
		end

		# Spawn a new tank?
		if local_tank == null and local_player != null then
			if (ie isa KeyEvent and ie.name == "space") or
			   (ie isa PointerEvent and ie.depressed) then

				local_player.orders.add new SpawnTankOrder(local_player)
				return true
			end
		end

		if ie isa KeyEvent then

			# Update `down_keys`
			var name = ie.name
			if ie.is_down then
				down_keys.add name
			else if down_keys.has(name) then
				down_keys.remove name
			end

			# wasd to move tank
			var direction_change = ["w", "a", "s", "d"].has(ie.name)
			if direction_change and local_tank != null and local_player != null then
				var forward = down_keys.has("w")
				var backward = down_keys.has("s")
				var left = down_keys.has("a")
				var right = down_keys.has("d")

				# Cancel contradictory commands
				if forward and backward then
					forward = false
					backward = false
				end

				if left and right then
					left = false
					right = false
				end

				# Set movement and direction
				var move = 0.0
				if forward then
					move = 0.5
				else if backward then move = -0.5

				var ori = 0.0
				if left then
					ori = -local_tank.rule.max_direction/2.0
				else if right then ori = local_tank.rule.max_direction/2.0

				# Activate to invert the orientation on reverse, (for at @R4p4Ss)
				#if backward then ori = -ori

				# Bonus when only moving or only turning
				if not forward and not backward then ori *= 2.0
				if not left and not right then move *= 2.0

				# Give order
				local_player.orders.add new TankDirectionOrder(local_tank, ori, move)
				return true
			end
		end

		# On click (or tap), aim and fire
		if ie isa PointerEvent then

			if ie.pressed and local_tank != null and local_player != null then
				var target = (new ScreenPos(ie.x, ie.y)).to_logic(camera)
				local_player.orders.add new AimAndFireOrder(local_tank, target)
				return true
			end
		end

		return false
	end
end

redef class TEvent
	fun client_react(display: Display, turn: TTurn) do end
end

redef class ExplosionEvent
	redef fun client_react(display, turn)
	do
		var pos = pos.to_screen(app.camera)
		display.blit_centered(app.assets.drawing.explosion, pos.x, pos.y)
	end
end

redef class OpenFireEvent
	redef fun client_react(display, turn)
	do
		var screen_pos = tank.pos.to_screen(app.camera)
		display.blit_rotated(app.assets.drawing.turret_firing, screen_pos.x, screen_pos.y, tank.turret.heading)

		if tank.pos.dist2(app.camera.center(display)) < app.far_dist2 then
			# Within earshot
			app.assets.turret_fire.play
		end
	end
end

redef class TurretReadyEvent
	redef fun client_react(display, turn)
	do
		if tank.pos.dist2(app.camera.center(display)) < app.far_dist2 then
			# Within earshot
			app.assets.turret_ready.play
		end
	end
end
