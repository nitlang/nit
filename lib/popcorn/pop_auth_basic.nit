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

# Basic authentification API
#
# This API procides a simple authentification mechnism for Popcorn apps.
# Users can register with a valid email and then login with a couple login/password.
# Registered users are stored thanks to a `popcorn_repos::Repository` with configurable backend.
#
# ## User registration and login process
#
# The basic registration process is simple:
# 1. use `AuthBasicSignin` to create new users
# 2. use `AuthBasicLogin` to login registered users
# 3. use `AuthBasicLogout` to log out previously logged in users
#
# When no email validation, the configuration is minimal:
# ~~~nit
# # Prepare the config from command args
# var config = new MyConfig
# config.parse_options(args)
#
# var app = new App
# app.use_before("/*", new SessionInit)
# app.use("/api/auth", new AuthBasicRouter(config))
# ~~~
#
# ## Lost password process
#
# The popcorn auth basic API is shipped with a *reset password* process:
# 1. use `AuthBasicLostPassword` to send a reset password email to the user
# 2. the user clicks on the link in it's email and lands on `AppConfig::validation_redirection_uri`
#    (you have to implement this route yourself to provide some kind a form so the
#    user can input his new email, see `examples/auth_basic` for how to implement this route).
# 3. your custom route use `AuthBasicResetPassword` to check the reset token and
#    and change the password.
#
# To enable the lost password process, you must provide the URI used to change passwords:
# ~~~nit
# config.lost_password_uri = "http://localhost:3000/my/route/to/change/passwords/"
# ~~~
#
# When sending recovery emails, popcorn will provide a link to
# `http://localhost:3000/my/route/to/change/passwords?token=TOKEN`.
# You must pass the `TOKEN` to `AuthBasicResetPassword` along with the login and
# new password.
#
# ## Email validation process
#
# You can use basic auth API to check email addresses with the email validation process.
#
# Process:
# 1. When registration process is completed through `AuthBasicSignin`, the user
#    will receive an email with a validation link.
# 2. When the user clicks the link, he lands on `AppConfig::validation_uri` with
#    AuthBasicEmailValidation (you don't have to implement this route).
# 3. AuthBasicEmailValidation checks the token from the linked email and redirects
#    the user to `AppConfig::validation_redirection_uri`.
#	 (you have to implement this route to inform the user of the validation process result)
#
# AuthBasicEmailValidation will pass the following get parameters to your redirection route:
#  * `?email_validation=success`: if the validation process was executed successfully
#  * `?email_validation=error_cause`: if something went wrong
#
# Configuration example:
# ~~~nit
# # Set basic auth config
# config.email_from = "Test <test@moz-code.org>"
# config.validation_email_subject = "Welcome to my site"
# config.validation_uri = "http://localhost:3000/api/auth/email"
# config.validation_redirection_uri = "/" # here we use the index as confirmation page
# config.validate_emails = true
#
# # We add the basic auth router to our app
# app.use("/api/auth", new AuthBasicRouter(config))
# ~~~
#
# For a full example see `examples/auth_basic`.
#
# TODO merge and unify with other authentification process (github, shib)
module pop_auth_basic

import popcorn
import popcorn::pop_config
import popcorn::pop_validation
import popcorn::pop_repos

import template::macro
import sendmail

##########
# Config #
##########

redef class AppConfig

	# Repository used for authentification and user creation
	#
	# Here an example on how to set this variable with a MongoDB repository:
	# ~~~nitish
	# class MyAuthConfig
	#	super AppConfig
    #
	#	# Here we use a Mongo repository for storing the users
	#	var users = new UserRepo(db.collection("users")) is lazy
    #
	#	# Pass the mongo repository as the `auth_repo` used for signin/login
	#	redef var auth_repo = users is lazy
	# end
	# ~~~
	#
	# See `AuthRepository` for more details on how to implement the basic auth repo.
	var auth_repo: AuthRepository is noinit, writable

	# Validate user email address during signin
	#
	# Warning: This option requires `sendmail` to be installed and configured on the host.
	#
	# If this option is set to `true`, popcorn will automatically send a validation
	# email to all newly registered users.
	# The user will have to click the link in the email to validate is email address.
	#
	# Default is `false`.
	#
	# See `require_valid_email`.
	var validate_emails = false is writable

	# Require valid emails for login
	#
	# If this option is set to `true`, popcorn will only allow login for users with
	# valid email.
	#
	# Default is `false`.
	#
	# This option requires `validate_emails` to be set at `true`.
	var require_valid_email = false is writable

	# Email from address
	#
	# The sender email address used for the validation and lost password emails.
	var email_from = "popcorn <popcorn@localhost>" is writable

	# Validation email subject line
	#
	# The subject line user for the validation email.
	var validation_email_subject = "Popcorn email validation" is writable

	# Validation email body
	#
	# The validation email body in `templates::macro` format.
	#
	# Available macros:
	# * `%URI%` the email validation URI generated by popcorn
	# * `%LOGIN%` the login provided by the user
	# * `%EMAIL%` the email provided by the user
	# * `%HOSTNAME%` the popcorn app host name
	#
	# If no macro `%URI%` is found in the template, the validation link will
	# be appended at the end of the message.
	var validation_email_body = """
<h1>Welcome %LOGIN%,</h1>

<p>We're excited to have you on board!</p>

<p>But first thing first, we need you to verify your e-mail address.
Please click on the link below:</p>

<p><a href='%URI%'>%URI%</a></p>

<p>Thank you!<br>

<p><small>This e-mail was sent to you following the registration of %EMAIL%
on <a href='%HOSTNAME%'>%HOSTNAME%</a></small></p>""" is writable

	# URI used for email link validation
	#
	# Will be appended with the email validation key.
	#
	# Default is "http://{app_hostname}/email"
	#
	# Depends on the route used for `AuthBasicRouter`.
	# For example, if you set the auth router on `/auth`, you must modify this URI
	# to reflect it:
	#
	# ~~~nit
	# var config = new AppConfig
	# config.parse_options(args)
	#
	# var app = new App
	# app.use("/auth", new AuthBasicRouter(config))
	# config.validation_uri = "{config.app_hostname}/auth/email"
	# ~~~
	var validation_uri = "http://{app_hostname}/email" is lazy, writable

	# URI to redirect the user to after email validation
	#
	# Default is "/".
	#
	# Once the user has clicked the validation link into his email, he will be
	# redirected to that URI.
	#
	# Popcorn will append the following parameters:
	#  * `?email_validation=success`: if the validation process was executed successfully
	#  * `?email_validation=error_cause`: if something went wrong
	var validation_redirection_uri = "/" is writable

	# Send validation email to user
	#
	# See `validate_emails`
	fun send_validation_email(user: User) do
		var token = md5_salt(128)
		var uri = "{validation_uri}/{user.email.encode_base64}/{token}"

		var tpl = new TemplateString(validation_email_body)
		if tpl.has_macro("LOGIN") then tpl.replace("LOGIN", user.login)
		if tpl.has_macro("EMAIL") then tpl.replace("EMAIL", user.email)
		if tpl.has_macro("HOSTNAME") then tpl.replace("HOSTNAME", app_hostname)
		if tpl.has_macro("URI") then
			tpl.replace("URI", uri)
		else
			tpl.addn("<a href=\"{uri}\">{uri}</a>")
		end
		var body = tpl.write_to_string

		var mail = new Mail(email_from, validation_email_subject, body)
		mail.to.add user.email
		mail.header["Content-Type"] = "text/html"
	    mail.send

		user.email_is_valid = false
		user.email_validation_token = token
		auth_repo.save user
	end

	# Lost password email subject line
	#
	# The subject line used for the lost password email.
	var lost_password_email_subject = "Popcorn password reset" is writable

	# Lost password email body
	#
	# The lost password email body in `templates::macro` format.
	#
	# Available macros:
	# * `%URI%` the reset password URI generated by popcorn
	# * `%LOGIN%` the login provided by the user
	# * `%EMAIL%` the email provided by the user
	# * `%HOSTNAME%` the popcorn app host name
	#
	# If no macro `%URI%` is found in the template, the reset password link will
	# be appended at the end of the message.
	var lost_password_email_body = """
<h1>Hi %LOGIN%,</h1>

<p>Forgot something?</p>

<p>Click on the link below to reset your password:</p>
<p><a href='%URI%'>%URI%</a></p>

<p>Thank you!<br>""" is writable

	# URI used for email password reset
	#
	# Will be appended with `?token=TOKEN` where `TOKEN` is the reset password
	# token generated by nitcorn.
	#
	# Default is "http://{app_hostname}/password/reset"
	#
	# Depends on the route used for password reseting (you have to implement that route).
	#
	# See `AuthBasicResetPassword` for more details on how reset user passwords.
	# See `examples/basic_auth` for an example on how to handle password reset.
	var lost_password_uri = "http://{app_hostname}/password/reset" is lazy, writable

	# Send the lost password email to `user`
	fun send_lost_password_email(user: User) do
		var token = md5_salt(128)
		var uri = "{lost_password_uri}?token={token}"

		var tpl = new TemplateString(lost_password_email_body)
		if tpl.has_macro("LOGIN") then tpl.replace("LOGIN", user.login)
		if tpl.has_macro("EMAIL") then tpl.replace("EMAIL", user.email)
		if tpl.has_macro("HOSTNAME") then tpl.replace("HOSTNAME", app_hostname)
		if tpl.has_macro("URI") then
			tpl.replace("URI", uri)
		else
			tpl.addn("<a href=\"{uri}\">{uri}</a>")
		end
		var body = tpl.write_to_string

		var mail = new Mail(email_from, lost_password_email_subject, body)
		mail.to.add user.email
		mail.header["Content-Type"] = "text/html"
	    mail.send

		user.reset_password_token = token
		auth_repo.save user
	end

	# Encrypt password with a random md5 salt
	#
	# Returns the couple(hash, salt).
	fun encrypt_password(password: String): Couple[String, String] do
		var salt = md5_salt(16)
		var hash = "{password}+{salt}".md5
		return new Couple[String, String](hash, salt)
	end
end

#########
# Model #
#########

# A User that can signin/login/logout on the app
class User
	super RepoObject
	serialize

	# User unique id
	var login: String

	# User email, must also be unique
	var email: String

	# User salted and hashed password
	var password_hash: String

	# Random salt used for password hashing
	var salt: String

	# Is the user email validated?
	#
	# See `AppConfig::validate_emails`
	var email_is_valid = false

	# Email validation token or null if not in validation process
	private var email_validation_token: nullable String = null

	# Reset password token or null if not in validation process
	private var reset_password_token: nullable String = null
end

# Authentification repository
#
# You must provide one to the basic auth api.
#
# Independently of your backend database, you must implement the following services:
# * `find_by_login`
# * `find_by_email`
#
# Here an example with a MongoDB repository:
# ~~~nit
# The user repository used has to implement the AuthRepository methods
# class MyAuthRepo
#	super AuthRepository
#	super MongoRepository[User]
#
#	redef fun find_by_login(login) do
#		return find((new MongoMatch).eq("login", login))
#	end
#
#	redef fun find_by_email(email) do
#		return find((new MongoMatch).eq("email", email))
#	end
# end
# ~~~
interface AuthRepository
	super Repository[User]

	# Get the user with `login` or `null` if not found
	#
	# Used to check logins unicity and for the login process.
	fun find_by_login(login: String): nullable User is abstract

	# Get the user with `email` or `null` if not found
	#
	# User to check emails unicity and for the email validation and reset password processes.
	fun find_by_email(email: String): nullable User is abstract

	# Try credentials against the repo
	#
	# Returns the user that matches the credentials or `null` if the authentification failed.
	private fun try_credentials(login, password: String): nullable User do
		var user = find_by_login(login)
		if user == null then return null
		var hash = "{password}+{user.salt}".md5
		if hash != user.password_hash then return null
		return user
	end
end

redef class Session
	# Authentified user in the current session or `null` if no authentification
	var user: nullable User = null is writable
end

# Authentification API router
#
# Use this router in your app to enable basic authentification.
#
# ~~~nit
# # Prepare the config from command args
# var config = new MyConfig
# config.parse_options(args)
#
# # Set basic auth config
# config.email_from = "Test <test@nitlanguage.org>"
# config.lost_password_uri = "http://localhost:3000/reset_password"
#
# var app = new App
# app.use_before("/*", new SessionInit)
#
# # We add the basic auth router to our app
# app.use("/api/auth", new AuthBasicRouter(config))
# # add other routes...
# ~~~
class AuthBasicRouter
	super Router

	# App configuration
	var config: AppConfig

	redef init do
		use("/login", new AuthBasicLogin(config))
		use("/logout", new AuthBasicLogout(config))
		use("/signin", new AuthBasicSignin(config))
		if config.validate_emails then
			use("/email/:email/:token", new AuthBasicEmailValidation(config))
		end
		use("/password/lost", new AuthBasicLostPassword(config))
		use("/password/reset", new AuthBasicResetPassword(config))
		use("/", new UserHandler(config))
	end
end

# Abstract auth basic handler
#
# Provide common services for auth basic API.
abstract class AuthBasicHandler
	super Handler

	# App configuration
	#
	# Used to access the auth repo and various configuration options related to auth basic API.
	var config: AppConfig

	# Validator used to check body input
	#
	# Here we use the `pop_validation` module to validate JSON object from request body.
	# See `SigninValidator` as an example.
	var validator: nullable ObjectValidator = null

	# Validate body input with `validator`
	#
	# Try to validate the request body as a JsonObject using `validator`:
	# * Returns the validated string input if the result of the validation is ok.
	# * Answers a json error and returns `null` if something went wrong.
	# * If no `validator` is set, returns the body without validation.
	fun validate_body(req: HttpRequest, res: HttpResponse): nullable String do
		var body = req.body

		var validator = self.validator
		if validator == null then return body

		if not validator.validate(body) then
			# print validator.validation.to_json
			res.json(validator.validation, 400)
			return null
		end
		return body
	end

	# Deserialize the request body
	#
	# Returns the deserialized form or `null` if something went wrong.
	# See `BODYOBJECT` and `new_body_object`.
	#
	# This part is not really elegant but it avoid a lot of code duplication.
	fun deserialize_body(req: HttpRequest, res: HttpResponse): nullable BODYOBJECT do
		var body = req.body
		var deserializer = new JsonDeserializer(body)
		var form = new_body_object(deserializer)
		if not deserializer.errors.is_empty then
			print deserializer.errors.join("\n")
			res.json_error("Bad input", 400)
			return null
		end
		return form
	end

	# Kind of objects returned by `deserialize_body`
	#
	# Defined in each sub handler depending on the kind of object sent in request bodies.
	type BODYOBJECT: Serializable

	# Return a new BODYOBJECT from a deserializer.
	#
	# Defined in each sub handler depending on the king og object sent in request bodies.
	fun new_body_object(deserializer: JsonDeserializer): BODYOBJECT is abstract
end

##########
# Signin #
##########

# Signin: register a new user
#
# POST: register a user from a SigninForm and return the created user.
#	expected body input: see `SigninForm`
#	validation: see `SigninValidator`
#	return: the newly created user
#	errors:
#		400: bad input / validation error
#		500: session error
class AuthBasicSignin
	super AuthBasicHandler

	redef var validator = new SigninValidator(config.auth_repo) is lateinit

	redef type BODYOBJECT: SigninForm

	redef fun new_body_object(des) do return new SigninForm.from_deserializer(des)

	# Create a new user from `form` data.
	#
	# Encrypts the password with `AppConfig::encrypt_password` and save the user
	# in `AppConfig::auth_repo`.
	fun create_user(form: SigninForm): User do
		var creds = config.encrypt_password(form.password1)
		var user = new User(form.login, form.email, creds.first, creds.second)
		config.auth_repo.save user
		return user
	end

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = create_user(form)

		if config.validate_emails then
			config.send_validation_email(user)
		end

		if not config.require_valid_email then
			var session = req.session
			if session == null then
				res.json_error("No session", 500)
				return
			end
			session.user = user
		end

		res.json user
	end
end

# Expected input for `AuthBasicSignin`
class SigninForm
	serialize

	# User desired login
	var login: String

	# User password
	var password1: String

	# Repeat the user password
	var password2: String

	# User email
	#
	# Popcorn will try to validate it if `AppConfig::validate_emails == true`.
	var email: String
end

# Validate input for `SigninForm`
class SigninValidator
	super ObjectValidator

	# AuthRepository used to check login and email unicity
	var auth_repo: AuthRepository

	redef init do
		add new UniqueLoginField(auth_repo=auth_repo, field="login", min_size=4, max_size=255)
		add new StringField("password1", min_size=6, max_size=255)
		add new FieldsMatch("password2", "password1")
		add new UniqueEmailField(auth_repo=auth_repo, field="email")
	end
end

# Check login format and unicity
class UniqueLoginField
	super UniqueField

	# AuthRepository used to check login unicity
	var auth_repo: AuthRepository

	redef fun check_unicity(v, field, val) do
		var user =auth_repo.find_by_login(val)
		if user != null then
			v.validation.add_error(field, "Login `{val}` already used")
			return false
		end
		return true
	end
end

# Check email format and unicity
class UniqueEmailField
	super EmailField
	super UniqueField

	# AuthRepository used to check email unicity
	var auth_repo: AuthRepository

	redef fun check_unicity(v, field, val) do
		var user = auth_repo.find_by_email(val)
		if user != null then
			v.validation.add_error(field, "Email `{val}` already used")
			return false
		end
		return true
	end
end

#########
# Login #
#########

# Login: try to login a registered user
#
# POST: submit user credential from a LoginForm and return the logged in user.
#	expected body input: see `LoginForm`
#	validation: see `LoginValidator`
#	return: the logged in user
#	errors:
#		400: bad input / form validation error
#		403: bad credentials / email not validated
#		500: session error
class AuthBasicLogin
	super AuthBasicHandler

	redef var validator = new LoginValidator is lateinit

	redef type BODYOBJECT: LoginForm

	redef fun new_body_object(des) do return new LoginForm.from_deserializer(des)

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = config.auth_repo.try_credentials(form.login, form.password)
		if user == null then
			res.json_error("Bad credentials", 403)
			return
		end

		if config.require_valid_email and not user.email_is_valid then
			res.json_error("Valid email required", 403)
			return
		end

		var session = req.session
		if session == null then
			res.json_error("No session", 500)
			return
		end
		session.user = user
		res.json user
	end
end

# Expected input for `AuthBasicLogin`
class LoginForm
	serialize

	# User login
	var login: String

	# User password (unhashed/unsalted)
	var password: String
end

# Validate `LoginForm` inputs
class LoginValidator
	super ObjectValidator

	redef init do
		add new StringField("login", min_size=4, max_size=255)
		add new StringField("password", min_size=6, max_size=255)
	end
end

##########
# Logout #
##########

# Logout: try to log out a logged in user
#
# GET: log out the logged in user.
#	return: true if the user was logged out.
#	errors:
#		403: no current session
class AuthBasicLogout
	super AuthBasicHandler

	redef fun get(req, res) do
		var session = req.session
		if session == null then
			res.json_error("No session", 403)
			return
		end
		session.user = null
		res.json true
	end
end

####################
# Email Validation #
####################

# Email validation: validate a user email from a validation link.
#
# This is the landing route for a user that clicks on a validation link from it's
# email.
#
# GET: submit user validation email and token from get args
#	intputs:
#		get arg `email`: base64 encoded email to validate
#		get arg `token`: popcorn generated token for email validation
#
# Once the validation process is over, the user will be redirected to
# `AppConfig::validation_redirection_uri`.
# You must implement the redirection route yourself to inform the user that the validation
# process was successful or if there was errors.
#
# Popcorn will pass the following parameters to your route:
#  * `?email_validation=success`: if the validation process was executed successfully
#  * `?email_validation=error_cause`: if something went wrong
class AuthBasicEmailValidation
	super AuthBasicHandler

	redef fun get(req, res) do
		var email = req.param("email")
		var token = req.param("token")
		var uri = config.validation_redirection_uri

		if email == null or token == null then
			uri = "{uri}?email_validation=bad_parameters"
			res.redirect uri
			return
		end

		var user = config.auth_repo.find_by_email(email.decode_base64.to_s)
		if user == null then
			uri = "{uri}?email_validation=bad_email"
			res.redirect uri
			return
		end

		if token != user.email_validation_token then
			uri = "{uri}?email_validation=bad_token"
			res.redirect uri
			return
		end

		user.email_is_valid = true
		user.email_validation_token = null
		config.auth_repo.save(user)

		var session = req.session
		if session == null then
			res.json_error("No session", 500)
			return
		end
		session.user = user

		uri = "{uri}?email_validation=success"
		res.redirect uri
	end
end

##################
# Lost passwords #
##################

# Send the reset password email to user
#
# POST: submit email for user to reset the password for
#	expected body input: see `LostPasswordForm`
#	validation: see `LostPasswordValidator`
#	return: a message explaining that the email was sent
#	errors:
#		400: bad input / form validation error
#		404: email not found
#
# See `AppConfig::send_lost_password_email` for more details on the lost password process.
class AuthBasicLostPassword
	super AuthBasicHandler

	redef var validator = new LostPasswordValidator is lateinit

	redef type BODYOBJECT: LostPasswordForm

	redef fun new_body_object(des) do return new LostPasswordForm.from_deserializer(des)

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = config.auth_repo.find_by_email(form.email)
		if user == null then
			res.json_error("Email not found", 404)
			return
		end

		config.send_lost_password_email(user)

		var message = new JsonObject
		message["message"] = "An email was sent to {form.email}"
		res.json message
	end
end

# Expected input for `AuthBasicLostPassword`
class LostPasswordForm
	serialize

	# The email of the user who forgot is password
	var email: String
end

# Validate `LostPasswordForm`
class LostPasswordValidator
	super ObjectValidator

	redef init do
		add new EmailField("email")
	end
end

# Change password for user (reset process)
#
# POST: submit email new password and reset token
#	expected body input: see `ResetPasswordForm`
#	validation: see `ResetPasswordValidator`
#	return: the update `User` object
#	errors:
#		400: bad input / form validation error
#		403: bad token
#		404: user not found
class AuthBasicResetPassword
	super AuthBasicHandler

	redef var validator = new ResetPasswordValidator is lateinit

	redef type BODYOBJECT: ResetPasswordForm

	redef fun new_body_object(des) do return new ResetPasswordForm.from_deserializer(des)

	redef fun post(req, res) do
		var body = validate_body(req, res)
		if body == null then return

		var form = deserialize_body(req, res)
		if form == null then return

		var user = config.auth_repo.find_by_login(form.login)
		if user == null then
			res.json_error("User not found", 404)
			return
		end

		if form.reset_token != user.reset_password_token then
			res.json_error("Bad token", 403)
			return
		end
		var creds = config.encrypt_password(form.password1)
		user.password_hash = creds.first
		user.salt = creds.second
		user.reset_password_token = null
		config.auth_repo.save user

		var session = req.session
		if session == null then
			res.json_error("No session", 500)
			return
		end
		session.user = user

		res.json user
	end
end

# Expected input for `AuthBasicResetPassword`
class ResetPasswordForm
	serialize

	# Reset token allocated by popcorn (the one provded in the email)
	var reset_token: String

	# User login (matching the reset token)
	var login: String

	# New password
	var password1: String

	# Repeat new password
	var password2: String
end

# Validate `ResetPasswordForm` inputs.
class ResetPasswordValidator
	super ObjectValidator

	redef init do
		add new StringField("reset_token", required=true, min_size=128, max_size=128)
		add new StringField(field="login", min_size=4, max_size=255)
		add new StringField("password1", min_size=6, max_size=255)
		add new FieldsMatch("password2", "password1")
	end
end

#################
# User handlers #
#################

# Current session handler.
#
# GET: return the logged in user if any
#	errors:
#		401: not logged in
class UserHandler
	super AuthBasicHandler

	# Get the `user` of the current session or `null` if not authenticated
	fun get_authentification(req: HttpRequest, res: HttpResponse): nullable User do
		var session = req.session
		if session == null then return null
		return session.user
	end

	# Check if a user is authenticated for the current session and return it
	#
	# If no user is authenticated, answers 401 error and returns null.
	#
	# Use this method to restrict handler access to authenticated users only.
	#
	# ~~~
	# class SomeRestrictedHandler
	#	super UserHandler
	#
	#	# Restricted route to authenticated users
	#	redef fun get(req, res) do
	#		var user = require_authentification(req, res)
	#		if user == null then return # Let popcorn return a 401 error if not authenticated
	#
	#		# Do something with we authenticated user...
	#	end
	# end
	# ~~~
	fun require_authentification(req: HttpRequest, res: HttpResponse): nullable User do
		var user = get_authentification(req, res)
		if user == null then
			res.json_error("Unauthorized", 401)
			return null
		end
		return user
	end

	redef fun get(req, res) do
		var user = require_authentification(req, res)
		if user == null then return
		res.json user
	end
end
