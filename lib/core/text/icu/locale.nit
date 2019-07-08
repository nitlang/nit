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

# `Locale` class which will be used throughout the ICU package
module locale is pkgconfig("icu-io", "icu-i18n", "icu-uc")

`{
	#include <unicode/uloc.h>
	#include <unicode/uregex.h>
	#include <unicode/utypes.h>
	#include <locale.h>
	#include <string.h>
`}

# `Locale` object ensuring that the provided `locale_name` is supported by the ICU library
#
# ~~~
# var locale = new Locale("azerty")
# var locale2 = new Locale("tr_TR.UTF-8")
# var locale3 = new Locale("zh-Hant-TW")
# assert locale.name == ""
# assert locale2.name == "tr_TR"
# assert locale3.name == "zh_Hant_TW"
# ~~~
class Locale
	# Name of the locale following the pattern : language[\_script][\_country] (RFC5646)
	var name : String

	init
	do
		var c_name = canonicalize(name.to_cstring)
		if not is_available(c_name) then name = "" else name = c_name.to_s
	end

	redef fun to_s do return "{name}"

	private fun is_available (locale_name : CString) : Bool`{
		int32_t count;
		int i;

		count = uloc_countAvailable();

		for (i = 0; i < count; i++) {
			const char * locale = uloc_getAvailable(i);

			if (!strcmp(locale, locale_name)) {
				return 1;
			}
		}
		return 0;
	`}

	private fun canonicalize (locale_name : CString) : CString `{
		UErrorCode error = U_ZERO_ERROR;
		char * canon_locale_name = NULL;
		int required_length;

		required_length = uloc_canonicalize(locale_name, NULL, 0, &error);
		if (error == U_BUFFER_OVERFLOW_ERROR) {
			error = U_ZERO_ERROR;

			canon_locale_name = malloc(sizeof(char) * (required_length + 1));
			uloc_canonicalize(locale_name, canon_locale_name, required_length + 1, &error);
		}

		return canon_locale_name;
	`}
end

redef class Sys
	# Returns current system's locale
	fun sys_locale : String import CString.to_s `{
		UErrorCode error = U_ZERO_ERROR;
		char * full_locale_name = NULL, * locale_name = NULL;
		int required_length;

		full_locale_name = setlocale(LC_CTYPE, "");

		required_length = uloc_canonicalize(full_locale_name, NULL, 0, &error);
		if (error == U_BUFFER_OVERFLOW_ERROR) {
			error = U_ZERO_ERROR;

			locale_name = malloc(sizeof(char) * (required_length + 1));
			uloc_canonicalize(full_locale_name, locale_name, required_length + 1, &error);
		}

		return CString_to_s(locale_name);
	`}
end
