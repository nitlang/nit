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

# Base classes used by `nitweb`.
module web_base

import model::model_views
import model::model_json
import popcorn

# Specific nitcorn Action that uses a Model
class ModelAction
	super Handler

	# Model to use.
	var model: Model

	# Find the MEntity ` with `full_name`.
	fun find_mentity(model: ModelView, full_name: nullable String): nullable MEntity do
		if full_name == null then return null
		return model.mentity_by_full_name(full_name.from_percent_encoding)
	end

	# Init the model view from the `req` uri parameters.
	fun init_model_view(req: HttpRequest): ModelView do
		var view = new ModelView(model)
		var show_private = req.bool_arg("private") or else false
		if not show_private then view.min_visibility = protected_visibility

		view.include_fictive = req.bool_arg("fictive") or else false
		view.include_empty_doc = req.bool_arg("empty-doc") or else true
		view.include_test_suite = req.bool_arg("test-suite") or else false
		view.include_attribute = req.bool_arg("attributes") or else true

		return view
	end
end

# A NitView is rendered by an action.
interface NitView
	# Renders this view and returns something that can be written to a HTTP response.
	fun render: Writable is abstract
end

redef class HttpResponse
	# Render a NitView as response.
	fun send_view(view: NitView, status: nullable Int) do send(view.render, status)
end

redef class HttpRequest
	# Does the client asked for a json formatted response?
	#
	# Checks the URL get parameter `?json=true`.
	fun is_json_asked: Bool do return bool_arg("json") or else false
end
