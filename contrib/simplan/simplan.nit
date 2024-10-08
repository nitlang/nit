# This file is part of NIT ( https://nitlanguage.org ).
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

# A simple planning problem solver using A* for a robot that delivers parcels.
#
# A map is made of `Location`s (with cartesian coordinates) connected with `Road`s.
# Some parcels and a robot are placed on the map.
#
# The goal of the robot is to plan the delivery of the parcels to their destination in the most
# efficient way knowing that:
#
# * the robot has a given speed to drive
# * the loading and unloading of parcels take time
# * the capacity of the robot is limited
module simplan

import ai::search

private import simplan_lexer
private import simplan_parser

# The description of the planing problem to solve
class PlanProblem
	super SearchProblem[State, Action]

	# Some parameters of the problem

	# The speed on the road.
	# Used for the action `Drive`
	var speed = 1.0

	# Cost of loading a parcel in a robot
	# Used for the action `Load`
	var duration_loading = 30.0

	# Cost of unloading a parcel in a robot
	# Used for the action `Unload`
	var duration_unloading = 30.0

	# How many parcels can a robot transport at the same time?
	var capacity = 2

	# The name of the robot
	var robot_name = "r0"

	# Locations on the map, by their names
	var locations = new HashMap[String, Location]

	# All the parcels, by their `id`
	var parcels = new Array[Parcel]

	# All the parcels, by their names
	var parcel_by_name = new HashMap[String, Parcel]

	# +infinite, used to initialize some floats with the maximum value.
	private var infinite: Float = 1.0 / 0.0

	# The starting state
	redef var initial_state: State is noinit

	# Parse and initialize a problem from description `text`
	fun parse(text: String)
	do
		var l = new Lexer_simplan(text)
		var p = new Parser_simplan
		p.tokens.add_all l.lex
		var n = p.parse
		if n isa NError then
			print n.message
			exit 1
		end
		n = n.children.first.as(not null).children.first.as(not null)
		if n isa Nplan then
			print "Error: expected a problem, got a plan."
			exit 1
		end
		assert n isa Nproblem

		# Load all locations
		for n2 in n.n_locations.n_list.as(not null).children do
			var e = new Location(locations.length, n2.n_name.text, n2.n_x.text.to_f, n2.n_y.text.to_f)
			assert not locations.has_key(e.name)
			locations[e.name] = e
		end
		print "# {locations.length} locations"

		# Load all roads
		var nbr = 0
		for n2 in n.n_roads.n_list.as(not null).children do
			var o = locations.get_or_null(n2.n_orig.text)
			var d = locations.get_or_null(n2.n_dest.text)
			assert o != null and d != null
			var r = new Road(o,d)
			o.roads.add(r)
			r = new Road(d,o)
			d.roads.add(r)
			nbr += 2
		end
		print "# {nbr} roads"

		# Compute all road durations
		for e in locations.values do
			e.durations = new Array[Float].filled_with(infinite, locations.length)
			e.durations[e.id] = 0.0
			for r in e.roads do
				e.durations[r.dest.id] = r.distance / speed
			end
		end

		# Close the duration relation between each pair of locations
		for k in locations.values do
			for i in locations.values do
				for j in locations.values do
					var d = i.durations[k.id] + k.durations[j.id]
					if i.durations[j.id] > d then
						i.durations[j.id] = d
					end
				end
			end
		end

		# Load the robot
		var robot = null
		for n2 in n.n_robots.n_list.as(not null).children do
			var name = n2.n_name.text
			robot = locations.get_or_null(n2.n_emplacement.text)
			assert name == robot_name and robot != null
		end
		assert robot != null
		print "# 1 robot"

		# Load the parcels
		var parcel_locations = new Array[nullable Location]
		for n2 in n.n_parcels.n_list.as(not null).children do
			var name = n2.n_name.text
			var e = locations.get_or_null(n2.n_emplacement.text)
			assert e != null
			var parcel = new Parcel(parcels.length, name, e, e)
			parcels.add parcel
			parcel_locations.add e
			parcel_by_name[name] = parcel

		end
		print "# {parcels.length} parcels"

		# Load the goal of parcels
		for n2 in n.n_goal.n_list.as(not null).children do
			var parcel = parcel_by_name.get_or_null(n2.n_name.text)
			var e = locations.get_or_null(n2.n_emplacement.text)
			assert parcel != null and e != null
			parcel.goal = e
		end
		print "# 1 goal"

		print "# size of the problem: {locations.length.to_f.pow(parcels.length.to_f+1.0).to_precision(0)}"

		initial_state = new State(self, robot, parcel_locations, 0)
	end

	# Parse a plan for a given problem
	fun parse_plan(text: String): Plan
	do
		var l = new Lexer_simplan(text)
		var p = new Parser_simplan
		p.tokens.add_all l.lex
		var n = p.parse
		if n isa NError then
			print n.message
			exit 1
		end
		n = n.children.first.as(not null).children.first.as(not null)
		if n isa Nproblem then
			print "Error: expected a plan, got a problem."
			exit 1
		end
		assert n isa Nplan

		var res = new Plan(self)
		var e = initial_state
		var cost = 0.0
		for n2 in n.n_actions.as(not null).children do
			if n2 isa Naction_load then
				var parcel = parcel_by_name.get_or_null(n2.n_parcel.text)
				assert parcel != null
				var a = new Load(self, parcel)
				res.actions.add(a)
				e = a.trans(e)
				cost += a.cost
			else if n2 isa Naction_unload then
				var parcel = parcel_by_name.get_or_null(n2.n_parcel.text)
				assert parcel != null
				var a = new Unload(self, parcel)
				res.actions.add(a)
				e = a.trans(e)
				cost += a.cost
			else if n2 isa Naction_drive then
				var o = locations.get_or_null(n2.n_orig.text)
				var d = locations.get_or_null(n2.n_dest.text)
				assert o != null and d != null
				var road: nullable Road = null
				for r in o.roads do if r.dest == d then
					road = r
					break
				end
				assert road != null
				var a = new Drive(self, road)
				res.actions.add(a)
				e = a.trans(e)
				cost += a.cost
			else abort
		end
		print "# loaded plan in {res.actions.length} steps; cost = {cost}"
		return res
	end

	redef fun actions(state)
	do
		var res = new Array[Action]

		# Driving?
		for road in state.robot.roads do
			res.add(new Drive(self, road))
		end

		# Loading?
		for i in [0..state.parcels.length[ do
			if state.parcels[i] == state.robot and state.nb_parcels < self.capacity and self.parcels[i].goal != state.robot then
				res.add(new Load(self, parcels[i]))
			end
		end

		# Unloading?
		for i in [0..state.parcels.length[ do
			# Unloading is always a valid action,
			# even if dropping a parcel outside of its goal is unlikely (but possible)
			# to be a part of an optimal plan.
			if state.parcels[i] == null then #and self.parcels[i].goal == state.robot then
				res.add(new Unload(self, parcels[i]))
			end
		end

		return res
	end

	redef fun apply_action(state, action) do return action.trans(state)

	redef fun cost(state1, action, state2) do return action.cost

	redef fun is_goal(state)
	do
		for i in [0..parcels.length[ do
			if state.parcels[i] != parcels[i].goal then return false
		end
		return true
	end

	redef fun heuristic(state)
	do
		# Combination (maximum) of two heuristic:
		# Heuristic 1: maximum driving time to take and deliver a single parcel
		var max_for_one = 0.0
		# Heuristic 2: driving time to take the nearest parcel, then deliver all parcels
		var total_deliver_drive = 0.0
		var min_take_one = infinite
		# Total loading/unloading time (incompressible cost, added to both heuristics)
		var total_load = 0.0

		for i in [0..parcels.length[ do
			# The parcel location
			var c = state.parcels[i]

			# Its goal location
			var b = parcels[i].goal

			# Parcel is fine, nothing to do.
			if c == b then continue

			# Driving time to take and deliver this parcel
			var t = 0.0

			# Current position of the parcel (somewhere or in the robot)
			var current: Location

			if c == null then
				# The parcel is in the robot
				current = state.robot
				min_take_one = 0.0
			else
				# The parcel is somewhere
				current = c
				# So go get it.
				var tt = state.robot.duration(c)
				total_load += duration_loading

				t += tt
				if tt < min_take_one then min_take_one = tt
			end

			# Drive and unload the parcel
			var td = current.duration(b)
			total_load += duration_unloading

			t += td
			if t > max_for_one then max_for_one = t
			total_deliver_drive += td
		end

		# Since one robot can transport several parcels at the same time,
		# the best optimistic scenario is to deliver at full capacity
		if min_take_one == infinite then min_take_one = 0.0
		var res = min_take_one + total_deliver_drive / capacity.to_f

		# Get best of both heuristics
		if res < max_for_one then res = max_for_one

		# Add incompressible (un)loading costs
		res += total_load

		return res
	end

	redef fun make_memory
	do
		var res = super
		res.add new RBTreeMap[State, SearchNode[State, Action]]
		res.add new BinTreeMap[State, SearchNode[State, Action]]
		return res
	end
end

# A node on the map
class Location
	# Indexed identifier, starting at 0
	# Used to access locations in arrays.
	var id: Int

	# The name of the location, from the problem description
	var name: String

	# The x-coordinate of the location
	var x: Float

	# The y-coordinate of the location
	var y: Float

	# All roads from this location
	var roads = new Array[Road]

	# Drive duration to any other location on the map
	fun duration(dest: Location): Float
	do
		return durations[dest.id]
	end

	private var durations = new Array[Float]

	redef fun to_s do return "{id}({x}, {y})"
end

# A directed road segment between two locations
class Road
	# The origin
	var orig: Location

	# The destination
	var dest: Location

	# The distance according to the coordinates of the locations.
	var distance: Float is noautoinit

	init
	do
		var dx = orig.x-dest.x
		var dy = orig.y-dest.y
		distance = (dx*dx + dy*dy).sqrt
	end
end

# A parcel to move
class Parcel
	# Indexed identifier, starting by 0
	# Used to access parcels in arrays.
	var id: Int
	# The name of the parcel according to the problem description
	# Used for output
	var name: String
	# The starting location
	var start: Location
	# The goal location
	var goal: Location
end


# A plan on a problem
class Plan
	# The original problem
	var problem: PlanProblem

	# The sequence of actions in the plan
	var actions = new Array[Action]

	# Check and write the plan
	fun dump(verbose: Bool)
	do
		var e = problem.initial_state
		print "SimplePlan \{"
		var cost = 0.0
		if verbose then print "#{e} {cost}"
		for a in actions do
			print "{a}"
			e = a.trans(e)
			cost += a.cost
			if verbose then
				print "#{e} {cost}"
				if a isa Drive then
					print "#{a.road.orig} -- {a.road.dest}: {a.road.distance}"
				end
			end

		end
		print "\}"
		if not problem.is_goal(e) then
			print "# /!\\ Goal Failed"
		end
		print "# plan in {actions.length} steps; cost={cost}\n"
	end
end

# A primitive movement
abstract class Action
	# The unitary cost of the action
	fun cost: Float is abstract

	# The state resulting to the application of the action
	fun trans(e: State): State is abstract

	# The original problem
	var problem: PlanProblem
end

# A loading of a parcel
class Load
	super Action

	# The loaded parcel
	var parcel: Parcel

	redef fun cost do return problem.duration_loading

	redef fun to_s do return "Load({problem.robot_name},{parcel.name});"

	redef fun trans(e)
	do
		var res = e.clone
		assert res.parcels[parcel.id] == res.robot
		res.parcels = res.parcels.clone
		res.parcels[parcel.id] = null
		assert res.nb_parcels < problem.capacity
		res.nb_parcels += 1
		return res
	end
end

# A unloading of a parcel
class Unload
	super Action

	# The unloaded parcel
	var parcel: Parcel

	redef fun cost do return problem.duration_unloading

	redef fun to_s do return "Unload({problem.robot_name},{parcel.name});"

	redef fun trans(e)
	do
		var res = e.clone
		assert res.parcels[parcel.id] == null
		res.parcels = res.parcels.clone
		res.parcels[parcel.id] = res.robot
		assert res.nb_parcels > 0
		res.nb_parcels -= 1
		return res
	end
end

# A road driving
class Drive
	super Action

	# The road drove on
	var road: Road

	redef fun cost do return road.distance / problem.speed

	redef fun to_s do return "Drive({problem.robot_name},{road.orig.name},{road.dest.name});"

	redef fun trans(e)
	do
		var res = e.clone
		assert res.robot == road.orig
		res.robot = road.dest
		return res
	end
end

# Where each robot and parcel are?
class State
	super Comparable
	redef type OTHER: State

	# The original problem
	var problem: PlanProblem

	# Where is the robot
	var robot: Location

	# Where each parcel is
	# `null` if the parcel is loaded
	var parcels: Array[nullable Location]

	# Number of loaded parcels
	# Must be consistent with `parcels`
	var nb_parcels: Int

	# Clone of the state
	# Used by `Action::trans`
	#
	# Warning: the `parcels` array is not cloned for efficiency.
	# You need to clone it if you mutate it
	private fun clone: State
	do
		var res = new State(problem, robot, parcels, nb_parcels)
		return res
	end

	redef fun hash
	do
		var res = hash_cache
		if res != 0 then return res
		res = robot.hash * 23 + parcels.hash * 7
		hash_cache = res
		return res
	end

	private var hash_cache = 0

	redef fun ==(o)
	do
		if not o isa State then return false
		return robot == o.robot and parcels == o.parcels
	end

	redef fun <(o) do return (self <=> o) < 0

	redef fun <=>(o) do
		var res = robot.id <=> o.robot.id
		if res != 0 then return res
		for i in [0..parcels.length[ do
			var c = parcels[i]
			var oc = o.parcels[i]
			if c == oc then continue
			if c == null then return -1
			if oc == null then return 1
			res = c.id <=> oc.id
			if res != 0 then return res
		end
		return 0
	end

	redef fun to_s
	do
		var res = "{robot.name}"
		for c in parcels do
			res += ","
			if c != null then
				res += c.name
			end
		end
		return res
	end
end

# --configs
var configs = false
if not args.is_empty and args.first == "--configs" then
	configs = true
	args.shift
end

# Usage
if args.is_empty then
	print "Usage: plan [--configs] problem.txt [plan.txt]\nSearch, or apply, a plan to a problem."
	exit 0
end

var problem = new PlanProblem

# Load
var problem_text = args.first.to_path.read_all
problem.parse(problem_text)

# Apply a plan
if args.length == 2 then
	var plan_text = args[1].to_path.read_all
	var plan = problem.parse_plan(plan_text)
	plan.dump(false)
	exit 0
end

# run --configs?
if configs then
	problem.run_configs(100000)
	exit 0
end

# Solve the plan
var solver = problem.astar
solver.memorize = true
var res = solver.run
if res == null then
	print "No plan found :("
	return
end
var plan = new Plan(problem)
plan.actions.add_all res.plan
plan.dump(false)
print "# solver infos: {solver}"
