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
# limitations under the License

# Web server for Opportunity : A meetup scheduler for real-world encounters !
module config_web

import meetup_controller
#import people_controller
#import answer_controller
import opts
import privileges

# Avoids a crash when running automatic tests
if "NIT_TESTING".environ == "true" then exit 0

var iface = "localhost:8080"

var vh = new VirtualHost(iface)

vh.routes.add new Route("/api/meetup/create", new CreateMeetupAction("POST"))
vh.routes.add new Route("/api/meetup/update/:id", new UpdateMeetupAction("POST"))
vh.routes.add new Route("/api/meetup/delete/:id", new DeleteMeetupAction("GET"))
vh.routes.add new Route("/api/meetup/get/:id", new GetMeetupAction("GET"))
vh.routes.add new Route("/api/meetup/list", new ListMeetupAction("GET"))

#vh.routes.add new Route("/api/people/create", new CreatePeopleAction("POST"))
#vh.routes.add new Route("/api/people/update", new UpdatePeopleAction("PUT"))
#vh.routes.add new Route("/api/people/delete/:id", new DeletePeopleAction("GET"))
#vh.routes.add new Route("/api/people/get/:id", new GetPeopleAction("GET"))
#vh.routes.add new Route("/api/people/list", new ListPeopleAction("GET"))

#vh.routes.add new Route("/api/answer/create", new CreateAnswerAction("POST"))
#vh.routes.add new Route("/api/answer/update", new UpdateAnswerAction("PUT"))
#vh.routes.add new Route("/api/answer/delete/:id", new DeleteAnswerAction("GET"))
#vh.routes.add new Route("/api/answer/get/:id", new GetAnswerAction("GET"))
#vh.routes.add new Route("/api/answer/list", new ListAnswerAction("GET"))

vh.routes.add new Route(null, new FileServer("src/www"))

var fac = new HttpFactory.and_libevent
fac.config.virtual_hosts.add vh

print "Launching server on http://{iface}/"
fac.run
