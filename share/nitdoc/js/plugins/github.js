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
	"github-api",
	"highlight",
	"marked",
	"nit",
	"plugins/modalbox",
	"plugins/github/loginbox",
	"plugins/github/commentbox",
	"utils"
], function($, GithubAPI, hljs, marked) {
	var GithubUser = function(login, password, repo, branch) {
		this.login = login;
		this.password = password;
		this.repo = repo;
		this.auth = "Basic " +  (login + ':' + password).base64Encode();
		this.branch = branch;
	}

	var GithubUI = {
		init: function(upstream, basesha1) {
			console.info("Github plugin: init GitHub module (upstream: "+ upstream +", base: " + basesha1 + ")");
			this.origin = this._parseUpstream(upstream);
			this._initMarked();
			// Add github menu
			$("nav.main ul").append(
				$("<li/>")
				.attr("id", "nitdoc-github-li")
				.loginbox()
				.loginbox("displayLogin")
				.bind("loginbox_logoff", function() {
					GithubUI.disactivate();
				})
				.bind("loginbox_login", function(event, infos) {
					GithubUI._tryLoginFromCredentials(infos);
				})
			);
			// check local session
			this._tryLoginFromLocalSession();
		},

		activate: function(user, origin) {
			this.openedComments = 0;
			this._saveSession(user);
			$("#nitdoc-github-li").loginbox("displayLogout", origin, user);
			this._attachCommentBoxes();
			this._reloadComments();

			// Prevent page unload if there is comments in editing mode
			$(window).on('beforeunload', function() {
				if(GithubUI.openedComments > 0){
					return "There is uncommited modified comments. Are you sure you want to leave this page?";
				}
			});
		},

		disactivate: function() {
			if(this.openedComments > 0){
				if(!confirm('There is uncommited modified comments. Are you sure you want to leave this page?')) {
					return false;
				}
			}

			localStorage.clear();
			$("#nitdoc-github-li").loginbox("toggle");
			$("#nitdoc-github-li").loginbox("displayLogin");
			$(window).unbind('beforeunload');
			//window.location.reload();
		},

		/* login */

		_checkLoginInfos: function(infos) {
			if(!infos.login || !infos.password || !infos.repo || !infos.branch) {
				$("<p/>")
				.text("Please enter your GitHub username, password, repository and branch.")
				.modalbox({
					title: "Sign in error",
					isError: true
				})
				.modalbox("open");
				return false;
			} else {
				return true;
			}
		},

		_tryLoginFromCredentials: function(infos) {
			if(this._checkLoginInfos(infos)) {
				var isok = this._tryLogin(infos.login, infos.password, infos.repo, infos.branch);
				if(isok === true) {
					this.activate(this.user, this.origin);
				} else {
					if(isok == "error:login") {
						$("<p/>")
						.text("The username, password, repo or branch you entered is incorrect.")
						.modalbox({
							title: "Github sign in error",
							isError: true
						})
						.modalbox("open");
					} else if(isok == "error:sha") {
						$("<p/>")
						.text("The provided Github repository must contain the base commit '" + UI.origin.sha + "'.")
						.modalbox({
							title: "Github base commit error",
							isError: true
						})
						.modalbox("open");
					} else if(isok == "error:profile") {
						$("<p/>")
						.text("Please set your public name and email in your " +
							"<a href='https://github.com/settings/profile'>GitHub profile</a>." +
							"<br/><br/>Your public profile informations are used to sign-off your commits.")
						.modalbox({
							title: "Github profile error",
							isError: true
						})
						.modalbox("open");
					}
				}
			}
		},

		_tryLoginFromLocalSession: function() {
			if(localStorage.user) {
				var session = JSON.parse(localStorage.user);
				var isok = this._tryLogin(
					session.login,
					session.password.base64Decode(),
					session.repo,
					session.branch
				);
				if(isok === true) {
					this.activate(this.user, this.origin);
				} else {
					console.debug("Github plugin: Session found but authentification failed");
					localStorage.clear();
				}
			} else {
				console.debug("Github plugin: No session found");
			}
		},

		_tryLogin: function(login, password, repo, branch) {
			var tmpUser = new GithubUser(login, password, repo, branch);
			if(!GithubAPI.login(tmpUser)) {
				return "error:login";
			}
			if(!tmpUser.infos.name || !tmpUser.infos.email) {
				return "error:profile";
			}
			var commit = GithubAPI.getCommit(tmpUser, this.origin.sha);
			if(!commit || !commit.sha) {
				return "error:sha";
			}
			this.user = tmpUser;
			return true;
		},

		_saveSession: function(user) {
			localStorage.user = JSON.stringify({
				login: user.login,
				password: user.password.base64Encode(),
				repo: user.repo,
				branch: user.branch,
			});
			// check local storage synchro with branch
			if(localStorage.base != this.origin.sha) {
				console.log("Base changed: cleaned cache");
				localStorage.requests = "[]";
				localStorage.base = this.origin.sha;
			}
		},

		/* html decoration */

		// Attach edit button on each comment
		_attachCommentBoxes: function() {
			$("textarea.baseComment").each(function() {
				$(this).commentbox();

				var isNew = false;
				if(!$(this).val()) {
					isNew = true;
					$(this).nextAll(".info:first").find(".noComment").hide()
					$(this).nextAll(".info:first").before(
						$("<div/>")
						.hide()
						.addClass("comment")
						.append(
							$("<div/>").addClass("nitdoc")
						)
					)
				}

				$(this).nextAll(".info:first").prepend(
					$("<a/>")
					.addClass("nitdoc-github-editComment")
					.css("cursor", "pointer")
					.text((isNew ? "add" : "edit") + " comment")
					.click($.proxy(GithubUI._openCommentBox, GithubUI, null, $(this)))
					.after(" for ")
				)

				$(this).bind("commentbox_commit", function(event, data) {
					GithubUI._saveChanges(data);
					$(this).commentbox("close");
					GithubUI._reloadComments();
				})
				.bind("commentbox_preview", function(event, data) {
					$("<div/>")
					.append($("<h4/>").text("Comment:"))
					.append(
						$("<div/>")
						.addClass("description")
						.append(
							$("<div/>")
							.addClass("comment")
							.append(
								$("<div/>")
								.addClass("nitdoc")
								.html(marked(data.value))
							)
						)
					)
					.append($("<h4/>").text("Message:"))
					.append(
						$("<div/>")
						.addClass("description")
						.append(
							$("<div/>")
							.addClass("comment")
							.append(
								$("<div/>").html(marked(data.message))
							)
						)
					)
					.modalbox({
						title: "Preview comment",
						css: {"min-width": "500px"}
					})
					.modalbox("open");
				})
				.bind("commentbox_open", function(event, data) {
					GithubUI.openedComments++;
					$(this).nextAll(".comment").hide();
				})
				.bind("commentbox_close", function(event, data) {
					GithubUI.openedComments--;
					$(this).nextAll(".comment").show();
				});
			});
		},

		// reload comments from saved pull request
		_reloadComments: function() {
			if(!localStorage.requests){ return; }
			$("p.pullRequest").remove();
			var requests = JSON.parse(localStorage.requests);
			// Look for modified comments in page
			for(i in requests) {
				if(!requests[i]) { continue; }
				var request = requests[i];
				$("textarea[data-comment-location=\"" + request.location + "\"]").each(function () {
					if(request.isClosed) {
						var oldComment = request.oldComment.base64Decode();
						var htmlComment = marked(oldComment);
						$(this).val(oldComment);
						if(!$(this).val()) {
							$(this).nextAll("div.comment:first").hide();
						} else {
							$(this).nextAll("div.comment:first").show();
						}
						$(this).nextAll("div.comment").find("div.nitdoc").empty().html(htmlComment);
						$(this).nextAll("p.info").find("a.nitdoc-github-editComment").show();
					} else {
						var newComment = request.comment.base64Decode();
						var htmlComment = marked(newComment);
						$(this).val(newComment);
						if(!$(this).val()) {
							$(this).nextAll("div.comment:first").hide();
						} else {
							$(this).nextAll("div.comment:first").show();
						}
						$(this).nextAll("div.comment").find("div.nitdoc").empty().html(htmlComment);
						GithubUI._addPullRequestLink($(this), request);
						$(this).nextAll("p.info").find("a.nitdoc-github-editComment").hide();
					}
				});
			}
		},

		_addPullRequestLink: function(baseArea, request) {
			baseArea.nextAll("p.info").before(
				$("<p/>")
				.addClass("pullRequest inheritance")
				.text("comment modified in ")
				.append(
					$("<a/>")
					.attr({
						href: request.request.html_url,
						title: "Review on GitHub"
					})
					.text("pull request #" + request.request.number)
				)
				.append(" ")
				.append(
					$("<a/>")
					.data("pullrequest-number", request.request.number)
					.addClass("nitdoc-github-update")
					.text("update")
					.click($.proxy(GithubUI._doUpdateRequest, GithubUI, null, baseArea, request))
				)
				.append(" ")
				.append(
					$("<a/>")
					.data("pullrequest-number", request.request.number)
					.addClass("nitdoc-github-cancel")
					.text("cancel")
					.click($.proxy(GithubUI._doCancelRequest, GithubUI, null, baseArea, request))
				)
			);
		},

		/* github calls */

		_saveChanges: function(edit) {
			// if pull request update close existing pull request for the comment
			if(edit.requestID) {
				this._closePullRequest(edit.requestID);
			}
			edit.oldContent = this._getFileContent(edit.location.path);
			edit.newContent = this._mergeComment(edit.oldContent, edit.newComment, edit.location);
			edit.request = this._pushChanges(edit)
			if(!edit.request) {
				$("<p/>")
				.text("Unable to commit changes.<br/>" + response)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return;
			}
			this._saveRequest(edit);
		},

		// save pull request in local storage
		_saveRequest: function(edit) {
			var requests = {};
			if(localStorage.requests) {requests = JSON.parse(localStorage.requests)}
			requests[edit.request.number] = {
				request: edit.request,
				location: edit.location.origin,
				comment: edit.newComment.base64Encode(),
				oldComment: edit.oldComment.base64Encode()
			};
			localStorage.requests = JSON.stringify(requests);
		},

		/*
		   Creating a new pull request with the new comment take 5 steps:
			1. get the base tree from latest commit

			2. create a new blob with updated file content
			3. post a new tree from base tree and blob
			4. post the new commit with new tree
			5. create the pull request
		*/
		_pushChanges: function(edit) {
			var baseTree = GithubAPI.getTree(this.user, this.origin.sha);
			if(!baseTree.sha) {
				$("<p/>")
				.text("Unable to locate base tree.<br/>" + baseTree.status + ": " + baseTree.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			console.log("Base tree: " + baseTree.url);
			var newBlob = GithubAPI.createBlob(this.user, edit.newContent);
			if(!newBlob.sha) {
				$("<p/>")
				.text("Unable to create new blob.<br/>" + newBlob.status + ": " + newBlob.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			console.log("New blob: " + newBlob.url);
			var newTree = GithubAPI.createTree(this.user, baseTree, edit.location.path, newBlob);
			if(!newTree.sha) {
				$("<p/>")
				.text("Unable to create new tree.<br/>" + newTree.status + ": " + newTree.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			console.log("New tree: " + newTree.url);
			var newCommit = GithubAPI.createCommit(this.user, edit.message, baseTree.sha, newTree);
			if(!newCommit.sha) {
				$("<p/>")
				.text("Unable to create new commit.<br/>" + newCommit.status + ": " + newCommit.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			console.log("New commit: " + newCommit.url);
			var pullRequest = GithubAPI.createPullRequest(this.user, edit.title, "Pull request from Nitdoc", this.origin, newCommit.sha);
			if(!pullRequest.number) {
				$("<p/>")
				.text("Unable to create pull request.<br/>" + pullRequest.status + ": " + pullRequest.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			console.log("New pull request: " + pullRequest.url);
			return pullRequest;
		},

		// close previously opened pull request
		_closePullRequest: function(number) {
			var requests = JSON.parse(localStorage.requests);
			if(!requests[number]) {
				$("<p/>")
				.text("Unable to close pull request.<br/>" + "Pull request " + number + "not found")
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			// close pull request
			var res = GithubAPI.updatePullRequest(this.user, "Closed from Nitdoc", "", "closed", requests[number].request);
			if(!res.id) {
				$("<p/>")
				.text("Unable to close pull request.<br/>" + res.status + ": " + res.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return false;
			}
			// update in localstorage
			requests[number].isClosed = true;
			localStorage.requests = JSON.stringify(requests);
		},

		/* internals */

		_initMarked: function() {
			var renderer = new marked.Renderer();
			renderer.code = function(code) {
				return '<pre class="nitcode hljs">' + hljs.highlight('nit', code).value + '</pre>';
			}
			renderer.codespan = function(code) {
				return '<code class="nitcode hljs">' + hljs.highlight('nit', code).value + '</code>';
			}
			marked.setOptions({
				renderer: renderer,
				gfm: true,
				tables: true,
				breaks: true,
				pedantic: false,
				sanitize: true,
				smartLists: true,
				smartypants: false
			});
		},

		_parseUpstream: function(upstream) {
			var parts = upstream.split(":");
			return {
				user: parts[0],
				repo: parts[1],
				branch: parts[2],
				sha: basesha1
			};
		},

		_getFileContent: function(githubUrl) {
			var origFile = GithubAPI.getFile(this.user, githubUrl);
			if(!origFile.content) {
				$("<p/>")
				.text("Unable to locate source file.<br/>" + origFile.status + ": " + origFile.statusText)
				.modalbox({
					title: "Github commit error",
					isError: true
				})
				.modalbox("open");
				return;
			}
			var base64Content = origFile.content.substring(0, origFile.content.length - 1)
			return base64Content.base64Decode();
		},

		_mergeComment: function(fileContent, comment, location) {
			// replace comment in file content
			var res = new String();
			var lines = fileContent.split("\n");
			// copy lines fron 0 to lstart
			for(var i = 0; i < location.lstart - 1; i++) {
				res += lines[i] + "\n";
			}
			// set comment
			if(comment && comment != "") {
				var commentLines = comment.split("\n");
				for(var i = 0; i < commentLines.length; i++) {
					var line = commentLines[i];
					var tab = location.tabpos > 1 ? "\t" : "";
					res += tab + (line.length > 0 ? "# " : "#") + line + "\n";
				}
			}
			// copy lines fron lend to end
			for(var i = location.lend - 1; i < lines.length; i++) {
				res += lines[i];
				if(i < lines.length - 1) { res += "\n"; }
			}
			return res;
		},

		/* events */

		_openCommentBox: function(event, baseArea) {
			baseArea.commentbox("open", this.user);
		},

		_doCancelRequest: function(event, baseArea, request) {
			this._closePullRequest(request.request.number);
			this._reloadComments();
		},

		_doUpdateRequest: function(event, baseArea, request) {
			baseArea.commentbox("open", this.user, request.request.number);
		},
	}

	// Get github plugin data
	var upstream = $("body").attr("data-github-upstream");
	var basesha1 = $("body").attr("data-github-base-sha1");
	if(upstream && basesha1) {
		GithubUI.init(upstream, basesha1);
	}
});
