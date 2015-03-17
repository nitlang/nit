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
	# 0 = No
	# 1 = Maybe
	# 2 = Yes
	var answers: Map[Answer, Int] = new HashMap[Answer, Int]

	# To be used internally when fetching the `People` in Database
	private init from_db(id: Int, name, surname: String) do
		init(name, surname)
		self.id = id
	end

	# Changes an answer `ans` (or adds it)
	fun answer=(ans: Answer, resp: Int) do
		answers[ans] = resp
	end

	# Loads the answers for a Meetup
	#
	# NOTE: If `self` does not exist in the Database, no answers will be fetched
	fun load_answers(db: OpportunityDB, meetup: Meetup) do
		self.answers = new HashMap[Answer, Int]
		var req = db.select("answers.id, answers.name, part_answers.value FROM part_answers, answers WHERE part_answers.id_part={id} AND answers.id=part_answers.id_ans AND answers.meetup_id={meetup.id.html_escape.to_sql_string} GROUP BY answers.id;")
		for i in req do
			var ans = new Answer.from_db(i[0].to_i, i[1].to_s)
			answers[ans] = i[2].to_i
		end
	end

	redef fun to_s do return "{surname.capitalized} {name.capitalized}"

	redef fun commit(db) do
		if id == -1 then
			if not db.execute("INSERT INTO people (name,surname) VALUES ({name.html_escape.to_sql_string}, {surname.html_escape.to_sql_string});") then
				print "Error while adding people {self}"
				print db.error or else "Unknown error"
				return false
			end
			id = db.last_insert_rowid
		else
			if not db.execute("UPDATE people SET name={name.html_escape.to_sql_string}, surname={surname.html_escape.to_sql_string} WHERE ID={id};") then
				print "Error while updating people {self}"
				print db.error or else "Unknown error"
				return false
			end
		end
		for i,j in answers do
			if i.id == -1 then i.commit(db)
			var val = j
			var s = db.select("* FROM part_answers WHERE id_part={id} AND id_ans={i.id}")
			if s != null and s.iterator.is_ok then
				if not db.execute("UPDATE part_answers SET value={j} WHERE id_part={id} AND id_ans={i.id};") then
					print "Error while updating part_answers {id}|{i.id} = {j}"
					print db.error or else "Unknown error"
					return false
				end
				continue
			end
			if not db.execute("INSERT INTO part_answers(id_part, id_ans, value) VALUES ({id},{i.id},{val});") then
				print("Error while adding part_answers {id}|{i.id}|{j}")
				print db.error or else "Unknown error"
				return false
			end
		end
		return true
	end
end
