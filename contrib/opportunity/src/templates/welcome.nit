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
# limitations under the License

# Welcome page for Opportunity
module welcome

import boilerplate

# Welcome page for Opportunity
class OpportunityHomePage
	super OpportunityPage

	init do
		body = """
		<div class="page-header">
		<h1 class="text-center">Welcome to Opportunity!</h1>
			</div>
			<p class="text-center">
				<p class="text-center">Opportunity is a free (as in free software), easy-to-use, meetup planner.</p>
				<p class="text-center">You can start using it right now by creating a new Meetup and sharing it with your friends!</p>
				<p class="text-center">
				<form action="new_meetup">
				<button type="submit" class="btn btn-lg center-block btn-success">Create a Meetup</button>
				</form>
				</p>
			</p>
"""
	end

end
