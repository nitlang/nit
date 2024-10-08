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

# Portable UI controls for mobiles apps
#
# ~~~
# import app::ui
#
# class MyWindow
#     super Window
#
#     var layout = new ListLayout(parent=self)
#     var lbl = new Label(parent=layout, text="Hello world", align=0.5)
#     var but = new Button(parent=layout, text="Press here")
#
#     redef fun on_event(event) do lbl.text = "Pressed!"
# end
#
# redef fun root_window do return new MyWindow
# ~~~
module ui

import app_base

# Platform variations
import linux::ui is conditional(linux)
import android::ui is conditional(android)
import ios::ui is conditional(ios)

redef class App
	super AppComponent

	# The current `Window` of this activity
	#
	# This attribute is set by `push_window`.
	var window: Window is noinit

	# Make `window` visible and push it on the top of the `window_stack`
	#
	# This method can be called at any times while the app is active.
	fun push_window(window: Window)
	do
		window_stack.add window
		self.window = window
		window.on_create
	end

	# Pop the current `window` from the stack and show the previous one
	#
	# Require: `window_stack.not_empty`
	fun pop_window
	do
		assert window_stack.not_empty
		window_stack.pop
		window = window_stack.last
		window.on_resume
	end

	# Stack of active windows
	var window_stack = new Array[Window]

	redef fun on_create
	do
		var window = root_window
		push_window window
	end

	redef fun on_resume do window.on_resume

	redef fun on_pause do window.on_pause

	redef fun on_stop do window.on_stop

	redef fun on_restore_state do window.on_restore_state

	redef fun on_save_state do window.on_save_state
end

# Hook to create the first window shown to the user
#
# By default, a `Window` is created, which can be refined to customize it.
# However, most apps should refine this method to return a different window,
# this way the app can have more than one window.
fun root_window: Window do return new Window

# An event created by an `AppComponent` and sent to `AppObserver`s
interface AppEvent
end

# Observer of `AppEvent`s raised by `AppComponent`s
interface AppObserver
	# Notification of `event` raised by `sender`
	#
	# To be implemented in subclasses as needed.
	fun on_event(event: AppEvent) do end
end

redef class AppComponent
	super AppObserver

	# All `AppObserver` notified of events raised by `self`
	#
	# By default, only `self` is an observer.
	# Any other `AppObserver` can be added to this collection.
	var observers = new HashSet[AppObserver].from([self: AppObserver])

	# Propagate `event` to all `observers` by calling `AppObserver::on_event`
	fun notify_observers(event: AppEvent)
	do
		for observer in observers do
			observer.on_event(event)
		end
	end
end

# A control implementing the UI
class Control
	super AppComponent

	# Direct parent `Control` in the control tree
	#
	# The parents (direct and indirect) receive all events from `self`,
	# like the `observers`.
	#
	# If `null` then `self` is at the root of the tree, or not yet attached.
	var parent: nullable CompositeControl = null is private writable(set_parent)

	# Direct parent `Control` in the control tree
	#
	# The parents (direct and indirect) receive all events from `self`,
	# like the `observers`.
	#
	# Setting `parent` calls `remove` on the old parent and `add` on the new one.
	fun parent=(parent: nullable CompositeControl)
	is autoinit	do
		var old_parent = self.parent
		if old_parent != null and old_parent != parent then
			old_parent.remove self
		end

		if parent != null then parent.add self

		set_parent parent
	end

	# Also notify the parents (both direct and indirect)
	redef fun notify_observers(event)
	do
		super

		var p = parent
		while p != null do
			p.on_event event
			p = p.parent
		end
	end
end

# A `Control` grouping other controls
class CompositeControl
	super Control

	# Child controls composing this control
	protected var items = new Array[Control]

	# Add `item` as a child of `self`
	protected fun add(item: Control) do items.add item

	# Remove `item` from `self`
	fun remove(item: Control) do if has(item) then items.remove item

	# Is `item` in `self`?
	fun has(item: Control): Bool do return items.has(item)

	# Remove all items from `self`
	fun clear do for item in items.to_a do remove item

	redef fun on_create do for i in items do i.on_create

	redef fun on_resume do for i in items do i.on_resume

	redef fun on_pause do for i in items do i.on_pause

	redef fun on_stop do for i in items do i.on_stop

	redef fun on_restore_state do for i in items do i.on_restore_state

	redef fun on_save_state do for i in items do i.on_save_state
end

# A window, root of the `Control` tree
#
# Each window should hold a single control, usually a `CompositeControl`,
# which in turn holds all the displayed controls.
class Window
	super CompositeControl

	# Should the back button be shown and used to go back to a previous window?
	fun enable_back_button: Bool do return app.window_stack.length > 1

	# The back button has been pressed, usually to open the previous window
	fun on_back_button do app.pop_window
end

# A visible `Control`
abstract class View
	super Control

	# Is this control enabled so the user can interact with it?
	#
	# By default, or if set to `null`, the control is enabled.
	var enabled: nullable Bool is writable, abstract, autoinit
end

# A control displaying some `text`
#
# For a text-only control, see `Label`.
abstract class TextView
	super View

	# Main `Text` of this control
	#
	# By default, or if set to `null`, no text is shown.
	var text: nullable Text is writable, abstract, autoinit

	# Set the relative size of the text
	#
	# A value of 1.0, the default, use the platform default text size.
	# Values under 1.0 set a smaller text size, and over 1.0 a larger size.
	#
	# Implementation varies per platform, and some controls may be unaffected
	# depending on the customization options of each platform.
	# For consistent results, it is recommended to use only on instances
	# of `Label` and `size` should be either 0.5, 1.0 or 1.5.
	fun size=(size: nullable Float) is autoinit do end

	# Align the text horizontally
	#
	# Use 0.0 to align left (the default), 0.5 to align in the center and
	# 1.0 to align on the right.
	#
	# Implementation varies per platform, and some controls may be unaffected
	# depending on the customization options of each platform.
	# For consistent results, it is recommended to use only on instances
	# of `Label` and `size` should be either 0.0, 0.5 or 1.0.
	fun align=(align: nullable Float) is autoinit do end
end

# A control for the user to enter custom `text`
class TextInput
	super TextView

	# Hide password or any content entered in this view?
	var is_password: nullable Bool is writable
end

# A pressable button, raises `ButtonPressEvent`
class Button
	super TextView
end

# A simple text label
class Label
	super TextView
end

# Toggle control between two states, also displays a label
class CheckBox
	super TextView

	# Is this control in the checked/on state?
	var is_checked = false is writable
end

# Event sent from a `VIEW`
class ViewEvent
	super AppEvent

	# The `VIEW` that raised this event
	var sender: VIEW

	# Type of the `sender`
	type VIEW: View
end

# A `Button` press event
class ButtonPressEvent
	super ViewEvent

	redef type VIEW: Button
end

# The `CheckBox` `sender` has been toggled
class ToggleEvent
	super ViewEvent

	redef type VIEW: CheckBox
end

# A layout to visually organize `Control`s
abstract class Layout
	super View
	super CompositeControl
end

# An horizontal linear organization
class HorizontalLayout
	super Layout
end

# A vertical linear organization
class VerticalLayout
	super Layout
end

# Scrollable list of views in a simple list
class ListLayout
	super View
	super CompositeControl
end

redef class Text
	# Open the URL `self` with the default browser
	fun open_in_browser do print_error "Text::open_in_browser not implemented on this platform."
end
