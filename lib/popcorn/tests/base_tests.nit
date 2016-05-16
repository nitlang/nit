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

import popcorn
import pthreads

redef class Sys
	var test_host = "localhost"

	# Return a new port for each instance
	fun test_port: Int do
		srand
		return 10000+20000.rand
	end
end

class AppThread
	super Thread

	var host: String
	var port: Int
	var app: App

	redef fun main
	do
		# Hide testing concept to force nitcorn to actually run
		"NIT_TESTING".setenv("false")
		app.quiet = true
		app.listen(host, port)
		return null
	end
end

class ClientThread
	super Thread

	var host: String
	var port: Int

	redef fun main do return null

	# Regex to catch and hide the port from the output to get consistent results
	var host_re: Regex = "localhost:\[0-9\]+".to_re

	fun system(cmd: String, title: nullable String)
	do
		title = title or else cmd
		title = title.replace(host_re, "localhost:*****")
		print "\n[Client] {title}"
		sys.system cmd
	end
end
