# This file is part of NIT ( https://nitlanguage.org ).
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

# GTK+ services added at version 3.10
module v3_10 is pkgconfig("gtk+-3.0")

import v3_8

redef class GtkWindow
	fun titlebar=(widget: GtkWidget) `{ gtk_window_set_titlebar(self, widget); `}
end

# A vertical container of `GtkListBoxRow`
extern class GtkListBox `{ GtkListBox * `}
	super GtkContainer

	new `{ return (GtkListBox*)gtk_list_box_new(); `}

	fun prepend(child: GtkWidget) `{ gtk_list_box_prepend(self, child); `}

	fun insert(child: GtkWidget, position: Int) `{ gtk_list_box_insert(self, child, position); `}

	fun selected_row: GtkListBoxRow `{ return gtk_list_box_get_selected_row(self); `}

	fun row_at_index(index: Int): GtkListBoxRow`{ return gtk_list_box_get_row_at_index(self, index); `}

	fun row_at_y(y: Int): GtkListBoxRow `{ return gtk_list_box_get_row_at_y(self, y); `}

	fun select_row(row: GtkListBoxRow) `{ gtk_list_box_select_row(self, row); `}

	fun placeholder=(placeholder: GtkWidget) `{ gtk_list_box_set_placeholder(self, placeholder); `}

	fun adjustment=(adjustment: GtkAdjustment) `{ gtk_list_box_set_adjustment(self, adjustment); `}

	fun selection_mode=(mode: GtkSelectionMode) `{ gtk_list_box_set_selection_mode(self, mode); `}

	fun selection_mode: GtkSelectionMode `{ return gtk_list_box_get_selection_mode (self); `}

	fun invalidate_filter `{ gtk_list_box_invalidate_filter(self); `}

	fun invalidate_sort `{ gtk_list_box_invalidate_sort(self); `}

	fun invalidate_headers `{ gtk_list_box_invalidate_headers(self); `}

	fun activate_on_single_click=(single: Bool) `{ gtk_list_box_set_activate_on_single_click(self, single); `}

	fun activate_on_single_click: Bool `{ return gtk_list_box_get_activate_on_single_click(self); `}

	fun drag_unhighlight_row `{ gtk_list_box_drag_unhighlight_row(self); `}

	fun drag_highlight_row(row: GtkListBoxRow) `{ gtk_list_box_drag_highlight_row(self, row); `}

	# TODO
	#fun (* GtkListBoxForeachFunc)(GtkListBoxRow *row, gpointer user_data) `{ (* GtkListBoxForeachFunc)(self, GtkListBoxRow *row, gpointer user_data); `}
	#fun set_filter_func(GtkListBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy) `{ gtk_list_box_set_filter_func(self, GtkListBoxFilterFunc filter_func, gpointer user_data, GDestroyNotify destroy); `}
	#fun set_header_func(GtkListBoxUpdateHeaderFunc update_header, gpointer user_data, GDestroyNotify destroy) `{ gtk_list_box_set_header_func(self, GtkListBoxUpdateHeaderFunc update_header, gpointer user_data, GDestroyNotify destroy); `}
	#fun set_sort_func(GtkListBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy) `{ gtk_list_box_set_sort_func(self, GtkListBoxSortFunc sort_func, gpointer user_data, GDestroyNotify destroy); `}
end

# A single row of a `GtkListBox`
extern class GtkListBoxRow `{ GtkListBoxRow* `}
	super GtkBin

	new `{ return (GtkListBoxRow*)gtk_list_box_row_new(); `}

	fun header: GtkWidget `{ return gtk_list_box_row_get_header(self); `}

	fun header=(header: GtkWidget) `{ gtk_list_box_row_set_header(self, header); `}

	fun index: Int `{ return gtk_list_box_row_get_index(self); `}

	fun changed `{ gtk_list_box_row_changed(self); `}
end

# Horizontal container with a title and subtitle
extern class GtkHeaderBar `{ GtkHeaderBar* `}
	super GtkContainer

	new `{ return (GtkHeaderBar*)gtk_header_bar_new(); `}

	fun title=(title: Text) do native_title = title.to_cstring
	private fun native_title=(title: CString) `{ gtk_header_bar_set_title(self, title); `}

	fun title: String do return native_title.to_s
	private fun native_title: CString `{ return (gchar *)gtk_header_bar_get_title(self); `}

	fun subtitle=(subtitle: Text) do native_subtitle = subtitle.to_cstring
	fun native_subtitle=(subtitle: CString) `{ gtk_header_bar_set_subtitle(self, subtitle); `}

	fun subtitle: String do return native_subtitle.to_s
	fun native_subtitle: CString `{ return (gchar *)gtk_header_bar_get_subtitle(self); `}

	fun custom_title=(title_widget: GtkWidget) `{ gtk_header_bar_set_custom_title(self, title_widget); `}

	fun custom_title: GtkWidget `{ return gtk_header_bar_get_custom_title(self); `}

	fun pack_start(child: GtkWidget) `{ gtk_header_bar_pack_start(self, child); `}

	fun pack_end(child: GtkWidget) `{ gtk_header_bar_pack_end(self, child); `}

	fun show_close_button=(setting: Bool) `{ gtk_header_bar_set_show_close_button(self, setting); `}

	fun show_close_button: Bool `{ return gtk_header_bar_get_show_close_button(self); `}
end

# Container with a single child visible at a time
extern class GtkStack `{ GtkStack * `}
	super GtkContainer

	new `{ return (GtkStack*)gtk_stack_new(); `}

	fun stack_add(child: GtkWidget, name: String) do native_stack_add(child, name.to_cstring)
	private fun native_stack_add(child: GtkWidget, name: CString) `{ gtk_stack_add_named(self, child, name); `}

	fun add_titled(child: GtkWidget, name, title: CString) `{ gtk_stack_add_titled(self, child, name, title); `}
	fun native_add_titled(child: GtkWidget, name, title: CString) `{ gtk_stack_add_titled(self, child, name, title); `}

	fun visible_child=(child: GtkWidget) `{ gtk_stack_set_visible_child(self, child); `}

	fun visible_child: GtkWidget `{ return gtk_stack_get_visible_child(self); `}

	fun visible_child_name=(name: Text) do native_visible_child_name = name.to_cstring
	fun native_visible_child_name=(name: CString) `{ gtk_stack_set_visible_child_name(self, name); `}

	fun visible_child_name: Text do return native_visible_child_name.to_s
	fun native_visible_child_name: CString `{ return (gchar *)gtk_stack_get_visible_child_name(self); `}

	fun set_visible_child_full(name: Text, transition: GtkStackTransitionType) do native_set_visible_child_full(name.to_cstring, transition)
	fun native_set_visible_child_full(name: CString, transition: GtkStackTransitionType) `{
		gtk_stack_set_visible_child_full(self, name, transition);
	`}

	fun homogeneous=(homogeneous: Bool) `{ gtk_stack_set_homogeneous(self, homogeneous); `}

	fun homogeneous: Bool `{ return gtk_stack_get_homogeneous(self); `}

	fun transition_duration=(duration: Int) `{ gtk_stack_set_transition_duration(self, duration); `}

	fun transition_duration: Int `{ return gtk_stack_get_transition_duration(self); `}

	fun transition_type=(transition: GtkStackTransitionType) `{ gtk_stack_set_transition_type(self, transition); `}

	fun transition_type: GtkStackTransitionType `{ return gtk_stack_get_transition_type(self); `}
end

# Type of animation used for transitions between pages in a `GtkStack`
extern class GtkStackTransitionType `{ GtkStackTransitionType `}
	new none `{ return GTK_STACK_TRANSITION_TYPE_NONE; `}
	new crossfade `{ return GTK_STACK_TRANSITION_TYPE_CROSSFADE; `}
	new slide_right `{ return GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT; `}
	new slide_left `{ return GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT; `}
	new slide_up `{ return GTK_STACK_TRANSITION_TYPE_SLIDE_UP; `}
	new slide_down `{ return GTK_STACK_TRANSITION_TYPE_SLIDE_DOWN; `}
	new slide_left_right `{ return GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT; `}
	new slide_up_down `{ return GTK_STACK_TRANSITION_TYPE_SLIDE_UP_DOWN; `}
end
