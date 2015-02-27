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

	redef fun hash do
		if id != -1 then return id
		return super
	end

	# Loads the Meetup associated to `self`
	#
	# REQUIRE: is loaded in database
	fun load_meetup(db: OpportunityDB): Meetup do
		assert id != -1
		var res = db.select("meetups.* FROM meetups, answers WHERE answers.id={id} AND answers.meetup_id=meetups.id;")
		for i in res do
			return new Meetup.from_db(i[0].to_s, i[1].to_s, i[2].to_s, i[3].to_s, i[4].to_i)
		end
		# If no Meetup could be loaded, the contract was not respected
		abort
	end

	# Counts the number of positive or maybe answers
	fun count(db: OpportunityDB): Int do
		if id == -1 then return -1
		var count = 0
		var res = db.select("part_answers.value FROM part_answers WHERE part_answers.id_ans={id};")
		if meetup == null then meetup = load_meetup(db)
		for i in res do
			if meetup.answer_mode == 0 then
				count += i[0].to_i
			else
				if i[0].to_i == 2 then count += 1
			end
		end
		return count
	end

	# Counts the score for this particular answer
	fun score(db: OpportunityDB): Int do
		if id == -1 then return -1
		var score = 0
		var res = db.select("part_answers.value FROM part_answers WHERE part_answers.id_ans={id};")
		for i in res do
			score += i[0].to_i
		end
		return score
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
			if not db.execute("INSERT INTO answers (name, meetup_id) VALUES({name.html_escape.to_sql_string}, {m.id.to_sql_string});") then
				print "Cannot create {self} in database"
				print db.error or else "Unknown error"
				return false
			end
			id = db.last_insert_rowid
		else
			if not db.execute("UPDATE answers SET name=({name.html_escape.to_sql_string}) WHERE meetup_id={m.id.to_sql_string};") then
				print "Error updating {self} in database"
				print db.error or else "Unknown error"
				return false
			end
		end
		return true
	end

	redef fun to_s do return name
end