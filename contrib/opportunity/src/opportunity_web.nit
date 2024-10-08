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
# limitations under the License

# Web server for Opportunity : A meetup scheduler for real-world encounters !
module opportunity_web

import opportunity_controller
import opts
import privileges

var iface = "localhost:8080"

if args.not_empty then
	iface = args.first
end

var vh = new VirtualHost(iface)
vh.routes.add new Route("/rest/", new OpportunityRESTAction)
vh.routes.add new Route("/static/", new FileServer("art"))
vh.routes.add new Route(null, new OpportunityWelcome)

var fac = new HttpFactory.and_libevent
fac.config.virtual_hosts.add vh

print "Launching server on http://{iface}/"
fac.run
