# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# Refines intent module to add API 12 services
module intent_api12 is android_api_min 12

import intent_api11

in "Java" `{
	import android.content.Intent;
`}

redef class Flag
	fun exclude_stopped_packages: Int in "Java" `{ return Intent.FLAG_EXCLUDE_STOPPED_PACKAGES; `}
	fun include_stopped_packages: Int in "Java" `{ return Intent.FLAG_INCLUDE_STOPPED_PACKAGES; `}
end
