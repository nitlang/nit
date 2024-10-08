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

module gtk_dialogs is pkgconfig("gtk+-3.0")

import gtk_core

in "C Header" `{
	#include <gtk/gtk.h>
`}

# Create popup windows
# See: https://developer.gnome.org/gtk3/stable/GtkDialog.html
extern class GtkDialog `{GtkDialog *`}
	super GtkWindow

	new `{
		return (GtkDialog *)gtk_dialog_new();
	`}

	new with_buttons(title: String, parent: GtkWindow, flags: GtkDialogFlags)
	import String.to_cstring `{
		return (GtkDialog *)gtk_dialog_new_with_buttons(
			String_to_cstring(title), parent, flags, "", NULL);
	`}

	fun run `{
		gtk_dialog_run(self);
	`}
end

# Display information about an application
# See: https://developer.gnome.org/gtk3/stable/GtkAboutDialog.html
extern class GtkAboutDialog `{GtkAboutDialog *`}
	super GtkDialog

	new `{
		return (GtkAboutDialog *)gtk_about_dialog_new();
	`}

	fun program_name: String import CString.to_s `{
		return CString_to_s((char *)gtk_about_dialog_get_program_name(self));
	`}

	fun program_name=(name: String) import String.to_cstring `{
		gtk_about_dialog_set_program_name(self, String_to_cstring(name));
	`}

	fun version: String import CString.to_s `{
		return CString_to_s((char *)gtk_about_dialog_get_version(self));
	`}

	fun version=(v: String) import String.to_cstring `{
		gtk_about_dialog_set_version(self, String_to_cstring(v));
	`}

	fun copyright: String import CString.to_s `{
		return CString_to_s((char *)gtk_about_dialog_get_copyright(self));
	`}

	fun copyright=(c: String) import String.to_cstring `{
		gtk_about_dialog_set_copyright(self, String_to_cstring(c));
	`}

	fun comments: String import CString.to_s `{
		return CString_to_s((char *)gtk_about_dialog_get_comments(self));
	`}

	fun comments=(com: String) import String.to_cstring `{
		gtk_about_dialog_set_comments(self, String_to_cstring(com));
	`}

	fun license: String import CString.to_s `{
		return CString_to_s((char *)gtk_about_dialog_get_license(self));
	`}

	fun license=(li: String) import String.to_cstring `{
		gtk_about_dialog_set_license(self, String_to_cstring(li));
	`}

	# license_type

	fun website: String import CString.to_s `{
		return CString_to_s((char *)gtk_about_dialog_get_website(self));
	`}

	fun website=(link: String) import String.to_cstring `{
		gtk_about_dialog_set_website(self, String_to_cstring(link));
	`}

	fun website_label: String import CString.to_s `{
		return CString_to_s((char *) gtk_about_dialog_get_website_label(self));
	`}

	fun website_label=(link_label: String) import String.to_cstring `{
		gtk_about_dialog_set_website_label(self, String_to_cstring(link_label));
	`}

	# TODO
	# fun authors: String  import CString.to_s `{
	#		return CString_to_s(gtk_about_dialog_get_authors(self));
	# `}

	# TODO
	# fun authors=(authors_list: String) import String.to_cstring`{
	#	gtk_about_dialog_set_authors(self, String_to_cstring(authors_list));
	# `}

	fun show_about_dialog(parent: GtkWindow, params: String)
	import String.to_cstring `{
		gtk_show_about_dialog(parent, String_to_cstring(params), NULL);
	`}
end

# An application chooser dialog
# See: https://developer.gnome.org/gtk3/stable/GtkAppChooserDialog.html
extern class GtkAppChooserDialog `{GtkAppChooserDialog *`}
	super GtkDialog

	# TODO - GFile
	# new (parent: GtkWindow, flags: GtkDialogFlags, file: GFile) `{
	#	return (GtkAppChooserDialog *)gtk_app_chooser_dialog_new(parent, flags, file);
	# `}

	new for_content_type (parent: GtkWindow, flags: GtkDialogFlags, content_type: String)
	import String.to_cstring `{
		return (GtkAppChooserDialog *)gtk_app_chooser_dialog_new_for_content_type(
			parent, flags, String_to_cstring(content_type));
	`}

	fun widget: GtkWidget `{ return gtk_app_chooser_dialog_get_widget(self); `}

	fun heading: String import CString.to_s `{
		return CString_to_s((char *)gtk_app_chooser_dialog_get_heading(self));
	`}

	fun heading=(text: String) import String.to_cstring `{
		gtk_app_chooser_dialog_set_heading(self, String_to_cstring(text));
	`}

end

# A dialog for choosing colors
# See: https://developer.gnome.org/gtk3/stable/GtkColorChooserDialog.html
extern class GtkColorChooserDialog `{GtkColorChooserDialog *`}
	super GtkDialog

	new (title: String, parent: GtkWindow) import String.to_cstring `{
		return (GtkColorChooserDialog *)gtk_color_chooser_dialog_new(
			String_to_cstring(title), parent);
	`}
end

# A file chooser dialog, suitable for "File/Open" or "File/Save" commands
# See: https://developer.gnome.org/gtk3/stable/GtkFileChooserDialog.html
extern class GtkFileChooserDialog `{GtkFileChooserDialog *`}
	super GtkDialog

	new (title: String, parent: GtkWindow, action: GtkFileChooserAction)
	import String.to_cstring `{
		return (GtkFileChooserDialog *)gtk_file_chooser_dialog_new(
			String_to_cstring(title), parent, action, "", NULL);
	`}
end

# enum GtkFileChooserAction
#
# Describes whether a GtkFileChooser is being used to open existing files or to save to a possibly new file.
# See: https://developer.gnome.org/gtk3/stable/GtkFileChooser.html#GtkFileChooserAction
extern class GtkFileChooserAction `{GtkFileChooserAction`}
	# Open file mode
	#
	# The file chooser will only let the user pick an existing file.
	new open `{ return GTK_FILE_CHOOSER_ACTION_OPEN; `}

	# Save file mode
	#
	# The file chooser will let the user pick an existing file, or type in a new filename.
	new save `{ return GTK_FILE_CHOOSER_ACTION_SAVE; `}

	# Select folder mode
	#
	# The file chooser will let the user pick an existing folder.
	new select_folder `{ return GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER; `}

	# Create a new folder mode
	#
	# The file chooser will let the user name an existing or new folder.
	new create_folder `{ return GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER; `}
end

# A dialog for selecting fonts
# See: https://developer.gnome.org/gtk3/stable/GtkFontChooserDialog.html
extern class GtkFontChooserDialog `{GtkFontChooserDialog *`}
	super GtkDialog

	new (title: String, parent: GtkWindow) `{
		return (GtkFontChooserDialog *)gtk_font_chooser_dialog_new(String_to_cstring(title), parent);
	`}
end

# A convenient message window
# See: https://developer.gnome.org/gtk3/stable/GtkMessageDialog.html
extern class GtkMessageDialog `{GtkMessageDialog *`}
	super GtkDialog

	new (parent: GtkWindow, flags: GtkDialogFlags, msg_type: GtkMessageType, btn_type: GtkButtonsType, format: String) import String.to_cstring `{
		return (GtkMessageDialog *)gtk_message_dialog_new(parent, flags, msg_type, btn_type, String_to_cstring(format), NULL);
	`}
end

# enum GtkButtonsType
# Prebuilt sets of buttons for the dialog. If none of these choices are appropriate, simply use GTK_BUTTONS_NONE then call gtk_dialog_add_buttons().
# See: https://developer.gnome.org/gtk3/stable/GtkMessageDialog.html#GtkButtonsType
extern class GtkButtonsType `{GtkButtonsType`}
	# No buttons at all
	new none `{ return GTK_BUTTONS_NONE; `}

	# An OK button.
	new ok `{ return GTK_BUTTONS_OK; `}

	# A Close button.
	new close `{ return GTK_BUTTONS_CLOSE; `}

	# A Cancel button.
	new cancel `{ return GTK_BUTTONS_CANCEL; `}

	# Yes and No buttons.
	new yes_no `{ return GTK_BUTTONS_YES_NO; `}

	# OK and Cancel buttons.
	new ok_cancel `{ return GTK_BUTTONS_OK_CANCEL; `}
end

# enum GtkMessageType
# The type of message being displayed in the dialog.
# See: https://developer.gnome.org/gtk3/stable/GtkMessageDialog.html#GtkMessageType
extern class GtkMessageType `{GtkMessageType`}
	# Informational message
	new info `{ return GTK_MESSAGE_INFO; `}

	# Non-fatal warning message.
	new warning `{ return GTK_MESSAGE_WARNING; `}

	# Question requiring a choice.
	new question `{ return GTK_MESSAGE_QUESTION; `}

	# Fatal error message.
	new error `{ return GTK_MESSAGE_ERROR; `}

	# None of the above, doesn't get an icon.
	new other `{ return GTK_MESSAGE_OTHER; `}
end

# A page setup dialog
# See: https://developer.gnome.org/gtk3/stable/GtkPageSetupUnixDialog.html
# extern class GtkPageSetupUnixDialog `{GtkPageSetupUnixDialog *`}
#	super GtkDialog
#
# end

# A print dialog
# See: https://developer.gnome.org/gtk3/stable/GtkPrintUnixDialog.html
# extern class GtkPrintUnixDialog `{GtkPrintUnixDialog *`}
#	super GtkDialog
#
# end

# Displays recently used files in a dialog
# See: https://developer.gnome.org/gtk3/stable/GtkRecentChooserDialog.html
extern class GtkRecentChooserDialog `{GtkRecentChooserDialog *`}
	super GtkDialog

end


# enum GtkDialogFlags
# Flags used to influence dialog construction.
# See: https://developer.gnome.org/gtk3/stable/GtkDialog.html#GtkDialogFlags
extern class GtkDialogFlags `{GtkDialogFlags`}
	# Make the constructed dialog modal.
	new modal `{ return GTK_DIALOG_MODAL; `}

	# Destroy the dialog when its parent is destroyed.
	new destroy_with_parent `{ return GTK_DIALOG_DESTROY_WITH_PARENT; `}
end

# enum GtkResponseType
# Predefined values for use as response ids in gtk_dialog_add_button().
# See: https://developer.gnome.org/gtk3/stable/GtkDialog.html#GtkResponseType
extern class GtkResponseType `{GtkResponseType`}
	# Returned if an action widget has no response id, or if the dialog gets programmatically hidden or destroyed.
	new none `{ return GTK_RESPONSE_NONE; `}

	# Generic response id, not used by GTK+ dialogs.
	new reject `{ return GTK_RESPONSE_REJECT; `}

	# Generic response id, not used by GTK+ dialogs
	new accept `{ return GTK_RESPONSE_ACCEPT; `}

	# Returned if the dialog is deleted
	new delete_event `{ return GTK_RESPONSE_DELETE_EVENT; `}
	# Returned by OK buttons in GTK+ dialogs.
	new ok `{ return GTK_RESPONSE_OK; `}

	# Returned by Cancel buttons in GTK+ dialogs.
	new cancel `{ return GTK_RESPONSE_CANCEL; `}

	# Returned by OK Close in GTK+ dialogs.
	new close `{ return GTK_RESPONSE_CLOSE; `}

	# Returned by OK Yes in GTK+ dialogs.
	new yes `{ return GTK_RESPONSE_YES; `}

	# Returned by OK No in GTK+ dialogs.
	new no `{ return GTK_RESPONSE_NO; `}

	# Returned by OK Apply in GTK+ dialogs.
	new apply `{ return GTK_RESPONSE_APPLY; `}

	# Returned by OK Help in GTK+ dialogs.
	new help `{ return GTK_RESPONSE_HELP; `}
end
