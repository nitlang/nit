# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Basic framework for active backtrack solver
#
# This module provides a simple abstract class `BacktrackProblem[S,A]` to be specialized for a specific problem.
#
# The concrete class `BacktrackSolver` is used to configure, query, and run a solver for a given problem.
#
# For an example, see the `queens.nit` program in the `examples` subdirectory.
module backtrack

# Abstract backtrack problem of states (`S`) and actions (`A`).
#
# This class serves to model search problems using a backtracking approach.
# A state, `S`, is a point in the search problem and fully model a given state of the world.
# An action, `A`, is an available mean of transition between two states.
# While there is a potential large number of distinct states and actions, there should be only
# a small number of possible actions from a specific state (thus, a small, or at least finite, branching factor).
#
# The point this class is that the state is a mutable object, the roles of the actions is to modify
# the state.
#
# This abstract class is generic and made to work with any kind of states and actions.
# Therefore, specific subclasses must be developed to implements the required services:
#
# * `initial_state`
# * `actions`
# * `apply_action`
# * `backtrack`
# * `is_goal`
#
# # Basic search
#
# The method `solve` returns a new solver for a backtrack search.
abstract class BacktrackProblem[S: Object,A]
	# The starting state of the problem.
	# It is this object that will be modified by `apply_action` and `backtrack`.
	fun initial_state: S is abstract

	# The available and applicable actions for a given state
	# Because of `backtracking`, actions must also be reversible (see `backtrack`).
	#
	# If there is no available actions, null (or an empty collection) must be returned.
	#
	# In order to optimise the search time, it is sensible to return `null`
	# (or an empty collection) as early as possible.
	#
	# Node: to help some specific implementations, the current node is also available.
	# See `BacktrackNode` for details.
	fun actions(state: S, node: BacktrackNode[A]): nullable Collection[A] is abstract

	# Modify `state` by applying `action`
	# The `action` comes from an earlier invocation of `actions`.
	fun apply_action(state: S, action: A) is abstract

	# Modify `state` by undoing `action`
	# Because of this method, it is important that any action can be undone
	# knowing only the post-state and the action.
	fun backtrack(state: S, action: A) is abstract

	# Is the state a goal state?
	# Once a goal state is found, the solver is automatically stopped.
	# See `BacktrackSolver.run`.
	fun is_goal(state: S): Bool is abstract

	# Return a new solver
	fun solve: BacktrackSolver[S,A] do
		return new BacktrackSolver[S,A](self, initial_state)
	end
end

# A running solver for a given problem, that can be configured and controlled.
#
#
# # Basic run and results.
#
# 1. Instantiate it with the method `solve` from `BacktrackProblem`.
# 2. Apply the method `run`, that will search and return a solution.
# 3. Retrieve information from the solution.
#
# ~~~~nitish
# var p: BacktrackProblem = new MyProblem
# var solver = p.solve
# var res = solver.run
# if res != null then
#   print "Found solution in {res.depth} actions: {res.plan.join(", ")}"
#   print "The state of the solution is: {solver.state}"
# end
# ~~~~
#
#
# # Step-by-step runs and multiple runs
#
# The `run_steps` method (see also `steps`, and `steps_limit`) can be used to run only a maximum number of steps.
# Thus, this method can be used as a *co-routine* and be run periodically for a small amount of time.
#
# `run` and `run_steps` return the next solution.
# A subsequent call to `run` returns the following solution and so on.
#
# When there is no more solutions available, `null` is returned and `is_running` become false.
#
# Between run, the state of the current search can be read.
#
#
# # Search-trees
#
# Internally, solvers use a zipper on the virtual search-tree where nodes are elements in the apply/backtrack graph.
# See the class `BacktrackNode` for details
#
# The `run` and `node` methods return a `BacktrackNode` that can be used to retrieve a lot of useful information,
# like the full `path` or the `plan`.
# If only the solved state is required, the `state` method from the solver gives it.
class BacktrackSolver[S: Object, A]
	# The problem currently solved
	var problem: BacktrackProblem[S,A]

	# The current state.
	# Do not modify it directly: the solver will do that by its own use of
	# `problem.apply_action` and `problem.backtrack`.
	var state: S

	# The current `node` in the backtrack-zipper.
	var node: nullable BacktrackNode[A] = null

	# Is the solver still running?
	# A running solver has not yet exhausted all the possible solutions.
	var is_running = true

	# Initialize `node`
	private fun start: BacktrackNode[A]
	do
		assert node == null
		var node = new BacktrackNode[A](null, null, 0, 0)
		self.node = node
		return node
	end


	# The total steps executed since the beginning.
	var steps = 0

	# Limit in the number of steps for a `run`.
	#
	# One can modify this value then `run` or just call `run_steps`.
	#
	# Use 0 for no limit.
	# Default: 0
	var steps_limit = 0 is writable

	# Update `steps_limit` then just run some additional steps.
	# Return the `node` corresponding to the found solution, or `null` if no solution is found.
	fun run_steps(steps: Int): nullable BacktrackNode[A]
	do
		steps_limit = self.steps + steps
		return run
	end

	# Run the solver and return the next solution found (if any).
	# Return null is one of these is true:
	# * `steps_limit` is reached
	# * no more reachable solution, in this case `is_running` become false.
	fun run: nullable BacktrackNode[A]
	do
		var node = self.node
		# Not yet started, of finished?
		if node == null then
			if steps > 0 then return null
			node = start
			var res = problem.is_goal(state)
			if res then return node
		end

		loop
			if steps_limit > 0 and steps > steps_limit then break
			steps += 1

			var totry = node.totry

			# It is the first visit in this state?
			if totry == null then
				var actions = problem.actions(state, node)
				if actions != null and not actions.is_empty then
					totry = actions.to_a
					node.totry = totry
				end
			end

			#print state
			#print node

			# No remaining actions?
			if totry == null or totry.is_empty then
				#print "Backtrack"
				var a = node.action
				if a == null then
					#print "no more action"
					is_running = false
					self.node = null
					return null
				end

				problem.backtrack(state, a)
				node = node.parent
				assert node != null
				continue
			end

			var a = totry.pop
			problem.apply_action(state, a)
			#print "Play {a or else ""}"
			node = new BacktrackNode[A](node, a, node.depth+1, steps)

			var res = problem.is_goal(state)
			if res then
				self.node = node
				return node
			end
		end
		self.node = node
		return null
	end

	redef fun to_s do return "{node or else "#0"}"
end

# A node in the backtrack-zipper visited by a `BacktrackSolver`.
#
# The solver visits the virtual search tree with a zipper.
#
# A node is the zipper (this class) is associated to:
# * a state of the problem (indirectly),
# * the actions not yet explored from the state (see `totry`)
# * the action that yields to the state (see `action`), used to backtrack.
# * and the parent node in the zipper (see `parent`).
#
# There is no direct link between a node and a state; it is unneeded
# since the same state is used, and mutated, during the whole execution of the solver.
#
# This class is exposed to allow queries on the solution provided by the solver.
class BacktrackNode[A]
	# The previous node in the backtrack-zipper
	var parent: nullable BacktrackNode[A]

	# The last action executed
	var action: nullable A

	# The remaining actions to try from this node
	var totry: nullable Array[A] = null

	# The depth of `self` in the search-tree.
	var depth: Int

	# The number of steps needed by the solver to process `self`.
	# This is just a useless generation number, but could be used to evaluate
	# the behavior of search algorithms.
	var steps: Int

	# Build a sequence of nodes from the initial node to `self`
	# ensure `result.first.parent == null and result.last == self`
	fun path: Sequence[BacktrackNode[A]]
	do
		var res = new List[BacktrackNode[A]]
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
		var node: nullable BacktrackNode[A] = self
		while node != null do
			var a = node.action
			if a != null then res.unshift(a)
			node = node.parent
		end
		return res
	end

	redef fun to_s do
		var res = "#{steps} d={depth}"
		var tt = totry
		if tt != null then res += " tt={tt.join(" ")}"
		return res
	end
end
