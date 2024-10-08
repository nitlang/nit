# This file is part of NIT (https://nitlanguage.org).
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

# a "Framework" to make Multi-Agent Simulations in Nit
module agent_simulation is example, no_warning("missing-doc")

import actors

# Master of the simulation, it initiates the steps and waits for them to terminate
class ClockAgent
	actor

	# Number of steps to do in the simulation
	var nb_steps: Int

	# List of Agents in the simulation
	var agents: Array[Agent]

	# Number of agents that finished their step
	var nb_finished = 0

	fun do_step do
		for a in agents do a.async.do_step
		nb_steps -= 1
	end

	fun finished_step do
		nb_finished += 1
		if nb_finished == agents.length then
			nb_finished = 0
			if nb_steps != 0 then async.do_step
		end
	end
end

class Agent
	actor

	# Doing a step in the simulation
	fun do_step do
	end

	fun end_step do clock_agent.async.finished_step

end

redef class Sys
	var clock_agent: ClockAgent is noautoinit,writable
end
