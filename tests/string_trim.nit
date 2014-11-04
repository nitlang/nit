#alt1 import standard::ropes
#alt1 import standard

var trimtest = "   \t nono nono   \n \t"

var subtrim = trimtest.substring(2,15)

var buffertrimtest: Buffer = new FlatBuffer.from(trimtest)
#alt1 buffertrimtest = new RopeBuffer.from(trimtest)

print "resulttrim = {buffertrimtest.trim}"

print "returntrim + {trimtest.trim}"

print "thirdtrim = {subtrim.trim}"

var emptytrim = "         \t  "

var bufferemptytest: Buffer = new FlatBuffer.from(emptytrim)
#alt1 bufferemptytest = new RopeBuffer.from(emptytrim)

print "emptytrim = {emptytrim.trim}"

print "bufferemptytrim = {bufferemptytest.trim}"

var onelettertrim = "    \n   d      \n\t  "

var oneletterbuftest: Buffer = new FlatBuffer.from(onelettertrim)
#alt1 oneletterbuftest = new RopeBuffer.from(onelettertrim)

print "onelettertrim = {onelettertrim.trim}"

print "oneletterbuftest = {oneletterbuftest.trim}"

var twolettertrim = "    \n   hg      \n\t  "

var twoletterbuftest: Buffer = new FlatBuffer.from(twolettertrim)
#alt1 twoletterbuftest = new RopeBuffer.from(twolettertrim)

print "twolettertrim = {twolettertrim.trim}"

print "twoletterbuftest = {twoletterbuftest.trim}"

var firstlettertrim = "d                "

var firstlettertrimbuf: Buffer = new FlatBuffer.from(firstlettertrim)
#alt1 firstlettertrimbuf = new RopeBuffer.from(firstlettertrim)

print "firstlettertrimtest = {firstlettertrim.trim}"

print "firstlettertrimbuftest = {firstlettertrimbuf.trim}"

var lastlettertrim = "                     d"

var lastlettertrimbuf: Buffer = new FlatBuffer.from(lastlettertrim)
#alt1 lastlettertrimbuf = new RopeBuffer.from(lastlettertrim)

print "lastlettertrimtest = {lastlettertrim.trim}"

print "lastlettertrimbuftest = {lastlettertrimbuf.trim}"
