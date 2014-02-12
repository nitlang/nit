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
 * Nitdoc.GitHub.CommentBox class
 */
define([
	"jquery",
	"base64",
	"Markdown.Converter",
	"plugins/github/ui",
	"plugins/github/commitbox",
], function($, Base64, mkdown, UI, CommitBox) {

	// Init new modal box instance
	var CommentBox = function(infos) {
		this.infos = infos;
		this.commentBoxDiv;
	};

	CommentBox.prototype.open = function(baseArea) {
		//TODO redo
		//UI.addOpenedComments();
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
				ModalBox.open("Preview", html, false);
			})
		)
		.append(
			$(document.createElement("button"))
			.addClass("nitdoc-github-button")
			.addClass("nitdoc-github-commit")
			.append("Commit")
			.click(function() {
				instance.infos.newComment = tarea.val();
				instance.infos.commentBox = instance;
				CommitBox.open(instance.infos);
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
	};

	CommentBox.prototype.close = function() {
		//TODO redo
		//UI.remOpenedComments();
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
	};

	return CommentBox;
});
