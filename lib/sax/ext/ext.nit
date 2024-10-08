# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Interfaces to optional SAX2 handlers.
#
# See [http://www.saxproject.org](http://www.saxproject.org)
# for more information about SAX.
#
# The package is independent of the SAX2 core, though the functionality
# exposed generally needs to be implemented within a parser.
# That independence has several consequences:
#
# * SAX2 drivers are *not* required to recognize these handlers,
# and you cannot assume that the class files will be present in every SAX2
# installation.
#
# * This package may be updated independently of SAX2 (i.e. new
# handlers may be added without updating SAX2 itself).
#
# * The handlers are not implemented by the SAX2
# `org.xml.sax.helpers.XMLFilterImpl` class.
# You can subclass these if you need such behaviour.
#
# * The handlers need to be registered differently than regular SAX2
# handlers.
#
# This package, SAX2-ext, is a standardized extension to SAX2. It is
# designed both to allow SAX parsers to pass certain types of information
# to applications, and to serve as a simple model for other SAX2 parser
# extension packages. Not all such extension packages should need to
# be recognized directly by parsers, however.
# As an example, most schema systems can be cleanly layered on top
# of parsers supporting the standardized SAX2 interfaces.
#
# Note: this package alone does add any
# functionality; it simply provides optional interfaces for SAX2 drivers
# to use. You must use a SAX2 driver that recognizes these interfaces if
# you actually want to have access to lexical and declaration
# information.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
module sax::ext

import sax
import decl_handler
import lexical_handler
