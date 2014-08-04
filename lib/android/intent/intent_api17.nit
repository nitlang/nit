# This file is part of NIT (http://www.nitlanguage.org).
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

# Refines intent module to add API 17 services
module intent_api17

import intent_api16

in "Java" `{
	import android.content.Intent;
`}

redef class Extra
	fun originating_uri: JavaString in "Java" `{ return Intent.EXTRA_ORIGINATING_URI; `}
	fun referrer: JavaString in "Java" `{ return Intent.EXTRA_REFERRER; `}
end
