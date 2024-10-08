# This file is part of NIT ( https://nitlanguage.org ).
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

module test_restful_annot is example

import nitcorn::restful_annot

import pthreads

redef class Sys
	var iface: String is lazy do
		var testid = "NIT_TESTING_ID".environ
		if testid.is_empty then testid = "1"
		return "localhost:{10000+testid.to_i}"
	end

	var host_re: Regex is lazy do return "localhost:\[0-9\]+".to_re
end

class ServerThread
	super Thread

	redef fun main
	do
		# Hide testing concept to force nitcorn to actually run
		"NIT_TESTING".setenv("false")

		# Setup
		var vh = new VirtualHost(iface)
		vh.routes.add new Route("rest_path", new MyAction)

		# Launch
		var factory = new HttpFactory.and_libevent
		factory.config.virtual_hosts.add vh
		factory.run

		return null
	end
end

class ClientParallelThread
	super Thread

	var i: Int

	redef fun main
	do
		system "curl -s '{iface}/rest_path/async_service?str=thread_{i}'"
		return null
	end
end

redef fun system(cmd)
do
	print "[Client] {cmd.replace(host_re, "localhost:*****")}"
	var r = super(cmd)
	print ""
	return r
end

# First, launch a server in the background
var server = new ServerThread
server.start
0.1.sleep

# Launch 4 parallel requests to the async method
for i in 4.times do
	var client = new ClientParallelThread(i)
	client.start
	0.1.sleep
end

# Successes
system "curl -s '{iface}/rest_path/foo?s=s&i=12&b=true'"
system "curl -s '{iface}/rest_path/foo?s=s&i=-4&b=false'"
system "curl -s '{iface}/rest_path/foo' --data 's=s&i=12&b=true'"

system "curl -s '{iface}/rest_path/api_name?s=s'"
system "curl -s '{iface}/rest_path/alt_name?s=s'"
system "curl -s '{iface}/rest_path/api_name?i=4&b=false'"

system """curl -s '{{{iface}}}/rest_path/complex_args?array=["a","b"]&data={"str":"asdf"}' -g"""
system """curl -s '{{{iface}}}/rest_path/complex_args?array=["a","b"]&data={"__class":"MyOtherData","str":"asdf","i":1234}' -g"""

# Errors falling back to `answer`
system "curl -s '{iface}/rest_path/non_existent_service'"
system "curl -s '{iface}/rest_path/foo'" # Missing args
system "curl -s '{iface}/rest_path/foo?b=WrongDataType'"
system "curl -s '{iface}/rest_path/bar?s=s'" # Renamed
system "curl -s '{iface}/rest_path/api_name' --data s=DoesNotAcceptPOST"
system """curl -s '{{{iface}}}/rest_path/complex_args?array=["a","b"]&data={"str":"as' -g""" # Truncated JSON

2.5.sleep
exit 0
