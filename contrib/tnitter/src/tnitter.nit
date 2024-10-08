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

# Web server part of the Tnitter project
module tnitter

import privileges

import model
import action
import push

redef class OptionContext
	var drop = new OptionUserAndGroup.for_dropping_privileges
	var help = new OptionBool("Print this message", "--help", "-h")

	init do add_option(drop, help)
end

# Address and port of the listening socket
fun tnitter_interface: String do return "localhost:8080"

# Prepare options
var opts = new OptionContext
opts.parse(args)
if not opts.errors.is_empty or opts.help.value then
	print opts.errors
	print "Usage: tnitter [Options]"
	opts.usage
	exit 1
end

# Setup server
var vh = new VirtualHost(tnitter_interface)
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh

# Drop to a low-privileged user
var user_group = opts.drop.value
if user_group != null then user_group.drop_privileges

# Complete server config
vh.routes.add new Route("/rest/", new TnitterREST)
vh.routes.add new Route("/push/", new TnitterPush)
vh.routes.add new Route(null, new TnitterWeb)

# Run
print "Launching server on http://{tnitter_interface} ..."
factory.run
