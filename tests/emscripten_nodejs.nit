import emscripten
redef class IFStream
	redef fun fill_buffer
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
