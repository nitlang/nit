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

# Using `agent_simulation` by refining the Agent class to make
# a multi-agent simulation where every agent know each other
# The steps consist of each agent greeting each other, and
# waiting for every other agent to respond before notifying
# to the `ClockAgent` that they finished their step.
module simple_simulation is example

import agent_simulation

redef class Agent
	var others = new Array[Agent]
	var count = 0

	fun greet(message: String, other: Agent) do other.async.greet_back("Hello back !")

	fun greet_back(message: String) do
		count -= 1
		if count == 0 then end_step
	end

	redef fun do_step do
		for o in others do
			o.async.greet("Hello !", self)
			count += 1
		end
	end
end

var nb_steps = 0
var nb_agents = 0
if args.is_empty or args.length != 2 then
	nb_steps = 10
	nb_agents = 10
else
	nb_steps = args[0].to_i
	nb_agents = args[1].to_i
end

var agents = new Array[Agent]
for i in [0..nb_agents[ do agents.add(new Agent)
for a in agents do for b in agents do if a != b then a.others.add(b)
clock_agent = new ClockAgent(nb_steps, agents)
clock_agent.async.do_step
