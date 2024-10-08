# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Contains "helper" classes, including support for bootstrapping SAX-based applications.
#
# See [http://www.saxproject.org](http://www.saxproject.org)
# for more information about SAX.
#
# Note: The original documentation comes from [SAX 2.0](http://www.saxproject.org).
module sax::helpers

import sax
import attributes_impl
import namespace_support
import sax_locator_impl
import xml_filter_impl
