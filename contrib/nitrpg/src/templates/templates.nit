# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014-2015 Alexandre Terrasa <alexandre@moz-code.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Templates that compose the `nitrpg` site.
module templates

import panels

# A page in the nitrp site.
class NitRpgPage
	super Template

	# URL used as prefix for all the links generated in this page.
	var root_url: String

	# Breadcrumbs to this page if any.
	var breadcrumbs: nullable Breadcrumbs = null is public writable

	# Panels to display in the sidebar.
	var side_panels = new Array[Panel]

	# Panels to display in the page main container.
	var flow_panels = new Array[Panel]

	redef fun rendering do
		render_header
		render_footer
	end

	# Render the header shared by all pages.
	fun render_header do
		add """
<!DOCTYPE html>
<html>
	<head>
		<meta charset="UTF-8">
		<title>Github RPG</title>
		<link rel="stylesheet"
			href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/css/bootstrap.min.css">
		<link rel="stylesheet" href="{{{root_url}}}/styles/main.css">
	</head>
	<body>
		<nav class="navbar navbar-inverse navbar-fixed-top" role="navigation">
			<a class="navbar-brand" href="{{{root_url}}}/">Github RPG</a>"""
		if not breadcrumbs == null then
			add breadcrumbs.as(not null)
		end
		add """
		</nav>
		<div class="container-fluid">
			<div class="row">"""
		if not side_panels.is_empty then
			add """<div class="col-xs-3" id="side">"""
			for panel in side_panels do add panel
			add """</div>
				   <div class="col-xs-9" id="flow">"""
		else
			add """<div class="col-xs-12" id="flow">"""
		end
		for panel in flow_panels do add panel
		add """    </div>
			</div>
		</div>
"""
	end

	# Render the footer shared by all pages.
	fun render_footer do
		add """
		<script src="http://code.jquery.com/jquery-1.11.0.min.js"></script>
		<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.1/js/bootstrap.min.js"></script>
	</body>
</html>
"""
	end
end

# A Bootstrap breadcrumbs component.
class Breadcrumbs
	super Template

	# Items to display in this breadcrumb.
	var entries = new Array[String]

	redef fun rendering do
		add "<ol class=\"breadcrumb\">"
		for entry in entries do
			add "<li>{entry}</li>"
		end
		add "</ol>"
	end

	# Add a link to the breadcrumbs.
	fun add_link(href, name: String) do
		entries.add "<a href=\"{href}\">{name}</a>"
	end
end
