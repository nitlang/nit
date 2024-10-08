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

# Page to show when the creation of a Meetup is successful
module meetup_confirmation is i18n

import boilerplate
import opportunity_model

# Show this page when a `Meetup` is successfully created.
class MeetupConfirmation
	super OpportunityPage

	var meetup: Meetup

	init do
		body = """
		<div class="page-header">
			<center><h1>{{{"Your meetup was successfully created"}}}</h1></center>
		</div>
		<div class="container">
			<div class="alert alert-success text-center" role="alert">
			{{{"Invite participants by sharing this link:"}}} <a href="./?meetup_id={{{meetup.id}}}">{{{meetup.name.html_escape}}}</a>
			</div>
			<p class="text-center">
			{{{"See you soon for more Opportunities!"}}}
			</p>
		</div>
		"""
	end

end
