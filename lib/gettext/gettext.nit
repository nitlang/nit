# This file is part of NIT (http://www.nitlanguage.org).
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

# Internationalization of Strings using `gettext` library
module gettext is
	new_annotation i18n
end

in "C" `{
	#include <libintl.h>
	#include <locale.h>
`}

redef class Sys
	redef fun run do
		"".to_cstring.set_locale
		super
	end
end

redef class CString
	# Sets the locale of the program running
	#
	# This can be set at different times in the program,
	# if used with an empty string, the locale will
	# be set to the user's environment locale.
	#
	# For more info, SEE setlocale manual
	fun set_locale `{
		setlocale(LC_ALL, self);
	`}
end

redef class String
	# Gets the translation of `self` via gettext from `dir` using `domain`
	#
	# `domain`: Gettext domain, i.e. file/module name
	# `dir`: Where the locale/LC_MESSAGES folder for this domain is located
	fun get_translation(domain, dir: String): String do
		bindtextdomain(domain, dir)
		return dgettext(domain)
	end

	# Gettext `gettext`, SEE gettext manual for further info
	fun gettext: String
	import String.to_cstring, CString.to_s `{
		return CString_to_s(gettext(String_to_cstring(self)));
	`}

	# Gettext `dgettext`, SEE gettext manual for further info
	fun dgettext(domain: String): String
	import String.to_cstring, CString.to_s `{
		return CString_to_s(dgettext(String_to_cstring(domain), String_to_cstring(self)));
	`}
end

# Gettext `bindtextdomain`, SEE gettext manual for further info
fun bindtextdomain(domain, dir: String) import String.to_cstring `{
	bindtextdomain(String_to_cstring(domain), String_to_cstring(dir));
`}

# Gettext `textdomain`, SEE gettext manual for further info
fun textdomain(domain: String) import String.to_cstring `{
	textdomain(String_to_cstring(domain));
`}
