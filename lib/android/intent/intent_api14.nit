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

# Refines intent module to add API 14 services
module intent_api14

import intent_api12

in "Java" `{
	import android.content.Intent;
`}

redef class Extra
	fun allow_replace: JavaString in "Java" `{ return Intent.EXTRA_ALLOW_REPLACE; `}
	fun bug_report: JavaString in "Java" `{ return Intent.EXTRA_BUG_REPORT; `}
	fun installer_package_name: JavaString in "Java" `{ return Intent.EXTRA_INSTALLER_PACKAGE_NAME; `}
	fun not_unknown_source: JavaString in "Java" `{ return Intent.EXTRA_NOT_UNKNOWN_SOURCE; `}
	fun return_result: JavaString in "Java" `{ return Intent.EXTRA_RETURN_RESULT; `}
end
