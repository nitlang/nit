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

# Refines intent module to add API 11 services
module intent_api11

import intent

in "Java" `{
	import android.content.Intent;
`}

redef class Category
	fun app_market: JavaString in "Java" `{ return Intent.CATEGORY_APP_MARKET; `}
	fun he_desk_dock: JavaString in "Java" `{ return Intent.CATEGORY_HE_DESK_DOCK; `}
	fun le_desk_dock: JavaString in "Java" `{ return Intent.CATEGORY_LE_DESK_DOCK; `}
end

redef class Extra
	fun dock_state_he_desk: Int in "Java" `{ return Intent.EXTRA_DOCK_STATE_HE_DESK; `}
	fun dock_state_le_desk: Int in "Java" `{ return Intent.EXTRA_DOCK_STATE_LE_DESK; `}
	fun local_only: JavaString in "Java" `{ return Intent.EXTRA_LOCAL_ONLY; `}
end

redef class Flag
	fun activity_task_on_home: Int in "Java" `{ return Intent.FLAG_ACTIVITY_TASK_ON_HOME; `}
	fun activity_clear_task: Int in "Java" `{ return Intent.FLAG_ACTIVITY_CLEAR_TASK; `}
end
