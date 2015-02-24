// ==UserScript==
// @name        Github.com - Add RPG tab
// @namespace   nitlanguage/github/rpg
// @description Adds a "Github RPG" Tab at the end of the tabs.
// @include     https://github.com/privat/nit*
// @version     1
// @grant       none
// ==/UserScript==

/* This script is a userscript to use in browsers with the appropriate plug-in to add a "RPG" tab on the github site.
*/

/* TODO:
 * Link to the player page (if logged and is a player)
 * Link to other games (not just `privat/nit` but other)
*/

// The nav bar with tabs
var nav = document.getElementsByClassName('repo-nav');

// The new tab
var html = '<li class="tooltipped tooltipped-w" aria-label="Github RPG">\
    <a href="http://nitlanguage.org/rpg/games/privat/nit" aria-label="RPG" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_settings /privat/nit/settings">\
          <span class="octicon octicon-ruby"></span> <span class="full-word">Github RPG</span>\
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16">\
</a></li>';

// Create a new list to put the new tab
var group = document.createElement('ul');
group.setAttribute( 'class', 'sunken-menu-group' );
group.innerHTML = html;

nav[0].appendChild(group);
