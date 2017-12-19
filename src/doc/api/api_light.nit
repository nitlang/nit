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

# Highlight and collect messages from a piece of code
module api_light

import api_base

redef class APIRouter
	redef init do
		super
		use("/light/", new APILight(config))
	end
end

# Highlight handler accept source code as POST data and render it as HTML with nitpick messages
class APILight
	super APIHandler

	redef fun post(req, res) do
		var hl = new HtmlightVisitor
		var hlcode = hl.highlightcode(req.body)
		res.api_json(req, hlcode)
	end
end
