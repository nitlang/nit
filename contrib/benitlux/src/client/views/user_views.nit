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
# limitations under the License.

# User preference window and other user-related view
module user_views

import base

redef class Label
	# Update the content of `lbl_welcome`
	fun set_user_name
	do
		var name = app.user
		self.text = if name != null then
			"Logged in as %0".t.format(name)
		else "Not logged in".t
	end

	# Set `text` to welcome an authentified user or invite to authentify
	fun set_welcome
	do
		var name = app.user
		self.text = if name != null then
			"Welcome %0".t.format(name)
		else ""
	end
end

# User preference window
class UserWindow
	super Window

	# Main window layout
	var layout = new ListLayout(parent=self)

	private var layout_user_options = new VerticalLayout(parent=layout)

	private var user_options_header = new SectionHeader(parent=layout_user_options)
	private var lbl_user_options_title = new SectionTitle(parent=user_options_header,
		text="Account options".t)

	var lbl_welcome = new DescLabel(parent=layout_user_options)
	private var but_logout = new Button(parent=layout_user_options, text="Logout".t)

	# Refesh displayed text
	fun refresh
	do
		lbl_welcome.set_user_name
		but_logout.enabled = app.user != null
	end

	init do refresh

	redef fun on_event(event)
	do
		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_logout then
				app.user = null
				app.token = "none"
				app.on_log_in
				refresh
			end
		end

		super
	end
end

# Window for signing up a new user or logging in
class SignupWindow
	super Window

	private var list = new ListLayout(parent=self)

	private var login_header = new SectionHeader(parent=list)
	private var login_title = new SectionTitle(parent=login_header, text="Login".t)

	# Layout for the top form
	var layout_login = new SignupForm(parent=list)

	# ---
	# First the login options

	# Name
	private var name_line = new HorizontalLayout(parent=layout_login)
	private var lbl_name = new Label(parent=name_line, text="Username".t)
	private var txt_name = new TextInput(parent=name_line, text=app.user)

	# Password
	private var pass_line = new HorizontalLayout(parent=layout_login)
	private var lbl_pass = new Label(parent=pass_line, text="Password".t)
	private var txt_pass = new TextInput(parent=pass_line, is_password=true)
	private var lbl_pass_desc = new DescLabel(parent=layout_login, size = 0.5,
		text="Passwords must be composed of at least 6 characters.".t)

	private var but_login = new Button(parent=layout_login, text="Login".t)

	private var lbl_feedback = new DescLabel(parent=layout_login, text=" ")

	# ---
	# Then, the signup options

	private var signup_header = new SectionHeader(parent=list)
	private var signup_title = new SectionTitle(parent=signup_header, text="Signup".t)

	# Layout for the 2nd form
	var layout_signup = new SignupForm(parent=list)

	private var lbl_signup_desc = new DescLabel(parent=layout_signup, size = 0.5,
		text="Fill the following fields to sign up.".t)

	# Repeat password
	private var pass_line2 = new HorizontalLayout(parent=layout_signup)
	private var lbl_pass2 = new Label(parent=pass_line2, text="Repeat password".t)
	private var txt_pass2 = new TextInput(parent=pass_line2, is_password=true)

	# Email
	private var email_line = new HorizontalLayout(parent=layout_signup)
	private var lbl_email = new Label(parent=email_line, text="Email".t)
	private var txt_email = new TextInput(parent=email_line)

	private var but_signup = new Button(parent=layout_signup, text="Signup".t)

	redef fun on_event(event)
	do
		if debug then print "BenitluxWindow::on_event {event}"

		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_login or sender == but_signup then

				var name = txt_name.text
				if name == null or not name.name_is_ok then
					feedback "Invalid username.".t
					return
				end

				var pass = txt_pass.text
				if pass == null or not pass.pass_is_ok then
					feedback "Invalid password.".t
					return
				end

				if sender == but_login then
					feedback "Logging in...".t
					(new LoginOrSignupAction(self, "rest/login?name={name.to_percent_encoding}&pass={pass.pass_hash}")).start
				else if sender == but_signup then
					if pass != txt_pass2.text then
						feedback "Passwords do not match.".t
						return
					end

					var email = txt_email.text
					if email == null or email.is_empty then
						feedback "Invalid email".t
						return
					end

					feedback "Signing up...".t
					(new LoginOrSignupAction(self, "rest/signup?name={name.to_percent_encoding}&pass={pass.pass_hash}&email={email.to_percent_encoding}")).start
				end
			end
		end

		super
	end

	# Show lasting feedback to the user in a label
	fun feedback(text: String) do lbl_feedback.text = text
end

# Form for login or signup
class SignupForm
	super VerticalLayout
	super ItemView
end

# ---
# Async RESTful actions

# Async request for login in or signing up
class LoginOrSignupAction
	super WindowHttpRequest

	redef type W: SignupWindow

	init do affected_views.add_all([window.but_login, window.but_signup])

	redef fun on_load(res, status)
	do
		if intercept_error(res) then return

		if not res isa LoginResult then
			on_fail new Error("Server sent unexpected data {res or else "null"}")
			return
		end

		app.token = res.token
		app.user = res.user.name

		app.on_log_in
	end

	redef fun feedback(text) do window.feedback text
end
