/* This file is part of NIT ( http://www.nitlanguage.org ).

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   Documentation generator for the nit language.
   Generate API documentation in HTML format from nit source code.
*/

define([
	"jquery",
	"plugins/github/ui",
	"plugins/github/modalbox",
], function($, UI, ModalBox) {
	var LoginBox = {
		init: function(containerSelector) {
			this.loginBoxLi = $(document.createElement("li"))
			.attr("id", "nitdoc-github-li")
			.append(
				$(document.createElement("a"))
				.append(
					$(document.createElement("img"))
					.attr({
						src: "resources/icons/github-icon.png",
						alt: "GitHub"
					})
					.addClass("nitdoc-github-li-img")
				)
				.click(function() { LoginBox.toggle() })
			)

			this.loginBoxContent = $(document.createElement("div"));
			this.loginBox = $(document.createElement("div"))
			.attr("id", "nitdoc-github-loginbox")
			.css("display", "none")
			.append(
				$(document.createElement("div"))
				.addClass("nitdoc-github-loginbox-arrow")
				.append("&nbsp;")
			)
			.append(
				$(document.createElement("h3"))
				.append("Github Sign In")
			)
			.append(this.loginBoxContent);

			this.loginBoxLi.append(this.loginBox);
			$(containerSelector).append(this.loginBoxLi);
		},

		// Panel of login box to display when the user is logged in
		displayLogout: function(origin, user) {
			var panel = $(document.createElement("div"))
			.append(
				$(document.createElement("h4"))
				.append("Hello ")
				.append(
					$(document.createElement("a"))
					.attr("href", "https://github.com/" + user.login)
					.append(user.login)
				).append("!")
			)
			.append(
				$(document.createElement("label"))
				.attr("for", "github-origin")
				.append("Origin")
			)
			.append(
				$(document.createElement("input"))
				.attr({
					id: "github-origin",
					type: "text",
					disabled: "disabled",
					value: origin.user + ":" + origin.repo + ":" + origin.branch
				})
			)
			.append(
				$(document.createElement("label"))
				.attr("for", "github-base")
				.append("Base")
			)
			.append(
				$(document.createElement("input"))
				.attr({
					id: "github-base",
					type: "text",
					disabled: "disabled",
					value: user.login + ":" + user.repo + ":" + user.branch
				})
			)
			.append(
				$(document.createElement("button"))
				.addClass("nitdoc-github-button")
				.addClass("nitdoc-github-cancel")
				.append(
					$(document.createElement("img"))
					.attr("src", "resources/icons/github-icon.png")
				).append("Sign Off")
				.click(function() { // log out user
					UI.disactivate();
					LoginBox.toggle();
				})
			);
			$(".nitdoc-github-li-img").attr("src", "resources/icons/github-icon-green.png");
			this.loginBoxContent.empty()
			this.loginBoxContent.append(panel);
		},

		// Panel of login box to display when the user is logged out
		displayLogin: function() {
			var panel = $(document.createElement("form"))
			.append(
				$(document.createElement("label"))
				.attr("for", "nitdoc-github-login-field")
				.append("Username")
			)
			.append(
				$(document.createElement("input"))
				.attr({
					id: "nitdoc-github-login-field",
					type: "text"
				})
			)
			.append(
				$(document.createElement("label"))
				.attr("for", "nitdoc-github-password-field")
				.append("Password")
			)
			.append(
				$(document.createElement("input"))
				.attr({
					id: "nitdoc-github-password-field",
					type: "password"
				})
			)
			.append(
				$(document.createElement("label"))
				.attr("for", "nitdoc-github-repo-field")
				.append("Repository")
			)
			.append(
				$(document.createElement("input"))
				.attr({
					id: "nitdoc-github-repo-field",
					type: "text"
				})
			)
			.append(
				$(document.createElement("label"))
				.attr("for", "nitdoc-github-branch-field")
				.append("Branch")
			)
			.append(
				$(document.createElement("input"))
				.attr({
					id: "nitdoc-github-branch-field",
					type: "text"
				})
			)
			.append(
				$(document.createElement("button"))
				.addClass("nitdoc-github-button")
				.append(
					$(document.createElement("img"))
					.attr("src", "resources/icons/github-icon.png")
				).append("Sign In")
				.click(function() {
					var login = $('#nitdoc-github-login-field').val();
					var password = $('#nitdoc-github-password-field').val();
					var repo = $('#nitdoc-github-repo-field').val();
					var branch = $('#nitdoc-github-branch-field').val();
					if(!login || !password || !repo || !branch) {
						ModalBox.open("Sign in error", "Please enter your GitHub username, password, repository and branch.", true);
					} else {
						var user = UI.tryLogin(login, password, repo, branch);
						if(user == "error:login") {
							ModalBox.open("Sign in error", "The username, password, repo or branch you entered is incorrect.", true);
						} else if(user == "error:sha") {
							ModalBox.open("Base commit not found", "The provided GitHub repository must contains the base commit '" + UI.origin.sha + "'", true);
						} else if(user == "error:profile") {
							ModalBox.open("Incomplete GitHub profile", "Please set your public name and email in your <a href='https://github.com/settings/profile'>GitHub profile</a>.<br/><br/>Your public profile informations are used to sign-off your commits.", true);
						} else {
							UI.activate(user);
							LoginBox.displayLogout(UI.origin, user);
						}
					}
					return false;
				})
			)
			$(".nitdoc-github-li-img").attr("src", "resources/icons/github-icon.png");
			this.loginBoxContent.empty()
			this.loginBoxContent.append(panel);
		},

		toggle: function() {
			if(this.loginBox.is(':hidden')) {
				this.loginBox.show();
				if (!$('#loginGit').is(':hidden')) { $('#loginGit').focus(); }
			} else {
				this.loginBox.hide();
			}
		}
	};

	return LoginBox;
});
