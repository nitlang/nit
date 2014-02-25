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
 * GitHub API wrapper for github plugin
 */
define([
	"jquery",
	"utils"
], function($, Utils) {
	return {

		// try to login the user to github API
		login: function(user) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "GET",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo,
				async: false,
				dataType: 'json',
				success: function() {
					res = true;
				}
			});
			user.infos = this.getUserInfos(user);
			user.signedOff = this.getSignedOff(user)
			return res;
		},

		// request for user github account infos
		getUserInfos: function(user) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "GET",
					url: "https://api.github.com/users/" + user.login,
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// build signedoff user default signature
		getSignedOff: function(user) {
			return user.infos.name + " <" + user.infos.email + ">";
		},

		// get the branches list from a repo
		getBranches: function(user) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "GET",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/branches",
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		/* GitHub commits */

		// get the latest commit on `branchName`
		getCommit: function(user, sha) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "GET",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/git/commits/" + sha,
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// get the base tree for a commit sha
		getTree: function(user, sha) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "GET",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/git/trees/" + sha + "?recursive=1",
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// create a new blob
		createBlob: function(user, content) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "POST",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/git/blobs",
				async: false,
				dataType: 'json',
				data: JSON.stringify({
					content: content.base64Encode(),
					encoding: "base64"
				}),
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// create a new tree from a base tree
		createTree: function(user, baseTree, path, blob) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "POST",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/git/trees",
				data: JSON.stringify({
					base_tree: baseTree.sha,
					tree: [{
						path: path,
						mode: "100644", // file (blob)
						type: "blob",
						sha: blob.sha
					}]
				}),
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// create a new commit
		createCommit: function(user, message, parentCommit, tree) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "POST",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/git/commits",
				data: JSON.stringify({
					message: message,
					parents: parentCommit,
					tree: tree.sha,
				}),
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// create a pull request
		createPullRequest: function(user, title, body, origin, head) {
			var res = false;
			$.ajax({
				beforeSend: function (xhr) {
					xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "POST",
				url: "https://api.github.com/repos/" + origin.user + "/" + origin.repo + "/pulls",
				data: JSON.stringify({
					title: title,
					body: body,
					base: origin.branch,
					head: user.login + ":" + head
				}),
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		// update a pull request
		updatePullRequest: function(user, title, body, state, request) {
			var res = false;
				$.ajax({
				beforeSend: function (xhr) {
						xhr.setRequestHeader ("Authorization", user.auth);
				},
				type: "PATCH",
				url: request.url,
				data: JSON.stringify({
					title: title,
					body: body,
					state: state
				}),
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		},

		/* Files */

		getFile: function(user, path, branch) {
			var res = false;
			$.ajax({
				type: "GET",
				url: "https://api.github.com/repos/" + user.login + "/" + user.repo + "/contents/" + path,
				data: {
					ref: branch
				},
				async: false,
				dataType: 'json',
				success: function(response) {
					res = response;
				},
				error: function(response) {
					res = response;
				}
			});
			return res;
		}
	}
});
