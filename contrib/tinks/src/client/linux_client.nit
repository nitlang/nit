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

# GNU/Linux client with config saved to `config.json`
module linux_client

import mnit_linux
import linux::audio
import json::serialization

import client

# Configuration of the client
class ClientConfig
	serialize

	# Resolution width
	var res_x = 1920 is lazy

	# Resolution height
	var res_y = 1080 is lazy

	# Should the client play sounds?
	var play_sounds = true is lazy
end

redef class App
	private var config_path: String = sys.program_name.dirname / "../config.json"

	private var config: ClientConfig do
		if config_path.file_exists then
			var content = config_path.to_path.read_all
			var deser = new JsonDeserializer(content)
			var cc = deser.deserialize

			if cc == null then
				print_error "Client Error: Deserializing config file failed with {deser.errors.join(", ")}"
			else if not cc isa ClientConfig then
				print_error "Client Error: Deserializing config file failed, got '{cc}'"
				# TODO simplify the previous lines with ? or similar
			else return cc
		end

		# Save the default config to pretty Json
		var cc = new ClientConfig
		var json = cc.to_plain_json
		json = json.replace(",", ",\n")
		json.write_to_file config_path

		return cc
	end
end

redef class Display
	redef fun wanted_width do return app.config.res_x
	redef fun wanted_height do return app.config.res_y
end

redef class Sound
	redef fun play do if app.config.play_sounds then super
end

redef class JsonDeserializer
	# The only class we deserialize from pretty Json is ClientConfig
	redef fun class_name_heuristic(object) do return "ClientConfig"
end
