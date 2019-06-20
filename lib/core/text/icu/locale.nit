# Adding Locale class which will be used throughout the ICU package


module locale is pkgconfig("icu-io", "icu-i18n", "icu-uc")

`{
	#include <unicode/uloc.h>

	#include <locale.h>
	#include <string.h>

`}


class Locale
	var name: String is noinit

	redef fun to_s do return "{name}"

	init (localeName : String)
	do
		if isAvailable(localeName) then
			name = localeName
		else
			name = ""
		end
	end

	init default
	do
		init(getSysLocaleName)
	end

	fun getName : String
	do
		return name
	end

	fun isAvailable(localeName :String) : Bool import String.to_cstring `{
		int32_t count;
		char * searchedLocale = NULL;
		int i;

		count = uloc_countAvailable();
		searchedLocale = String_to_cstring(localeName);

		for (i = 0; i < count; i++) {
			const char * locale = uloc_getAvailable(i);

			if (!strcmp(locale, searchedLocale)) {
				return 1;
			}
		}
		return 0;
	`}


end

fun getSysLocaleName : String import CString.to_s `{
		char * fullLocaleName = NULL;
		char localeName[6];

		fullLocaleName = setlocale(LC_CTYPE, "");
		strncpy(localeName, fullLocaleName, 5);
		localeName[5] = '\0';

		return CString_to_s(localeName);
`}
