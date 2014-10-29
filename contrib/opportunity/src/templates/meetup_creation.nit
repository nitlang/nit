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
"""
	end

	redef fun rendering do
		var n_answers = ans.length + 1
		if n_answers == 1 then n_answers = 2

		header.page_js = """
var nb_answers = {{{n_answers}}};

function new_answer(sender){
	var ansdiv = $('#answers')

	var nb = nb_answers
	nb_answers += 1

	ansdiv.append('<div class="form-group">' +
		'<label for="answer_' + nb + '" class="col-sm-4 control-label">' + nb + '</label>' +
		'<div class="col-sm-8">' +
			'<input name="answer_' + nb + '" id="answer_' + nb + '" class="form-control" type="text" placeholder="Another opportunity">' +
		'</div></div>')
}
"""

		# Do stuff with body before rendering
		var bdy = new Template

		bdy.add "<div class=\"container\">"
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
			<center><h1>Create a meetup</h1></center>
		</div>
		"""
		bdy.add """<form class="form-horizontal" action="meetup_create" method="POST" role="form">
			<div class = "form-group">
				<label for="meetup_name" class="col-sm-4 control-label">Meetup name</label>
				<div class="col-sm-8">
					<input name="meetup_name" id="meetup_name" type="text" class="form-control" placeholder="My Event" value="{{{if meet != null then meet.name else ""}}}" />
				</div>
			</div>
			<div class = "form-group">
				<label for="meetup_date" class="col-sm-4 control-label">When?</label>
				<div class="col-sm-8">
					<input name="meetup_date" id="meetup_date" type="text" class="form-control" placeholder="Time of the event" value="{{{if meet != null then meet.date else ""}}}">
				</div>
			</div>
			<div class = "form-group">
				<label for="meetup=place" class="col-sm-4 control-label">Where?</label>
				<div class="col-sm-8">
					<input name="meetup_place" id="meetup_place" type="text" class="form-control" placeholder="Place of the event" value="{{{if meet != null then meet.place else ""}}}">
				</div>
			</div>
				<h2>Opportunities</h2>
<div id="answers">
"""

		if ans.is_empty then
			bdy.add """
<div class="form-group">
	<label for="answer_1" class="col-sm-4 control-label">1</label>
	<div class="col-sm-8">
		<input name="answer_1" id="answer_1" type="text" class="form-control" placeholder="First opportunity">
	</div>
</div>
"""
		else
			var cnt = 1
			for v in ans do
				bdy.add """
<div class="form-group">
	<label for="answer_{{{cnt}}}" class="col-sm-4 control-label">{{{cnt}}}</label>
	<div class="col-sm-8">
		<input name="answer_{{{cnt}}}" id="answer_{{{cnt}}}" type="text" class="form-control" value="{{{v}}}"/>
	</div>
</div>
"""
				cnt += 1
			end
		end

		bdy.add """
			</div>
			<div class="form-group">
				<button type="button" class="btn btn-lg" onclick="new_answer(this)">Add an opportunity</button>
				<button type="submit" class="btn btn-lg btn-success">Create meetup</button>
			</div>
		</form>
		</center>
		</div>
"""
		body = bdy
		super
	end

end
