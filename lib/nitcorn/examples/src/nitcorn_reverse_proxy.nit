# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Philippe Pépos Petitclerc <ppeposp@gmail.com>
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

# Minimal example using a `ProxyAction`
module nitcorn_reverse_proxy is example

import nitcorn::proxy

# Create the virtualhost for your nitcorn server
var vh = new VirtualHost("localhost:8080")

# Create the interface to represent your proxy target
var proxy_interface = new Interface("localhost", 31337)

# Add your action as usual
vh.routes.add new Route("/", new ProxyAction(proxy_interface))

# Let it be (serve)
var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
