# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Service management through the `for` control structure.
#
# The module is a proof-of-concept to investigate the abuse of
# the `for` structure to implement various services.
#
# The idea is that, with a `for`, the service-provider can:
# * control the end of the service (thus can finalize things
#   like releasing ressources)
# * communicate data with the user on each iteration; the used can
#   also communicate results to the provider.
module for_abuse

# Encapsulation of service in a `for`-compatible interface.
#
# The service is not effectively started until the iterate method
# is called. Then, each step of the iteration is a step in the service.
#
# While, for a typing point of view, abusers are just classes with an
# iterator method, the point of this class is to tag services that return
# a ForAbuser object.
#
# Note that using having `ForAbuser` as a genuine subclass of `Collection`
# works but is not recommended since it may cause mental health issues.
interface ForAbuser[E]
	# Starts and control the service
	fun iterator: Iterator[E] is abstract
end

# Abuser to read a file, see `file_open`
private class ReadFileForAbuser
	super ForAbuser[FileReader]
	var path: String
	redef fun iterator do return new ReadFileForAbuserIterator(path)
end

# Abuser iterator to read a file, see `file_open`
private class ReadFileForAbuserIterator
	super Iterator[FileReader]
	var path: String
	redef var item: FileReader is noinit
	redef var is_ok = true
	init
	do
		# start of service is to open the file, and return in
		item = new FileReader.open(path)
	end
	redef fun next
	do
		# end of service is to close the file
		# there is only one iteration
		is_ok = false
		item.close
	end
end

####

# A comparison query.
# The user is asked to compare `a` with `b` then set `res` accordingly.
#
# * if `a < b` then the user sets `res` to -1
# * if `a > b` then the user sets `res` to 1
# * if `a == b` then the user sets `res` to 0
#
# It is the responsibility of the user to implement a total order.
# ie. the implemented comparison must be asymmetric, transitive and total.
class CompareQuery[E]
	# The first element to compare
	var a: E
	# The second element to compare
	var b: E
	# The result of the comparison (according to the user)
	var res = 0 is writable
end

# Abuser for sorting array, see `sort_fa`
private class SortAbuser[E]
	super ForAbuser[CompareQuery[E]]
	var array: Array[E]
	redef fun iterator do return new SortAbuserIterator[E](array)
end

# Abuser iterator for sorting array, see `sort_fa`
# Implements a sort by permutation
private class SortAbuserIterator[E]
	super Iterator[CompareQuery[E]]
	# The index of the big loop
	var i: Int = 0
	# The index of the small loop
	var j: Int = 0
	# The array to sort
	var array: Array[E]
	# The query used to communicate with the user.
	# For ecological concerns, a unique CompareQuery is instatiated.
	var query: nullable CompareQuery[E] = null
	redef fun item do return query.as(not null)
	init
	do
		# Initialize the algorithm, see `next` for the rest
		if not is_ok then return
		query = new CompareQuery[E](array[i], array[j])
	end
	redef fun is_ok do return i < array.length - 1
	redef fun next
	do
		# Process the last query
		if item.res > 0 then
			var tmp = array[i]
			array[i] = array[j]
			array[j] = tmp
		end
		# Get the next iteration
		j += 1
		if j >= array.length then
			# End of small loop
			i += 1
			j = i + 1
		end
		if not is_ok then return
		# Prepare the next query
		item.a = array[i]
		item.b = array[j]
		item.res = 0
	end
end

redef class Array[E]
	# Sort an array through a `for` abuse.
	# The user uses the provided query (item) to implements its own comparison
	#
	#     var a = [1, 3, 2]
	#     for q in a.sort_fa do q.res = q.a <=> q.b
	#     assert a ==  [1, 2, 3]
	#
	# Implements a sort by permutation.
	fun sort_fa: ForAbuser[CompareQuery[E]]
	do
		return new SortAbuser[E](self)
	end
end

####

# Open and read a file through a `for` abuse.
# The abuse just ensures that the file is closed after the reading.
#
#     for f in file_open("/etc/issue") do
#         var l = f.read_line
#         print l
#         assert not l.is_empty
#     end # f is automatically closed here
fun file_open(path: String): ForAbuser[FileReader]
do
	return new ReadFileForAbuser(path)
end
