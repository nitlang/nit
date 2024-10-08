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

# The nitcorn Web server framework creates server-side Web apps in Nit
#
# The main classes are:
# * `Action` to answer to requests.
# * `Route` to represent a path to an action.
# * `VirtualHost` to listen on a specific interface and behave accordingly
# * `HttpFactory` which is the base dispatcher class.
#
# Basic usage example:
# ~~~~
# class MyAction
#     super Action
#
#     redef fun answer(http_request, turi)
#     do
#         var response = new HttpResponse(200)
#         response.body = """
# <!DOCTYPE html>
# <head>
#     <meta charset="utf-8">
#     <title>Hello World</title>
# </head>
# <body>
#     <p>Hello World</p>
# </body>
# </html>"""
#         return response
#     end
# end
#
# # Listen to port 8080 on all interfaces
# var vh = new VirtualHost("0.0.0.0:8080")
#
# # Serve index.html with our custom handler
# vh.routes.add new Route("/index.html", new MyAction)
#
# # Serve everything else with a standard `FileServer`
# vh.routes.add new Route(null, new FileServer("/var/www/"))
#
# var factory = new HttpFactory.and_libevent
# factory.config.virtual_hosts.add vh
# factory.run
# ~~~~
module nitcorn

import reactor
import file_server
import sessions
import signal_handler
