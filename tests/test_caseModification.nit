import core::text::icu::caseModification

var str = "Bonjour, hi Straße ſong ΣigmaΣ"

print str.uppercase
print str.localeUppercase("tr_TR")
print str.lowercase
print str.localeLowercase("el_GR")
print str.title
print str.localeTitle("en_US")