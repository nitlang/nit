import emscripten
redef class FileReader
	redef fun raw_read_byte
	do
		print "NOT YET IMPLEMENTED"
		abort
	end
	redef init open(f)
	do
		print "NOT YET IMPLEMENTED"
		abort
	end
end
