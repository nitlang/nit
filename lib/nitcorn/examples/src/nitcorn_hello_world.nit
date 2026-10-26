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

# Hello World Web server example
#
# The main page, `index.html`, is served dynamicly with `MyAction`.
# The rest of the Web site fetches files from the local directory
# `www/hello_world/`.
module nitcorn_hello_world is example

import nitcorn

# An action that responds by displaying a static html content.
class StaticAction
	super Action

	redef fun answer(http_request, turi)
	do
		var response = new HttpResponse(200)
		var title = "Hello World from Nitcorn!"
		response.body = """
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<title>{{{title}}}</title>
</head>
<body>
	<div class="container">
		<h1>{{{title}}}</h1>
		<p>See also a <a href="/dir/">directory</a>.</p>
	</div>
</body>
</html>"""
		return response
	end
end

# An action that uses parameterized uris to customize the output.
class ParamAction
	super Action

	redef fun answer(http_request, turi)
	do
		var response = new HttpResponse(200)
		var name = http_request.param("name")
		var body
		if name == null then
			body = "No name..."
		else
			body = "Hello {name}"
		end

		# Echo the arguments of a POST request
		for key, value in http_request.post_args do body += "\n{key} = {value}"

		response.body = body
		return response
	end
end


# Run the hello world Web server on `interfac`
#
# Serve files other than the dynamic pages from the local directory `www_root`.
fun hello_world_server(interfac, www_root: String)
do
	var vh = new VirtualHost(interfac)

	# Serve index.html with our custom handler
	vh.routes.add new Route("/index.html", new StaticAction)
	vh.routes.add new Route("/hello/:name", new ParamAction)

	# Serve everything else with a standard `FileServer` with a root at `www_root`
	vh.routes.add new Route(null, new FileServer(www_root))

	var factory = new HttpFactory.and_libevent
	factory.config.virtual_hosts.add vh
	factory.run
end

hello_world_server("localhost:8080", "www/hello_world/")
