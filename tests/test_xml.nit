# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

import xml

var document = new XMLDocument(1.0)

document.root = (new XMLElement("mesh")).
                        with_attributes(new XMLAttribute("name", "mesh_root"),
                                        new XMLAttribute("name", "duplicate")).
                        with_children(new XMLComment("here is a mesh node"),
                                      new XMLText("some text"),
                                      new XMLCDATA("someothertext"),
                                      new XMLText("some more text"),
                                      (new XMLElement("node")).
                                                with_attributes(new XMLAttribute("attr1", "value1"),
                                                                new XMLAttribute("attr2", "value2")),
                                      ((new XMLElement("node")).
                                                with_attributes(new XMLAttribute("attr1", "value2"))).
                                                with_children(new XMLElement("innernode")),
                                      (new XMLPI("somedata")).
                                                with_target("include"))

print document.to_xml(true)
print("")

printn("document.xpath_query(\"/\") => ")
for n in document.xpath_query(new XPathQuery("/")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"/mesh\") => ")
for n in document.xpath_query(new XPathQuery("/mesh")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"/mesh/node\") => ")
for n in document.xpath_query(new XPathQuery("/mesh/node")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"/mesh/node[1]\") => ")
for n in document.xpath_query(new XPathQuery("/mesh/node[1]")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"/mesh/node[2]\") => ")
for n in document.xpath_query(new XPathQuery("/mesh/node[2]")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"/mesh/node[@attr1='value1']\") => ")
for n in document.xpath_query(new XPathQuery("/mesh/node[@attr1='value1']")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"/mesh/node[@attr1='value2']\") => ")
for n in document.xpath_query(new XPathQuery("/mesh/node[@attr1='value2']")) do printn(n.to_xml(false))
print("\n")


printn("document.xpath_query(\"/mesh/node/innernode\") => ")
for n in document.xpath_query(new XPathQuery("/mesh/node/innernode")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"//node\") => ")
for n in document.xpath_query(new XPathQuery("//node")) do printn(n.to_xml(false))
print("\n")

printn("document.xpath_query(\"//innernode\") => ")
for n in document.xpath_query(new XPathQuery("//innernode")) do printn(n.to_xml(false))
print("\n")

printn("document.root.xpath_query(\"node\") => ")
for n in document.root.xpath_query(new XPathQuery("node")) do printn(n.to_xml(false))
print("\n")

printn("document.root.xpath_query(\"node/innernode\") => ")
for n in document.root.xpath_query(new XPathQuery("node/innernode")) do printn(n.to_xml(false))
print("\n")

printn("document.root.xpath_query(\"node\").xpath_query(\"innernode\") => ")
for n in document.root.xpath_query(new XPathQuery("node")).xpath_query(new XPathQuery("innernode")) do printn(n.to_xml(false))
print("\n")
