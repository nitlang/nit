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
# limitations under the License.

# Implementation of `app::http_request` using GDK and Curl
module http_request

intrude import app::http_request
private import curl
private import gtk::gdk

redef class App
	redef fun run_on_ui_thread(task) do gdk_threads_add_idle task
end

redef class Text
	redef fun http_get
	do
		var req = new CurlHTTPRequest(to_s)
		var rep = req.execute
		if rep isa CurlResponseSuccess then
			return new HttpRequestResult(rep.body_str, null, rep.status_code)
		else
			assert rep isa CurlResponseFailed
			var error = new IOError(rep.error_msg)
			return new HttpRequestResult(null, error)
		end
	end
end
