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

# Web server for Benitlux
module benitlux_web

import benitlux_model
import benitlux_view
import benitlux_controller
import benitlux_restful

# Listening interface
fun iface: String do return "localhost:8080"

# Sqlite3 database
var db_path = "benitlux_sherbrooke.db"
var db = new DB.open(db_path)
var db_error = db.error
if db_error != null then
	print_error db_error
	exit 1
end

# Setup routes
var vh = new VirtualHost(iface)
vh.routes.add new Route("/rest/", new BenitluxRESTAction(db))
vh.routes.add new Route("/push/", new BenitluxPushAction(db))
vh.routes.add new Route(null, new BenitluxSubscriptionAction(db))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh

print "Launching server on http://{iface}/"
factory.run

db.close
