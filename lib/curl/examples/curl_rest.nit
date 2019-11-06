# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2018 Matthieu Samuel Le Guellaut <leguellaut.matthieu@gmail.com>
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


# This example will send a Person object to the specified address
#
import curl
import json

class Person
	serialize

	var name : String
	var age : Int

end

var url = "http://example.com"

# POST REQUEST
var my_request = new CurlHTTPRequest(url, method="POST")
var person = new Person("Jean",12)
my_request.body = person.serialize_to_json
my_request.execute

# # USE WITH SOCKET ADDRESS FAMILY
# var my_unix_request = new CurlHTTPRequest("http:///tmp/", method="POST")
# my_unix_request.body = person.serialize_to_json
# my_unix_request.unix_socket_path = "/tmp/test.sock"
# my_unix_request.execute
