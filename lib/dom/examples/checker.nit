# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Simple XML validity checker using the `dom` module
module checker is example

import dom

# Check arguments
if args.length != 1 then
	print_error "Usage: checker xml_file"
	exit 2
end

var path = args.first
if not path.file_exists then
	print_error "Path '{path}' does not exist"
	exit 3
end

# Read file
var content = path.to_path.read_all

# Parse XML
var xml = content.to_xml

# Check for errors
if xml isa XMLError then
	print_error "XML file at '{path}' is invalid:"
	print_error xml.message
	var loc = xml.location
	if loc != null then print_error loc
	exit 1
else
	print "XML file at '{path}' is valid"
end
