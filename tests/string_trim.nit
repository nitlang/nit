module string_trim

var trimtest = "   \t nono nono   \n \t"

var subtrim = trimtest.substring(2,15)

var buffertrimtest = new Buffer.from(trimtest)

print "resulttrim = {buffertrimtest.trim}"

print "returntrim + {trimtest.trim}"

print "thirdtrim = {subtrim.trim}"

var emptytrim = "         \t  "

var bufferemptytest = new Buffer.from(emptytrim)

print "emptytrim = {emptytrim.trim}"

print "bufferemptytrim = {bufferemptytest.trim}"

var onelettertrim = "    \n   d      \n\t  "

var oneletterbuftest = new Buffer.from(onelettertrim)

print "onelettertrim = {onelettertrim.trim}"

print "oneletterbuftest = {oneletterbuftest.trim}"

var twolettertrim = "    \n   hg      \n\t  "

var twoletterbuftest = new Buffer.from(twolettertrim)

print "twolettertrim = {twolettertrim.trim}"

print "twoletterbuftest = {twoletterbuftest.trim}"

var firstlettertrim = "d                "

var firstlettertrimbuf = new Buffer.from(firstlettertrim)

print "firstlettertrimtest = {firstlettertrim.trim}"

print "firstlettertrimbuftest = {firstlettertrimbuf.trim}"

var lastlettertrim = "                     d"

var lastlettertrimbuf = new Buffer.from(lastlettertrim)

print "lastlettertrimtest = {lastlettertrim.trim}"

print "lastlettertrimbuftest = {lastlettertrimbuf.trim}"
