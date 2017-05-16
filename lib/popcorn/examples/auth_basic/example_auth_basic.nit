# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>
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

import popcorn::pop_auth_basic

# We need a config that define the `auth_repo`
class MyConfig
	super AppConfig

	# Here we use a Mongo repository for storing the users
	var users = new UserRepo(db.collection("users")) is lazy

	# Pass the mongo repository as the `auth_repo` used for signin/login
	redef var auth_repo = users is lazy
end

# The user repository used to implement the AuthRepository methods
class UserRepo
	super AuthRepository
	super MongoRepository[User]

	# So the basic auth know how to fetch a user by it's login
	redef fun find_by_login(login) do
		return find((new MongoMatch).eq("login", login))
	end

	# So the basic auth know how to fetch a user by it's email
	redef fun find_by_email(email) do
		return find((new MongoMatch).eq("email", email))
	end
end

# We add custom fields to the auth User
redef class User
	serialize

	# For example, we need to configure a unique id for Mongo
	redef var id = login is lateinit, serialize_as "_id"
end

# Here an example of handler that require an authenticated user (logged in).
class MyRestrictedHandler
	super UserHandler

	redef fun get(req, res) do
		# Check that the user is correctly logged in
		var user = get_authentification(req, res)
		if user == null then return # if not, let popcorn return the authentification error

		res.json """{"message": "Welcome to the restricted area!"}""".to_json
	end
end

# Prepare the config from command args
var config = new MyConfig
config.parse_options(args)

# Set basic auth config
config.email_from = "Test <test@moz-code.org>"
config.validation_email_subject = "Welcome to my site"
config.validation_uri = "http://localhost:3000/api/auth/email"
config.validation_redirection_uri = "/"
config.validate_emails = true
config.lost_password_uri = "http://localhost:3000/"

var app = new App
app.use_before("/*", new SessionInit)

# We add the basic auth router to our app
app.use("/api/auth", new AuthBasicRouter(config))

# We also use the restricted access handler as example
app.use("/api/restricted", new MyRestrictedHandler(config))

# See index.html for the frontend routines
app.use("/", new StaticHandler("www/"))

app.listen("0.0.0.0", 3000)
