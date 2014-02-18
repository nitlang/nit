// require.js configuration
var baseUrl = document.body.getAttribute("data-bootstrap-share") + '/js/lib';
var href = document.location.href
var searchList = href.substring(0, href.lastIndexOf('/')) + '/quicksearch-list';
require.config({
	baseUrl: baseUrl,
	paths: {
		quicksearchList: searchList,
		plugins: '../plugins',
    }
});

// nitdoc main module
define([
], function() {});

