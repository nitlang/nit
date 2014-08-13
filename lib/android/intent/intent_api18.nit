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

# Refines intent module to add API 18 services
module intent_api18

import intent_api17

in "Java" `{
	import android.content.Intent;
`}

redef class Extra
	fun allow_multiple: JavaString in "Java" `{ return Intent.EXTRA_ALLOW_MULTIPLE; `}
	fun assist_context: JavaString in "Java" `{ return Intent.EXTRA_ASSIST_CONTEXT; `}
	fun assist_package: JavaString in "Java" `{ return Intent.EXTRA_ASSIST_PACKAGE; `}
	fun restrictions_bundle: JavaString in "Java" `{ return Intent.EXTRA_RESTRICTIONS_BUNDLE; `}
	fun restrictions_intent: JavaString in "Java" `{ return Intent.EXTRA_RESTRICTIONS_INTENT; `}
	fun restrictions_list: JavaString in "Java" `{ return Intent.EXTRA_RESTRICTIONS_LIST; `}
end
