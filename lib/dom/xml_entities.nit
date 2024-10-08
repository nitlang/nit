# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Basic blocks for DOM-XML representation
#
# DOM entities are defined in this module, specifically:
#
# * `XMLEntity`: Abstract kind of XML-related node
# * `XMLDocument`: A well-formed XML document, root of the tree
# * `PCDATA`: Raw XML-escaped character data
# * `CDATA`: Raw data, may contain invalid XML escape characters
# * `XMLTag`: Abstract XML tag element
# * `XMLAttrTag`: Abstract XML element, they may contain attributes
# * `XMLOnelinerTag`: Any tag contained on one-line only
# * `XMLStartTag`: A tag starting a new hierarchy level in the tree
# * `XMLPrologTag`: A tag containing meta-information on the document, must start with <?xml
# * `XMLProcessingInstructionTag`: Any XML tag starting with <? other than the prolog tag
# * `XMLEndTag`: A tag signaling the end of a block
# * `XMLCommentTag`: A comment tag
# * `XMLSpecialTag`: A special tag, which may contain meta-information
# * `XMLDoctypeTag`: A DOCTYPE tag, use to register a DTD
# * `XMLAttribute`: Any kind of attribute that may be attached to a tag
# * `XMLStringAttr`: An attribute containing a String
# * `XMLError`: Any kind of error thrown while parsing a document
module xml_entities

import parser_base

# Any kind of XML Entity
abstract class XMLEntity
	# Optional parent of `self`
	var parent: nullable XMLEntity = null is private writable(set_parent)

	# Optional location of the entity in source
	var location: nullable Location

	# The children of `self`
	var children: Sequence[XMLEntity] = new XMLEntities(self)

	# Sets the parent of `self` to `e`
	fun parent=(e: XMLEntity) do
		var parent = self.parent
		if parent != null then
			parent.children.remove(self)
		end
		e.children.add(self)
	end
end

# Proxy collection of XMLEntities, ordered, used for the children of an entity
private class XMLEntities
	super Sequence[XMLEntity]

	# The owner, aka, the parent
	var owner: XMLEntity

	var entities = new List[XMLEntity]

	redef fun length do return entities.length

	redef fun [](i) do return entities[i]

	redef fun []=(index, el) do
		var olde = self[index]
		var olde_parent = olde.parent
		if olde_parent != null then
			olde_parent.children.remove(el)
		end
		entities[index] = el
		el.set_parent owner
	end

	redef fun push(e) do
		if not entities.has(e) then
			entities.add e
			e.parent = owner
		end
	end


	redef fun remove(e) do
		if e isa XMLEntity then
			e.set_parent null
			entities.remove(e)
		end
	end

	redef fun has(e) do return entities.has(e)

	redef fun iterator do return entities.iterator

	redef fun reverse_iterator do return entities.reverse_iterator

	redef fun pop do
		var e = entities.pop
		e.set_parent null
		return e
	end

	redef fun unshift(e) do
		entities.unshift e
		e.set_parent owner
	end

	redef fun shift do
		var e = entities.shift
		e.set_parent null
		return e
	end

	redef fun insert(it, index) do
		entities.insert(it, index)
		it.set_parent owner
	end

	redef fun remove_at(ind) do
		var el = entities[ind]
		entities.remove_at(ind)
		el.set_parent null
	end
end

# Top XML Document-Object Model element
class XMLDocument
	super XMLEntity

	redef fun to_s do return children.join
end

# PCDATA is any kind of non-xml formatted text
class PCDATA
	super XMLEntity

	# Any string containing non XML-reserved characters
	var content: String

	redef fun to_s do return content
end

# CDATA are regions in which no xml entity is parsed, all is ignored
class CDATA
	super XMLEntity

	# Any string contained within a CDATA block, may contain XML-reserved characters
	var content: String

	redef fun to_s do return "<![CDATA[{content}]]>"
end

# A Tag is a node in a DOM tree
abstract class XMLTag
	super XMLEntity

	# The name of the tag
	var tag_name: String
end

# Any kind of XML tag with attributes
abstract class XMLAttrTag
	super XMLTag

	# List of attributes in a Tag
	var attributes: Array[XMLAttribute]
end

# One-liner XML Tag (Ends with />)
class XMLOnelinerTag
	super XMLAttrTag

	redef fun to_s do
		var s = "<{tag_name}"
		if not attributes.is_empty then
			s += " "
			s += attributes.join(" ")
		end
		s += "/>"
		return s
	end
end

# A (potentially) multi-line spanning XML Tag start
class XMLStartTag
	super XMLAttrTag

	# Optional matching tag, must be matched for the document to be well-formed
	var matching: nullable XMLEndTag

	redef fun to_s do
		var s = "<{tag_name}"
		if not attributes.is_empty then
			s += " "
			s += attributes.join(" ")
		end
		s += ">"
		for i in children do s += i.to_s
		var matching = self.matching
		if matching != null then s += matching.to_s
		return s
	end
end

# Any prolog style-Tag (starting with <?xml)
class XMLPrologTag
	super XMLAttrTag

	redef fun to_s do return """<?{{{tag_name}}} {{{attributes.join(" ")}}}?>"""
end

# Processing instructions start with <? and are to be read by a third-party application
class XMLProcessingInstructionTag
	super XMLTag

	# Raw content usable by the third-party application
	var content: String

	redef fun to_s do return "<?{tag_name} {content}?>"
end

# An end Tag (starting with </)
class XMLEndTag
	super XMLTag

	# Optional matching tag, must be matched for the document to be well-formed
	var matching: nullable XMLStartTag

	redef fun to_s do return "</{tag_name}>"
end

# An XML comment tag
class XMLCommentTag
	super XMLTag

	redef fun to_s do return "<!--{tag_name}-->"
end

# A DOCTYPE Tag
class XMLDoctypeTag
	super XMLTag

	# Raw content
	var content: String

	redef fun to_s do return "<!DOCTYPE {content}>"
end

# A Special Tag (starts with !)
#
# TODO: Support the remaining ! tags
class XMLSpecialTag
	super XMLTag

	redef fun to_s do return "<!{tag_name}>"
end

# Attributes are contained in tags, they provide meta-information on a tag
abstract class XMLAttribute
	super XMLEntity

	# Name of the attribute
	var name: String
end

# An attribute with a String value
class XMLStringAttr
	super XMLAttribute

	# Value of the attribute without the double quotes
	var value: String

	# Type of delimiter (can be either " or ')
	var delimiter: Char

	redef fun to_s do return "{name}={delimiter}{value}{delimiter}"
end

# Badly formed XML attribute
class BadXMLAttribute
	super XMLAttribute

	redef fun to_s do return name
end

# Internal use only, shows the end of an attribute block
private class XMLAttributeEnd
	super XMLAttribute
end

# Any XML Error that happens when parsing
class XMLError
	super XMLEntity

	# Error message reported by the parser
	var message: String

	redef fun to_s do
		var l = self.location
		if l == null then
			return "XML Error: {message}"
		else
			return "XML Error: {message} at {l}"
		end
	end
end
