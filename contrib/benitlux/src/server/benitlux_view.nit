# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# View logic of the Web interface Benitlux
module benitlux_view

import benitlux_model
import template

# Template for the whole Benitlux page
class BenitluxDocument
	super Template

	# Page title
	var page_title = "Benitlux Mailing List" is writable

	# Page header
	fun header: Template do return new BenitluxHeader

	# Error or success message content, will be shown in a dismissable panel
	var message_content: nullable String = null is writable

	# Error or success message level (success/danger/warning/info)
	var message_level: nullable String = null is writable

	# Lines of the last email sent to subscribers
	var sample_email_lines: nullable Array[String] = null is writable

	redef fun rendering
	do
		add """
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
	<script src="//netdna.bootstrapcdn.com/bootstrap/3.0.0/js/bootstrap.min.js"></script>
	<title>"""
		add page_title
		add """</title>
</head>
<body>
		"""
		add header
		add """
<div class="container">

<div class="panel panel-default">
  <div class="panel-body">
	<p>Service de diffusion des changements au menu de l'excellente
	<a href="http://www.brasseriebenelux.com/">Brasserie Bénélux</a>
	sur la rue Sherbrooke. La liste est mise à jours tous les jours à 14h,
	le courriel est envoyé au même moment.</p>
	<form class="form-inline text-center" role="form" method="POST">
	  <div class="form-group">
		<div class="input-group">
		  <div class="input-group-addon">@</div>
		  <input class="form-control" type="email" name="email" placeholder="Enter email">
		</div>
	  </div>
	  <button type="submit" class="btn btn-default" name="sub">S'inscrire</button>
	  <button type="submit" class="btn btn-default" name="unsub">Se désinscrire</button>
	</form>
  </div>
</div>
		"""

		var message_level = message_level
		var message_content = message_content
		if message_level != null and message_content != null then
			add """
<div class="alert alert-{{{message_level}}} alert-dismissible" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
  {{{message_content}}}
</div>
			"""
		end

		var sample_email_lines = sample_email_lines
		if sample_email_lines != null then
			add """
<div class="panel panel-default">
  <div class="panel-heading">Dernier courriel envoyé</div>
  <ul class="list-group">
    <li class="list-group-item">
	{{{sample_email_lines.join("</li><li class=\"list-group-item\">")}}}
	</li>
  </ul>
</div>"""
		end

		add """
</div>
</body>
</html>"""
	end
end

# Template for the header of Benitlux (right after the opening of `<body>`)
class BenitluxHeader
	super Template

	redef fun rendering
	do
		add """
<nav class="navbar navbar-default" role="navigation">
  <div class="container-fluid">
    <div class="navbar-header">
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
		<span class="icon-bar"></span>
		<span class="icon-bar"></span>
		<span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="http://xymus.net/">Xymus.net</a>
    </div>

    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav">
        <li><a href="http://pep8.xymus.net/">Pep/8 Analysis</a></li>
        <li><a href="http://tnitter.xymus.net/">Tnitter</a></li>
        <li class="active"><a href="http://benitlux.xymus.net/">Benitlux</a></li>
      </ul>
    </div>
  </div>
</nav>"""
	end
end
