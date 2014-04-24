# Management of annotations written in comments
module annotations

import model

redef class MDoc
	# List containing all annotations for current entity.
	private var annots: nullable List[Annotation]

	# Looks for existing annotations and fill 'annots' attribute of 'MDoc'.
	private fun extract_annotations do 
		annots = new List[Annotation]
		for line in content do
			if not line.is_empty and line.first == '@' then
				var annotation_label: String
				var has_space = line.chars.index_of(' ') != -1
				if has_space then
					var label_length = line.substring_from(1).chars.index_of(' ')
					annotation_label = line.substring(1, label_length)
				else
					annotation_label = line.substring_from(1)
				end
				
				# Differentiates standalone and no standalone annotations
				if annotation_label == "deprecated" then
					annots.add(new BoolAnnotation(annotation_label))
				
				else if has_space and (annotation_label == "author" or annotation_label == "ensure" or
							annotation_label == "note" or annotation_label == "param" or
							annotation_label == "require" or annotation_label == "returns" or
							annotation_label == "version") then
					var value = line.substring_from(annotation_label.length + 2)
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
	# Name of the annotation
	var name: String

	# Type of the value of the annotation
	type VALUE: nullable Object

	# Getter for the annotation's value.
	# Redefined in subclasses to match the proper type.
	fun value: VALUE is abstract
end

# Annotation dealing with a String value.
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
# Typically used to represent standalone annotations (ie. deprecated)
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
