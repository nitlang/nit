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

module gtk_widgets_ext is pkgconfig "gtk+-3.0"

import gtk_core

# Displays a calendar and allows the user to select a date
# See: https://developer.gnome.org/gtk3/3.2/GtkCalendar.html
extern class GtkCalendar `{GtkCalendar *`}
	super GtkWidget

	new `{
		 return (GtkCalendar *)gtk_calendar_new();
	`}

	fun month=(month: Int, year: Int) `{
		gtk_calendar_select_month(recv, month, year);
	`}

	fun day=(day: Int) `{
		gtk_calendar_select_day(recv, day);
	`}

	fun mark_day(day: Int) `{
		gtk_calendar_mark_day(recv, day);
	`}

	fun unmark_day(day: Int) `{
		gtk_calendar_unmark_day(recv, day);
	`}

	fun is_marked(day: Int): Bool `{
		return gtk_calendar_get_day_is_marked(recv, day);
	`}

   fun clear_marks `{
		gtk_calendar_clear_marks(recv);
	`}

	fun display_options: GtkCalendarDisplayOptions `{
		return gtk_calendar_get_display_options(recv);
	`}


	fun display_options=(options: GtkCalendarDisplayOptions) `{
		gtk_calendar_set_display_options(recv, options);
	`}

	# date en nit...
	fun date: String is abstract
end

# enum GtkCalendarDisplayOptions
# See: https://developer.gnome.org/gtk3/3.2/GtkCalendar.html#GtkCalendarDisplayOptions
extern class GtkCalendarDisplayOptions `{GtkCalendarDisplayOptions`}
	new show_heading `{ return GTK_CALENDAR_SHOW_HEADING; `}
	new show_day_names `{ return GTK_CALENDAR_SHOW_DAY_NAMES; `}
	new no_month_change `{ return GTK_CALENDAR_NO_MONTH_CHANGE; `}
	new show_week_numbers `{ return GTK_CALENDAR_SHOW_WEEK_NUMBERS; `}
	new show_details `{ return GTK_CALENDAR_SHOW_DETAILS; `}
end

# A separator widget
# See: https://developer.gnome.org/gtk3/stable/GtkSeparator.html
extern class GtkSeparator `{GtkSeparator *`}
	super GtkWidget

	new (orientation: GtkOrientation) `{
		 return (GtkSeparator *)gtk_separator_new(orientation);
	`}

end

# A widget which indicates progress visually
# See: https://developer.gnome.org/gtk3/3.2/GtkProgressBar.html
extern class GtkProgressBar `{GtkProgressBar *`}
	super GtkWidget

	new `{
		 return (GtkProgressBar *)gtk_progress_bar_new();
	`}

	fun pulse `{
		gtk_progress_bar_pulse(recv);
	`}

	fun pulse_step: Float `{
		return gtk_progress_bar_get_pulse_step(recv);
	`}

	fun pulse_step=(step: Float) `{
		gtk_progress_bar_set_pulse_step(recv, step);
	`}

	fun fraction: Float `{
		return gtk_progress_bar_get_fraction(recv);
	`}

	fun fraction=(fraction: Float) `{
		gtk_progress_bar_set_fraction(recv, fraction);
	`}

	fun inverted: Bool `{
		return gtk_progress_bar_get_inverted(recv);
	`}

	fun inverted=(is_inverted: Bool) `{
		gtk_progress_bar_set_inverted(recv, is_inverted);
	`}

	fun show_text: Bool `{
		return gtk_progress_bar_get_show_text(recv);
	`}

	fun show_text=(show: Bool) `{
		gtk_progress_bar_set_show_text(recv, show);
	`}

	fun text: String import NativeString.to_s `{
		return NativeString_to_s((char *)gtk_progress_bar_get_text(recv));
	`}

	fun text=(value: String) import String.to_cstring `{
		gtk_progress_bar_set_text(recv, String_to_cstring(value));
	`}

	fun ellipsize is abstract

end

extern class GtkColorSelectionDialog
	super GtkWidget
	new (title: String, parent: GtkWindow)  import String.to_cstring `{
		 return gtk_color_chooser_dialog_new(String_to_cstring(title), parent);
	`}

	# fun color_selection:  `{
	#	return gtk_color_selection_dialog_get_color_selection(GTK_COLOR_SELECTION_DIALOG(recv));
	# `}

	# fun color: Float `{
	#	return gtk_color_selection_dialog_get_color_selection(GTK_COLOR_SELECTION_DIALOG(recv));
	# `}
end

# Retrieve an integer or floating-point number from the user
# See: https://developer.gnome.org/gtk3/3.2/GtkSpinButton.html
extern class GtkSpinButton `{GtkSpinButton *`}
	super GtkEntry

	new (adjustment: GtkAdjustment, climb_rate: Float, digits: Int)is extern `{
		return (GtkSpinButton *)gtk_spin_button_new(adjustment, climb_rate, digits);
	`}

	new with_range(min: Float, max: Float, step: Float)is extern `{
		return (GtkSpinButton *)gtk_spin_button_new_with_range(min, max, step);
	`}

	fun configure (adjustment: GtkAdjustment, climb_rate: Float, digits: Int) `{
		gtk_spin_button_configure(recv, adjustment, climb_rate, digits);
	`}

	fun adjustment: GtkAdjustment `{
		return gtk_spin_button_get_adjustment(recv);
	`}

	fun adjustment=(value: GtkAdjustment) `{
		gtk_spin_button_set_adjustment(recv, value);
	`}

	fun digits: Int `{
		return gtk_spin_button_get_digits(recv);
	`}

	fun digits=(nb_digits: Int) `{
		gtk_spin_button_set_digits(recv, nb_digits);
	`}

	fun value: Float `{
		return gtk_spin_button_get_value(recv);
	`}

	fun val=(val: Float) `{
		gtk_spin_button_set_value(recv, val);
	`}

	fun spin(direction: GtkSpinType, increment: Float)`{
		gtk_spin_button_spin(recv, direction, increment);
	`}
end

# enum GtkSpinType
# The values of the GtkSpinType enumeration are used to specify the change to make in gtk_spin_button_spin().
# See: https://developer.gnome.org/gtk3/stable/GtkSpinButton.html#GtkSpinType
extern class GtkSpinType `{GtkSpinType`}
	# Increment by the adjustments step increment.
	new step_forward `{ return GTK_SPIN_STEP_FORWARD; `}

	# Decrement by the adjustments step increment.
	new step_backward `{ return GTK_SPIN_STEP_BACKWARD; `}

	# Increment by the adjustments page increment.
	new page_forward `{ return GTK_SPIN_PAGE_FORWARD; `}

	# Decrement by the adjustments page increment.
	new page_backward `{ return GTK_SPIN_PAGE_BACKWARD; `}

	# Go to the adjustments lower bound.
	new lower_bound `{ return GTK_SPIN_HOME; `}

	# Go to the adjustments upper bound.
	new upper_bound `{ return GTK_SPIN_END; `}

	# Change by a specified amount.
	new user_defined `{ return GTK_SPIN_USER_DEFINED; `}
end

# A widget to unlock or lock privileged operations
# See: https://developer.gnome.org/gtk3/stable/GtkLockButton.html
extern class GtkLockButton
	super GtkButton
end

# A button to launch a color selection dialog
# See: https://developer.gnome.org/gtk3/stable/GtkColorButton.html
extern class GtkColorButton `{GtkColorButton *`}
	super GtkButton

	new `{
		return (GtkColorButton *)gtk_color_button_new();
	`}
end

