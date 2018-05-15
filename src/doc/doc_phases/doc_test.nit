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

# Print the generated DocModel in stdout.
#
# Mainly used for tests.
module doc_test

import doc_structure
import counter

redef class ToolContext

	# File pattern used to link documentation to source code.
	var opt_test = new OptionBool("Print test data (metrics and structure)", "--test")

	redef init do
		super
		option_context.add_option(opt_test)
	end
end

# Display the DocModel in stdout.
class DocTestPhase
	super DocPhase

	redef fun apply do
		if not ctx.opt_test.value then return
		# Pages metrics
		var page_counter = new Counter[String]
		var pages = doc.pages.keys.to_a
		default_comparator.sort(pages)
		for title in pages do
			var page = doc.pages[title]
			page_counter.inc page.class_name
			print page.pretty_print.write_to_string
		end
		print "Generated {doc.pages.length} pages"
		page_counter.print_elements(100)
		# Model metrics
		var model_counter = new Counter[String]
		for mentity in doc.model.collect_mentities(doc.filter) do
			model_counter.inc mentity.class_name
		end
		print "Found {doc.model.collect_mentities(doc.filter).length} mentities"
		model_counter.print_elements(100)
	end
end
