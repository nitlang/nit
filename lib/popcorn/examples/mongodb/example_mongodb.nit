# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014-2015 Alexandre Terrasa <alexandre@moz-code.org>
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
# limitations under the License.

module example_mongodb is example

import popcorn
import mongodb
import template

class UserList
	super Handler

	var db: MongoDb

	redef fun get(req, res) do
		var users = db.collection("users").find_all(new JsonObject)

		var tpl = new Template
		tpl.add """
		<h1>Users</h1>

		<h2>Add a new user</h2>
		<form action="/" method="POST">
			<input type="text" name="login" />
			<input type="password" name="password" />
			<input type="submit" value="save" />
		</form>

		<h2>All users</h2>
		<table>"""
		for user in users do
			tpl.add """<tr>
			<td>{{{user["login"] or else "null"}}}</td>
			<td>{{{user["password"] or else "null"}}}</td>
			</tr>"""
		end
		tpl.add "</table>"
		res.html(tpl)
	end

	redef fun post(req, res) do
		var json = new JsonObject
		json["login"] = req.post_args["login"]
		json["password"] = req.post_args["password"]
		db.collection("users").insert(json)
		res.redirect("/")
	end
end

var mongo = new MongoClient("mongodb://mongo:27017/")
var db = mongo.database("mongo_example")

var app = new App
app.use("/", new UserList(db))
app.listen("localhost", 3000)
