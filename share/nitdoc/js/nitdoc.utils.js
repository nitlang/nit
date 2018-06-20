/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Utils module */

String.prototype.startsWith = function(prefix, caseSensitive) {
	if(caseSensitive) {
		return this.toUpperCase().indexOf(prefix.toUpperCase()) === 0;
	}
	return this.indexOf(prefix) === 0;
}

// Compare two strings using Sorensen-Dice Coefficient
// see: http://en.wikipedia.org/wiki/S%C3%B8rensen%E2%80%93Dice_coefficient
String.prototype.dice = function(other) {
	var length1 = this.length - 1;
	var length2 = other.length - 1;
	if(length1 < 1 || length2 < 1) return 0;

	var bigrams2 = [];
	for(var i = 0; i < length2; i++) {
		bigrams2.push(other.substr(i, 2));
	}

	var intersection = 0;
	for(var i = 0; i < length1; i++) {
		var bigram1 = this.substr(i, 2);
		for(var j = 0; j < length2; j++) {
			if(bigram1 == bigrams2[j]) {
				intersection++;
				bigrams2[j] = null;
				break;
			}
		}
	}
	return (2.0 * intersection) / (length1 + length2);
}

var Utils = {
	delayEvent: function(handler, event) {
		if(this.delayEvent.timeout) {
			clearTimeout(this.delayEvent.timeout);
		}
		this.delayEvent.timeout = setTimeout(function() {
		    handler.call(event);
		}, 100);
	},

	scrollTo: function(target) {
		var element = $(target);
		if(element[0]) {
			$("body, html").animate({
				scrollTop: element.offset().top - 60
			});
		}
	},

	openTab: function(e) {
		// Open tab
		var url = document.location.toString();
		if (url.match('#')) {
			var hash = url.split('#')[1];
			var element = $('.nav-tabs a[href="#' + hash + '"]');
			if(element[0]) {
				element.tab('show');
			} else {
				Utils.scrollTo('#' + hash);
			}
		}

		// Jump to id
		var obj = new URL(url);
		var arg = obj.searchParams.get("def");
		if(arg) {
			var def = '#' + arg;
			$('.card.active').removeClass('active');
			$(def).addClass('active');
			$(def).find('.collapse').collapse();
			Utils.scrollTo(def);
		}
	}
};

Utils.openTab();

window.addEventListener("hashchange", Utils.openTab, false);

// Scroll on hash click
$('.summary a[href*=#]').on('click', function(e) {
	e.preventDefault();
	Utils.scrollTo(e.currentTarget.hash);
	history.pushState({}, '', e.currentTarget.hash);
});

// Change hash for page-reload
$('.nav-tabs a[href]').on('shown.bs.tab', function (e) {
	history.pushState({}, '', e.target.hash)
});
