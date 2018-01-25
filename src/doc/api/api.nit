# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Components required to build a web server about the nit model.
module api

import api_auth
import api_model
import api_docdown
import api_metrics
import api_feedback
import api_light

redef class APIRouter
	redef init do
		super
		use("/*", new APIErrorHandler(config)) # catch 404 errors
	end
end

# Error handler user to catch non resolved request by the API
#
# Displays a JSON formatted 404 error.
class APIErrorHandler
	super APIHandler

	redef fun all(req, res) do
		res.api_error(404, "Not found")
	end
end
