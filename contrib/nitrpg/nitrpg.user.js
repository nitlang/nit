// ==UserScript==
// @name        Github.com - Add RPG tab
// @namespace   nitlanguage/github/rpg
// @description Adds a "Github RPG" Tab at the end of the tabs.
// @include     https://github.com/*
// @downloadURL https://github.com/nitlang/nit/raw/master/contrib/nitrpg/nitrpg.user.js
// @version     2
// @grant       none
// ==/UserScript==

// The nav bar with tabs
var nav = document.getElementsByClassName('reponav');
if (!nav || !nav[0]) return;

// The current repo to link
var repo = $("meta[name='octolytics-dimension-repository_nwo']").attr("content");
//repo = "nitlang/nit";
if (!repo) return;

// The content of the new tab
var html = '<a href="http://nitlanguage.org/rpg/games/' + repo + '" class="js-selected-navigation-item reponav-item" data-selected-links="nitrpg"><span class="octicon octicon-ruby"></span> Github RPG</a>';
//html = '<p><span>x</span></p>';

// Inject the new tab
var div = document.createElement('div');
div.innerHTML = html;
nav[0].append(div.firstChild);
