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

# Web server part of the Tnitter project
module tnitter

import privileges

import model
import action

redef class OptionContext
	var drop = new OptionUserAndGroup.for_dropping_privileges
	var help = new OptionBool("Print this message", "--help", "-h")

	init do add_option(drop, help)
end

# Avoid executing when running tests
if "NIT_TESTING".environ == "true" then exit 0

# Prepare options
var opts = new OptionContext
opts.parse(args)
if not opts.errors.is_empty or opts.help.value then
	print opts.errors
	print "Usage: tnitter [Options]"
	opts.usage
	exit 1
end

# If we can, we use port 80
var interfac
if sys.uid == 0 then # Are we root?
	interfac = "localhost:80"
else interfac = "localhost:8080"

# Setup server
var vh = new VirtualHost(interfac)
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh

# Drop to a low-privileged user
var user_group = opts.drop.value
if user_group != null then user_group.drop_privileges

# Complete server config
vh.routes.add new Route(null, new Tnitter)

# Run
print "Launching server on http://{interfac} ..."
factory.run
