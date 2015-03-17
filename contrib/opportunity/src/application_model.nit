module application_model

import sqlite3
import sha1
import serialization

# A SQLiteDB object for `Opportunity`
class DB
	super Sqlite3DB

	new do return once new DB.open("opportunity")

	init open(x) do
		super

		create_db
	end

	# Creates the tables and triggers for Opportunity (SQLite3 DB)
	fun create_db do
		assert create_table("IF NOT EXISTS meetups (id CHAR(40) PRIMARY KEY, name TEXT, date TEXT, place TEXT, answer_mode INTEGER DEFAULT 0);") else
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

end

# Any kind of Database Object that can be persisted to the database
abstract class DBObject

	var db: DB = new DB
	# Commits the modifications done to the Object in the database
	fun commit: Bool is abstract

	fun delete: Bool is abstract
end

abstract class Model

	var db: DB = new DB

end