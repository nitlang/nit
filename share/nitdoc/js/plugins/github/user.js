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
 * GitHub API user object
 */
define([
	"base64",
], function(Base64) {
	return function(login, password, repo, branch) {
		this.login = login;
		this.password = password;
		this.repo = repo;
		this.auth = "Basic " +  Base64.encode(login + ':' + password);
		this.branch = branch;
	}
});

