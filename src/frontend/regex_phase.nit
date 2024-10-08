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

# Check for error in regular expressions from string literals
module regex_phase

private import parser_util
private import literal
import modelize

redef class ToolContext

	# Phase checking for errors in regex
	var regex_phase: Phase = new RegexPhase(self, [literal_phase])
end

private class RegexPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		var visitor = new RegexVisitor(toolcontext)
		nmodule.accept_regex_visitor visitor
	end
end

private class RegexVisitor
	super Visitor

	var toolcontext: ToolContext

	redef fun visit(n) do n.accept_regex_visitor(self)
end

redef class ANode
	private fun accept_regex_visitor(v: RegexVisitor) do visit_all v
end

redef class ACallExpr

	redef fun accept_regex_visitor(v)
	do
		var method = n_qid.n_id
		var receiver = n_expr

		# Check only string literals on which `to_re` is called
		if method.text == "to_re" and receiver isa AStringFormExpr then

			# Retrieve regex source
			var re_src = receiver.value

			# Check for errors by compiling it right now
			var re = re_src.to_re
			var error = re.compile
			re.finalize

			if error != null then
				v.toolcontext.error(self.location, "Regex Error: " + error.to_s)
			end
		end
	end
end
