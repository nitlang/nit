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

var Nitdoc = Nitdoc || {};

Nitdoc.GitHub = {}; // Declare Nitdoc.GitHub submodule

// Load GitHub UI
$(document).ready(function() {
	//FIXME base should be choosen by user
	var upstream = $("body").attr("data-github-upstream");
	var basesha1 = $("body").attr("data-github-base-sha1");
	if(upstream && basesha1) {
		Nitdoc.GitHub.UI.init(upstream, basesha1);
	}
});

/*
 * Nitdoc.Github.UI for comment edition module
 */
Nitdoc.GitHub.UI = function() {
	var openedComments = 0; // currently edited comments count
	var user = false; // logged user
	var origin;

	var init = function(upstream, basesha1) {
		console.log("init GitHub module (upstream: "+ upstream +", base: " + basesha1 + ")");

		// parse origin
		var parts = upstream.split(":");
		if(parts.length < 3) {
			console.error("Incorrect upstream name `" + upstream + "`, should be of the form user:repo:branch");
		}
		origin = {
			user: parts[0],
			repo: parts[1],
			branch: parts[2],
			sha: basesha1
		};

		// check local session
		if(localStorage.user) {
			var session = JSON.parse(localStorage.user);
			var user = tryLogin(session.login, Base64.decode(session.password), session.repo, session.branch);
			if(!user.login) {
				console.log("Session found but authentification failed");
				localStorage.clear();
			}
		} else {
			console.log("No session found");
		}

		// activate ui
		Nitdoc.GitHub.LoginBox.init("nav.main ul");
		if(user && user.login) {
			Nitdoc.GitHub.LoginBox.displayLogout(origin, user);
			activate(user);
		} else {
			Nitdoc.GitHub.LoginBox.displayLogin();
		}

		// Prevent page unload if there is comments in editing mode
		$(window).on('beforeunload', function() {
			if(Nitdoc.GitHub.UI.getOpenedComments() > 0){
				return "There is uncommited modified comments. Are you sure you want to leave this page?";
			}
		});
	}

	// Activate comment UI for a logged user
	var activate = function(loggedUser) {
		// Save session
		user = loggedUser;
		saveSession(user);
		
		// check local storage synchro with branch
		if(localStorage.base != origin.sha) {
			console.log("Base changed: cleaned cache");
			localStorage.requests = "[]";
			localStorage.base = origin.sha;
		}

		attachCommentEvents();
		reloadComments();
	}

	// clear storage
	var disactivate = function() {
		if(Nitdoc.GitHub.UI.getOpenedComments() > 0){
			if(!confirm('There is uncommited modified comments. Are you sure you want to leave this page?')) {
				return false;
			}
		}
		// close session and purge cookie
		localStorage.clear();
		$(window).unbind('beforeunload');
		window.location.reload();
	}

	// Attempt login through GitHub API
	var tryLogin = function(login, password, repo, branch) {
		var user = new Nitdoc.GitHub.User(login, password, repo, branch);
		if(!Nitdoc.GitHub.API.login(user)) {
			return "error:login";
		}
		// check github profile fields
		if(!user.infos.name || !user.infos.email) {
			return "error:profile";
		}
		// check correct base commit
		var commit = Nitdoc.GitHub.API.getCommit(user, origin.sha);
		if(!commit || !commit.sha) {
			return "error:sha";
		}
		return user;
	}

	// Attach edit button on each comment
	var attachCommentEvents = function() {
		// Blocks without comment
		$("span.noComment").each(function() {
			//FIXME this should be done by nitdoc
			var baseComment = $(this).parent().prev();
			var location = Nitdoc.GitHub.Utils.parseLocation(baseComment.attr("data-comment-location"));
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
				infos.user = Nitdoc.GitHub.UI.getUser();
				infos.location = Nitdoc.GitHub.Utils.parseLocation(baseTextarea.attr("data-comment-location"));
				infos.namespace = baseTextarea.attr("data-comment-namespace");
				infos.oldComment = baseTextarea.val();
				var box = new Nitdoc.GitHub.CommentBox(infos);
				box.open(baseTextarea);
			});
		});
	}

	// reload comments from saved pull request
	var reloadComments = function() {
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
									infos.user = Nitdoc.GitHub.UI.getUser();
									infos.location = Nitdoc.GitHub.Utils.parseLocation(baseTextarea.attr("data-comment-location"));
									infos.namespace = baseTextarea.attr("data-comment-namespace");
									infos.oldComment = baseTextarea.val();
									infos.requestID = $(this).attr("data-pullrequest-number");
									var box = new Nitdoc.GitHub.CommentBox(infos);
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
	}

	// Commit changes and send pull request
	var saveChanges = function(infos) {
		// if pull request update close existing pull request for the comment
		if(infos.requestID) {
			closePullRequest(infos.requestID);
		}

		// forge commit
		var fileContent = getFileContent(infos.location.path);
		infos.newContent = Nitdoc.GitHub.Utils.mergeComment(fileContent, infos.newComment, infos.location);

		// commit
		infos.request = pushChanges(infos)
		if(!infos.request) {
			Nitdoc.GitHub.ModalBox.open("Unable to commit changes!", response, true);
			return;
		}
		saveRequest(infos);

		// close boxes and reload comments		
		Nitdoc.GitHub.CommitBox.close();
		infos.commentBox.close();
		reloadComments();
	}

	/*
	   Creating a new pull request with the new comment take 5 steps:
		1. get the base tree from latest commit

		2. create a new blob with updated file content
		3. post a new tree from base tree and blob
		4. post the new commit with new tree
		5. create the pull request
	*/
	var pushChanges = function(infos) {
		var baseTree = Nitdoc.GitHub.API.getTree(user, origin.sha);
		if(!baseTree.sha) {
			Nitdoc.GitHub.ModalBox.open("Unable to locate base tree!", baseTree.status + ": " + baseTree.statusText, true);
			return false;
		}
		console.log("Base tree: " + baseTree.url);
		var newBlob = Nitdoc.GitHub.API.createBlob(user, infos.newContent);
		if(!newBlob.sha) {
			Nitdoc.GitHub.ModalBox.open("Unable to create new blob!", newBlob.status + ": " + newBlob.statusText, true);
			return false;
		}
		console.log("New blob: " + newBlob.url);
		var newTree = Nitdoc.GitHub.API.createTree(user, baseTree, infos.location.path, newBlob);
		if(!newTree.sha) {
			Nitdoc.GitHub.ModalBox.open("Unable to create new tree!", newTree.status + ": " + newTree.statusText, true);
			return false;
		}
		console.log("New tree: " + newTree.url);
		var newCommit = Nitdoc.GitHub.API.createCommit(user, infos.message, baseTree.sha, newTree);
		if(!newCommit.sha) {
			Nitdoc.GitHub.ModalBox.open("Unable to create new commit!", newCommit.status + ": " + newCommit.statusText, true);
			return false;
		}
		console.log("New commit: " + newCommit.url);
		var pullRequest = Nitdoc.GitHub.API.createPullRequest(user, infos.message.split("\n\n")[0], "Pull request from Nitdoc", origin, newCommit.sha);
		if(!pullRequest.number) {
			Nitdoc.GitHub.ModalBox.open("Unable to create pull request!", pullRequest.status + ": " + pullRequest.statusText, true);
			return false;
		}
		console.log("New pull request: " + pullRequest.url);
		return pullRequest;
	}

	// close previously opened pull request
	var closePullRequest = function(number) {
		var requests = JSON.parse(localStorage.requests);
		if(!requests[number]) {
			Nitdoc.GitHub.ModalBox.open("Unable to close pull request!", "Pull request " + number + "not found", true);
			return false;
		}
		// close pull request
		var res = Nitdoc.GitHub.API.updatePullRequest(user, "Canceled from Nitdoc", "", "closed", requests[number].request);
		if(!res.id) {
			Nitdoc.GitHub.ModalBox.open("Unable to close pull request!", res.status + ": " + res.statusText, true);
			return false;
		}
		// update in localstorage
		requests[number].isClosed = true;
		localStorage.requests = JSON.stringify(requests);
	}

	// Get file content from github
	var getFileContent = function(githubUrl) {
		var origFile = Nitdoc.GitHub.API.getFile(user, githubUrl);
		if(!origFile.content) {
			Nitdoc.GitHub.ModalBox.open("Unable to locate source file!", origFile.status + ": " + origFile.statusText, true);
			return;
		}
		var base64Content = origFile.content.substring(0, origFile.content.length - 1)
		return Base64.decode(base64Content);
	}

	// save pull request in local storage
	var saveRequest = function(infos) {
		var requests = [];
		if(localStorage.requests) {requests = JSON.parse(localStorage.requests)}
		requests[infos.request.number] = {
			request: infos.request,
			location: infos.location.origin,
			comment: Base64.encode(infos.newComment)
		};
		localStorage.requests = JSON.stringify(requests);
	}

	// save user in local storage
	var saveSession = function(user) {
		var session = {
			login: user.login,
			password: Base64.encode(user.password),
			repo: user.repo,
			branch: user.branch,
		};
		localStorage.user = JSON.stringify(session);
	}

	// accessors

	var getUser = function() { return user; }
	var getOrigin = function() { return origin; }
	var getOpenedComments = function() { return openedComments; }
	var addOpenedComments = function() { openedComments += 1; }
	var remOpenedComments = function() { openedComments -= 1; }

	// public interface
	var ui = {
		init: init,
		tryLogin: tryLogin,
		activate: activate,
		disactivate: disactivate,
		getUser: getUser,
		getOrigin: getOrigin,
		getOpenedComments: getOpenedComments,
		addOpenedComments: addOpenedComments,
		remOpenedComments: remOpenedComments,
		saveChanges: saveChanges,
		closePullRequest: closePullRequest,
		reloadComments: reloadComments
	}

	return ui;
}();

/*
 * GitHub API user object
 */
Nitdoc.GitHub.User = function(login, password, repo, branch) {
	this.login = login;
	this.password = password;
	this.repo = repo;
	this.auth = "Basic " +  Base64.encode(login + ':' + password);
	this.branch = branch;
};

/* 
 * GitHub API module
 */
Nitdoc.GitHub.API = function() {

	// try to login the user to github API
	var login = function(user) {
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
		user.infos = getUserInfos(user);
		user.signedOff = getSignedOff(user)
		return res;
	}

	// request for user github account infos
	var getUserInfos = function(user) {
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
	}

	// build signedoff user default signature
	var getSignedOff = function(user) {
		return user.infos.name + " <" + user.infos.email + ">";
	}

	// get the branches list from a repo
	var getBranches = function(user) {
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
    }

	/* GitHub commits */

	// get the latest commit on `branchName`
	var getCommit = function(user, sha) {
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
    }

	// get the base tree for a commit sha
	var getTree = function(user, sha) {
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
	}

	// create a new blob
	var createBlob = function(user, content) {
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
				content: Base64.encode(content),
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
    }

	// create a new tree from a base tree
	var createTree = function(user, baseTree, path, blob) {
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
	}

	// create a new commit
	var createCommit = function(user, message, parentCommit, tree) {
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
	}

	// create a pull request
	var createPullRequest = function(user, title, body, origin, head) {
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
	}

	// update a pull request
	var updatePullRequest = function(user, title, body, state, request) {
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
	}

	/* Files */

	var getFile = function(user, path, branch) {
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

	var api = {
		login: login,
		getCommit: getCommit,
		getBranches: getBranches,
		getTree: getTree,
		createBlob: createBlob,
		createTree: createTree,
		createCommit: createCommit,
		createPullRequest: createPullRequest,
		updatePullRequest: updatePullRequest,
		getFile: getFile
	}

	return api;
}();

/*
 * Nitdoc GitHub loginbox module
 */

Nitdoc.GitHub.LoginBox = function() {
	var loginBox;
	var loginBoxLi;
	var loginBoxContent;

	var init = function(containerSelector) {
		loginBoxLi = $(document.createElement("li"))
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
			.click(function() { Nitdoc.GitHub.LoginBox.toggle() })
		)

		loginBoxContent = $(document.createElement("div"));
		loginBox = $(document.createElement("div"))
		.attr("id", "nitdoc-github-loginbox")
		.css("display", "none")
		.append(
			$(document.createElement("div"))
			.addClass("nitdoc-github-loginbox-arrow")
			.append("&nbsp;")
		)
		.append(loginBoxContent);

		loginBoxLi.append(loginBox);
		$(containerSelector).append(loginBoxLi);
	}

	// Panel of login box to display when the user is logged in
	var displayLogout = function(origin, user) {
		var panel = $(document.createElement("div"))
		.append(
			$(document.createElement("h3"))
			.append("Signed in Github")
		)
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
			.append("Upstram branch")
		)
		.append(
			$(document.createElement("a"))
			.addClass("nitdoc-github-loginbox-githublink")
			.attr({
				title: "Open branch in GitHub",
				href: "https://github.com/" + origin.user + "/" + origin.repo + "/tree/" + origin.branch,
				target: "_blank"
			})
			.append(origin.user + ":" + origin.repo + ":" + origin.branch)
		)
		.append(
			$(document.createElement("label"))
			.attr("for", "github-base")
			.append("Your branch")
		)
		.append(
			$(document.createElement("a"))
			.addClass("nitdoc-github-loginbox-githublink")
			.attr({
				title: "Open branch in GitHub",
				href: "https://github.com/" + user.login + "/" + user.repo + "/tree/" + user.branch,
				target: "_blank"
			})
			.append(origin.user + ":" + origin.repo + ":" + origin.branch)
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
				Nitdoc.GitHub.UI.disactivate();
				Nitdoc.GitHub.LoginBox.toggle();
			})
		);
		$(".nitdoc-github-li-img").attr("src", "resources/icons/github-icon-green.png");
		loginBoxContent.empty()
		loginBoxContent.append(panel);
	}

	// Panel of login box to display when the user is logged out
	var displayLogin = function() {
		var panel = $(document.createElement("form"))
		.append(
			$(document.createElement("h3"))
			.append("Sign in Github")
		)
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
					Nitdoc.GitHub.ModalBox.open("Sign in error", "Please enter your GitHub username, password, repository and branch.", true);
				} else {
					var user = Nitdoc.GitHub.UI.tryLogin(login, password, repo, branch);
					if(user == "error:login") {
						Nitdoc.GitHub.ModalBox.open("Sign in error", "The username, password, repo or branch you entered is incorrect.", true);
					} else if(user == "error:sha") {
						Nitdoc.GitHub.ModalBox.open("Base commit not found", "The provided GitHub repository must contains the base commit '" + Nitdoc.GitHub.UI.getOrigin().sha + "'", true);
					} else if(user == "error:profile") {
						Nitdoc.GitHub.ModalBox.open("Incomplete GitHub profile", "Please set your public name and email in your <a href='https://github.com/settings/profile'>GitHub profile</a>.<br/><br/>Your public profile informations are used to sign-off your commits.", true);
					} else {
						Nitdoc.GitHub.UI.activate(user);
						var origin = Nitdoc.GitHub.UI.getOrigin();
						Nitdoc.GitHub.LoginBox.displayLogout(origin, user);
					}
				}
				return false;
			})
		)
		$(".nitdoc-github-li-img").attr("src", "resources/icons/github-icon.png");
		loginBoxContent.empty()
		loginBoxContent.append(panel);
	}

	var toggle = function() {
		if(loginBox.is(':hidden')) {
			loginBox.show();
			if (!$('#loginGit').is(':hidden')) { $('#loginGit').focus(); }
		} else {
			loginBox.hide();
		}
	}

	// Public interface
	var loginbox = {
		init: init,
		displayLogin: displayLogin,
		displayLogout: displayLogout,
		toggle: toggle,
		
	};

	return loginbox;
}();

/*
 * Nitdoc.GitHub.CommentBox class
 */

// Init new modal box instance
Nitdoc.GitHub.CommentBox = function(infos) {
	this.infos = infos;
	this.commentBoxDiv;
}

Nitdoc.GitHub.CommentBox.prototype.open = function(baseArea) {
	Nitdoc.GitHub.UI.addOpenedComments();
	var instance = this;

	if(this.infos.requestID) {
		// get comment from last pull request
		var requests = JSON.parse(localStorage.requests);
		this.infos.newComment = Base64.decode(requests[this.infos.requestID].comment);
	} else {
		this.infos.newComment = false;
	}

	// create comment box
	var tarea = $(document.createElement("textarea"))
	.append(this.infos.newComment === false? this.infos.oldComment: this.infos.newComment)
	.keyup(function(event) {
		$(event.target).css("height", (event.target.value.split(/\r|\n/).length * 16) + "px");
		if ( (!instance.infos.requestID && $(event.target).val() != instance.infos.oldComment) || (instance.infos.requestID && $(event.target).val() != instance.infos.oldComment && $(event.target).val() != instance.infos.newComment) ) {
			$(event.target).parent().find("button.nitdoc-github-commit").removeAttr("disabled");
		} else {
			$(event.target).parent().find("button.nitdoc-github-commit").attr("disabled", "disabled");
		}
	})
	.keydown(function(event) {
		if(event.keyCode == 13){
			$(event.target).css("height", ($(event.target).outerHeight() + 6) + "px");
		}
	});

	this.commentBoxDiv = $(document.createElement("div"))
	.addClass("nitdoc-github-commentbox")
	.append(tarea)
	.append(
		$(document.createElement("a"))
		.addClass("nitdoc-github-preview")
		.click(function() {
			var converter = new Markdown.Converter()
			var html = converter.makeHtml(tarea.val());
			Nitdoc.GitHub.ModalBox.open("Preview", html, false);
		})
	)
	.append(
		$(document.createElement("button"))
		.addClass("nitdoc-github-button")
		.addClass("nitdoc-github-commit")
		.append("Commit...")
		.click(function() {
			instance.infos.newComment = tarea.val();
			instance.infos.commentBox = instance;
			Nitdoc.GitHub.CommitBox.open(instance.infos);
		})
	)
	.append(
		$(document.createElement("button"))
		.addClass("nitdoc-github-button")
		.addClass("nitdoc-github-cancel")
		.append("Cancel")
		.click(function() {instance.close()})
	);

	baseArea.after(this.commentBoxDiv);
	var cbWidth = this.commentBoxDiv.innerWidth();
	var taWidth = tarea.outerWidth();
	tarea.width(cbWidth - (taWidth - cbWidth));
	tarea.trigger("keyup");
	tarea.focus();
}

Nitdoc.GitHub.CommentBox.prototype.close = function() {
	Nitdoc.GitHub.UI.remOpenedComments();
	if(this.infos.isNew) {
		this.commentBoxDiv.next().find("span.nitdoc-github-editComment").show();
	} else if(this.infos.requestID) {
		this.commentBoxDiv.next().show();
		this.commentBoxDiv.next().next().show();
	} else {
		this.commentBoxDiv.next().show();
		this.commentBoxDiv.next().next().find("span.nitdoc-github-editComment").show();
	}
	this.commentBoxDiv.remove();
}

/*
 * Nitdoc.GitHub.ModalBox class
 */

// Init new modal box instance
Nitdoc.GitHub.ModalBox = function() {

	// Open modal box instance
	var open = function(title, content, isError) {
		$("body").append(
			$(document.createElement("div"))
			.attr("id", "nitdoc-github-modal-fade")
			.addClass("nitdoc-github-fade")
		)
		.append(
			$(document.createElement("div"))
			.attr("id", "nitdoc-github-modal")
			.addClass("nitdoc-github-modal")
			.append(
				$(document.createElement("a"))
				.addClass("nitdoc-github-close")
				.attr("title", "Close")
				.append("x")
				.click(function() { Nitdoc.GitHub.ModalBox.close() })
			)
			.append("<h3>" + title + "</h3>")
			.append("<div>" + content + "</div>")
			.append(
				$(document.createElement("div"))
				.addClass("nitdoc-github-buttons")
				.append(
					$(document.createElement("button"))
					.addClass("nitdoc-github-button")
					.append("Ok")
					.click(function() { Nitdoc.GitHub.ModalBox.close() })
				)
			)
		);

		if(isError) {
			$("#nitdoc-github-modal").addClass("nitdoc-github-error");
		}

		$("#nitdoc-github-modal")
		.css({
			top: "50%",
			marginTop: -($("#nitdoc-github-modal").outerHeight() / 2) + "px",
			left: "50%",
			marginLeft: -($("#nitdoc-github-modal").outerWidth() / 2) + "px"
		})
		.find("button.nitdoc-github-button").focus();
	}

	// Close modal box instance
	var close = function() {
		$("#nitdoc-github-modal").remove();
		$("#nitdoc-github-modal-fade").remove();
	}

	// Public interface
	var modalBox = {
		open: open,
		close: close
	};

	return modalBox;
}();

/*
 * Nitdoc.GitHub.CommitBox instance
 */

// Init new commit box instance
Nitdoc.GitHub.CommitBox = function() {

	// Open commit box instance
	var open = function(infos) {
		$("body").append(
			$(document.createElement("div"))
			.attr("id", "nitdoc-github-commitBox-fade")
			.addClass("nitdoc-github-fade")
		);
		$("body").append(
			$(document.createElement("div"))
			.attr("id", "nitdoc-github-commitBox")
			.addClass("nitdoc-github-modal")
			.append(
				$(document.createElement("a"))
				.addClass("nitdoc-github-close")
				.attr("title", "Close")
				.append("x")
				.click(function() { Nitdoc.GitHub.CommitBox.close() })
			)
			.append("<h3>Commit changes</h3>")
			.append(
				$(document.createElement("div"))
				.append(
					$(document.createElement("label"))
					.attr("for", "nitdoc-github-commit-message")
				)
				.append("<br/>")
				.append(
					$(document.createElement("textarea"))
					.attr("id", "nitdoc-github-commit-message")
					.append("doc: " + (infos.isNew ? "added" : "modified") + " comment for " + infos.namespace)
				)
				.append("<br/>")
				.append(
					$(document.createElement("input"))
					.attr({
						id: "nitdoc-github-commit-signedoff",
						type: "checkbox",
						value: "Signed-off-by: " + infos.user.signedOff
					})
					.change(function(e) {
						if ($(this).is(':checked')) {
							$("#nitdoc-github-commit-button").removeAttr("disabled");
						} else {
							$("#nitdoc-github-commit-button").attr("disabled", "disabled");
						}
					})
				)
				.append(
					$(document.createElement("label"))
					.attr("for", "nitdoc-github-commit-signedoff")
					.text("Signed-off-by: " + infos.user.signedOff)
				)
			).append(
				$(document.createElement("div"))
				.addClass("nitdoc-github-buttons")
				.append(
					$(document.createElement("button"))
					.attr({
						id: "nitdoc-github-commit-button",
						disabled: "disabled"
					})
					.addClass("nitdoc-github-button")
					.append(
						$(document.createElement("img"))
						.attr("src", "resources/icons/github-icon.png")
					)
					.append("Commit")
					.mousedown(function() {
						$(this).text("Commiting...");
					})
					.mouseup(function() {
						infos.message = $("#nitdoc-github-commit-message").val() + "\n\n" + infos.user.signedOff;
						Nitdoc.GitHub.UI.saveChanges(infos);
					})
				)
			)
		);

		$("#nitdoc-github-commitBox")
		.css({
			top: "50%",
			marginTop: -($("#nitdoc-github-commitBox").outerHeight() / 2) + "px",
			left: "50%",
			marginLeft: -($("#nitdoc-github-commitBox").outerWidth() / 2) + "px"
		})
		.find("#nitdoc-github-commit-message").focus();
	}

	// Close commit box instance
	var close = function() {
		$("#nitdoc-github-commitBox").remove();
		$("#nitdoc-github-commitBox-fade").remove();
	}

	// Public interface
	var commitBox = {
		open: open,
		close: close
	}
	return commitBox;
}();

/*
 * Nitdoc.GitHub.Utils module
 */

Nitdoc.GitHub.Utils = function() {
	// Extract infos from string location "lib/standard/collection/array.nit:457,1--458,0"
	var parseLocation = function(location) {
		var parts = location.split(":");
		var loc = new Object();
		loc.origin = location;
		loc.path = parts[0];
		loc.lstart = parseInt(parts[1].split("--")[0].split(",")[0]);
		loc.tabpos = parseInt(parts[1].split("--")[0].split(",")[1]);
		loc.lend = parseInt(parts[1].split("--")[1].split(",")[0]);
		return loc;
	}

	// Meld modified comment into file conten
	var mergeComment = function(fileContent, comment, location) {
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
	}

	// Public interface
	var utils = {
		parseLocation: parseLocation,
		mergeComment: mergeComment
	};

	return utils;
}();

