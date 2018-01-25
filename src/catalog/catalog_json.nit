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

# Translate catalog entities to JSON
module catalog_json

import catalog

redef class MPackageMetadata
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("license", license)
		v.serialize_attribute("maintainers", maintainers)
		v.serialize_attribute("contributors", contributors)
		v.serialize_attribute("tags", tags)
		v.serialize_attribute("tryit", tryit)
		v.serialize_attribute("apk", apk)
		v.serialize_attribute("homepage", homepage)
		v.serialize_attribute("browse", browse)
		v.serialize_attribute("git", git)
		v.serialize_attribute("issues", issues)
		v.serialize_attribute("first_date", first_date)
		v.serialize_attribute("last_date", last_date)
	end
end

# Catalog statistics
redef class CatalogStats
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("packages", packages)
		v.serialize_attribute("maintainers", maintainers)
		v.serialize_attribute("contributors", contributors)
		v.serialize_attribute("tags", tags)
		v.serialize_attribute("modules", modules)
		v.serialize_attribute("classes", classes)
		v.serialize_attribute("methods", methods)
		v.serialize_attribute("loc", loc)
	end
end

# MPackage statistics for the catalog
redef class MPackageStats
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("mmodules", mmodules)
		v.serialize_attribute("mclasses", mclasses)
		v.serialize_attribute("mmethods", mmethods)
		v.serialize_attribute("loc", loc)
		v.serialize_attribute("errors", errors)
		v.serialize_attribute("warnings", warnings)
		v.serialize_attribute("warnings_per_kloc", warnings_per_kloc)
		v.serialize_attribute("documentation_score", documentation_score)
		v.serialize_attribute("commits", commits)
		v.serialize_attribute("score", score)
	end
end

redef class Person
	serialize

	redef fun core_serialize_to(v) do
		super
		v.serialize_attribute("name", name)
		v.serialize_attribute("email", email)
		v.serialize_attribute("gravatar", gravatar)
	end
end
