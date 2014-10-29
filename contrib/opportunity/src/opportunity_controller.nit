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

# Actions for Opportunity web application
module opportunity_controller

import nitcorn
import sha1
import templates
import opportunity_model

# Any kind of opportunity `Action` (serves a request)
abstract class OpportunityAction
	super Action

	# Path to db
	var db_path = "opportunity"

	# Returns a bad request with an error code 400
	#
	# TODO: Add a specific body to the bad request page.
	fun bad_req: HttpResponse do
		var rsp = new HttpResponse(400)
		rsp.body = (new OpportunityHomePage).write_to_string
		return rsp
	end
end

# Welcome page for Opportunity
class OpportunityWelcome
	super OpportunityAction

	redef fun answer(request, url) do
		print "Received request for {url}"
		var get = request.get_args
		var rq = url.split("/")
		if rq.has("meetup_create") then
			var ansset = new HashSet[String]
			var ans_tmp = "answer_"
			var cnt = 1
			loop
				var anss = request.string_arg(ans_tmp + cnt.to_s)
				cnt += 1
				if anss == null then break
				if ansset.has(anss) then continue
				ansset.add anss
			end

			var mname = request.string_arg("meetup_name")
			var mdate = request.string_arg("meetup_date")
			var mplace = request.string_arg("meetup_place")
			if mdate == null then mdate = ""
			if mplace == null then mplace = ""
			if mname == null then
				mname = ""
				var rsp = new HttpResponse(200)
				var meetpage = new MeetupCreationPage
				var meet = new Meetup(mname, mdate, mplace)
				meetpage.ans = ansset
				meetpage.meet = meet
				meetpage.error = "'Meetup name' is a mandatory fields."
				rsp.body = meetpage.write_to_string
				return rsp

			end
			var db = new OpportunityDB.open(db_path)
			var meet = new Meetup(mname, mdate, mplace)
			if ansset.is_empty then
				db.close
				var rsp = new HttpResponse(200)
				var meetpage = new MeetupCreationPage
				meetpage.meet = meet
				meetpage.error = "You need to input at least one answer."
				rsp.body = meetpage.write_to_string
				return rsp
			end
			if not meet.commit(db) then
				db.close
				var rsp = new HttpResponse(200)
				var meetpage = new MeetupCreationPage
				meetpage.meet = meet
				meetpage.ans = ansset
				meetpage.error = """<p>Could not create Meetup.</p>
				<p>Hmm, that's embarassing, the database indicates that your meetup already exists.</p>
				<p>If this is not a duplicated submission, please contact the mainainers of the website, you might have found a bug !</p>"""
				rsp.body = meetpage.write_to_string
				return rsp
			end
			for v in ansset do
				var ans = new Answer(v)
				ans.meetup = meet
				ans.commit(db)
			end
			db.close
			var rsp = new HttpResponse(200)
			rsp.body = (new MeetupConfirmation(meet)).write_to_string
			return rsp
		end
		if rq.has("new_meetup") then
			var rsp = new HttpResponse(200)
			var page = new MeetupCreationPage
			rsp.body = page.write_to_string
			return rsp
		end
		if get.has_key("meetup_id") then
			var rsp = new HttpResponse(200)
			rsp.body = (new OpportunityMeetupPage.from_id(get["meetup_id"])).write_to_string
			return rsp
		end
		var rsp = new HttpResponse(200)
		rsp.body = (new OpportunityHomePage).write_to_string
		return rsp
	end

end

# Any kind of REST request to Opportunity
class OpportunityRESTAction
	super OpportunityAction

	redef fun answer(request, uri) do
		print "Received REST request from {uri}"
		var get = request.get_args
		var req = uri.split("/")
		if req.has("people") then
			return (new OpportunityPeopleREST).answer(request, uri)
		else if req.has("answer") then
			return (new OpportunityAnswerREST).answer(request, uri)
		else if req.has("meetup") then
			return (new OpportunityMeetupREST).answer(request, uri)
		else
			return new HttpResponse(400)
		end
	end

end

# REST Actions working on People
class OpportunityPeopleREST
	super OpportunityAction

	redef fun answer(request, uri) do
		# Should be DELETE for true REST API
		# TODO : change method to DELETE once supported by Nitcorn
		if request.method == "POST" then
			var meth = request.string_arg("method")
			if meth == null then return bad_req
			if meth != "DELETE" then return bad_req
			var pid = request.int_arg("p_id")
			if pid == null then return bad_req
			var db = new OpportunityDB.open(db_path)
			db.remove_people_by_id(pid)
			db.close
			return new HttpResponse(200)
		end
		return new HttpResponse(400)
	end

end

# REST Actions working on Answers
class OpportunityAnswerREST
	super OpportunityAction

	redef fun answer(request, uri) do
		var persid = request.int_arg("pers_id")
		var ansid = request.int_arg("answer_id")
		var ans = request.bool_arg("answer")
		if persid == null or ansid == null or ans == null then return bad_req
		var db = new OpportunityDB.open(db_path)
		db.change_answer(ansid, persid, ans)
		db.close
		return new HttpResponse(200)
	end
end

# REST Actions working on Meetups
class OpportunityMeetupREST
	super OpportunityAction

	redef fun answer(request, uri) do
		var args = uri.split("/")
		if args.has("new_pers") then
			var name = request.string_arg("persname")
			var m_id = request.string_arg("meetup_id")
			var ans = request.string_arg("answers").split("&")
			if name == null or m_id == null then return bad_req
			print ans
			var ansmap = new HashMap[Int, Bool]
			for i in ans do
				var mp = i.split("=")
				var b = false
				if mp.last == "true" then b = true
				var id = mp.first.split("_").last
				if not id.is_numeric then continue
				ansmap[id.to_i] = b
			end
			var db = new OpportunityDB.open(db_path)
			var m = db.find_meetup_by_id(m_id)
			var sublen = name.index_of(' ')
			var rname = ""
			var rsurname = ""
			if sublen == -1 then
				rsurname = name
			else
				rsurname = name.substring(0, sublen)
				rname = name.substring_from(sublen + 1)
			end
			var p = new People(rname, rsurname)
			for i in m.answers(db) do
				if not ansmap.has_key(i.id) then
					p.answers[i] = false
				else
					p.answers[i] = ansmap[i.id]
				end
			end
			p.commit(db)
			db.close
			var rsp = new HttpResponse(200)
			rsp.body = p.id.to_s
			return rsp
		end
		return new HttpResponse(400)
	end
end
