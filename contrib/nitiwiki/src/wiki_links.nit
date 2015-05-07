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

# Wiki internal links handling.
module wiki_links

import wiki_base
import markdown

redef class WikiEntry

	# Url to `self` once generated.
	fun url: String do return wiki.config.root_url.join_path(breadcrumbs.join("/"))

	redef fun render do
		super
		if not is_dirty and not wiki.force_render then return
	end
end

redef class WikiSection

	# The index page for this section.
	#
	# If no file `index.md` exists for this section,
	# a summary is generated using contained articles.
	var index: WikiArticle is lazy do
		for child in children.values do
			if child isa WikiArticle and child.is_index then return child
		end
		return new WikiSectionIndex(wiki, "index", self)
	end
end

redef class WikiArticle

	# Headlines ids and titles.
	var headlines = new ArrayMap[String, HeadLine]

	# Is `self` an index page?
	#
	# Checks if `self.name == "index"`.
	fun is_index: Bool do return name == "index"

	redef fun url do
		if parent == null then
			return wiki.config.root_url.join_path("{name}.html")
		else
			return parent.url.join_path("{name}.html")
		end
	end

	redef fun render do
		super
		if not is_dirty and not wiki.force_render or not has_source then return
		var md_proc = new MarkdownProcessor
		content = md_proc.process(md.as(not null))
		headlines.recover_with(md_proc.emitter.decorator.headlines)
	end
end

# A `WikiArticle` that contains the section index tree.
class WikiSectionIndex
	super WikiArticle

	# The section described by `self`.
	var section: WikiSection

	redef fun title do return section.title

	redef fun url do return section.url
end
