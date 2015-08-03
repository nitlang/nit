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

# Services common to the `client` and `server` modules
module common

import socket
import binary::serialization

# Unique name of the application to use in the handshake
#
# This name must be the same between client/server and
# it should not be used by other programs that may interfere.
#
# Both client and server refuse connections with a different name.
fun handshake_app_name: String do return program_name

# Version of the communication protocol to use in the handshake
#
# Its value should change with the communication protocol in such a way
# that different versions indicates incompatible protocols.
#
# Both client and server refuse connections with a different version.
fun handshake_app_version: String do return "0.0"
