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
 * Nitdoc.Github.UI for comment edition module
 */
define([
	"jquery",
	"plugins/github/user",
	"plugins/github/github_api",
	"plugins/github/utils",
	"plugins/github/commentbox",
	"base64",
], function($, User, GithubAPI, Utils, CommentBox, Base64) {
	var UI = {
		openedComments: 0,	// currently edited comments count
		user: false,		// logged user

		// Activate comment UI for a logged user
		activate: function(loggedUser) {
			// Save session
			this.user = loggedUser;
			this.saveSession(this.user);
		
			// check local storage synchro with branch
			if(localStorage.base != this.origin.sha) {
				console.log("Base changed: cleaned cache");
				localStorage.requests = "[]";
				localStorage.base = this.origin.sha;
			}

			// Prevent page unload if there is comments in editing mode
			$(window).on('beforeunload', function() {
				if(UI.getOpenedComments() > 0){
					return "There is uncommited modified comments. Are you sure you want to leave this page?";
				}
			});

			this.attachCommentEvents();
			this.reloadComments();
		},

		// clear storage
		disactivate: function() {
			if(UI.getOpenedComments() > 0){
				if(!confirm('There is uncommited modified comments. Are you sure you want to leave this page?')) {
					return false;
				}
			}
			// close session and purge cookie
			localStorage.clear();
			$(window).unbind('beforeunload');
			window.location.reload();
		},

		// Attempt login through GitHub API
		tryLogin: function(login, password, repo, branch) {
			var user = new User(login, password, repo, branch);
			if(!GithubAPI.login(user)) {
				return "error:login";
			}
			// check github profile fields
			if(!user.infos.name || !user.infos.email) {
				return "error:profile";
			}
			// check correct base commit
			var commit = GithubAPI.getCommit(user, this.origin.sha);
			if(!commit || !commit.sha) {
				return "error:sha";
			}
			return user;
		},

		// Attach edit button on each comment
		attachCommentEvents: function() {
			// Blocks without comment
			$("span.noComment").each(function() {
				//FIXME this should be done by nitdoc
				var baseComment = $(this).parent().prev();
				var location = Utils.parseLocation(baseComment.attr("data-comment-location"));
				var locString = location.path + ":" + location.lstart + "," + location.tabpos + "--" + location.lstart + ",0";
				baseComment.attr("data-comment-location", locString);
				$(this).html("<a class='nitdoc-github-editComment noComment'>add comment</a> for ");
				$(this).addClass("nitdoc-github-editComment");
			});
			// Blocks with comment
			$('.description div.comment').each(function() {
				var p = $(this).next();
				p.prepend("<span class='nitdoc-github-editComment'><a class='nitdoc-github-editComment'>edit comment</a> for </span>")
			});

			// Attach links events
			$('a.nitdoc-github-editComment').each(function() {
				$(this).css("cursor", "pointer")
				$(this).click(function() {
					// hide link
					$(this).parent().hide();
					// add infos
					var infos = {};
					var baseTextarea;
					if(!$(this).hasClass("noComment")) {
						$(this).parent().parent().prev().hide();
						baseTextarea = $(this).parent().parent().prev().prev();
					} else {
						baseTextarea = $(this).parent().parent().prev();
						infos.isNew = true;
					}
					infos.user = UI.user;
					infos.location = Utils.parseLocation(baseTextarea.attr("data-comment-location"));
					infos.namespace = baseTextarea.attr("data-comment-namespace");
					infos.oldComment = baseTextarea.val();
					var box = new CommentBox(infos);
					box.open(baseTextarea);
				});
			});
		},

		// reload comments from saved pull request
		reloadComments: function() {
			if(!localStorage.requests){ return; }
			var requests = JSON.parse(localStorage.requests);
			var converter = new Markdown.Converter();
			// Look for modified comments in page
			for(i in requests) {
				if(!requests[i]) { continue; }
				var request = requests[i];
				$("textarea[data-comment-location=\"" + request.location + "\"]").each(function () {
					var div = $(this).next();
					if(request.isClosed) {
						if(div.is("div.comment.newComment")) {
							// hide empty comment
							div.next().remove();
							div.next().find("span.noComment").show();
							div.remove();
						} else if(div.is("div.comment.locked")) {
							// unlock comment
							div.empty();
							div.append(converter.makeHtml($(this).text()));
							div.removeClass("locked");
							div.css("cursor", "pointer")
							div.next().remove();
							div.next().find("span.nitdoc-github-editComment").show();
						}
					} else {
						// create div for the new coment
						if(!div.is("div.comment")) {
							$(this).after("<div class='comment newComment'></div>");
							div = $(this).next();
						}
						// lock modified comment
						if(!div.hasClass("locked")) {
							// convert modified comment to markdown
							div.empty()
							div.append(converter.makeHtml(Base64.decode(request.comment)));
							// lock click
							div.css("cursor", "auto");
							div.addClass("locked");
							div.next().find("span.nitdoc-github-editComment").hide();
							div.after(
								$("<p class='locked inheritance'>")
								.text("comment modified in ")
								.append("<a href='"+ request.request.html_url +"' target='_blank' title='Review on GitHub'>pull request #"+ request.request.number +"</a>")
								.append(" ")
								.append(
									$("<a data-pullrequest-number='"+ request.request.number +"' class='nitdoc-github-update'>update</a>")
									.click(function (){
										$(this).parent().hide();
										div.hide();
										var baseTextarea = div.prev();
										// add infos
										var infos = {};
										infos.user = UI.getUser();
										infos.location = Utils.parseLocation(baseTextarea.attr("data-comment-location"));
										infos.namespace = baseTextarea.attr("data-comment-namespace");
										infos.oldComment = baseTextarea.val();
										infos.requestID = $(this).attr("data-pullrequest-number");
										var box = new CommentBox(infos);
										box.open(baseTextarea);								
									})
								)
								.append(" ")
								.append(
									$("<a data-pullrequest-number='"+ request.request.number +"' class='nitdoc-github-cancel'>cancel</a>")
									.click(function (){
										ui.closePullRequest($(this).attr("data-pullrequest-number"));
										ui.reloadComments();
									})
								)
							);
						}
						// hide "add comment" link
						if(div.hasClass("newComment")) {
							div.next().next().find("span.noComment").hide();
						}
					}

				});
			}
		},

		// Commit changes and send pull request
		saveChanges: function(infos) {
			// if pull request update close existing pull request for the comment
			if(infos.requestID) {
				closePullRequest(infos.requestID);
			}

			// forge commit
			var fileContent = getFileContent(infos.location.path);
			infos.newContent = Utils.mergeComment(fileContent, infos.newComment, infos.location);

			// commit
			infos.request = pushChanges(infos)
			if(!infos.request) {
				ModalBox.open("Unable to commit changes!", response, true);
				return;
			}
			saveRequest(infos);

			// close boxes and reload comments		
			CommitBox.close();
			infos.commentBox.close();
			reloadComments();
		},

		/*
		   Creating a new pull request with the new comment take 5 steps:
			1. get the base tree from latest commit

			2. create a new blob with updated file content
			3. post a new tree from base tree and blob
			4. post the new commit with new tree
			5. create the pull request
		*/
		pushChanges: function(infos) {
			var baseTree = GithubAPI.getTree(user, origin.sha);
			if(!baseTree.sha) {
				ModalBox.open("Unable to locate base tree!", baseTree.status + ": " + baseTree.statusText, true);
				return false;
			}
			console.log("Base tree: " + baseTree.url);
			var newBlob = GithubAPI.createBlob(user, infos.newContent);
			if(!newBlob.sha) {
				ModalBox.open("Unable to create new blob!", newBlob.status + ": " + newBlob.statusText, true);
				return false;
			}
			console.log("New blob: " + newBlob.url);
			var newTree = GithubAPI.createTree(user, baseTree, infos.location.path, newBlob);
			if(!newTree.sha) {
				ModalBox.open("Unable to create new tree!", newTree.status + ": " + newTree.statusText, true);
				return false;
			}
			console.log("New tree: " + newTree.url);
			var newCommit = GithubAPI.createCommit(user, infos.message, baseTree.sha, newTree);
			if(!newCommit.sha) {
				ModalBox.open("Unable to create new commit!", newCommit.status + ": " + newCommit.statusText, true);
				return false;
			}
			console.log("New commit: " + newCommit.url);
			var pullRequest = GithubAPI.createPullRequest(user, infos.message.split("\n\n")[0], "Pull request from Nitdoc", origin, newCommit.sha);
			if(!pullRequest.number) {
				ModalBox.open("Unable to create pull request!", pullRequest.status + ": " + pullRequest.statusText, true);
				return false;
			}
			console.log("New pull request: " + pullRequest.url);
			return pullRequest;
		},

		// close previously opened pull request
		closePullRequest: function(number) {
			var requests = JSON.parse(localStorage.requests);
			if(!requests[number]) {
				ModalBox.open("Unable to close pull request!", "Pull request " + number + "not found", true);
				return false;
			}
			// close pull request
			var res = GithubAPI.updatePullRequest(user, "Canceled from Nitdoc", "", "closed", requests[number].request);
			if(!res.id) {
				ModalBox.open("Unable to close pull request!", res.status + ": " + res.statusText, true);
				return false;
			}
			// update in localstorage
			requests[number].isClosed = true;
			localStorage.requests = JSON.stringify(requests);
		},

		// Get file content from github
		getFileContent: function(githubUrl) {
			var origFile = GithubAPI.getFile(user, githubUrl);
			if(!origFile.content) {
				ModalBox.open("Unable to locate source file!", origFile.status + ": " + origFile.statusText, true);
				return;
			}
			var base64Content = origFile.content.substring(0, origFile.content.length - 1)
			return Base64.decode(base64Content);
		},

		// save pull request in local storage
		saveRequest: function(infos) {
			var requests = [];
			if(localStorage.requests) {requests = JSON.parse(localStorage.requests)}
			requests[infos.request.number] = {
				request: infos.request,
				location: infos.location.origin,
				comment: Base64.encode(infos.newComment)
			};
			localStorage.requests = JSON.stringify(requests);
		},

		// save user in local storage
		saveSession: function(user) {
			var session = {
				login: user.login,
				password: Base64.encode(user.password),
				repo: user.repo,
				branch: user.branch,
			};
			localStorage.user = JSON.stringify(session);
		}
	}
	return UI;
});
