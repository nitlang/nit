// require.js configuration
var baseUrl = document.body.getAttribute("data-bootstrap-share") + '/js/lib';
var href = document.location.href
var searchList = href.substring(0, href.lastIndexOf('/')) + '/quicksearch-list';
require.config({
	baseUrl: baseUrl,
	paths: {
		plugins: '../plugins',
		quicksearchList: searchList,
		jQueryUI: "jquery-ui",
    },
	shim: {
		"jQueryUI": {
		    export: "$",
		    deps: ['jquery']
		}
	}
});

// nitdoc main module
define([
	"plugins/folding",
	"plugins/filtering",
	"plugins/quicksearch",
	"plugins/github",
], function() {});

