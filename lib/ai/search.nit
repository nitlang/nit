# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Basic framework for search problems and solver.
#
# The module provides a simple abstract class `SearchProblem[S,A]` to be specialized for a specific problem.
#
# The concrete class `SearchSolver` is used to configure, query, and run a solver for a given problem.
#
# For an example, see the `puzzle.nit` program in the `examples` subdirectory.
module search

import realtime
import trees

# Abstract search problem over immutable states (`S`) and actions (`A`).
#
# This class serves to model problems of planing and path-finding.
# A state, `S`, is a point in the search problem and fully models a given state of the world.
# An action, `A`, is an available mean of transition between two states.
#
# This abstract class is generic made to work with any kind of states and actions.
# Therefore, specific subclasses must be developed to implement the required services:
#
# * `initial_state`
# * `actions`
# * `apply_action`
# * `is_goal`
#
# Note that the implemented methods should not temper with the parameters since it is expected
# that they remain unmodified.
#
#
# # Basic search
#
# These tree method are enough to trigger a basic search.
#
# The methods `breadth_first` and `depth_first` return pre-configured solvers for, respectively,
# a breadth-first search, a depth-first search.
#
#
# # Advanced search
#
# The `cost` method can be implemented to represent the cost of a single transition.
# By default, the cost is 1.
#
# The `heuristic` method can be implemented to represent a lower-bound estimation of the remaining
# cost to reach a goal state.
# By default, the heuristic is 0.
#
# If one of these (or both) methods are implemented, the `astar` method will return a pre-configured
# solver for a A* search.
#
# More configuration and optimization on the search can to be done in the `SearchSolver` class.
interface SearchProblem[S: Object, A]
	# The starting state for the problem
	fun initial_state: S is abstract

	# The available applicable actions for a given state.
	# While there is a potential large number of distinct states and actions, there should be only
	# a small number of possible action from a specific state (a small, or at least finite, branching factor).
	fun actions(state: S): nullable SequenceRead[A] is abstract

	# The new state when applying a given action
	#
	# The returned state can be:
	# * a completely new state,
	# * an existing state,
	# * a new state but equals to an existing state
	#   in this case, ensure that the `==` and `hash` method
	#   are correctly implemented.
	#
	# Remember, this method should not modify its parameters.
	#
	# REQUIRE: `actions(state).has(action)`
	fun apply_action(state:S, action:A): S is abstract

	# Is the state a goal state?
	# Once a goal state is found, the solver is automatically stopped.
	# A problem can have 0, one or more goals if it makes sense
	# but solver must be used accordingly.
	# Default: no goals
	fun is_goal(state:S): Bool do return false

	# The cost for `action` from `old_state` to `new_state`
	# REQUIRE: `apply_action(old_state, action) == new_state`
	# Default: `1`.
	# Note that having a 0 or negative value can make some search
	# algorithms fail, or not terminate.
	fun cost(state:S, action:A, state2: S): Float do return 1.0

	# An heuristic of the estimated `cost` going from `state` to a goal state.
	#
	# Is is expected that the heuristic is *admissible*, it means its is an
	# optimistic estimation and never an over-estimate, thus is cannot be
	# higher than the lowest possible remaining cost.
	# See `SearchSolver::do_revisit` for details.
	#
	# Default: `0`.
	fun heuristic(state: S): Float do return 0.0

	# return a new breadth-first solver
	fun breadth_first: SearchSolver[S, A]
	do
		var todo = (new Array[SearchNode[S, A]]).as_fifo
		var sol = new SearchSolver[S, A](self, todo)
		return sol
	end

	# return a new depth-first solver
	fun depth_first: SearchSolver[S, A]
	do
		var todo = (new List[SearchNode[S, A]]).as_lifo
		var sol = new SearchSolver[S, A](self, todo)
		return sol
	end

	# return a new best-first solver
	#
	# notes:
	# * if `heuristic` is not defined, this is basically a Dijkstra search.
	# * if `cost` in not defined either, this is basically a breadth-first search.
	fun astar: SearchSolver[S, A]
	do
		var cpt = new NodeComparator[S, A]
		var todo = new MinHeap[SearchNode[S, A]](cpt)
		var sol = new SearchSolver[S, A](self, todo)
		return sol
	end

	# Create the initial node in the search-tree.
	# Used internally by the solvers but made public for those who want to replay a plan.
	fun initial_node: SearchNode[S, A]
	do
		var res = new SearchNode[S,A](self, initial_state, null, null, 0.0, 0)
		res.compute_heuristic
		return res
	end

	# Negligible quantity for float comparisons
	# Because of float imprecision, two really near float values should be considered equals.
	# However, the specific epsilon value could be specific to the problem.
	#
	# The epsilon value is used for cost comparisons.
	#
	# Default: 1E-9
	fun epsilon: Float do return 0.000000001

	# Run and evaluate solvers with multiple configuration.
	# This method can be used to evaluate which configuration to choose by default for a given problem.
	#
	# `steps` is the maximum number of steps a giver configuration can run.
	fun run_configs(steps: Int)
	do
		var s

		var c = 0
		loop
			if astar.run_config(steps, c, "A*") then break
			c += 1
		end
	end

	# Various Map implementations of memory.
	# In order to try more configurations with `run_config`, this method
	# is called to provide alternative implementation.
	#
	# For instance, a subclass can redefine this method and extends the result with an additional `RBTreeMap`.
	# Note: because the true nature of the sates `S` is left to the user, some
	# specific Map implementation could be more efficient than a HashMop.
	#
	# Default: A `HashMap`
	fun make_memory: Array[Map[S, SearchNode[S, A]]]
	do
		var res = new Array[Map[S, SearchNode[S, A]]]
		res.add new HashMap[S, SearchNode[S, A]]
		return res
	end
end

# A running solver for a given problem, to configure and control.
#
# For a given problem, a lot of variation of search algorithms can be made.
# Thus this class permit the user to control the parameters of the search algorithm.
#
# Note that this class is not meant to be specialized, and usually not instantiated directly.
#
#
# # Basic run and result.
#
# 1. Instantiate it with the method `breadth_first`, `depth_first`, or `astar` from `SearchProblem`.
# 2. Apply the method `run`, that will search and return a solution.
# 3. Retrieve information from the solution.
#
# ~~~~
# var p: SearchProblem = new MyProblem
# var res = p.astar.run
# if res != null then print "Found plan with {res.depth} actions, that cost {res.cost}: {res.plan.join(", ")}"
# ~~~~
#
#
# # Step-by-step runs and multiple runs
#
# The `run_steps` method (see also `steps`, and `steps_limit`) can be used to run only a maximum number of steps.
# This method can be used as a *co-routine* and run them periodically for a small amount of time.
#
# `run` and `run_steps` return the next solution.
# A subsequent call to `run` returns the following solution and so on.
#
# When there is no more solutions available, `is_running` become false.
#
#
# # Search-trees
#
# Internally, solvers use a search-tree where nodes are labeled with states, and edges are labeled with actions.
# See `SearchNode` for details.
#
# The `run` method return a `SearchNode` that can be used to retrieve a lot of useful information,
# like the full `path` or the `plan`.
#
#
# # Configuration
#
# The solver provide some *knobs* to control how the search-tree is visited.
#
# * `memorize` (see also `memorize_late`)
# * `do_revisit` (see also `revisits`)
# * `depth_limit` (see also `iterative_deepening` and `depth_limit_reached`)
class SearchSolver[S: Object, A]
	# The problem currently solved
	var problem: SearchProblem[S, A]

	# The currently open nodes to process.
	# They are the open nodes.
	#
	# It is the nature of the queue that control how the solver works.
	# However, the methods `SearchProblem::breadth_first`, `SearchProblem::depth_first`,
	# and `SearchProblem::astar` takes care of its correct initialization.
	private var todo: Queue[SearchNode[S, A]]

	# Is the solver still running?
	# A running solver has not yet exhausted all the possible solutions.
	var is_running: Bool = true

	# Does the solver need to memorize visited states?
	# When activated, there is an increased memory consumption since
	# all visited states must be kept in memory,
	# However, there is real a gain, since visited nodes are not
	# revisited (unless needed by `do_revisit`)
	#
	# Default: `true`
	#
	# Note: If the graph of states has circuits, then a memory-less search may not terminate.
	var memorize: Bool = true is writable

	# Use memory only on visited (closed) state.
	# Less memory operations, but two big drawbacks:
	# * duplicated nodes can fill the `todo` queue (and the memory)
	# * duplicated nodes require more invocation of `SearchProblem::heuristic`
	#
	# Note: if `memorize` is false, then this has no effect.
	#
	# Default: `false`
	var memorize_late: Bool = false is writable

	# Storage of nodes when `memorize` is activated
	# Each state is associated with a node.
	# This permit:
	#   * to avoid to revisit visited nodes (see `do_revisit`)
	#   * to avoid to reinvoke `heuristic` on known states (unless `memorize_late` is set)
	private var memory: Map[S, SearchNode[S, A]] = new HashMap[S, SearchNode[S, A]]

	# Total number of time an already memorized node is seen again.
	# If `memorize_late` is set, then only visited nodes are counted.
	# Otherwise, nodes in the todo-list are also considered.
	var memorized = 0

	# Revisit states when a better path to them is found.
	# Such revisits generally triggers more revisits because they yield
	# better path to their neighbors.
	#
	# If `false`, visited states are never revisited.
	#
	# With astar and an admissible heuristic, no visited node should be revisited.
	# If the heuristic is not admissible, one may consider set this to `true`.
	#
	# Obviously, if `memorize` is false, then the value has no specific effect
	# since all states are considered unvisited.
	#
	# Default: `false`.
	#
	# See also `revisits` and `SearchNode::revisits`.
	var do_revisit: Bool = false is writable

	# Total number of states (potentially) revisited.
	#
	# It is the number of time that a better path to a visited state is found.
	# With astar and a really admissible heuristic, this number should stay 0.
	# So check this value if you are not sure of the heuristic.
	#
	# Note that states are effectively revisited if `do_revisit` is activated.
	var revisits = 0

	# The solution found by the last `run`.
	#
	# ensure `solution != null implies problem.is_goal(solution.state)`
	var solution: nullable SearchNode[S,A] = null

	# Nearest solution found (up to date).
	# The nearest solution is the one with the smallest heuristic value.
	# The cost is not considered.
	var nearest_solution: nullable SearchNode[S,A] = null

	# Limit in the depth search.
	#
	# States found above this limit are not considered.
	#
	# Use 0 for no limit.
	# Default: 0
	# See also: `iterative_deepening`
	var depth_limit: Int = 0 is writable

	# How much time a `depth_limit` was reached?
	#
	# This can be used to query if some solutions may have been
	# ignored because of a `depth_limit`.
	#
	# This is also used automatically if `iterative_deepening` is activated.
	var depth_limit_reached: Int = 0

	# Increase amount for an iterative deepening search.
	# It =0, then the iterative deepening search is disabled.
	# If >0, then `depth_limit` is automatically increased when the todo
	# queue is empty but the `depth_limit` was reached in the previous iteration.
	# Default: 0
	var iterative_deepening: Int = 0

	# The total steps executed since the beginning
	# A step is the visit of a node in the `todo`-list
	var steps: Int = 0

	# The total number of nodes created
	var nodes = 0

	# Limit in the number of steps for a `run`.
	#
	# One can modify this value then `run` or just call `run_steps`.
	#
	# Use 0 for no limit.
	# Default: 0
	var steps_limit: Int = 0 is writable

	# Total number of neighbors considered.
	var neighbors = 0

	# The average number of neighbors by nodes.
	fun branching_factor: Float do return neighbors.to_f / steps.to_f

	# Update `steps_limit` then just run some additional steps
	# Return the best solution so far (if any)
	fun run_steps(steps: Int): nullable SearchNode[S,A]
	do
		assert steps > 0
		self.steps_limit = self.steps + steps
		return run
	end

	# Reset the search from the initial state.
	# Is used at the beginning and with `iterative_deepening`.
	private fun start
	do
		assert todo.is_empty
		depth_limit_reached = 0
		var initial_node = problem.initial_node
		if memorize and not memorize_late then memory[initial_node.state] = initial_node
		initial_node.id = nodes
		nodes += 1
		todo.add initial_node
	end

	# Run the solver and return the next solution (if any)
	# Return null is one of these is true:
	# * `steps_limit` is reached
	# * the `todo` queue is empty (eg. no reachable solution)
	fun run: nullable SearchNode[S,A]
	do
		if steps == 0 then start

		var nearest = nearest_solution
		loop
			# Enough work
			if steps_limit > 0 and steps >= steps_limit then break

			#print "todo={todo.length}"
			#print "  {todo.join("\n  ")}"

			# Next node, please
			if todo.is_empty then
				# iterative depth search?
				if depth_limit <= 0 or iterative_deepening <= 0 or depth_limit_reached == 0 then
					is_running = false
					break
				end

				depth_limit += iterative_deepening
				start
			end
			var node = todo.take

			# Skip `old` stuff
			# Because `Queue` has no remove :(
			if node.drop then continue

			var state = node.state

			if memorize and memorize_late then
				# Is the state already visited?
				var old = memory.get_or_null(state)
				if old != null then
					memorized += 1
					if old.cost - node.cost < problem.epsilon then continue
					revisits += 1
					if not do_revisit then
						old.revisits += 1
						continue
					end
					node.revisits = old.revisits + 1
				end
				memory[state] = node
			end

			steps += 1
			assert node.steps == 0
			node.steps = steps
			self.node = node

			# Keep trace to the nearest
			if nearest == null or node.heuristic < nearest.heuristic then
				nearest = node
				nearest_solution = node
			end

			#print "try {node}"
			#print "try {node}; todo={todo.length}"

			# Won?
			if problem.is_goal(state) then
				solution = node
				return node
			end

			# Ignore successors states if the depth limit is reached
			if depth_limit > 0 and node.depth >= depth_limit then
				depth_limit_reached += 1
				continue
			end

			# Now, expand!
			var actions = problem.actions(state)
			if actions == null then continue
			for action in actions do
				neighbors += 1

				# Fast track if no memory or late memory
				if not memorize or memorize_late then
					var new_node = node.apply_action(action)
					new_node.id = nodes
					nodes += 1
					todo.add(new_node)
					continue
				end

				# Get the state and the cost. Do not create the node yet.
				var new_state = problem.apply_action(state, action)
				var new_cost = node.cost + problem.cost(state, action, new_state)

				# So check if the state was already seen
				var old = memory.get_or_null(new_state)
				if old != null then
					memorized += 1
					# If not better, then skip
					if old.cost - new_cost < problem.epsilon then continue
					# If visited and do not revisit, then skip
					if old.steps > 0 and not do_revisit then
						old.revisits += 1
						revisits += 1
						continue
					end
					# Even if `==`, reuse the same state object so
					# * it may helps the GC
					# * user-cached things in the previous state can be reused
					new_state = old.state
				end

				# Finally, create the node
				var new_node = new SearchNode[S, A](problem, new_state, node, action, new_cost, node.depth+1)
				new_node.id = nodes
				nodes += 1

				if old == null then
					# Compute heuristic and cost
					new_node.compute_heuristic
				else
					# Reuse heuristic and update the cost
					var h = old.heuristic
					new_node.heuristic = h
					new_node.score = new_cost + h

					# Is `old` a visited node?
					if old.steps == 0 then
						# Old is still in the todo list, so drop it
						old.drop = true
					else
						# Old was visited, so revisit it
						new_node.revisits = old.revisits + 1
						revisits += 1
						#print "found {old.cost}>{new_cost}:{old.cost>new_cost} d={old.cost-new_cost}\n\t{old}\nthat is worse than\n\t{new_node}"
					end
				end
				memory[new_state] = new_node

				todo.add(new_node)
			end
		end
		return null
	end

	# The last visited node.
	# Unless when debugging, the last visited node is not really meaningful.
	var node: nullable SearchNode[S, A] = null

	redef fun to_s
	do
		var res ="steps={steps} nodes={nodes} todo={todo.length}"
		if neighbors > 0 then res += " n={neighbors} (bf={branching_factor})"
		if revisits > 0 then res += " re={revisits}"
		if memorized > 0 then res += " mem={memorized}"
		var n = solution
		if n != null then
			res += " last={n}"
		else
			n = nearest_solution
			if n != null then res += " near={n}"
		end
		return res
	end

	# Run the configuration number `i`, for `steps` number of steps.
	# The message `msg` suffixed by the name of the configuration is printed followed by the result
	#
	# This method is used by `SearchProblem::run_configs`
	fun run_config(steps: Int, i: Int, msg: String): Bool
	do
		do
			if i == 0 then
				msg += " -mem"
				memorize = false
				break
			end
			i -= 1

			var mems = problem.make_memory
			memory = mems[i % mems.length]
			msg += " {memory.class_name}"
			i = i / mems.length

			if i % 2 == 0 then
				msg += " +mem"
				memorize = true
				memorize_late = false
			else
				msg += " +mem_late"
				memorize = true
				memorize_late = true
			end
			i = i / 2

			if i % 2 == 0 then
				msg += " +revisit"
				do_revisit = true
			else
				msg += " -revisit"
				do_revisit = false
			end
			i = i / 2

			if i >= 1 then return true

		end
		print msg

		var t = new Clock
		var res = run_steps(steps)
		print "\t{self}"
		var l = t.lapse
		print "\ttime={l}"
		return false
	end
end

# Used to compare nodes with their score.
# Smaller is score, smaller is the node.
private class NodeComparator[S: Object, A]
	super Comparator[SearchNode[S, A]]
	redef fun compare(a,b) do return a.score <=> b.score
end

# A node in the search-tree visited by a `SearchSolver`.
# In search-trees, nodes are labeled with states (`S`), and edges by actions (`A`).
#
# The root node is labeled by the initial state of the problem.
#
# This class is exposed to allow queries on the solution provided by the solver.
class SearchNode[S: Object, A]
	# A flag that indicate that `self` is virtually removed from the todo-list.
	# `self` was added to the todo-list but that a better node for the
	# same state was found latter.
	private var drop = false

	# The associated problem
	var problem: SearchProblem[S, A]

	# The state associated to `self`.
	# The state labels the node `self`.
	var state: S

	# Is `self` a root node of the search-tree?
	# ensure: `result` == `parent == null` and `result`== `action == null`
	fun is_root: Bool do return parent == null

	# The previous node in the search-tree (if not root).
	var parent: nullable SearchNode[S, A]

	# The action used to go from `parent` to `self` (if not root)
	# The action labels the edge from `parent` to `self`.
	var action: nullable A

	# The past cost (g) from the root node to `self`.
	var cost: Float

	# The heuristic from self to the goal (according to `problem.heuristic(state)`
	# It is the future cost (h)
	var heuristic: Float is noinit

	# The sum of `cost` and `heuristic`
	# It is the f function.
	var score: Float is noinit

	# Update `heuristic` and `score` according to `problem`.
	private fun compute_heuristic
	do
		var h = problem.heuristic(state)
		heuristic = h
		score = cost + h
	end

	# The depth of `self` in the search tree
	# It is the number of parents to the root node.
	var depth: Int

	# The number of steps needed by the solver to process `self`
	# It is just a useless generation number, but could be used to evaluate
	# the behavior of search algorithms.
	var steps: Int = 0

	# The rank of creation of nodes by the solver.
	# It is just a useless generation number, but could be used to evaluate
	# the behavior of search algorithms.
	var id: Int = 0

	# The number of (potential) revisits of `node`.
	# This information can be used to debug search algorithms.
	# And to detect when heuristics are not admissible.
	#
	# See `SearchSolver::revisits` and `SearchSolver::do_revisit`
	# for details.
	var revisits: Int = 0

	# Create a new child node for the next state, according to `problem`.
	# Used internally by the solvers but made public for those who want to replay a plan.
	#
	# ensure `result.parent == self`
	# ensure `result.action == action`
	fun apply_action(action: A): SearchNode[S, A]
	do
		var new_state = problem.apply_action(state, action)
		var new_cost = problem.cost(state, action, new_state)
		var new_node = new SearchNode[S, A](problem, new_state, self, action, cost + new_cost, depth+1)
		new_node.compute_heuristic
		return new_node
	end

	# Build the sequence of nodes from the initial node to `self`
	#
	# ensure `result.first.is_root and result.last == self`
	fun path: Sequence[SearchNode[S, A]]
	do
		var res = new List[SearchNode[S, A]]
		res.add(self)
		var node = parent
		while node != null do
			res.unshift(node)
			node = node.parent
		end
		return res
	end

	# Build a sequence of actions from the initial state to `self`
	# See `path` for a more detailed plan.
	fun plan: Sequence[A]
	do
		var res = new List[A]
		var node: nullable SearchNode[S, A] = self
		while node != null do
			var a = node.action
			if a != null then res.unshift(a)
			node = node.parent
		end
		return res
	end

	# Just print a detailed path on the screen
	fun dump
	do
		print "result:{state}"
		for n in path do
			var a = n.action
			if a != null then print "    + {a or else ""}"
			print "  {n.steps}: {n.state} ({n.cost}$)"
		end
	end

	redef fun to_s do return "#{steps}/{id} d={depth} f={cost+heuristic} g={cost} h={heuristic}: {state}"
	#redef fun to_s do return "#{steps} f={(cost+heuristic).to_i} g={cost.to_i} h={heuristic.to_i}"
end
