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

# Program to test the `markdown` module on real source files.
module test_markdown

import modelize_property
import markdown

redef class ModelBuilder
   fun test_markdown(page: HTMLTag, mmodule: MModule)
   do
      page.add_raw_html "<a id='{mmodule.full_name}'></a>"
      page.add_raw_html "<h1>module {mmodule}</h1>"
      if mmodule2nmodule.has_key(mmodule) then
         do
            var mdoc = mmodule.mdoc
            if mdoc == null then break label x
            page.add mdoc.full_markdown
         end label x
         for mclassdef in mmodule.mclassdefs do
            do
               var mdoc = mclassdef.mdoc
               if mdoc != null then
                  if mclassdef.mclass.intro == mclassdef then page.add_raw_html "<a id='{mclassdef.mclass.full_name}'></a>"
                  page.add_raw_html "<h2>class {mclassdef}</h2>"
                  page.add mdoc.full_markdown
               end
            end
            for mpropdef in mclassdef.mpropdefs do
               var mdoc = mpropdef.mdoc
               if mdoc != null then
                  if mpropdef.mproperty.intro == mpropdef then page.add_raw_html "<a id='{mpropdef.mproperty.full_name}'></a>"

                  page.add_raw_html "<h3>prop {mpropdef}</h3>"
                  page.add mdoc.full_markdown
               end
            end
         end
      end
   end
end

var toolcontext = new ToolContext

var opt_full = new OptionBool("Process also imported modules", "--full")
toolcontext.option_context.add_option(opt_full)
toolcontext.tooldescription = "Usage: test_markdown [OPTION]... <file.nit>...\nGenerates HTML of comments of documentation from Nit source files."

toolcontext.process_options(args)
var args = toolcontext.option_context.rest

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse(args)
modelbuilder.run_phases

var hv = new HighlightVisitor

var page = new HTMLTag("html")
page.add_raw_html """
<head>
<meta charset="utf-8">
<style type="text/css">
code {margin: 0 2px;
padding: 0px 5px;
border: 1px solid #ddd;
background-color: #f8f8f8;
border-radius: 3px;}
pre {
background-color: #f8f8f8;
border: 1px solid #ddd;
font-size: 13px;
line-height: 19px;
overflow: auto;
padding: 6px 6px;
border-radius: 3px;
}
.rawcode[title] {
border-color: red;
}
{{{hv.css_content}}}
</style>
</head><body>
"""

if opt_full.value then
   for m in model.mmodules do
      modelbuilder.test_markdown(page, m)
   end
else
   for m in mmodules do
      modelbuilder.test_markdown(page, m)
   end
end

page.add_raw_html "</body>"
page.write_to(stdout)
