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

# Locale aware case modification
# Operations are prefixed with `uni_`
module case_modification is pkgconfig("icu-io", "icu-i18n", "icu-uc")

import locale

`{
	#include <unicode/utypes.h>
	#include <unicode/ustring.h>
	#include <string.h>
	#include <locale.h>

`}

redef class String

	# Returns the uppercased version of `self`
	# The locale parameter is optional
	#
	# ~~~
	# assert "i".uni_to_upper("tr_TR")
	# assert "i".uni_to_upper
	# ~~~
	fun uni_to_upper (locale_name : nullable String) : String
	do
		var locale : Locale
		if locale_name == null then locale = new Locale(sys_locale) else locale = new Locale(locale_name)

		return to_cstring.uni_to_upper(to_cstring.cstring_length, locale.name.to_cstring).to_s
	end

	# Returns the lowercased version of `self`
	# The locale parameter is optional
	#
	# ~~~
	# assert "İ".uni_to_lower("tr_TR") == "i"
	# assert "İ".uni_to_lower("en_US") != "i"
	# ~~~
	fun uni_to_lower (locale_name : nullable String) : String
	do
		var locale : Locale
		if locale_name == null then locale = new Locale(sys_locale) else locale = new Locale(locale_name)

		return to_cstring.uni_to_lower(to_cstring.cstring_length, locale.name.to_cstring).to_s
	end

	# Returns the titlecased version of `self`
	# The locale parameter is optional
	#
	# ~~~
	# assert "ingilizce".uni_to_title("tr_TR") == "İngilizce"
	# assert "ingilizce".uni_to_title("en_US") == "Ingilizce"
	# ~~~
	fun uni_to_title (locale_name : nullable String) : String
	do
		var locale : Locale
		if locale_name == null then locale = new Locale(sys_locale) else locale = new Locale(locale_name)

		return to_cstring.uni_to_title(to_cstring.cstring_length, locale.name.to_cstring).to_s
	end
end

redef class CString
	private fun uni_to_upper (self_length : Int, locale_name : CString) : CString `{
		UErrorCode error = U_ZERO_ERROR;
		UChar *u_self = NULL, *u_modified_self = NULL;
		int32_t required_length;

		u_self = (UChar *)malloc(sizeof(UChar) * (self_length + 1));
		u_uastrcpy(u_self, self);
		required_length = u_strToUpper(NULL, 0, u_self, self_length, locale_name, &error);

		if (error == U_BUFFER_OVERFLOW_ERROR) {
			error = U_ZERO_ERROR;

			u_modified_self = (UChar *)malloc(sizeof(UChar) *  (required_length + 1));
			self = malloc(sizeof(char) * (required_length + 1));
			u_strToUpper(u_modified_self, required_length + 1, u_self, self_length, locale_name, &error);
			u_austrcpy(self, u_modified_self);
		}

		free(u_self);
		free(u_modified_self);

		return self;
	`}

	private fun uni_to_lower (self_length : Int, locale_name : CString) : CString `{
		UErrorCode error = U_ZERO_ERROR;
		UChar *u_self = NULL, *u_modified_self = NULL;
		int required_length;

		u_self = (UChar *)malloc(sizeof(UChar) * (self_length + 1));
		u_uastrcpy(u_self, self);
		required_length = u_strToLower(NULL, 0, u_self, self_length, locale_name, &error);

		if (error == U_BUFFER_OVERFLOW_ERROR) {
			error = U_ZERO_ERROR;

			u_modified_self = (UChar *)malloc(sizeof(UChar) *  (required_length + 1));
			self = malloc(sizeof(char) *  (required_length + 1));
			u_strToLower(u_modified_self, required_length + 1, u_self, self_length, locale_name, &error);
			u_austrcpy(self, u_modified_self);
		}

		free(u_self);
		free(u_modified_self);

		return self;
	`}

	private fun uni_to_title (self_length : Int, locale_name : CString) : CString `{
		UErrorCode error = U_ZERO_ERROR;
		UChar *u_self = NULL, *u_modified_self = NULL;
		int32_t required_length;

		u_self = (UChar *)malloc(sizeof(UChar) * (self_length + 1));
		u_uastrcpy(u_self, self);
		required_length = u_strToTitle(NULL, 0, u_self, self_length, NULL, locale_name, &error);

		if (error == U_BUFFER_OVERFLOW_ERROR) {
			error = U_ZERO_ERROR;

			u_modified_self = (UChar *)malloc(sizeof(UChar) *  (required_length + 1));
			self = malloc(sizeof(char) *  (required_length + 1));
			u_strToTitle(u_modified_self, required_length + 1, u_self, self_length, NULL, locale_name, &error);
			u_austrcpy(self, u_modified_self);
		}

		free(u_self);
		free(u_modified_self);

		return self;
	`}
end
