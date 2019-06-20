# Adding locale aware case modification to the String and CString classes

module caseModification is pkgconfig("icu-io", "icu-i18n", "icu-uc")
import locale

`{
	#include <unicode/utypes.h>
	#include <unicode/ustring.h>

	#include <string.h>
	#include <locale.h>

`}



# There are 3 different types of case modification but they all behave the same way
# Therefore the main operations are in a parent class
private abstract class CaseModifier

	fun getModifiedStrLength (uchar_str, error : Pointer, strLength : Int, localeName : CString) : Int  is abstract
	fun doModification  (uchar_modifiedStr, uchar_str, error : Pointer, requiredLength, strLength : Int, localeName : CString) is abstract

	fun modify (locale : Locale, str : CString) : CString import String.to_cstring, CString.cstring_length, Locale.getName, getModifiedStrLength, doModification `{


		UErrorCode error = U_ZERO_ERROR;
		char * localeName = NULL;
		char * modifiedStr = NULL;
		UChar * uchar_str = NULL;
		UChar * uchar_modifiedStr = NULL;
		int32_t requiredLength, strLength;

		strLength = CString_cstring_length(str);
		uchar_str = (UChar *)malloc(sizeof(UChar) * (strLength + 1));
		localeName = String_to_cstring(Locale_getName(locale));

		u_uastrcpy(uchar_str, str);

		requiredLength = CaseModifier_getModifiedStrLength(self, uchar_str, &error, strLength, localeName);

		if (error == U_BUFFER_OVERFLOW_ERROR) {
			error = U_ZERO_ERROR;

			uchar_modifiedStr = (UChar *)malloc(sizeof(UChar) *  (requiredLength + 1));
			modifiedStr = malloc(sizeof(char) *  (requiredLength + 1));
			CaseModifier_doModification(self, uchar_modifiedStr, uchar_str, &error, requiredLength, strLength, localeName);
			u_austrcpy(modifiedStr, uchar_modifiedStr);

		}

		free(uchar_str);
		free(uchar_modifiedStr);

		return modifiedStr;
	`}
end

private class CaseModifierUpper
	super CaseModifier

	redef fun getModifiedStrLength (uchar_str, error : Pointer, strLength : Int, localeName : CString) : Int `{
		return u_strToUpper(NULL, 0, (UChar *)uchar_str, strLength, localeName, (UErrorCode *)error);

		`}


		redef fun doModification (uchar_modifiedStr, uchar_str, error : Pointer, requiredLength, strLength : Int, localeName : CString) `{
			u_strToUpper((UChar *)uchar_modifiedStr, requiredLength + 1, (UChar *)uchar_str, strLength, localeName, (UErrorCode *)error);
			`}
end


private class CaseModifierLower
	super CaseModifier

	redef fun getModifiedStrLength (uchar_str, error : Pointer, strLength : Int, localeName : CString) : Int `{
		return u_strToLower(NULL, 0, (UChar *)uchar_str, strLength, localeName, (UErrorCode *)error);

		`}


		redef fun doModification (uchar_modifiedStr, uchar_str, error : Pointer, requiredLength, strLength : Int, localeName : CString) `{
			u_strToLower((UChar *)uchar_modifiedStr, requiredLength + 1, (UChar *)uchar_str, strLength, localeName, (UErrorCode *)error);
			`}
end


private class CaseModifierTitle
	super CaseModifier

	redef fun getModifiedStrLength (uchar_str, error : Pointer, strLength : Int, localeName : CString) : Int `{
		return u_strToTitle(NULL, 0, (UChar *)uchar_str, strLength, NULL, localeName, (UErrorCode *)error);
		`}


		redef fun doModification (uchar_modifiedStr, uchar_str, error : Pointer, requiredLength, strLength : Int, localeName : CString) `{
			u_strToTitle((UChar *)uchar_modifiedStr,  requiredLength + 1, (UChar *)uchar_str, strLength, NULL, localeName, (UErrorCode *)error);
			`}
end


redef class String

	fun uppercase : String
	do
		var cself = to_cstring
		return cself.uppercase(new Locale.default).to_s
	end

	fun localeUppercase (localeName : String) : String
	do
		var cself = to_cstring
		return cself.uppercase(new Locale(localeName)).to_s
	end


	fun lowercase : String
	do
		var cself = to_cstring
		return cself.lowercase(new Locale.default).to_s
	end

	fun localeLowercase (localeName : String) : String
	do
		var cself = to_cstring
		return cself.lowercase(new Locale(localeName)).to_s
	end


	fun title : String
	do
		var cself = to_cstring
		return cself.title(new Locale.default).to_s
	end

	fun localeTitle (localeName : String) : String
	do
		var cself = to_cstring
		return cself.title(new Locale(localeName)).to_s
	end

end

redef class CString

	fun uppercase (locale : Locale) : CString
	do
		var cmu = new CaseModifierUpper
		var modifiedSelf = cmu.modify(locale, self)
		return modifiedSelf
	end

	fun lowercase (locale : Locale) : CString
	do
		var cmu = new CaseModifierLower
		var modifiedSelf = cmu.modify(locale, self)
		return modifiedSelf
	end

	fun title (locale : Locale) : CString
	do
		var cmu = new CaseModifierTitle
		var modifiedSelf = cmu.modify(locale, self)
		return modifiedSelf
	end
end