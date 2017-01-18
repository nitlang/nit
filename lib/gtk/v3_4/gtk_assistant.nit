# This file is part of NIT ( http://www.nitlanguage.org ).
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

module gtk_assistant is pkgconfig "gtk+-3.0"

import gtk_core

in "C Header" `{
	#include <gtk/gtk.h>
`}

# A widget used to guide users through multi-step operations
# See: https://developer.gnome.org/gtk3/stable/GtkAssistant.html
extern class GtkAssistant `{GtkAssistant *`}
	super GtkWindow

	new `{
		return (GtkAssistant *)gtk_assistant_new();
	`}

	fun current_page: Int `{
		return gtk_assistant_get_current_page (self);
	`}

	fun current_page=(page_num: Int) `{
		gtk_assistant_set_current_page(self, page_num);
	`}

	fun number_pages: Int `{
		return gtk_assistant_get_n_pages(self);
	`}

	fun get_page(page_num: Int): GtkWidget `{
		return gtk_assistant_get_nth_page(self, page_num);
	`}

	fun prepend(page: GtkWidget): Int `{
		return gtk_assistant_prepend_page(self, page);
	`}

	fun append(page: GtkWidget): Int `{
		return gtk_assistant_append_page(self, page);
	`}

	fun insert(page: GtkWidget, position: Int): Int `{
		return gtk_assistant_insert_page(self, page, position);
	`}

	fun remove_page(page_num: Int) `{
		gtk_assistant_remove_page(self, page_num);
	`}

	fun get_page_type(page: GtkWidget): GtkAssistantPageType `{
		return gtk_assistant_get_page_type(self, page);
	`}

	fun set_page_type(page: GtkWidget, t: GtkAssistantPageType) `{
		gtk_assistant_set_page_type(self, page, t);
	`}

	fun get_page_title(page: GtkWidget): String import CString.to_s `{
		return CString_to_s((char *)gtk_assistant_get_page_title(self, page));
	`}

	fun set_page_title(page: GtkWidget, title: String) import String.to_cstring `{
		gtk_assistant_set_page_title(self, page, String_to_cstring(title));
	`}

	fun set_page_complete(page: GtkWidget, is_complete: Bool) `{
		gtk_assistant_set_page_complete(self, page, is_complete);
	`}

	fun get_page_complete(page: GtkWidget): Bool `{
		return gtk_assistant_get_page_complete(self, page);
	`}

	fun remove_action_widget(child: GtkWidget) `{
		gtk_assistant_remove_action_widget(self, child);
	`}

	fun add_action_widget(child: GtkWidget) `{
		gtk_assistant_add_action_widget(self, child);
	`}

	fun update_buttons_state `{
		gtk_assistant_update_buttons_state(self);
	`}

	fun commit `{
		gtk_assistant_commit(self);
	`}

	fun next_page `{
		gtk_assistant_next_page(self);
	`}

	fun previous_page `{
		gtk_assistant_previous_page(self);
	`}
end

# enum GtkAssistantPageType
# An enum for determining the page role inside the GtkAssistant. It's used to handle buttons sensitivity and visibility.
# See: https://developer.gnome.org/gtk3/stable/GtkAssistant.html#GtkAssistantPageType
extern class GtkAssistantPageType `{GtkAssistantPageType`}
	# The page has regular contents. Both the Back and forward buttons will be shown.
	new content `{ return GTK_ASSISTANT_PAGE_CONTENT; `}

	# The page contains an introduction to the assistant task. Only the Forward button will be shown if there is a next page.
	new intro `{ return GTK_ASSISTANT_PAGE_INTRO; `}

	# The page lets the user confirm or deny the changes. The Back and Apply buttons will be shown.
	new confirm `{ return GTK_ASSISTANT_PAGE_CONFIRM; `}

	# The page informs the user of the changes done. Only the Close button will be shown.
	new summary `{ return GTK_ASSISTANT_PAGE_SUMMARY; `}

	# Used for tasks that take a long time to complete, blocks the assistant until the page is marked as complete. Only the back button will be shown.
	new progress `{ return GTK_ASSISTANT_PAGE_PROGRESS; `}

	# Used for when other page types are not appropriate. No buttons will be shown, and the application must add its own buttons through gtk_assistant_add_action_widget().
	new custom `{ return GTK_ASSISTANT_PAGE_CUSTOM; `}
end
