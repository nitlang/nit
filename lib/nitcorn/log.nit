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

# Services inserting a timestamp in all prints and to log each requests
# Also keep track of the performances of the requests
module log

import reactor
import realtime
import performance_analysis

redef class Action

	redef fun prepare_respond_and_close(request, truncated_uri, http_server) do
		if not log_nitcorn_actions then
			super
			return
		end
		print """{{{class_name}}} enter:
uri="{{{truncated_uri}}}"
query="{{{request.query_string}}}"
body:{{{request.body.length}}} bytes"""
		var clock = new Clock
		super
		var perf = sys.perfs[class_name]
		perf.add(clock.lapse)
		if perf.count % perfs_print_period == 0 then print "{class_name} perfs: {perf}:"
		print "{class_name} return: uri={truncated_uri}"
	end
end

redef fun print(object) do
	var timestamp = new Tm.gmtime
	super "{timestamp.year}/{timestamp.mon}/{timestamp.mday} "+
	"{timestamp.hour}:{timestamp.min}:{timestamp.sec}: {object}"
end

redef fun print_error(object) do
	var timestamp = new Tm.gmtime
	super "{timestamp.year}/{timestamp.mon}/{timestamp.mday} "+
	"{timestamp.hour}:{timestamp.min}:{timestamp.sec}: {object}"
end

# Should the actions be logged ?
fun log_nitcorn_actions: Bool do return false

# Number of actions executed before printing the perfs
fun perfs_print_period: Int do return 20
