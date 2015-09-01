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

# Support to generate and otherwise manipulate Nit code
module gen_nit

redef class Sys
	# Reserved keywords in the Nit language
	var keywords: Set[String] is lazy do return new HashSet[String].from([
		"abort", "abstract", "and", "assert", "break", "class", "continue",
		"do", "else", "end", "enum", "extern", "false", "implies", "import",
		"init", "interface", "intrude", "if", "in", "is", "isa", "isset",
		"for", "label", "loop", "module", "new", "not", "null",	"nullable",
		"or", "package", "private", "protected", "public", "return", "self",
		"super", "then", "true", "type", "var", "while"])

	# Top-level methods from the `Object` class
	#
	# This is a non-exaustive list that targets conflict-prone names.
	var methods_in_object: Array[String] is lazy do return [
		"class_name", "get_time", "hash", "inspect", "inspect_head",
		"is_same_type", "is_same_instance", "object_id", "output",
		"output_class_name", "sys", "to_s"]

	# Methods in the `Pointer` class
	#
	# This is a non-exaustive list that targets conflict-prone names.
	var methods_in_pointer: Array[String] is lazy do return methods_in_object + [
		"free"]
end
