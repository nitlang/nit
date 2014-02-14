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
*/

/*
 * LoginBox allows user to login and logoff from GitHub API
 */
define([
	"jquery",
	"jQueryUI"
], function($) {
	$.widget("nitdoc.loginbox", {
		options: {
			icon: "resources/icons/github-icon.png",
			iconActive: "resources/icons/github-icon-green.png",
			iconAlt: "GitHub",
			signedinTxt: "Signed in Github",
			signedoutTxt: "Sign in Github",
			welcomeTxt: "Hello",
			upstreamTxt: "Upstream branch",
			baseTxt: "Base",
			signoffTxt: "Sign Off",
			usernameTxt: "Username",
			passwordTxt: "Password",
			repoTxt: "Repository",
			branchTxt: "Branch",
			signinTxt: "Sign In"
		},

		_create: function() {
			this.element.append(
				$("<a/>")
				.append(
					$("<img/>")
					.attr({
						src: this.options.icon,
						alt: this.options.iconAlt
					})
					.addClass("nitdoc-github-li-img")
				)
				.click($.proxy(this.toggle, this))
			);

			this.content = $("<div/>");
			this.loginBox = $("<div/>")
			.attr("id", "nitdoc-github-loginbox")
			.css("display", "none")
			.append(
				$(document.createElement("div"))
				.addClass("nitdoc-github-loginbox-arrow")
				.append("&nbsp;")
			)
			.append(this.content);
			this.element.append(this.loginBox);
		},

		/* public actions */

		displayLogout: function(origin, user) {
			this.content.empty();
			this.content.append(
				$("<h3/>").text(this.options.signedinTxt)
			)
			this.content.append(
				$("<div/>")
				.append(
					$("<h4/>")
					.append(this.options.welcomeTxt + " ")
					.append(
						$("<a/>")
						.attr("href", "https://github.com/" + user.login)
						.append(user.login)
					).append(",")
				)
				.append(
					$("<label/>")
					.text("Upstream Branch")
				)
				.append(
					$("<a/>")
					.text(origin.user + ":" + origin.repo + ":" + origin.branch)
					.addClass("nitdoc-github-loginbox-githublink")
					.attr({
						title: "Open branch in GitHub",
						href: "https://github.com/" + origin.user + "/" + origin.repo + "/tree/" + origin.branch
					})
				)
				.append(
					$("<label/>")
					.attr("for", "github-base")
					.append("Your branch")
				)
				.append(
					$("<a/>")
					.text(user.login + ":" + user.repo + ":" + user.branch)
					.addClass("nitdoc-github-loginbox-githublink")
					.attr({
						title: "Open branch in GitHub",
						href: "https://github.com/" + user.login + "/" + user.repo + "/tree/" + user.branch
					})
				)
				.append(
					$("<button/>")
					.addClass("nitdoc-github-button")
					.addClass("nitdoc-github-cancel")
					.append(
						$("<img/>")
						.attr("src", this.options.icon)
					).text(this.options.signoffTxt)
					.click($.proxy(this._doClickLogoff, this))
				)
			);
			$(".nitdoc-github-li-img").attr("src", this.options.iconActive);
		},

		displayLogin: function() {
			this.content.empty();
			this.content.append(
				$("<h3/>").text(this.options.signedoutTxt)
			)
			this.content.append(
				$("<form/>")
				.keyup($.proxy(this._doFormChange, this))
				.append(
					$("<label/>")
					.attr("for", "nitdoc-github-login-field")
					.append(this.options.usernameTxt)
				)
				.append(
					$("<input/>")
					.attr({
						id: "nitdoc-github-login-field",
						type: "text"
					})
				)
				.append(
					$("<label/>")
					.attr("for", "nitdoc-github-password-field")
					.append(this.options.passwordTxt)
				)
				.append(
					$("<input/>")
					.attr({
						id: "nitdoc-github-password-field",
						type: "password"
					})
				)
				.append(
					$("<label/>")
					.attr("for", "nitdoc-github-repo-field")
					.append(this.options.repoTxt)
				)
				.append(
					$("<input/>")
					.attr({
						id: "nitdoc-github-repo-field",
						type: "text"
					})
				)
				.append(
					$("<label/>")
					.attr("for", "nitdoc-github-branch-field")
					.append(this.options.branchTxt)
				)
				.append(
					$("<input/>")
					.attr({
						id: "nitdoc-github-branch-field",
						type: "text"
					})
				)
				.append(
					$("<button/>")
					.addClass("nitdoc-github-button")
					.attr("disabled", "disabled")
					.append(
						$("<img/>")
						.attr("src", this.options.icon)
					).text(this.options.signinTxt)
					.click($.proxy(this._doClickLogin, this))
				)
			);
			$(".nitdoc-github-li-img").attr("src", this.options.icon);
		},

		toggle: function() {
			if(this.loginBox.is(':hidden')) {
				this.loginBox.show();
				if ($('#nitdoc-github-login-field').is(':visible')) { $('#nitdoc-github-login-field').focus(); }
			} else {
				this.loginBox.hide();
			}
		},

		/* events */

		_doClickLogoff: function(event) {
			this._trigger("_logoff", event);
		},

		_doClickLogin: function(event) {
			this._trigger("_login", event, {
				login: $('#nitdoc-github-login-field').val(),
				password: $('#nitdoc-github-password-field').val(),
				repo: $('#nitdoc-github-repo-field').val(),
				branch: $('#nitdoc-github-branch-field').val()
			});
			return false;
		},

		_doFormChange: function(event) {
			login = $('#nitdoc-github-login-field').val();
			password = $('#nitdoc-github-password-field').val();
			repo = $('#nitdoc-github-repo-field').val();
			branch = $('#nitdoc-github-branch-field').val();
			if(login && password && repo && branch) {
				this.loginBox.find("form .nitdoc-github-button").removeAttr("disabled");
			} else {
				this.loginBox.find("form .nitdoc-github-button").attr("disabled", "disabled");
			}
		}
	});
});
