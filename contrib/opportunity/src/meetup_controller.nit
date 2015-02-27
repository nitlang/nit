module meetup_controller

import application_controller
import meetup
import json_serialization

class CreateMeetupAction
	super RestAction

	redef var required_params = ["name", "date", "place", "mode"]

	redef fun run(request, uri): HttpResponse do
		var meetup = new Meetup(params["name"], params["date"], params["place"], params["mode"].to_i)

		var response = new HttpResponse(200)
		if meetup.commit then
			response.body = meetup.to_json
		else
			response.body = json_response(false,"something wrong")
		end

		return response
	end

end

class UpdateMeetupAction
	super RestAction

	redef var required_params = ["id", "name", "date", "place", "mode"]

	redef fun run(request, uri): HttpResponse do
		var meetupModel = new MeetupModel
		var meetup = meetupModel.find_by_id(params["id"])
		var response = new HttpResponse(200)

		if meetup != null then
			meetup.name = params["name"]
			meetup.date = params["date"]
			meetup.place = params["place"]
			meetup.answer_mode = params["mode"].to_i
			if meetup.commit then
				response.body = meetup.to_json
			else
				response.body = json_response(false,"something goes wrong")
			end
		else
			response.body = json_response(false,"meeting does not exist")
		end

		return response
	end

end

class GetMeetupAction
	super RestAction

	redef var required_params = ["id"]

	redef fun run(request, uri): HttpResponse do
		var meetupModel = new MeetupModel
		var meetup = meetupModel.find_by_id(params["id"])
		var response = new HttpResponse(200)
		if meetup != null then
			response.body = meetup.to_json
		else
			response.body = json_response(false,"there is no meeting")
		end
		return response
	end

end

class ListMeetupAction
	super RestAction

	redef fun run(request, uri): HttpResponse do
		var meetupModel = new MeetupModel
		var meetups = meetupModel.find_all
		var response = new HttpResponse(200)
		response.body = new JsonArray.from(meetups).to_json
		return response
	end

end

class DeleteMeetupAction
	super RestAction

	redef var required_params = ["id"]

	redef fun run(request, uri): HttpResponse do
		var meetupModel = new MeetupModel
		var meetup = meetupModel.find_by_id(params["id"])
		var response = new HttpResponse(200)
		if meetup != null then
			meetup.delete
			response.body = json_response(true, "meeting deleted")
		else
			response.body = json_response(false, "there is no meeting")
		end
		return response
	end

end