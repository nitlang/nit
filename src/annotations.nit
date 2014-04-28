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

# Management of annotations written in comments.
# It looks for a defined annotation at the start of each comment's line of current entity
# and adds it to the list of used annotations for this entity if such an annotation is found.
module annotations

import model

redef class MDoc
	# List containing all annotations for current entity.
	private var annots: nullable List[Annotation]

	# Looks for existing annotations and fill 'annots' attribute of 'MDoc'.
	# FIXME should be done with nitcc
	private fun extract_annotations do 
		annots = new List[Annotation]
		for line in content do
			if not line.is_empty and (line.has_prefix("author:") or line.has_prefix("deprecated:") or line.has_prefix("ensure:")
						or line.has_prefix("note:") or line.has_prefix("param:") or line.has_prefix("require:")
						or line.has_prefix("returns:") or line.has_prefix("version:")) then

				var suffix_pos = line.chars.index_of(':')
				var annotation_label = line.substring(0, suffix_pos - 1)

				if annotation_label == "deprecated" then
					annots.add(new BoolAnnotation(annotation_label))
				else
					var value = line.substring_from(suffix_pos + 2)
					annots.add(new StringAnnotation(annotation_label, value))
				end
			end
		end
	end

	# Returns the list of annotations
	fun annotations: List[Annotation] do
		if annots == null then
			extract_annotations
		end
		return annots.as(not null)
	end
end

# Super class for all types of annotations.
abstract class Annotation
	# Name of the annotation (without the colon ':')
	# (ie. for the annotation 'returns: a foo message', the name will be 'returns'
	var name: String

	# Type of the value of the annotation
	type VALUE: nullable Object

	# Getter for the annotation's value.
	# Redefined in subclasses to match the proper type.
	fun value: VALUE is abstract
end

# Annotation dealing with a String value.
# Example of use :
# 	# param: message to be printed
# 	fun foo(msg: String)
class StringAnnotation
	super Annotation

	redef type VALUE: String

	private var internal_value: VALUE
	redef fun value do return internal_value

	init(name: String, value:String)
	do
		self.name = name
		self.internal_value = value
	end
end

# Annotation dealing with a Boolean value.
# Typically used to represent standalone annotations ie. deprecated :
# 	deprecated: use 'get_date()' instead
# 	fun print_date()
class BoolAnnotation
	super Annotation
	
	redef type VALUE: Bool
	
	private var internal_value: VALUE
	redef fun value do return internal_value
	
	init(name: String)
	do 
		self.name = name
		self.internal_value = true
	end
end
