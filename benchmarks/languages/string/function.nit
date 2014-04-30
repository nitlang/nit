amodule function

import ropes

#Class Function which you can implement all micro-bench you need
class Function 
	fun benchConcatBufferLongString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec FlatBuffer long : length = 72"
	
		var firstString = new FlatBuffer
	
	    for i in [0..count] do
			firstString.append("abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789")
		end
	end
	
	fun benchConcatBufferShortString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec FlatBuffer court : length = 1"
	
		var firstString = new FlatBuffer
	
	    for i in [0..count] do
		  firstString.append("a")
		end
	end
	
	fun benchConcatShortString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec FlatString court : length = 1"
	
		var firstString = "a"
		var secondString = "a"
	
	    for i in [0..count] do
		  var test = firstString + secondString
		end
	end
	
	fun benchConcatLongString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec FlatString long : length = 72"
	
		var firstString = "abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789"
		var secondString = "abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789"
	
	    for i in [0..count] do
			var test = firstString + secondString
		end
	end
	
	fun benchConcatBufferRopeShortString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec BufferRope court : length = 1"
	
		var firstString = new BufferRope
	
	    for i in [0..count] do
		  firstString.append("a")
		end
	end
	
	fun benchConcatBufferRopeLongString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec BufferRope long : length = 72"
	
		var firstString = new BufferRope
	
	    for i in [0..count] do
			firstString.append("abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789")
		end
	end
	
	fun benchConcatImmutableRopeShortString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec ImmutableRope court : length = 1"
	
		var firstString = new ImmutableRope.with_string("a")
		var secondString = new ImmutableRope.with_string("a")
	
	    for i in [0..count] do
		  var test = firstString + secondString
		end
	end
	
	fun benchConcatImmutableRopeLongString(count: Int)
	do
		print "\nDebut de la méthode de concaténation avec ImmutableRope long : length = 72"
	
		var firstString = new ImmutableRope.with_string("abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789")
		var secondString = new ImmutableRope.with_string("abcdefghijklmnopqrstuvwxyz0123456789abcdefghijklmnopqrstuvwxyz0123456789")
	
	    for i in [0..count] do
			var test = firstString + secondString
		end
	end
end
