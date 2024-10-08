# This file is part of NIT ( https://nitlanguage.org ).
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

redef extern class GtkEntry
	# Purpose of this text field
	#
	# Can be used by on-screen keyboards and other input methods to adjust their behaviour.
	fun input_purpose: GtkInputPurpose `{
		return gtk_entry_get_input_purpose(self);
	`}

	# Input purpose, tweaks the behavior of this widget
	#
	# Can be used by on-screen keyboards and other input methods to adjust their behaviour.
	fun input_purpose=(purpose: GtkInputPurpose) `{
		gtk_entry_set_input_purpose(self, purpose);
	`}
end

# Describe the purpose of an input widget
extern class GtkInputPurpose `{ GtkInputPurpose `}
	# Allow any character
	new free_form `{ return GTK_INPUT_PURPOSE_FREE_FORM; `}

	# Allow only alphabetic characters
	new alpha `{ return GTK_INPUT_PURPOSE_ALPHA; `}

	# Allow only digits
	new digits `{ return GTK_INPUT_PURPOSE_DIGITS; `}

	# Edited field expects numbers
	new number `{ return GTK_INPUT_PURPOSE_NUMBER; `}

	# Edited field expects phone number
	new phone `{ return GTK_INPUT_PURPOSE_PHONE; `}

	# Edited field expects URL
	new url `{ return GTK_INPUT_PURPOSE_URL; `}

	# Edited field expects email address
	new email `{ return GTK_INPUT_PURPOSE_EMAIL; `}

	# Edited field expects the name of a person
	new name `{ return GTK_INPUT_PURPOSE_NAME; `}

	# Like `free_form`, but characters are hidden
	new password `{ return GTK_INPUT_PURPOSE_PASSWORD; `}

	# Like `digits`, but characters are hidden
	new pin `{ return GTK_INPUT_PURPOSE_PIN; `}
end
