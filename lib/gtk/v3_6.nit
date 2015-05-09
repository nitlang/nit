# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# GTK+ services added at version 3.6
module v3_6 is pkgconfig "gtk+-3.0"

import v3_4

# An entry which shows a search icon
# See: https://developer.gnome.org/gtk3/stable/GtkSearchEntry.html
extern class GtkSearchEntry `{GtkSearchEntry *`}
	super GtkEntry

	new `{
		return (GtkSearchEntry *)gtk_search_entry_new();
	`}
end
