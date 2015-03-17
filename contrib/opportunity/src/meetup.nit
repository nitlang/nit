module meetup

import application_model
import sqlite3
import sha1
import serialization
import json

class MeetupModel
	super Model

	fun find_by_id(id: String): nullable Meetup do
		var req = db.prepare("SELECT * FROM meetups where id={id.to_sql_string};")
		for i in req do
			return new Meetup.from_db(i[0].to_s, i[1].to_s, i[2].to_s, i[3].to_s, i[4].to_i)
		end
		return null
	end

	fun find_all: Array[Meetup] do
		var meetups = new Array[Meetup]
		var req = db.prepare("SELECT * FROM meetups;")
		for i in req do
			meetups.add(new Meetup.from_db(i[0].to_s, i[1].to_s, i[2].to_s, i[3].to_s, i[4].to_i))
		end
		return meetups
	end

end

# A `Meetup` is an opportunity of meeting, linked to the database
class Meetup
	super DBObject
	super Jsonable

	# ID of the meetup, SHA-1 of the informations that are contained
	var id: String = ""
	# Name for the meetup
	var name: String  is public writable
	# SQLite-formatted date : YYYY:DD:MM HH:MM:SS
	var date: String is public writable
	# Place of the meetup
	var place: String is public writable
	# Mode of answering to the meetup (atm supports with or without Maybe)
	var answer_mode: Int is public writable

	# Builds the object with all the informations found in the database
	private init from_db(id, name, date, place: String, mode: Int) do
		self.id = id
		init(name, date, place, mode)
	end

	redef fun commit do
		print id
		if id == "" then
			var time = get_time
			var tmpid = (name + date + place + time.to_s).sha1_to_s
			if not db.execute("INSERT INTO meetups (id, name, date, place, answer_mode) VALUES({tmpid.to_sql_string}, {name.html_escape.to_sql_string}, {date.html_escape.to_sql_string}, {place.html_escape.to_sql_string}, {answer_mode});") then
				print "Error recording entry Meetup {self}"
				print db.error or else "Null error"
				return false
			end
			id = tmpid
			return true
		else
			return db.execute("UPDATE meetups SET name={name.html_escape.to_sql_string}, date={date.html_escape.to_sql_string}, place={place.html_escape.to_sql_string}, answer_mode={answer_mode} WHERE id={id.to_sql_string};")
		end
	end

	redef fun delete:Bool do
		if id == "" then
			return false
		end
		return db.execute("DELETE FROM meetups WHERE id = {id.to_sql_string};")
	end

	redef fun to_s do
		return "Event : {name}\nWhen : {date}\nWhere : {place}"
	end

	redef fun to_json:String do
		var json = new JsonObject

		json["id"] = id
		json["name"] = name
		json["date"] = date
		json["place"] = place
		json["answer_mode"] = answer_mode

		return json.to_json
	end
end