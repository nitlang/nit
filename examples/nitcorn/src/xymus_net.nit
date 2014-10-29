# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Configuration of the Web server of xymus.net
module xymus_net

import nitcorn
import privileges

# Use actions defined by contribs
import tnitter
import benitlux_controller
import opportunity_controller

# Header for the whole site
class MasterHeader
	super Template

	# Current page id, is used to set the `active` class on the header tab
	var page: nullable String

	# Make room for a login or logout placeholder (used by tnitter)
	var login_placeholder: Bool

	redef fun rendering
	do
		var actives = new HashMap[String, String]
		var page = page
		if page != null then actives[page] = " class=\"active\""

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
        <li{{{actives.get_or_default("ens", "")}}}><a href="http://xymus.net/ens/">Enseignement</a></li>
        <li><a href="http://pep8.xymus.net/">Pep/8 Analysis</a></li>
        <li{{{actives.get_or_default("tnitter", "")}}}><a href="http://tnitter.xymus.net/">Tnitter</a></li>
        <li{{{actives.get_or_default("benitlux", "")}}}><a href="http://benitlux.xymus.net/">Benitlux</a></li>
        <li{{{actives.get_or_default("opportunity", "")}}}><a href="http://xymus.net/opportunity/">Opportunity</a></li>
        <li><a href="http://nitlanguage.org/">Nit</a></li>
      </ul>

      <ul class="nav navbar-nav pull-right">
	  """
		if login_placeholder then add "%header_right%"

		add """
      </ul>
    </div>
  </div>
</nav>"""
	end

	redef fun to_s do return write_to_string
end

class OpportunityMasterHeader
	super OpportunityHeader

	var master_header: MasterHeader

	redef fun rendering
	do
		add """
<!DOCTYPE html>
<html>
<head>
	<title>Opportunity - The meetup planner</title>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
	<script src="//netdna.bootstrapcdn.com/bootstrap/3.0.0/js/bootstrap.min.js"></script>
	<script>
		{{{page_js}}}
	</script>
	<style>
		.answer:hover {
			cursor:pointer;
		}
		.opportunity-action:hover {
			cursor:pointer;
		}
	</style>
</head>
<body>"""
		add master_header
	end
end

redef class Tnitter
	redef var header: String = (new MasterHeader("tnitter", true)).to_s
end

redef class BenitluxDocument
	redef var header = new MasterHeader("benitlux", false)
end

redef class ErrorTemplate
	redef var header = new MasterHeader(null, false)
end

redef class OpportunityPage
	redef var header = new OpportunityMasterHeader(new MasterHeader("opportunity", false))
end

# Avoid executing when running tests
if "NIT_TESTING".environ == "true" then exit 0

# Setup server interfaces
#
# Change these to use this config on your own server!
var default_vh = new VirtualHost("xymus.net:80")
var vps_vh = new VirtualHost("vps.xymus.net:80")
var tnitter_vh = new VirtualHost("tnitter.xymus.net:80")
var pep8_vh = new VirtualHost("pep8.xymus.net:80")
var benitlux_vh = new VirtualHost("benitlux.xymus.net:80")

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add default_vh
factory.config.virtual_hosts.add vps_vh
factory.config.virtual_hosts.add tnitter_vh
factory.config.virtual_hosts.add pep8_vh
factory.config.virtual_hosts.add benitlux_vh

# Ports are open, drop to a low-privileged user if we are root
var user_group = new UserGroup("nitcorn", "nitcorn")
if sys.uid == 0 then user_group.drop_privileges

# Tnitter is available at `tnitter.xymus.net` and `xymus.net/tnitter/`
var tnitter = new Tnitter
default_vh.routes.add new Route("/tnitter/", tnitter)
tnitter_vh.routes.add new Route(null, tnitter)

# Pep/8 Analysis is only a file server. It is available at `pep8.xymus.net`
# and through the global/default file server at `xymus.net/pep8/`
#
# TODO Implement pep8analysis server-side with a nitcorn action
pep8_vh.routes.add new Route(null, new FileServer("/var/www/pep8/"))

# Benitlux is available at `benitlux.xymus.net` and `xymus.net/benitlux/`
#
# It has 2 actions/Web interfaces. The Web user UI to subscribe and unsubscribe
# to the mailing list. And the RESTful interface used by the Android app.
var benitlux_sub = new BenitluxSubscriptionAction
var benitlux_rest = new BenitluxRESTAction
default_vh.routes.add new Route("/benitlux/rest/", benitlux_rest)
default_vh.routes.add new Route("/benitlux/", benitlux_sub)
benitlux_vh.routes.add new Route("/rest/", benitlux_rest)
benitlux_vh.routes.add new Route(null, benitlux_sub)

var opportunity = new OpportunityWelcome
var opportunity_rest = new OpportunityRESTAction
default_vh.routes.add new Route("/opportunity/rest/", opportunity_rest)
default_vh.routes.add new Route("/opportunity/", opportunity)

# We use a special file server for the path `xymus.net/ens` only to display
# a different header.
var file_server_ens = new FileServer("/var/www/ens/")
file_server_ens.header = (new MasterHeader("ens", false))
default_vh.routes.add new Route("/ens/", file_server_ens)

# Default file server is used for the main page at `xymus.net` and it is
# the default action for any path not caught by other actions.
var file_server = new FileServer("/var/www/")
file_server.header = (new MasterHeader(null, false))
default_vh.routes.add new Route(null, file_server)
vps_vh.routes.add new Route(null, file_server)

# Launch server main loop
factory.run
