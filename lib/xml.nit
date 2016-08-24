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

# XML output facilities
module xml

# Any xml-formatable data
interface XMLisable

        fun to_xml(indent: Bool): String do return format_xml(indent, 0)
        
        private fun format_xml(indent: Bool, depth: Int): String is abstract

        private fun indent_xml(depth: Int, xml_string: String): String do
                assert depth >= 0

                var xml = "\t" * depth
                xml += xml_string
                return xml
        end

end

interface XPathable

        # Execute an XPath query
        # xpathable.xpath_query(new XPathQuery("/foo/bar"))
        fun xpath_query(query: XPathQuery): XPathResult is abstract
 
end

# An XPath query result, represented as an XPathable Array of XMLElement
class XPathResult
        super Array[XMLElement]
        super XPathable

        redef fun xpath_query(query: XPathQuery): XPathResult do
                var results = new XPathResult

                for e in self do results.add_all(e.xpath_query(query))
                
                return results
        end
end

# A representation of an XPath query
class XPathQuery
        var is_absolute: Bool = false
        var is_recursive: Bool = false
        var patterns: Array[XPathPattern] = new Array[XPathPattern]

        init(query: String) do
                if query[0] == '/' then
                        self.is_absolute = true
                        if query.length > 1 and query[1] == '/' then self.is_recursive = true
                end

                var slices = query.split_with('/')

                for pattern in slices do
                        if not pattern.is_empty then
                                var bracket_start = pattern.index_of('[')
                                var bracket_end = pattern.index_of(']')

                                if bracket_start >= 0 and bracket_start < bracket_end then
                                        # (foo)?[0-9|(@attr=val)]

                                        # Get the "foo" part (node name or empty)
                                        var pattern_val: nullable String = ""
                                        for i in [0..bracket_start[ do pattern_val += pattern[i].to_s
                                        if pattern_val.is_empty then pattern_val = null
                                        
                                        if pattern[bracket_start + 1] == '@' then
                                                # (foo)?[@attr=val]
                                                var equal_pos = pattern.index_of('=')
                                                        
                                                if equal_pos > bracket_start and equal_pos < bracket_end then
                                                        # Get the "attr" part
                                                        var attribute_name = ""
                                                        for i in [bracket_start + 2..equal_pos[ do attribute_name += pattern[i].to_s

                                                        # Avoid opening and closing quotes in attribute value, if any
                                                        if pattern[equal_pos + 1] == pattern[bracket_end - 1] and (pattern[equal_pos + 1] == '\'' or pattern[bracket_start + 1] == '"') then
                                                                equal_pos += 1
                                                                bracket_end -= 1
                                                        end
                                                        # Get the "val" part
                                                        var attribute_val = ""
                                                        for i in [equal_pos + 1..bracket_end[ do attribute_val += pattern[i].to_s
                                                        
                                                        self.patterns.add(new XPathPattern(pattern_val, new XMLAttribute(attribute_name, attribute_val), null))
                                                end
                                        else
                                                var pattern_index = ""

                                                for i in [bracket_start + 1..bracket_end[ do pattern_index += pattern[i].to_s

                                                if pattern_index.is_numeric and not pattern_index.has('.') and not pattern_index.has(',') then
                                                        # (foo)?[0-9+]
                                                        self.patterns.add(new XPathPattern(pattern_val, null, pattern_index.to_i))
                                                end
                                        end
                                else
                                        self.patterns.add(new XPathPattern(pattern, null, null))
                                end
                        end
                end
        end

        fun is_root: Bool do
                if self.is_absolute and not self.is_recursive and patterns.is_empty then return true
                return false
        end
end

# Represents a single-level XPath query, such as foo, foo[@attr='value'] or foo[1]
class XPathPattern
        var value: nullable String
        var attribute: nullable XMLAttribute
        var index: nullable Int

        fun has_value: Bool do return value != null
        fun has_attribute: Bool do return attribute != null
        fun has_index: Bool do return index != null
end

# An XML document representation
class XMLDocument
        super XMLisable
        super XPathable

        var version: Float
        var root: nullable XMLElement writable = null

        init(version: Float) do
                assert version == 1.0 or version == 1.1

                self.version = version
        end

        redef fun format_xml(indent: Bool, depth: Int): String do
                var xml = "<?xml version=\"{self.version}\"?>"
                if self.root != null then xml += "\n" + self.root.to_xml(indent)
                return xml
        end

        # Save document to a file
        fun save(file: String, indent: Bool) do
		        var out = new OFStream.open(file)
		        out.write(self.to_xml(indent))
		        out.close
	    end

        redef fun xpath_query(query: XPathQuery): XPathResult do
                var results = new XPathResult
                
                if not query.is_absolute then
                        print("Cannot execute relative XPath query on a document, try on a node instead.")
                        return results
                end
                
                if self.root == null then return results

                var root = self.root

                if query.is_root and root != null then
                        results.add(root)
                else
                        # //foo
                        if query.is_recursive then
                                results.add_all(root.search_children(query.patterns.first, true))
                        else if root != null and root.match(query.patterns.first) then
                                # /foo
                                if query.is_absolute and query.patterns.length == 1 then
                                        results.add(root)
                                # /foo(/bar)+
                                else if query.patterns.length > 1 then
                                        var patterns = new Array[XPathPattern]
                                        patterns.add_all(query.patterns)
                                        patterns.remove_at(0)
                                        results.add_all(root.sequential_query(patterns))
                                end
                        end
                end

                return results
        end
end

# An XML attribute representation
class XMLAttribute
        var name: String
        var value: String

        init(name: String, value: String) do
                if name.is_empty then
                        print("Attribute name cannot be empty.")
                        abort
                end
                if value.is_empty then
                        print("Attribute value cannot be empty.")
                        abort
                end

                for c in name do
                        if not c.is_alphanumeric then
                                print("Forbidden character in attribute name \"" + name + "\" – only alphanumeric characters are allowed.")
                                abort
                        end
                end
                for c in value do
                        if c == '\'' or c == '"' then
                                print("Forbidden character in attribute value \"" + value + "\" – cannot contain ' or \".")
                                abort
                        end
                end

                self.name = name
                self.value = value
        end

        # Avoid duplicate attributes
        redef fun ==(a) do return a isa XMLAttribute and a.name == self.name
end

# An abstract XML node representation
abstract class XMLNode
        super XMLisable
        
        var value: String
end

# An XML standard element representation
class XMLElement
        super XMLNode
        super XPathable

        init(value: String) do
                if value.is_empty then
                        print("Node value cannot be empty.")
                        abort
                end

                for c in value do
                        if not c.is_alphanumeric then
                                print("Forbidden character in node value \"" + value + "\" – only alphanumeric characters are allowed.")
                                abort
                        end
                end

                self.value = value
        end

        var children: Array[XMLNode] = new Array[XMLNode]
        var attributes: ArraySet[XMLAttribute] = new ArraySet[XMLAttribute]
        
        fun set_attributes(attributes: XMLAttribute...) do
                for a in attributes do self.attributes.add(a)
        end

        private fun set_attributes_array(attributes: Array[XMLAttribute]) do
                for a in attributes do self.attributes.add(a)
        end

        fun with_attributes(attributes: XMLAttribute...): XMLElement do
                self.set_attributes_array(attributes)

                return self
        end

        fun has_attribute_with_value(attribute: XMLAttribute): Bool do
                for a in self.attributes do
                        if a.name == attribute.name and a.value == attribute.value then return true
                end

                return false
        end

        fun add_children(children: XMLNode...) do
                self.children.add_all(children)
        end

        private fun add_children_array(children: Array[XMLNode]) do
                self.children.add_all(children)
        end

        fun with_children(children: XMLNode...): XMLElement do
                self.add_children_array(children)

                return self
        end

        fun has_children: Bool do
                if self.children.length > 0 then return true
                return false
        end

        fun match(pattern: XPathPattern): Bool do return self.value == pattern.value

        redef fun format_xml(indent: Bool, depth: Int): String do
                if not indent then depth = 0

                var opening_tag = "<{self.value}"
                for a in attributes do opening_tag += " {a.name}=\"{a.value}\""

                # No children: close tag and return
                if children.is_empty then
                        opening_tag += "/>"
                        return self.indent_xml(depth, opening_tag)
                end

                opening_tag += ">"

                var xml = self.indent_xml(depth, opening_tag)
                
                # Write children
                for c in children do xml += "\n" + c.format_xml(indent, depth + 1)

                xml += "\n"

                # Close tag
                var close_tag = "</{self.value}>"
                xml += self.indent_xml(depth, close_tag)
                
                return xml
        end

        # Look for all children elements matching this pattern (name, optionally index and parameters), recursively or not
        private fun search_children(pattern: XPathPattern, recursive: Bool): Array[XMLElement] do
                var results = new Array[XMLElement]
                var index = 1

                for c in children do
                        if c isa XMLElement then
                                if c.match(pattern) then
                                        if not pattern.has_index and not pattern.has_attribute then
                                                results.add(c)
                                        else if pattern.has_index then
                                                if index == pattern.index then results.add(c)
                                                index += 1
                                        else if pattern.has_attribute then
                                                var attribute = pattern.attribute
                                                if attribute != null then
                                                        if c.has_attribute_with_value(attribute) then results.add(c)
                                                end
                                        end
                                end
                                
                                if recursive and c.has_children then results.add_all(c.search_children(pattern, recursive))
                        end
                end

                return results
        end
       
        # Look for an ordered succession of children
        private fun sequential_query(patterns: Array[XPathPattern]): Array[XMLElement] do
                var results = new Array[XMLElement]
                
                var parent_results: Array[XMLElement] = [self]

                for depth in [0..patterns.length[ do
                        results.clear
                        
                        for node in parent_results do results.add_all(node.search_children(patterns[depth], false))

                        parent_results.clear
                        parent_results.add_all(results)
                end

                return results
        end

        redef fun xpath_query(query: XPathQuery): XPathResult do
                var results = new XPathResult

                if query.is_absolute then
                        print("Cannot execute absolute XPath query on an element, try on the document instead.")
                        return results
                end
                
                # foo
                if query.patterns.length == 1 then
                        results.add_all(self.search_children(query.patterns.first, false))
                # foo(/bar)+
                else
                        results.add_all(self.sequential_query(query.patterns))
                end

                return results
        end
end

abstract class XMLSpecialNode
        super XMLNode

        init(value: String) do
                if value.is_empty then
                        print("Node value cannot be empty.")
                        abort
                end

                for c in value do
                        if c == '<' or c == '>' then
                                print("Forbidden character in node name – cannot contain < or >.")
                                abort
                        end
                end

                self.value = value
        end
end

# An XML comment representation
class XMLComment
        super XMLSpecialNode

        redef fun format_xml(indent: Bool, depth: Int): String do
                if not indent then depth = 0

                return self.indent_xml(depth, "<!-- {self.value} -->")
        end
end

# An XML text representation
class XMLText
        super XMLSpecialNode

        redef fun format_xml(indent: Bool, depth: Int): String do
                if not indent then depth = 0

                return self.indent_xml(depth, self.value)
        end
end

# An XML Processing Instruction (PI) representation
class XMLPI
        super XMLSpecialNode

        var target: String = ""

        fun set_target(target: String) do
                assert target != ""

                self.target = target
        end
        
        fun with_target(target: String): XMLPI do
                self.set_target(target)

                return self
        end

        redef fun format_xml(indent: Bool, depth: Int): String do
                if not indent then depth = 0

                return self.indent_xml(depth, "<?{self.target} {self.value}?>")
        end
end

# An XML CDATA representation
class XMLCDATA
        super XMLSpecialNode
        
        redef fun format_xml(indent: Bool, depth: Int): String do
                if not indent then depth = 0

                return self.indent_xml(depth, "<![CDATA[{self.value}]]>")
        end
end

