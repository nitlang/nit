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

# Portable Benitlux app
module client is
	app_name "Benitlux"
	app_version(0, 3, git_revision)
	app_namespace "net.xymus.benitlux"
end

import home_views
import beer_views
import social_views
import user_views

# ---
# Services

redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "Array[UserAndFollowing]" then return new Array[UserAndFollowing].from_deserializer(self)
		return super
	end
end

set_fr
super
