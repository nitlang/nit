var trimtest = "   \t nono nono   \n \t"

var subtrim = trimtest.substring(2,15)

var buffertrimtest: Buffer = new FlatBuffer.from(trimtest)

print "resulttrim = {buffertrimtest.trim}"

print "returntrim + {trimtest.trim}"

print "thirdtrim = {subtrim.trim}"

var emptytrim = "         \t  "

var bufferemptytest: Buffer = new FlatBuffer.from(emptytrim)

print "emptytrim = {emptytrim.trim}"

print "bufferemptytrim = {bufferemptytest.trim}"

var onelettertrim = "    \n   d      \n\t  "

var oneletterbuftest: Buffer = new FlatBuffer.from(onelettertrim)

print "onelettertrim = {onelettertrim.trim}"

print "oneletterbuftest = {oneletterbuftest.trim}"

var twolettertrim = "    \n   hg      \n\t  "

var twoletterbuftest: Buffer = new FlatBuffer.from(twolettertrim)

print "twolettertrim = {twolettertrim.trim}"

print "twoletterbuftest = {twoletterbuftest.trim}"

var firstlettertrim = "d                "

var firstlettertrimbuf: Buffer = new FlatBuffer.from(firstlettertrim)

print "firstlettertrimtest = {firstlettertrim.trim}"

print "firstlettertrimbuftest = {firstlettertrimbuf.trim}"

var lastlettertrim = "                     d"

var lastlettertrimbuf: Buffer = new FlatBuffer.from(lastlettertrim)

print "lastlettertrimtest = {lastlettertrim.trim}"

print "lastlettertrimbuftest = {lastlettertrimbuf.trim}"
