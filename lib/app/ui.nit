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

# Portable UI API for the _app.nit_ framework
module ui

import app_base

redef class App
	super AppComponent

	# The current `Window` of this activity
	#
	# This attribute must be set by refinements of `App`.
	var window: Window is writable

	redef fun on_create do window.on_create

	redef fun on_start do window.on_start

	redef fun on_resume do window.on_resume

	redef fun on_pause do window.on_pause

	redef fun on_stop do window.on_stop

	redef fun on_destroy do window.on_destroy

	redef fun on_restore_state do window.on_restore_state

	redef fun on_save_state do window.on_save_state
end

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
	# If `null` then `self` is at the root of the tree, or not yet attached.
	var parent: nullable CompositeControl = null is private writable(set_parent)

	# Direct parent `Control` in the control tree
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
end

# A `Control` grouping other controls
class CompositeControl
	super Control

	private var items = new HashSet[Control]

	# Add `item` as a child of `self`
	protected fun add(item: Control) do items.add item

	# Remove `item` from `self`
	protected fun remove(item: Control) do if has(item) then items.remove item

	# Is `item` in `self`?
	protected fun has(item: Control): Bool do return items.has(item)

	redef fun on_create do for i in items do i.on_create

	redef fun on_start do for i in items do i.on_start

	redef fun on_resume do for i in items do i.on_resume

	redef fun on_pause do for i in items do i.on_pause

	redef fun on_stop do for i in items do i.on_stop

	redef fun on_destroy do for i in items do i.on_destroy

	redef fun on_restore_state do for i in items do i.on_restore_state

	redef fun on_save_state do for i in items do i.on_save_state
end

# A window, root of the `Control` tree
class Window
	super CompositeControl
end

# A viewable `Control`
abstract class View
	super Control

	# Is this control enabled so the user can interact with it?
	#
	# By default, or if set to `null`, the control is enabled.
	var enabled: nullable Bool is writable #, abstract FIXME with #1311
end

# A control with some `text`
abstract class TextView
	super View

	# Main `Text` of this control
	#
	# By default, or if set to `null`, no text is shown.
	var text: nullable Text is writable #, abstract FIXME with #1311
end

# A control for the user to enter custom `text`
class TextInput
	super TextView
end

# A pushable button, raises `ButtonPressEvent`
class Button
	super TextView
end

# A `Button` press event
class ButtonPressEvent
	super AppEvent

	# The `Button` that raised this event
	var sender: Button
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
