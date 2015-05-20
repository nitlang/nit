# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Implementation of the app.nit UI module for GNU/Linux
module ui

import app::ui
import gtk

import data_store

redef class App
	redef fun setup do init_gtk

	# On GNU/Linux, we go through all the callbacks once,
	# there is no complex life-cycle.
	redef fun run
	do
		app.on_create
		app.on_restore_state
		app.on_start
		app.on_resume

		var window = window
		window.native.show_all
		run_gtk

		app.on_pause
		app.on_stop
		app.on_save_state
		app.on_destroy
	end

	# Spacing between GTK controls, default at 2
	var control_spacing = 2 is writable
end

redef class Control
	super GtkCallable
	super Finalizable

	# The GTK element used to implement `self`
	fun native: NATIVE is abstract

	# Type of `native`
	type NATIVE: GtkWidget

	redef fun finalize
	do
		var native = native
		if not native.address_is_null then native.destroy
	end
end

redef class CompositeControl
	redef type NATIVE: GtkContainer

	redef fun add(item)
	do
		super
		native.add item.native
	end
end

redef class Window
	redef type NATIVE: GtkWindow
	redef var native do
		var win = new GtkWindow(new GtkWindowType.toplevel)
		win.connect_destroy_signal_to_quit
		return win
	end
end

redef class View
	redef fun enabled do return native.sensitive
	redef fun enabled=(enabled) do native.sensitive = enabled or else true
end

redef class Layout
	redef type NATIVE: GtkBox
end

redef class HorizontalLayout
	redef var native = new GtkBox(new GtkOrientation.horizontal, app.control_spacing)

	redef fun add(item)
	do
		super
		native.homogeneous = true
		native.set_child_packing(item.native, true, true, 0, new GtkPackType.start)
	end
end

redef class VerticalLayout
	redef var native = new GtkBox(new GtkOrientation.vertical, app.control_spacing)

	redef fun add(item)
	do
		super

		# FIXME abstract the use either homogeneous or weight to balance views size in a layout
		native.homogeneous = true
		native.set_child_packing(item.native, true, true, 0, new GtkPackType.start)
	end
end

redef class Button
	redef type NATIVE: GtkButton
	redef var native = new GtkButton

	redef fun text do return native.text
	redef fun text=(value) do native.text = (value or else "").to_s

	redef fun signal(sender, data) do notify_observers new ButtonPressEvent(self)

	init do native.signal_connect("clicked", self, null)
end

redef class TextInput
	redef type NATIVE: GtkEntry
	redef var native = new GtkEntry

	redef fun text do return native.text
	redef fun text=(value) do
		if value == null then value = ""
		native.text = value.to_s
	end
end
