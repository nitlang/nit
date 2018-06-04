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

import nitcorn::unix
import pthreads

redef class Sys
	var iface: String is lazy do
		var testid = "NIT_TESTING_ID".environ.to_i
		return "localhost:8080"
	end

	var fs_path: String = getcwd / "../lib/nitcorn/examples/www/hello_world/dir" is lazy
end

class MyAction
	super Action

	redef fun answer(request, turi)
	do
		var rep = new HttpResponse(200)
		rep.body = """
[Response] Simple answer
Method: {{{request.method}}}, URI: {{{request.uri}}}, trailing: {{{turi}}}"""

		if request.get_args.not_empty
		then rep.body += "\nGET args: {request.get_args.join(", ", ":")}"

		if request.post_args.not_empty
		then rep.body += "\nPOST args: {request.post_args.join(", ", ":")}"

		if request.uri_params.not_empty
		then rep.body += "\nParams args: {request.uri_params.join(", ", ":")}"

		if request.cookie.not_empty
		then rep.body += "\nCookie: {request.cookie.join(", ", ":")}"

		rep.body += "\n"
		return rep
	end
end

class ServerThread
	super Thread

	redef fun main
	do
		# Hide testing concept to force nitcorn to actually run
		"NIT_TESTING".setenv("false")

		# UNIX Setup
		var unix_vh = new VirtualHost(iface)
		unix_vh.routes.add new Route("file_server", new FileServer(fs_path.simplify_path))
		unix_vh.routes.add new Route("simple_answer", new MyAction)
		unix_vh.routes.add new Route("params_answer/:i/:s", new MyAction)

		unix_vh.unix("/tmp/example.sock")

		# TCP Setup
		var tcp_vh = new VirtualHost(iface)
		tcp_vh.routes.add new Route("file_server", new FileServer(fs_path.simplify_path))
		tcp_vh.routes.add new Route("simple_answer", new MyAction)
		tcp_vh.routes.add new Route("params_answer/:i/:s", new MyAction)



		# Launch
		var factory = new HttpFactory.and_libevent
		factory.config.virtual_hosts.add unix_vh
		factory.config.virtual_hosts.add tcp_vh
		factory.run

		return null
	end
end

class ClientThread
	super Thread

	redef fun main
	do

		# UNIX tests
		system "curl --unix-socket /tmp/example.sock -s {iface}/simple_answer"
		system "curl --unix-socket /tmp/example.sock -s {iface}/simple_answer/"
		system "curl --unix-socket /tmp/example.sock -s {iface}/simple_answer/trailing/path"

		system "curl --unix-socket /tmp/example.sock -s '{iface}/simple_answer?i=0123&s=asdf'"
		system "curl --unix-socket /tmp/example.sock -s {iface}/simple_answer --data 'i=0123&s=asdf'"
		system "curl --unix-socket /tmp/example.sock -s {iface}/simple_answer --cookie 'i=0123; s=asdf'"
		system "curl --unix-socket /tmp/example.sock -s {iface}/simple_answer --get --data-urlencode 's=b b'"

		system "curl --unix-socket /tmp/example.sock -s {iface}/params_answer/0123/asdf"
		system "curl --unix-socket /tmp/example.sock -s {iface}/params_answer/0123/"
		system "curl --unix-socket /tmp/example.sock -s {iface}/params_answer/0123/asdf/trailing/path"
		system "curl --unix-socket /tmp/example.sock -s {iface}/params_answer/0123 --head"

		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server/"
		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server/ --head"
		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server --head"
		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server/a.txt"
		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server/a.txt --head"
		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server/binary_file.png --head"
		system("curl --unix-socket /tmp/example.sock -s {iface}/file_server/binary_file.png | diff - {fs_path.escape_to_sh}/binary_file.png",
		       "curl --unix-socket /tmp/example.sock -s {iface}/file_server/binary_file.png | diff - .../binary_file.png")
		system "curl --unix-socket /tmp/example.sock -s {iface}/file_server/unknown_file.txt --head"

		system "curl --unix-socket /tmp/example.sock -s {iface}/invalid_route --head"

		# TCP tests
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
