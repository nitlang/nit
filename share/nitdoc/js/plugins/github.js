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
], function($, Base64, UI, LoginBox) {
	// Load GitHub UI
	var upstream = $("body").attr("data-github-upstream");
	var basesha1 = $("body").attr("data-github-base-sha1");
	if(upstream && basesha1) {
		console.log("init GitHub module (upstream: "+ upstream +", base: " + basesha1 + ")");

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
				console.log("Session found but authentification failed");
				localStorage.clear();
			}

			// activate ui
			LoginBox.init("nav.main ul");
			if(UI.user && UI.user.login) {
				LoginBox.displayLogout(UI.origin, UI.user);
				UI.activate(UI.user);
			} else {
				LoginBox.displayLogin();
			}
		} else {
			console.log("No session found");
		}
	}
});
