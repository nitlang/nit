$(document).ready(function() {
	// set ui elements
	ui = new GitHubUI();
	ui.init();

	// check cookie at startup
	sessionCookie = new SessionCookie("nitdoc_github_session");
	var session = sessionCookie.getSession();
	//checkCookie()
	if(session) {
		githubAPI = new GitHubAPI(session.user, session.password, session.repo)
		ui.activate();
		console.log("Session started from cookie (head: "+ $("body").attr("data-github-head") +", head: "+ $("body").attr("data-github-base") +")");

	} else {
		console.log("No cookie found");
	}
});

// Check if a comment is editing
window.onbeforeunload = function() {
	if(ui.openedComments > 0){
	return 'Are you sure you want to leave this page?';
	}
};

/* GitHub API */

function GitHubAPI(login, password, repo) {
	this.login = login;
	this.password = password;
	this.repo = repo;
	this.auth = "Basic " +  Base64.encode(login + ':' + password);

	/* GitHub Account */

	// try to login to github API
	this.tryLogin = function() {
		var res = false;
		$.ajax({
			beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
			},
			type: "GET",
			url: "https://api.github.com/repos/" + this.login+ "/" + this.repo,
			async: false,
			dataType: 'json',
			success: function() {
				res = true;
			}
		});
		return res;
	}

	this.getUserInfos = function() {
		var res = false;
		$.ajax({
			beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
			},
			type: "GET",
		        url: "https://api.github.com/users/" + this.login,
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

	this.getSignedOff = function() {
		var infos = this.getUserInfos();
		return infos.name + " &lt;" + infos.email + "&gt;";
	}

	/* GitHub Repos */

	this.getFile = function(path, branch){
		var res = false;
		$.ajax({
		type: "GET",
			url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/contents/" + path,
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

	/* GitHub commits */

	// get the latest commit on `branchName`
	this.getLastCommit = function(branchName) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "GET",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/refs/heads/" + branchName,
			async: false,
		dataType: 'json',
		success: function(response) {
				res = response.object;
			},
			error: function(response) {
				res = response;
			}
	});
		return res;
        }

	// get the base tree for commit
	this.getTree = function(sha) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "GET",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/trees/" + sha + "?recursive=1",
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
	this.createBlob = function(content) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "POST",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/blobs",
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
	this.createTree = function(baseTree, path, blob) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "POST",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/trees",
			data: JSON.stringify({
				base_tree: baseTree.sha,
				tree: [{
					path: path,
					mode: 100644, // file (blob)
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
	this.createCommit = function(message, parentCommit, tree) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "POST",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/git/commits",
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
	this.createPullRequest = function(title, body, base, head) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "POST",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/pulls",
			data: JSON.stringify({
				title: title,
				body: body,
				base: base,
				head: head
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
	this.updatePullRequest = function(title, body, state, number) {
		var res = false;
		$.ajax({
		beforeSend: function (xhr) {
				xhr.setRequestHeader ("Authorization", githubAPI.auth);
		},
		type: "PATCH",
		url: "https://api.github.com/repos/" + this.login + "/" + this.repo + "/pulls/" + number,
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
}
var githubAPI;

/* GitHub cookie management */

function SessionCookie(cookieName) {
	this.cookieName = cookieName

	this.setSession = function (user, password, repo) {
		var value = Base64.encode(JSON.stringify({
			user: user,
			password: password,
			repo: repo
		}));
		var exdate = new Date();
		exdate.setDate(exdate.getDate() + 1);
		document.cookie = this.cookieName + "=" + value + "; expires=" + exdate.toUTCString();
	}

	this.delSession = function() {
	    document.cookie = this.cookieName + '=; expires=Thu, 01 Jan 1970 00:00:01 GMT;';
	}

	this.getCookieDatas = function() {
		var c_name = this.cookieName;
		var c_value = document.cookie;
		var c_start = c_value.indexOf(" " + c_name + "=");
		if (c_start == -1) { c_start = c_value.indexOf(c_name + "="); }
		if (c_start == -1) {
			c_value = null;
		} else {
			c_start = c_value.indexOf("=", c_start) + 1;
			var c_end = c_value.indexOf(";", c_start);
			if (c_end == -1) { c_end = c_value.length; }
			c_value = unescape(c_value.substring(c_start,c_end));
		}
		return c_value;
	}

	this.getSession = function() {
		var cookie = this.getCookieDatas();
		if (!!cookie) {
			return JSON.parse(Base64.decode(cookie));
		}
		return false;
	}
}
var sessionCookie;

/* GitHub login box */

function LoginBox() {
	// Add login box
	$("nav.main ul").append(
		$("<li id='liGitHub'></li>")
		.append(
			$("<a class='btn' id='logGitHub'><img id='imgGitHub' src='resources/icons/github-icon.png' alt='GitHub'/></a>")
			.click(function() { ui.loginBox.toggle() })
		)
		.append(
			"  <div id='loginBox' style='display: none;'>" +
			"    <div class='arrow'>&nbsp;</div>" +
			"      <h3>Github Sign In</h3>" +
			"        <div id='signedIn' style='display: none'>" +
			"          <label id='logginMessage'>Hello " +
			"            <a id='githubAccount'><strong id='nickName'></strong></a>!" +
			"          </label>" +
			"          <label for='github-repo'>Repo</label>" +
			"          <input id='github-repo' disabled='disabled' type='text'/>" +
			"          <label for='github-head'>Head</label>" +
			"          <input id='github-head' disabled='disabled' type='text'/>" +
			"          <label for='github-base'>Base</label>" +
			"          <input id='github-base' disabled='disabled' type='text'/>" +
			"          <button class='signIn github'><img src='resources/icons/github-icon.png'/>Sign Off</button>" +
			"        </div>" +
			"        <div id='signedOff'>" +
			"	  <form>" +
			"          <label for='loginGit'>Username</label>" +
			"          <input id='loginGit' type='text'/>" +
			"          <label for='passwordGit'>Password</label>" +
			"          <input id='passwordGit' type='password'/>" +
			"          <label for='repositoryGit'>Repository</label>" +
			"          <input id='repositoryGit' type='text'/>" +
			"          <button class='signIn github'><img src='resources/icons/github-icon.png'/>Sign In</button>" +
			"	  </form>" +
			"      </div>" +
			"    </div>" +
			"  </div>"
		)
	);

	// Login with github user or logout current session
	$("#loginBox .signIn").click(function(){
		if($('#signedIn').is(':hidden')){
			if(!$('#loginGit').val() || !$('#passwordGit').val() || !$('#repositoryGit').val()) {
				ui.openModalBox("Login incorrect!", "Please enter your username, password and repository.", true);
			} else {
				githubAPI = new GitHubAPI($('#loginGit').val(),  $('#passwordGit').val(), $('#repositoryGit').val());
				if(githubAPI.tryLogin()) {
					// open session and set cookie
					sessionCookie.setSession(githubAPI.login, githubAPI.password, githubAPI.repo);
					ui.activate();
				} else {
					githubAPI = false;
					ui.openModalBox("Login incorrect!", "Your login information was incorrect!", true);
				}
			}
		} else {
			ui.disactivate();
			ui.loginBox.toggle();
		}
		return false;
	});

	this.toggle = function() {
		if ($('#loginBox').is(':hidden')) {
			$('#loginBox').show();
			if (!$('#loginGit').is(':hidden')) { $('#loginGit').focus(); }
		} else {
			$('#loginBox').hide();
		}
	}
}

/* Comment edition UI */

function GitHubUI() {
	this.loginBox = new LoginBox();
	this.openedComments = 0;

	this.init = function() {
		$("body").append("<div id='modal'></div>");
		$('body').append('<div id="fade"></div>');
	}

	this.disactivate = function() {
		// close session and purge cookie
		sessionCookie.delSession();
		localStorage.clear();
		window.location.reload();
	}

	this.activate = function() {
		// get lastest commit
		var latest = githubAPI.getLastCommit($("body").attr("data-github-head"));
		if(!latest || !latest.sha) {
			this.openModalBox("Head branch not found!", latest.status + ": " + latest.statusText, true)
			return;
		}
		if(localStorage.latestCommit != latest.sha) {
			console.log("Latest commit changed: cleaned cache");
			localStorage.requests = "[]";
			localStorage.latestCommit = latest.sha;
		}
		console.log("Latest commit sha: " + localStorage.latestCommit);

		// reload loginBox
		$('#signedOff').hide();
		$('#signedIn').show();
		$("#imgGitHub").attr("src", "resources/icons/github-icon-w.png");
		$("#liGitHub").addClass("current");

		// login form values
		$('#nickName').text(githubAPI.login);
		$('#githubAccount').attr("href", "https://github.com/" + githubAPI.login);
		$('#github-repo').val(githubAPI.repo);
		$('#github-base').val($("body").attr("data-github-base"));
		$('#github-head').val($("body").attr("data-github-head"));

		// Activate edit mode

		// Add hidden <pre> to empty commits
		$("span.noComment").each(function() {
			$(this).addClass("editComment");
			var baseComment = $(this).parent().prev();
			var location = ui.parseLocation(baseComment.attr("data-comment-location"));
			location.lend = location.lstart;
			var locString = "../" + location.path + ":" + location.lstart + "," + location.tabpos + "--" + location.lend + ",0";
			baseComment.attr("data-comment-location", locString);
			$(this).html("<a class='editComment noComment'>add comment</a> for ");
		});
		$('.description div.comment').each(function() {
			var p = $(this).next();
			p.prepend("<span class='editComment'><a class='editComment'>edit comment</a> for </span>")
		});
		$('a.editComment').each(function() {
			$(this).css("cursor", "pointer")
			$(this).click(function() {
				$(this).parent().hide();
				if(!$(this).hasClass("noComment")) {
					$(this).parent().parent().prev().hide();
					ui.openCommentBox($(this).parent().parent().prev().prev());
				} else {
					ui.openCommentBox($(this).parent().parent().prev());
				}
			});
		});

		// load comment from current branch
		this.reloadComments();
	}

	this.openModalBox = function(title, msg, isError) {
		$('#fade').show();
		$('#modal')
			.empty()
			.append($('<a class="close"><img src="resources/icons/close.png" class="btnClose" title="Close" alt="Close"/></a>').click(function() {ui.closeModalBox()}))
			.append("<h3>" + title + "</h3>")
			.append("<div>" + msg + "</div>")
			.append(
				$("<div class='buttonArea'>")
				.append($("<button>Ok</button>").click(function() {ui.closeModalBox()}))
			)
			.show()
			.css("top", "50%")
			.css("margin-top", -($('#modal').outerHeight() / 2) + "px")
			.css("left", "50%")
			.css("margin-left", -($('#modal').outerWidth() / 2) + "px");
		if(isError) {
			$("#modal h3").addClass("error");
		}
	}

	this.closeModalBox = function() {
		$('#fade , #modal').hide();
	}

	this.openCommentBox = function(baseArea) {
		this.openedComments += 1;
		// get text and format it
		var formated = "";
		var len = 1;
		var commentLines = baseArea.text().split('\n');
		for (var i = 0; i < commentLines.length; i++) {
			formated += commentLines[i];
			if(i < commentLines.length - 2){ formated += "\n"; }
		}
		len = commentLines.length - 1;

		// create comment box
		var tarea = $("<textarea rows='" + len + "'>" + formated + "</textarea>");
		var width = width = baseArea.parent().innerWidth() - 13;
		tarea.css("width", width + "px");
		tarea.css("display", "block");
		tarea.keyup(function(event) {
			$(event.target).css("height", (event.target.value.split(/\r|\n/).length * 16) + "px");
			var baseComment =  $(event.target).parents("div.description").find("textarea.baseComment").text();
			if ($(event.target).val() != baseComment) {
				$(event.target).parent().find("button.commit").removeAttr("disabled");
			} else {
				$(event.target).parent().find("button.commit").attr("disabled", "disabled");
			}
		});
		tarea.keydown(function(event) {
			if(event.keyCode == 13){
				$(event.target).css("height", ($(event.target).outerHeight() + 6) + "px");
			}
		});
		var commentBox = $("<div class='commentBox'></div>")
			.attr("data-comment-namespace", baseArea.attr("data-comment-namespace"))
			.attr("data-comment-location", baseArea.attr("data-comment-location"))
			.append(tarea)
			.append(
				$("<a class='preview'>preview</a>")
				.click(function() {
					var converter = new Markdown.Converter()
					var html = converter.makeHtml(tarea.val());
					ui.openModalBox("Preview", html, false);
				})
			)
			.append(
				$("<button class='commit'>Commit</button>")
				.click(function() {
					ui.openCommitBox($(this).parent());
				})
			)
			.append(
				$("<button class='cancel'>Cancel</button>")
				.click(function() {ui.closeCommentBox($(this).parent())})
			);
		if(!baseArea.text()) {
			commentBox.addClass("newComment");
		}
		baseArea.after(commentBox);
		tarea.trigger("keyup");
	}

	this.closeCommentBox = function(commentBox) {
		this.openedComments -= 1;
		var target = commentBox.next();
		if(!commentBox.hasClass("newComment")) {
			target.show();
			target = target.next();
		}
		target.find("span.editComment").show();
		commentBox.remove();
	}

	this.openCommitBox = function(commentBox) {
		$('#fade').show();
		$('#modal')
			.empty()
			.append($('<a class="close"><img src="resources/icons/close.png" class="btnClose" title="Close" alt="Close"/></a>').click(function() {ui.closeModalBox()}))
			.append("<h3>Commit changes</h3><br/>")
			.append("<label for='message'>Message:</label><br/>")
			.append("<textarea id='message'>Wikidoc: " + (commentBox.hasClass("newComment") ? "added" : "modified") + " comment for " + commentBox.attr("data-comment-namespace") + "</textarea><br/>")
			.append("<input id='signOff' type='checkbox' value='Signed-off-by: " + githubAPI.getSignedOff() + "'/>")
				.change(function(e) {
					if ($(e.target).is(':checked')) {
						$("#commitBtn").removeAttr("disabled");
					} else {
						$("#commitBtn").attr("disabled", "disabled");
					}
				})
			.append("<label for='signOff'> Signed-off-by: " + githubAPI.getSignedOff() + "</label>")
			.append(
				$("<div class='buttonArea'>")
				.append(
					$("<button id='commitBtn' disabled='disabled' class='github'><img src='resources/icons/github-icon.png'/>Commit</button>")
					.mousedown(function() {
						$(this).text("Commiting...");
					})
					.mouseup(function() {
						ui.commit($(this).parent().parent(), commentBox)
					})
				)
			)
			.show()
			.css("top", "50%")
			.css("margin-top", -($('#modal').outerHeight() / 2) + "px")
			.css("left", "50%")
			.css("margin-left", -($('#modal').outerWidth() / 2) + "px");
	}


	this.commit = function(commitBox, commentBox) {
		// get comments datas
		var location = this.parseLocation(commentBox.attr("data-comment-location"));
		var comment = commentBox.find("textarea").val();

		// get file content from github
		var origFile = githubAPI.getFile(location.path, $('#github-head').val());
		if(!origFile.content) {
			this.openModalBox("Unable to locate source file!", origFile.status + ": " + origFile.statusText);
			return;
		}
		var base64Content = origFile.content.substring(0, origFile.content.length - 1)
		var fileContent = Base64.decode(base64Content);

		// commit
		var newContent = this.mergeComment(fileContent, comment, location);
		var message = commitBox.find("#message").val() + "\n\n" + commitBox.find("#signOff").val();
		var response = this.pushComment($('#github-base').val(), $('#github-head').val(), location.path, newContent, message)
		if(!response) {
			// abort procedure
			return;
		}

		// save pull request in cookie
		var requests = [];
		if(!!localStorage.requests) {requests = JSON.parse(localStorage.requests)}
		requests[requests.length] = {
			request: response,
			location: commentBox.attr("data-comment-location"),
			comment: Base64.encode(comment)
		};
		localStorage.requests = JSON.stringify(requests);
		// close boxes
		this.closeModalBox()
		this.closeCommentBox(commentBox);
		// reload comments
		this.reloadComments();
	}

	/*
	   Creating a new pull request with the new comment take 5 steps:
		1. get the base tree from latest commit
		2. create a new blob with updated file content
		3. post a new tree from base tree and blob
		4. post the new commit with new tree
		5. create the pull request
	*/
	this.pushComment = function(base, branch, path, content, message) {
		var baseTree = githubAPI.getTree(localStorage.latestCommit);
		if(!baseTree.sha) {
			this.openModalBox("Unable to locate base tree!", baseTree.status + ": " + baseTree.statusText, true);
			return false;
		}
		console.log("Base tree: " + baseTree.url);
		var newBlob = githubAPI.createBlob(content);
		if(!newBlob.sha) {
			this.openModalBox("Unable to create new blob!", newBlob.status + ": " + newBlob.statusText, true);
			return false;
		}
		console.log("New blob: " + newBlob.url);
		var newTree = githubAPI.createTree(baseTree, path, newBlob);
		if(!newTree.sha) {
			this.openModalBox("Unable to create new tree!", newTree.status + ": " + newTree.statusText, true);
			return false;
		}
		console.log("New tree: " + newTree.url);
		var newCommit = githubAPI.createCommit(message, localStorage.latestCommit, newTree);
		if(!newCommit.sha) {
			this.openModalBox("Unable to create new commit!", newCommit.status + ": " + newCommit.statusText, true);
			return false;
		}
		console.log("New commit: " + newCommit.url);
		var pullRequest = githubAPI.createPullRequest(message.split("\n\n")[0], message, base, newCommit.sha);
		if(!pullRequest.number) {
			this.openModalBox("Unable to create pull request!", pullRequest.status + ": " + pullRequest.statusText, true);
			return false;
		}
		console.log("New pull request: " + pullRequest.url);
		return pullRequest;
	}

	this.reloadComments = function() {
		if(!localStorage.requests){ return; }
		var requests = JSON.parse(localStorage.requests);
		var converter = new Markdown.Converter();
		// Look for modified comments in page
		for(i in requests) {
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
						div.removeClass("locked");
						div.css("cursor", "pointer")
						div.click(function() {
							ui.openCommentBox(div.prev());
						});
						div.next().remove();
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
						div.unbind("click");
						div.addClass("locked");
						div.after(
							$("<p class='locked inheritance'>")
							.text("comment modified in ")
							.append("<a href='"+ request.request.html_url +"' target='_blank' title='Review on GitHub'>pull request #"+ request.request.number +"</a>")
							.append(" ")
							.append(
								$("<a data-pullrequest-number='"+ request.request.number +"' class='cancel'>cancel</a>")
								.click(function (){
									ui.closePullRequest($(this).attr("data-pullrequest-number"));
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

	this.closePullRequest = function(number) {
		// close pull request
		var res = githubAPI.updatePullRequest("Canceled from Wikidoc", "", "closed", number);
		if(!res.id) {
			this.openModalBox("Unable to close pull request!", res.status + ": " + res.statusText, true);
			return false;
		}
		// remove from localstorage
		var requests = JSON.parse(localStorage.requests);
		for(i in requests) {
			if(requests[i].request.number == number) {
				requests[i].isClosed = true;
			}
		}
		localStorage.requests = JSON.stringify(requests);
		ui.reloadComments()
	}

	/* Utility */

	// Extract infos from string location "../lib/standard/collection/array.nit:457,1--458,0"
	this.parseLocation = function(location) {
		var parts = location.split(":");
		var loc = new Object();
		loc.path = parts[0].substr(3, parts[0].length);
		loc.lstart = parseInt(parts[1].split("--")[0].split(",")[0]);
		loc.tabpos = parseInt(parts[1].split("--")[0].split(",")[1]);
		loc.lend = parseInt(parts[1].split("--")[1].split(",")[0]);
		return loc;
	}

	// Meld modified comment into file content
	this.mergeComment = function(fileContent, comment, location) {
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

}
var ui;

