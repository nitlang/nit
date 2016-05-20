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

# Nitcorn actions used by the nitweb server.
module web_actions

import web_views
import uml

# Display the tree of all loaded mentities.
class TreeAction
	super ModelHandler

	redef fun get(req, res) do
		var model = init_model_view(req)
		var view = new HtmlHomePage(model.to_tree)
		res.send_view(view)
	end
end

# Display the doc of a MEntity.
class DocAction
	super ModelHandler

	# Modelbuilder used to access sources.
	var modelbuilder: ModelBuilder

	redef fun get(req, res) do
		var namespace = req.param("namespace")
		var model = init_model_view(req)
		var mentity = find_mentity(model, namespace)
		if mentity == null then
			res.error(404)
			return
		end
		if req.is_json_asked then
			res.json(mentity.to_json)
			return
		end

		var view = new HtmlDocPage(modelbuilder, mentity)
		res.send_view(view)
	end
end
