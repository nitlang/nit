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
# limitations under the License

# Welcome page for Opportunity
module welcome is i18n

import boilerplate

# Welcome page for Opportunity
class OpportunityHomePage
	super OpportunityPage

	init do
		body = """
<div class="container">
	<p class="text-center"><img src="/static/opportunity.svg"></p>

	<div class="jumbotron text-center">
		<p>
			{{{"Opportunity is a free (as in free software), easy-to-use, meetup planner."}}}
			{{{"You can start using it right now by creating a new Meetup and sharing it with your friends!"}}}
		</p>
		<form action="new_meetup">
			<button type="submit" class="btn btn-lg center-block btn-success">{{{"Create a Meetup"}}}</button>
		</form>
	</div>
</div>
"""
	end
end
