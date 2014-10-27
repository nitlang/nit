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

module meetup_creation

import boilerplate
import opportunity_model

class MeetupCreationPage
	super OpportunityPage

	var meet: nullable Meetup = null is writable

	var error: nullable String = null is writable

	var ans: Set[String] = new HashSet[String] is writable

	init do
		header.page_js = """
			function new_answer(sender){
				var ansdiv = $('#answers');
				var nb = ansdiv.children()
				var s = nb.last();
				var ss = s.attr("id").split('_');
				var l = ss[ss.length - 1];
				nb = parseInt(l) + 1;
				var ch = ansdiv.children();
				ch.last().after('<input name="answer_' + nb + '" id="answer_' + nb + '" class="form-control" type="text" placeholder="Answer">')
				ch.last().after('<label for="answer_' + nb + '">' + nb + '</label>');
			}
		"""

	end

	redef fun rendering do
		# Do stuff with body before rendering
		var bdy = new Template

		bdy.add "<center>"

		if error != null then
			bdy.add "<p></p>"
			bdy.add """<div class="alert alert-danger alert-dismissible" role="alert">
				<button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
				"""
			bdy.add error.as(not null)
			bdy.add "</div>"
		end

		bdy.add """
		<div class="page-header">
			<center><h1>New meetup</h1></center>
		</div>
		"""
		bdy.add """<form action="meetup_create" method="POST" role="form">
			<div class = "form-group">
				<label for="meetup_name">Meetup Name : </label>
				<input name="meetup_name" id="meetup_name" type="text" class="form-control" placeholder="Meetup Name" value="{{{if meet != null then meet.name else ""}}}" />
				<label for="meetup_date">When ? </label>
				<input name="meetup_date" id="meetup_date" type="text" class="form-control" placeholder="Time of the event" value="{{{if meet != null then meet.date else ""}}}">
				<label for="meetup=place">Where ? </label>
				<input name="meetup_place" id="meetup_place" type="text" class="form-control" placeholder="Place of the event" value="{{{if meet != null then meet.place else ""}}}">
			</div>
			<div id="answers" class="form-group">
				<h2>Answers</h2>
"""

		if ans.is_empty then
			bdy.add """<label for="answer_1">1</label>
				<input name="answer_1" id="answer_1" type="text" class="form-control" placeholder="Answer">"""
		else
			var cnt = 1
			for v in ans do
				bdy.add """
				<label for="answer_{{{cnt}}}">{{{cnt}}}</label>
				<input name="answer_{{{cnt}}}" id="answer_{{{cnt}}}" type="text" class="form-control" value="{{{v}}}"/>
				"""
				cnt += 1
			end
		end

		bdy.add """</div>
			<div class="form-group">
				<button type="button" class="btn btn-lg" onclick="new_answer(this)">Add answer</button>
			</div>
			<div class="form-group">
				<button type="submit" class="btn btn-lg btn-success">Finish</button>
			</div>
		</form>
		</center>
"""
		body = bdy
		super
	end

end
