import function

`{ 
	#include <time.h> 
`}

# Clock function for execution time
fun clock: Int `{ return clock(); `}
fun clock_resolution: Int `{ return CLOCKS_PER_SEC; `}

# Function for grouping micro-bench which run together

fun benchFlatString(count: Int)
do
	var function = new Function
	function.benchConcatShortString(count)

	var firstTime = clock/clock_resolution
	print "Time : {firstTime} s"
	
	function.benchConcatLongString(count)
	
	var secondTime = clock/clock_resolution
	var diff = (secondTime - firstTime)
	print "Time : {diff} s"
end

fun benchFlatBuffer(count: Int)
do
	var function = new Function
	function.benchConcatBufferShortString(count)

	var firstTime = clock/clock_resolution
	print "Time : {firstTime} s"
	
	function.benchConcatBufferLongString(count)
	
	var secondTime = clock/clock_resolution
	var diff = (secondTime - firstTime)
	print "Time : {diff} s"
end

fun benchBufferRope(count: Int)
do
	var function = new Function
	function.benchConcatBufferRopeShortString(count)

	var firstTime = clock/clock_resolution
	print "Time : {firstTime} s"
	
	function.benchConcatBufferRopeLongString(count)
	
	var secondTime = clock/clock_resolution
	var diff = (secondTime - firstTime)
	print "Time : {diff} s"
end

fun benchImmutableRope(count: Int)
do
	var function = new Function
	function.benchConcatImmutableRopeShortString(count)

	var firstTime = clock/clock_resolution
	print "Time : {firstTime} s"
	
	function.benchConcatImmutableRopeLongString(count)
	
	var secondTime = clock/clock_resolution
	var diff = (secondTime - firstTime)
	print "Time : {diff} s"
end

# Main of the script

print "\nBeginning of the bench\n"

var count = args[0].to_i
if args[1] == "FlatString" 		then	benchFlatString(count)
if args[1] == "FlatBuffer" 		then	benchFlatBuffer(count)
if args[1] == "BufferRope" 		then	benchBufferRope(count)
if args[1] == "ImmutableRope" 		then	benchImmutableRope(count)

print "\nEnd of the bench\n"
