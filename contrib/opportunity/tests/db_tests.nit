# This file is part of NIT ( https://nitlanguage.org ).
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

# Tests for the model of Opportunity
module db_tests

import opportunity_model

redef class OpportunityDB

	fun wipe do
		execute("DROP TABLE people;")
		execute("DROP TABLE meetups;")
		execute("DROP TABLE answers;")
		execute("DROP TABLE part_answers;")
		execute("DROP INDEX answers_clean;")
		execute("DROP INDEX ans_clean;")
		execute("DROP INDEX ppl_clean;")
	end

end

print "Opening DB"

var db = new OpportunityDB.open("opportunity")

print "DB opened"

db.wipe

print "Wiped"

db.close

db = new OpportunityDB.open("opportunity")

var hj = new People("Jack", "Handsome")

var m = new Meetup("Awaken the warrior", "2024/05/28", "Vault of the Warrior", 0)
assert m.commit(db)

var vh = new People("Hunter", "Vault")

var ll = new People("", "Lilith")

var y = new Answer("Yes")
y.meetup = m
y.commit(db)

var n = new Answer("No")
n.meetup = m
n.commit(db)

var h = new Answer("I have no choice, I'm a hostage")
h.meetup = m
h.commit(db)

hj.answer(y) = 1
hj.answer(n) = 0
hj.answer(h) = 0

vh.answer(y) = 1
vh.answer(n) = 0
vh.answer(h) = 0

ll.answer(y) = 1
ll.answer(n) = 0
ll.answer(h) = 1

hj.commit db
vh.commit db
ll.commit db

assert hj.commit(db)
assert vh.commit(db)
assert ll.commit(db)

print db.find_meetup_by_id(m.id) or else "null"

for i in m.participants(db) do
	print "Answers for {i.to_s.trim}"
	i.load_answers(db, m)
	for k,v in i.answers do
		print "{k.to_s.trim} => {v.to_s.trim}"
	end
end

db.close
