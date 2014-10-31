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

# Model for the data of Opportunity
module opportunity_model

import sqlite3
import sha1
import serialization

# A SQLiteDB object for `Opportunity`
class OpportunityDB
	super Sqlite3DB

	init open(x) do
		super

		create_db
	end

	# Creates the tables and triggers for Opportunity (SQLite3 DB)
	fun create_db do
		assert create_table("IF NOT EXISTS meetups (id CHAR(40) PRIMARY KEY, name TEXT, date TEXT, place TEXT);") else
			print error or else "?"
		end
		assert create_table("IF NOT EXISTS people(id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, surname TEXT);") else
			print error or else "?"
		end
		assert create_table("IF NOT EXISTS answers(id INTEGER PRIMARY KEY AUTOINCREMENT, meetup_id CHAR(40), name TEXT, FOREIGN KEY(meetup_id) REFERENCES meetups(id));") else
			print error or else "?"
		end
		assert create_table("IF NOT EXISTS part_answers(id_part INTEGER, id_ans INTEGER, value INTEGER, FOREIGN KEY(id_part) REFERENCES people(id), FOREIGN KEY(id_ans) REFERENCES answers(id));") else
			print error or else "?"
		end
		#NOTE: The following triggers could be replaced by ON DELETE CASCADE clauses
		# Thing is, SQLite does not seem to support those operations (well, not by default, it seems
		# we must re-compile the lib to support it. So, well, let's just create triggers heh.
		assert execute("CREATE TRIGGER IF NOT EXISTS answers_clean AFTER DELETE ON meetups BEGIN DELETE FROM answers WHERE answers.meetup_id=OLD.id;END;") else
			print error or else "?"
		end
		assert execute("CREATE TRIGGER IF NOT EXISTS ans_clean AFTER DELETE ON answers BEGIN DELETE FROM part_answers WHERE OLD.id=part_answers.id_ans;END;") else
			print error or else "?"
		end
		assert execute("CREATE TRIGGER IF NOT EXISTS ppl_clean AFTER DELETE ON people BEGIN DELETE FROM part_answers WHERE OLD.id=part_answers.id_part;END;")
	end

	# Find a `People` by its id, or `null` if it could not be found
	fun find_people_by_id(id: Int): nullable People do
		var req = select("* from people where id={id};")
		for i in req do
			return new People.from_db(i[0].to_i, i[1].to_s, i[2].to_s)
		end
		return null
	end

	# Find a `Meetup` by its id or `null` if it could not be found
	fun find_meetup_by_id(id: String): nullable Meetup do
		var req = select("* FROM meetups where id={id.to_sql_string};")
		for i in req do
			return new Meetup.from_db(i[0].to_s, i[1].to_s, i[2].to_s, i[3].to_s)
		end
		return null
	end

	# Change an Answer `ansid` for someone with an id `pid` to `resp`
	#
	# Returns `true` if the request was sucessful, false otherwise
	fun change_answer(pid: Int, ansid: Int, resp: Bool): Bool do
		var rsp = 0
		if resp then rsp = 1
		var rq = execute("INSERT OR REPLACE INTO part_answers(id_part, id_ans, value) VALUES({pid},{ansid},{rsp});")
		if not rq then
			print "Error while updating answer {ansid}:{pid}"
			print error or else "Unknown error"
			return false
		end
		return true
	end

	# Removes a person in the Database by its `id`
	#
	# Returns true if sucessful, false otherwise
	fun remove_people_by_id(id: Int): Bool do
		var rq = execute("DELETE FROM people WHERE id = {id};")
		if not rq then
			print "Cannot delete people {id}"
			print error or else "Unknown error"
			return false
		end
		return true
	end
end

# Any kind of Database Object that can be persisted to the database
abstract class DBObject

	# Commits the modifications done to the Object in the database
	fun commit(db: OpportunityDB): Bool is abstract
end

# A Meetup participant, linked to the DB
class People
	super DBObject

	# ID in the Database, -1 if not set
	var id: Int = -1
	# Name of the participant
	var name: String
	# Surname of the participant
	var surname: String
	# Map of the answers of a Meetup and the answers of the participant
	var answers: Map[Answer, Bool] = new HashMap[Answer, Bool]

	# To be used internally when fetching the `People` in Database
	private init from_db(id: Int, name, surname: String) do
		init(name, surname)
		self.id = id
	end

	# Changes an answer `ans` (or adds it)
	fun answer=(ans: Answer, resp: Bool) do
		answers[ans] = resp
	end

	# Loads the answers for a Meetup
	#
	# NOTE: If `self` does not exist in the Database, no answers will be fetched
	fun load_answers(db: OpportunityDB, meetup: Meetup) do
		self.answers = new HashMap[Answer, Bool]
		var req = db.select("answers.id, answers.name, part_answers.value FROM part_answers, answers WHERE part_answers.id_part={id} AND answers.id=part_answers.id_ans AND answers.meetup_id={meetup.id.to_sql_string} GROUP BY answers.id;")
		for i in req do
			var ans = new Answer.from_db(i[0].to_i, i[1].to_s)
			answers[ans] = false
			if i[2].to_i == 1 then answers[ans] = true
		end
	end

	redef fun to_s do return "{surname.capitalized} {name.capitalized}"

	redef fun commit(db) do
		if id == -1 then
			if not db.execute("INSERT INTO people (name,surname) VALUES ({name.to_sql_string}, {surname.to_sql_string});") then
				print "Error while adding people {self}"
				print db.error or else "Unknown error"
				return false
			end
			id = db.last_insert_rowid
		else
			if not db.execute("UPDATE people SET name={name.to_sql_string}, surname={surname.to_sql_string} WHERE ID={id};") then
				print "Error while updating people {self}"
				print db.error or else "Unknown error"
				return false
			end
		end
		for i,j in answers do
			if i.id == -1 then i.commit(db)
			var val = 0
			if j then val = 1
			if not db.execute("INSERT OR REPLACE INTO part_answers(id_part, id_ans, value) VALUES ({id},{i.id},{val});") then
				print("Error while adding/replacing part_answers {id}|{i.id}|{j}")
				print db.error or else "Unknown error"
				return false
			end
		end
		return true
	end
end

# A `Meetup` is an opportunity of meeting, linked to the database
class Meetup
	super DBObject

	# ID of the meetup, SHA-1 of the informations that are contained
	var id: String = ""
	# Name for the meetup
	var name: String
	# SQLite-formatted date : YYYY:DD:MM HH:MM:SS
	var date: String
	# Place of the meetup
	var place: String

	# Builds the object with all the informations found in the database
	private init from_db(id, name, date, place: String) do
		self.id = id
		self.name = name
		self.date = date
		self.place = place
	end

	# Gets the answers bound to the current `Meetup`
	fun answers(db: OpportunityDB): Array[Answer] do
		if id == "" then
			return new Array[Answer]
		end
		var res = db.select("id, name FROM answers WHERE meetup_id={id.to_sql_string}")
		var ans = new Array[Answer]
		for i in res do
			ans.add new Answer.from_db(i[0].to_i, i[1].to_s)
		end
		return ans
	end

	# Gets the list of the participants of a `Meetup`
	fun participants(db: OpportunityDB): Array[People] do
		var resp = db.select("people.* FROM people, meetups, answers, part_answers WHERE meetups.id={id.to_sql_string} AND answers.meetup_id={id.to_sql_string} AND part_answers.id_ans=answers.id AND people.id=part_answers.id_part GROUP BY people.id;")
		var arr = new Array[People]
		for i in resp do
			arr.add (new People.from_db(i[0].to_i, i[1].to_s, i[2].to_s))
		end
		return arr
	end

	redef fun commit(db) do
		if id == "" then
			var time = get_time
			var tmpid = (name + date + place + time.to_s).sha1_to_s
			if not db.execute("INSERT INTO meetups (id, name, date, place) VALUES({tmpid.to_sql_string}, {name.to_sql_string}, {date.to_sql_string}, {place.to_sql_string});") then
				print "Error recording entry Meetup {self}"
				print db.error or else "Null error"
				return false
			end
			id = tmpid
			return true
		else
			return db.execute("UPDATE meetups (name, date, place) VALUES({name.to_sql_string}, {date.to_sql_string}, {place.to_sql_string}) WHERE ID={id.to_sql_string};")
		end
	end

	redef fun to_s do
		return "Event : {name}\nWhen : {date}\nWhere : {place}"
	end
end

# An answer linked to a Meetup in the database
class Answer
	super DBObject

	# Name of the answer (title)
	var name: String
	# Id in the database, -1 if not set
	var id: Int = -1
	# Meetup the answer is linked to (null while it is not added in the database or set via API)
	var meetup: nullable Meetup = null is writable

	# To be used internally when fetching the object from Database
	private init from_db(id: Int, name: String) do
		init name
		self.id = id
	end

	# Loads the Meetup associated to `self`
	#
	# REQUIRE: is loaded in database
	fun load_meetup(db: OpportunityDB): Meetup do
		assert id != -1
		var res = db.select("meetups.* FROM meetups, answers WHERE answers.id={id} AND answers.meetup_id=meetups.id;")
		for i in res do
			return new Meetup.from_db(i[0].to_s, i[1].to_s, i[2].to_s, i[3].to_s)
		end
		# If no Meetup could be loaded, the contract was not respected
		abort
	end

	redef fun commit(db) do
		var m = meetup
		if m == null then return false
		if m.id == "" then
			if not m.commit(db) then
				print "Error when creating meetup {m}"
				return false
			end
		end
		if id == -1 then
			if not db.execute("INSERT INTO answers (name, meetup_id) VALUES({name.to_sql_string}, {m.id.to_sql_string});") then
				print "Cannot create {self} in database"
				print db.error or else "Unknown error"
				return false
			end
			id = db.last_insert_rowid
		else
			if not db.execute("UPDATE answers (name) VALUES ({name.to_sql_string}) WHERE meetup_id={m.id.to_sql_string};") then
				print "Error updating {self} in database"
				print db.error or else "Unknown error"
				return false
			end
		end
		return true
	end

	redef fun to_s do return name
end
