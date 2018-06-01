# This file is part of NIT ( http://www.nitlanguage.org ).
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

import nitcorn
import pthreads

redef class Sys
	var iface: String is lazy do
		var testid = "NIT_TESTING_ID".environ.to_i
		return "localhost:{10000+testid}"
	end

	var fs_path: String = getcwd / "../lib/nitcorn/examples/www/hello_world/dir" is lazy
end

class MyAction
	super Action

	redef fun answer(request, turi)
	do
		var rep = new HttpResponse(200)
		var body = """
[Response] Simple answer
Method: {{{request.method}}}, URI: {{{request.uri}}}, trailing: {{{turi}}}"""

		if request.get_args.not_empty
		then body += "\nGET args: {request.get_args.join(", ", ":")}"

		if request.post_args.not_empty
		then body += "\nPOST args: {request.post_args.join(", ", ":")}"

		if request.uri_params.not_empty
		then body += "\nParams args: {request.uri_params.join(", ", ":")}"

		if request.cookie.not_empty
		then body += "\nCookie: {request.cookie.join(", ", ":")}"

		body += "\n"
		rep.body = body
		return rep
	end
end

class MyBinAction
	super Action

	redef fun answer(request, turi)
	do
		var rep = new HttpResponse(200)
		rep.body = b"\xF1\xF2\xF3\n"
		return rep
	end
end

class MyTmplAction
	super Action

	redef fun answer(request, turi)
	do
		var rep = new HttpResponse(200)
		var body = new Template
		body.add "Hello\n"
		body.add b"\xF1\xF2\xF3\n"
		rep.body = body
		return rep
	end
end

class ServerThread
	super Thread

	redef fun main
	do
		# Hide testing concept to force nitcorn to actually run
		"NIT_TESTING".setenv("false")

		# Setup
		var vh = new VirtualHost(iface)
		vh.routes.add new Route("file_server", new FileServer(fs_path.simplify_path))
		vh.routes.add new Route("simple_answer", new MyAction)
		vh.routes.add new Route("params_answer/:i/:s", new MyAction)
		vh.routes.add new Route("simple_binary", new MyBinAction)
		vh.routes.add new Route("simple_template", new MyTmplAction)

		# Launch
		var factory = new HttpFactory.and_libevent
		factory.config.virtual_hosts.add vh
		factory.run

		return null
	end
end

class ClientThread
	super Thread

	redef fun main
	do
		system "curl -s {iface}/simple_answer"
		system "curl -s {iface}/simple_answer/"
		system "curl -s {iface}/simple_answer/trailing/path"

		system "curl -s '{iface}/simple_answer?i=0123&s=asdf'"
		system "curl -s {iface}/simple_answer --data 'i=0123&s=asdf'"
		system "curl -s {iface}/simple_answer --cookie 'i=0123; s=asdf'"
		system "curl -s {iface}/simple_answer --get --data-urlencode 's=b b'"

		system "curl -s {iface}/params_answer/0123/asdf"
		system "curl -s {iface}/params_answer/0123/"
		system "curl -s {iface}/params_answer/0123/asdf/trailing/path"
		system "curl -s {iface}/params_answer/0123 --head"

		system "curl -s {iface}/file_server/"
		system "curl -s {iface}/file_server/ --head"
		system "curl -s {iface}/file_server --head"
		system "curl -s {iface}/file_server/a.txt"
		system "curl -s {iface}/file_server/a.txt --head"
		system "curl -s {iface}/file_server/binary_file.png --head"
		system("curl -s {iface}/file_server/binary_file.png | diff - {fs_path.escape_to_sh}/binary_file.png",
		       "curl -s {iface}/file_server/binary_file.png | diff - .../binary_file.png")
		system "curl -s {iface}/file_server/unknown_file.txt --head"

		system "curl -s {iface}/invalid_route --head"

		system "curl -s {iface}/simple_binary/"
		system "curl -s {iface}/simple_template/"
		return null
	end

	# Regex to catch and hide the port from the output to get consistent results
	var host_re: Regex = "localhost:\[0-9\]+".to_re

	fun system(cmd: String, title: nullable String)
	do
		title = title or else cmd
		title = title.replace(host_re, "localhost:*****")
		print "\n[Client] {title}"
		sys.system cmd
	end
end

# First, launch a server in the background
var server = new ServerThread
server.start
0.1.sleep

# Then, launch a client running test requests
var client = new ClientThread
client.start
client.join
0.1.sleep

# Force quit the server
exit 0
