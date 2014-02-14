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

/*
 * Nitdoc.Github comment edition module
 *
 * Allows user to modify source code comments directly from the Nitdoc
 */
define([
	"jquery",
	"base64",
	"plugins/github/ui",
	"plugins/github/loginbox",
	"plugins/github/modalbox",
], function($, Base64, UI, LoginBox, ModalBox) {
	// Load GitHub UI
	var upstream = $("body").attr("data-github-upstream");
	var basesha1 = $("body").attr("data-github-base-sha1");
	if(upstream && basesha1) {
		console.info("Github plugin: init GitHub module (upstream: "+ upstream +", base: " + basesha1 + ")");

		$("nav.main ul").append(
			$("<li/>").attr("id", "nitdoc-github-li")
		);
		$("#nitdoc-github-li")
		.loginbox()
		.bind( "loginbox_logoff", function() {
			UI.disactivate();
			$("#nitdoc-github-li").loginbox("toggle");
		})
		.bind( "loginbox_login", function(event, infos) {
			if(!infos.login || !infos.password || !infos.repo || !infos.branch) {
				ModalBox.open("Sign in error", "Please enter your GitHub username, password, repository and branch.", true);
			} else {
				var user = UI.tryLogin(infos.login, infos.password, infos.repo, infos.branch);
				if(user == "error:login") {
					ModalBox.open("Sign in error", "The username, password, repo or branch you entered is incorrect.", true);
				} else if(user == "error:sha") {
					ModalBox.open("Base commit not found", "The provided GitHub repository must contains the base commit '" + UI.origin.sha + "'", true);
				} else if(user == "error:profile") {
					ModalBox.open("Incomplete GitHub profile", "Please set your public name and email in your <a href='https://github.com/settings/profile'>GitHub profile</a>.<br/><br/>Your public profile informations are used to sign-off your commits.", true);
				} else {
					UI.activate(user);
					$("#nitdoc-github-li").loginbox("displayLogout", UI.origin, UI.user);
				}
			}
		});

		// parse origin
		var parts = upstream.split(":");
		UI.origin = {
			user: parts[0],
			repo: parts[1],
			branch: parts[2],
			sha: basesha1
		};

		// check local session
		if(localStorage.user) {

			var session = JSON.parse(localStorage.user);
			UI.user = UI.tryLogin(session.login, Base64.decode(session.password), session.repo, session.branch);
			if(!UI.user.login) {
				console.debug("Github plugin: Session found but authentification failed");
				localStorage.clear();
			}

			// activate ui
			if(UI.user && UI.user.login) {
				$("#nitdoc-github-li").loginbox("displayLogout", UI.origin, UI.user);
				UI.activate(UI.user);
			}
		} else {
			console.debug("Github plugin: No session found");
			$("#nitdoc-github-li").loginbox("displayLogin");
		}
	}
});
