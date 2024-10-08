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

# Basic file server on port 80 by default, may require `root` to execute
#
# To be safe, it is recommended to run this program with its own username:
# `sudo file_server -u nitcorn:www`
module simple_file_server is example

import nitcorn
import privileges

# Prepare options
var opts = new OptionContext
var opt_drop = new OptionUserAndGroup.for_dropping_privileges
var opt_port = new OptionInt("Server port", 80, "--port", "-p")
var opt_help = new OptionBool("Print this message", "--help", "-h")
opts.add_option(opt_drop, opt_port, opt_help)
opts.parse args

# Check options errors and help
if not opts.errors.is_empty or opt_help.value then
	print opts.errors.join("\n")
	print "Usage: file_server [Options]"
	opts.usage
	exit 1
end

# Serve everything with a standard FilesHandler
var vh = new VirtualHost("localhost:{opt_port.value}")
vh.routes.add new Route(null, new FileServer("www/hello_world/"))
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh

# Drop to a low-privileged user
var user_group = opt_drop.value
if user_group != null then user_group.drop_privileges

factory.run
