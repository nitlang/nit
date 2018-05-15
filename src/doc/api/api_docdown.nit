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

# Nitdoc specific Markdown format handling for Nitweb
module api_docdown

import api_model
import commands::commands_docdown

redef class NitwebConfig
	# Specific Markdown processor to use within Nitweb
	var md_processor: MarkdownProcessor is lazy do
		var parser = new CommandParser(model, mainmodule, modelbuilder, catalog)
		var proc = new CmdMarkdownProcessor(parser)
		proc.decorator = new CmdDecorator(model)
		return proc
	end
end

redef class APIRouter
	redef init do
		super
		use("/docdown/", new APIDocdown(config))
	end
end

# Docdown handler accept docdown as POST data and render it as HTML
class APIDocdown
	super APIHandler

	redef fun post(req, res) do
		res.html config.md_processor.process(req.body)
	end
end
