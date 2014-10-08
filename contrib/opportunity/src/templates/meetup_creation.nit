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

class MeetupCreationPage
	super OpportunityPage

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
		body = """
		<div class="page-header">
			<center><h1>New meetup</h1></center>
		</div>
		<center>
		<form action="meetup_create" method="POST" role="form">
			<div class = "form-group">
				<label for="meetup_name">Meetup Name : </label>
				<input name="meetup_name" id="meetup_name" type="text" class="form-control" placeholder="Meetup Name"/>
				<label for="meetup_date">When ? </label>
				<input name="meetup_date" id="meetup_date" type="text" class="form-control" placeholder="Time of the event">
				<label for="meetup=place">Where ? </label>
				<input name="meetup_place" id="meetup_place" type="text" class="form-control" placeholder="Place of the event">
			</div>
			<div id="answers" class="form-group">
				<h2>Answers</h2>
				<label for="answer_1">1</label>
				<input name="answer_1" id="answer_1" type="text" class="form-control" placeholder="Answer">
			</div>
			<div class="form-group">
				<button type="button" class="btn btn-lg" onclick="new_answer(this)">Add answer</button>
			</div>
			<div class="form-group">
				<button type="submit" class="btn btn-lg btn-success">Finish</button>
			</div>
		</form>
		</center>
"""
	end

end
