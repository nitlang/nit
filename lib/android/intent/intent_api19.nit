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

# Refines intent module to add API 19 services
module intent_api19

import intent_api18

in "Java" `{
	import android.content.Intent;
`}

redef class Extra
	fun mime_types: JavaString in "Java" `{ return Intent.EXTRA_MIME_TYPES; `}
	fun shutdown_userspace_only: JavaString in "Java" `{ return Intent.EXTRA_SHUTDOWN_USERSPACE_ONLY; `}
end

redef class Flag
	fun grant_persistable_uri_permission: Int in "Java" `{ return Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION; `}
	fun receiver_no_abort: Int in "Java" `{ return Intent.FLAG_RECEIVER_NO_ABORT; `}
end
