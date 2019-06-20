import core::text::icu::locale

var availableLocale = new Locale("en_US")
var unavailableLocale = new Locale("azerty")

print availableLocale.name
print unavailableLocale.name