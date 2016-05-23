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

	private var lbl_user_options_title = new Label(parent=layout_user_options,
		text="Account options".t)

	private var lbl_welcome = new Label(parent=layout_user_options)
	private var but_logout = new Button(parent=layout_user_options, text="Logout".t)

	# Refesh displayed text
	fun refresh
	do
		lbl_user_options_title.size = 1.5
		lbl_welcome.set_user_name
		but_logout.enabled = app.user != null
	end

	init
	do
		but_logout.observers.add self
		refresh
	end

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

	# Main window layout
	var layout = new ListLayout(parent=self)

	private var lbl_welcome = new Label(parent=layout, text="Welcome")

	# Name
	private var name_line = new HorizontalLayout(parent=layout)
	private var lbl_name = new Label(parent=name_line, text="Username".t)
	private var txt_name = new TextInput(parent=name_line, text=app.user)

	# Pass
	private var pass_line = new HorizontalLayout(parent=layout)
	private var lbl_pass = new Label(parent=pass_line, text="Password".t)
	private var txt_pass = new TextInput(parent=pass_line, is_password=true)
	private var lbl_pass_desc = new Label(parent=layout,
		text="Passwords must be composed of at least 6 characters.".t)

	private var but_login = new Button(parent=layout, text="Login".t)

	# Email
	private var email_line = new HorizontalLayout(parent=layout)
	private var lbl_email = new Label(parent=email_line, text="Email".t)
	private var txt_email = new TextInput(parent=email_line)

	private var but_signup = new Button(parent=layout, text="Signup".t)

	private var lbl_feedback = new Label(parent=layout, text="")

	init
	do
		lbl_pass_desc.size = 0.5

		for c in [but_login, but_signup] do
			c.observers.add self
		end
	end

	redef fun on_event(event)
	do
		if debug then print "BenitluxWindow::on_event {event}"

		if event isa ButtonPressEvent then
			var sender = event.sender
			if sender == but_login or sender == but_signup then

				var name = txt_name.text
				if name == null or not name.name_is_ok then
					feedback "Invalid name".t
					return
				end

				var pass = txt_pass.text
				if pass == null or not pass.pass_is_ok then
					feedback "Invalid password".t
					return
				end

				if sender == but_login then
					(new LoginOrSignupAction(self, "rest/login?name={name}&pass={pass.pass_hash}")).start
				else if sender == but_signup then
					var email = txt_email.text
					if email == null or email.is_empty then
						feedback "Invalid email".t
						return
					end

					(new LoginOrSignupAction(self, "rest/signup?name={name}&pass={pass.pass_hash}&email={email}")).start
				end
			end
		end

		super
	end

	# Show lasting feedback to the user in a label
	fun feedback(text: String) do lbl_feedback.text = text
end

# ---
# Async RESTful actions

# Async request for login in or signing up
class LoginOrSignupAction
	super WindowHttpRequest

	redef type W: SignupWindow

	init do affected_views.add_all([window.but_login, window.but_signup])

	redef fun on_load(res)
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
