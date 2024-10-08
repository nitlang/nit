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

# Refines intent module to add API 15 services
module intent_api15 is android_api_min 15

import intent_api14

in "Java" `{
	import android.content.Intent;
`}

redef extern class NativeIntent
	fun selector=(selector: NativeIntent) in "Java" `{ self.setSelector(selector); `}
end

redef class Category
	fun app_browser: JavaString in "Java" `{ return Intent.CATEGORY_APP_BROWSER; `}
	fun app_calculator: JavaString in "Java" `{ return Intent.CATEGORY_APP_CALCULATOR; `}
	fun app_calendar: JavaString in "Java" `{ return Intent.CATEGORY_APP_CALENDAR; `}
	fun app_contacts: JavaString in "Java" `{ return Intent.CATEGORY_APP_CONTACTS; `}
	fun app_email: JavaString in "Java" `{ return Intent.CATEGORY_APP_EMAIL; `}
	fun app_gallery: JavaString in "Java" `{ return Intent.CATEGORY_APP_GALLERY; `}
	fun app_maps: JavaString in "Java" `{ return Intent.CATEGORY_APP_MAPS; `}
	fun app_messaging: JavaString in "Java" `{ return Intent.CATEGORY_APP_MESSAGING; `}
	fun app_music: JavaString in "Java" `{ return Intent.CATEGORY_APP_MUSIC; `}
	fun browsable: JavaString in "Java" `{ return Intent.CATEGORY_BROWSABLE; `}
end

redef class Intent
	fun selector=(selector: NativeIntent) do intent.selector = selector
end
