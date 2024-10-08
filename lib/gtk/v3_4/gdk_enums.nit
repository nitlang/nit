# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2013 Nathan Heu <heu.nathan@courrier.uqam.ca>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module gdk_enums is pkgconfig "gtk+-3.0"

in "C Header" `{
	#include <gtk/gtk.h>
`}

# enum GdkGravity
# Defines the reference point of a window and the meaning of coordinates passed to gtk_window_move().
# See: https://developer.gnome.org/gdk3/stable/gdk3-Windows.html#GdkGravity
extern class GdkGravity `{GdkGravity`}
	# The reference point is at the top left corner.
	new north_west `{ return GDK_GRAVITY_NORTH_WEST; `}

	# The reference point is in the middle of the top edge.
	new north `{ return GDK_GRAVITY_NORTH; `}

	# The reference point is at the top right corner.
	new north_east `{ return GDK_GRAVITY_NORTH_EAST; `}

	# The reference point is at the middle of the left edge.
	new west `{ return GDK_GRAVITY_WEST; `}

	# The reference point is at the center of the window
	new center `{ return GDK_GRAVITY_CENTER; `}

	# The reference point is at the middle of the right edge.
	new east `{ return GDK_GRAVITY_EAST; `}

	# The reference point is at the lower left corner.
	new south_west `{ return GDK_GRAVITY_SOUTH_WEST; `}

	# The reference point is at the middle of the lower edge.
	new south `{ return GDK_GRAVITY_SOUTH; `}

	# The reference point is at the lower right corner.
	new south_east `{ return GDK_GRAVITY_SOUTH_EAST; `}

	# The reference point is at the top left corner of the window itself, ignoring window manager decorations.
	new static `{ return GDK_GRAVITY_STATIC; `}
end

# enum GdkGWindowEdge
# Determines a window edge or corner.
# See: https://developer.gnome.org/gdk3/stable/gdk3-Windows.html#GdkWindowEdge
extern class GdkWindowEdge `{GdkWindowEdge`}
	# The top left corner.
	new north_west `{ return GDK_WINDOW_EDGE_NORTH_WEST; `}

	# The top edge.
	new north `{ return GDK_WINDOW_EDGE_NORTH; `}

	# The top right corner.
	new north_east `{ return GDK_WINDOW_EDGE_NORTH_EAST; `}

	# The left edge.
	new west `{ return GDK_WINDOW_EDGE_WEST; `}

	# The right edge.
	new east `{ return GDK_WINDOW_EDGE_EAST; `}

	# The lower left corner.
	new south_west `{ return GDK_WINDOW_EDGE_SOUTH_WEST; `}

	# The lower edge.
	new south `{ return GDK_WINDOW_EDGE_SOUTH; `}

	# The lower right corner.
	new south_east `{ return GDK_WINDOW_EDGE_SOUTH_EAST; `}
end

