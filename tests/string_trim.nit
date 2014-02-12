module string_trim

var trimtest = "   \t nono nono   \n \t"

var subtrim = trimtest.substring(2,15)

var buffertrimtest = trimtest.to_buffer

print "resulttrim = {buffertrimtest.trim}"

print "returntrim + {trimtest.trim}"

print "thirdtrim = {subtrim.trim}"

var emptytrim = "         \t  "

var bufferemptytest = emptytrim.to_buffer

print "emptytrim = {emptytrim.trim}"

print "bufferemptytrim = {bufferemptytest.trim}"

var onelettertrim = "    \n   d      \n\t  "

var oneletterbuftest = onelettertrim.to_buffer

print "onelettertrim = {onelettertrim.trim}"

print "oneletterbuftest = {oneletterbuftest.trim}"

var twolettertrim = "    \n   hg      \n\t  "

var twoletterbuftest = twolettertrim.to_buffer

print "twolettertrim = {twolettertrim.trim}"

print "twoletterbuftest = {twoletterbuftest.trim}"

var firstlettertrim = "d                "

var firstlettertrimbuf = firstlettertrim.to_buffer

print "firstlettertrimtest = {firstlettertrim.trim}"

print "firstlettertrimbuftest = {firstlettertrimbuf.trim}"

var lastlettertrim = "                     d"

var lastlettertrimbuf = lastlettertrim.to_buffer

print "lastlettertrimtest = {lastlettertrim.trim}"

print "lastlettertrimbuftest = {lastlettertrimbuf.trim}"
