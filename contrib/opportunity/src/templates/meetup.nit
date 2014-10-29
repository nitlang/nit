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

# Shows a meetup and allows to modify its participants
module meetup

import opportunity_model
import boilerplate
import welcome
import template

# Shows a meetup and allows to modify its participants
class OpportunityMeetupPage
	super OpportunityPage

	# Meetup the page is supposed to show
	var meetup: nullable Meetup = null

	init from_id(id: String) do
		var db = new OpportunityDB.open("opportunity")
		meetup = db.find_meetup_by_id(id)
		db.close
	end

	init do
		header.page_js = """
		function change_answer(ele){
			var e = document.getElementById(ele.id);
			var i = e.innerHTML;
			var ans = true;
			if(i === "<center>✔</center>"){
				ans = false;
				e.innerHTML = "<center>✘</center>"
				e.style.color = "red";
			}else{
				e.innerHTML = "<center>✔</center>";
				e.style.color = "green";
			}
			var a = ele.id.split('_')
			var pid = a[1]
			var aid = a[2]
			$.ajax({
				type: "POST",
				url: "./rest/answer",
				data: {
					answer_id: aid,
					pers_id: pid,
					answer: ans
				}
			});
		}
		function change_temp_answer(ele){
			var e = document.getElementById(ele.id);
			var i = e.innerHTML;
			var ans = true;
			if(i === "<center>✔</center>"){
				ans = false;
				e.innerHTML = "<center>✘</center>";
				e.style.color = "red";
			}else{
				e.innerHTML = "<center>✔</center>";
				e.style.color = "green";
			}
		}
		function add_part(ele){
			var e = document.getElementById(ele.id);
			var pname = document.getElementById("new_name").value;
			var arr = e.id.split("_");
			var mid = arr[1];
			var ans = $('#' + ele.id).parent().parent().parent().children(".answer");
			ansmap = {};
			for(i=0;i<ans.length;i++){
				var curr = ans.eq(i)
				if(curr[0].innerHTML === "<center>✔</center>"){
					ansmap[curr.attr('id')] = true
				}else{
					ansmap[curr.attr('id')] = false
				}
			}
			$.ajax({
				type: "POST",
				url: "./rest/meetup/new_pers",
				data: {
					meetup_id: mid,
					persname: pname,
					answers: $.param(ansmap)
				}
				})
				.done(function(data){
					location.reload();
				})
				.fail(function(data){
					//TODO: Notify of failure
				});
		}
		function remove_people(ele){
			var arr = ele.id.split("_")
			var pid = arr[1]
			$('#' + ele.id).parent().remove();
			$.ajax({
				type: "POST",
				url: "./rest/people",
				data: {
					method: "DELETE",
					p_id: pid
				}
			});
		}
		"""
	end


	redef fun rendering do
		if meetup == null then
			add((new OpportunityHomePage).write_to_string)
			return
		end
		add header
		var db = new OpportunityDB.open("opportunity")
		add meetup.to_html(db)
		db.close
		add footer
	end
end

redef class Meetup
	# Build the HTML for `self`
	fun to_html(db: OpportunityDB): Streamable do
		var t = new Template
		t.add """
<div class="container">
<div class="page-header">
	<center><h1>{{{name}}}</h1></center>
"""
		if not date.is_empty then t.add """
	<center><h4>When: {{{date}}}</h4></center>"""

		if not place.is_empty then t.add """
	<center><h4>Where: {{{place}}}</h4></center>"""

		t.add """
</div>
<table class="table">
"""
		t.add "<th>Participant name</th>"
		for i in answers(db) do
			t.add "<th class=\"text-center\">"
			t.add i.to_s
			t.add "</th>"
		end
		t.add "<th></th>"
		t.add "</tr>"
		for i in participants(db) do
			t.add "<tr>"
			i.load_answers(db, self)
			t.add "<td>"
			t.add i.to_s
			t.add "</td>"
			for j,k in i.answers do
				t.add """<td class="answer" onclick="change_answer(this)" id="answer_{{{j.id}}}_{{{i.id}}}""""
				if k then
					t.add " style=\"color:green;\""
				else
					t.add " style=\"color:red;\""
				end
				t.add"><center>"
				if k then
					t.add "✔"
				else
					t.add "✘"
				end
				t.add "</center></td>"
			end
			t.add """<td class="opportunity-action" style="color: red;" onclick="remove_people(this)" id="remove_{{{i.id}}}"><center><button class="btn btn-xs btn-danger" type="button">Remove</button></center></td>"""
			t.add "</tr>"
		end
		t.add """
<tr id="newrow">
	<td><input id="new_name" type="text" placeholder="Your name" class="input-large"></td>
		"""
		for i in answers(db) do
			t.add "<td class=\"answer\" id=\"newans_{i.id}\" onclick=\"change_temp_answer(this)\" style=\"color:red;\"><center>✘</center></td>"
		end
		t.add """
	<td><center><span id="add_{{{id}}}" onclick="add_part(this)" style="color:green;" class="action"><button class="btn btn-xs btn-success" type="button">Done</button></span></center></td>"""
		t.add "</tr>"
		t.add "</table>"
		t.add "</div>"
		return t
	end
end
