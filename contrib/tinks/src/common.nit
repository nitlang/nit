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

# Services common to the client and server
module common

import gamnit::network

redef class Sys
	# Name of this app
	redef fun handshake_app_name do return "tinks"

	redef fun handshake_app_version do return "0.1"

	# Default listening port of the server
	fun default_listening_port: Int do return 18721

	redef fun discovery_port do return 18722
end
