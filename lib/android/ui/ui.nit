# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Views and services to use the Android native user interface
module ui

import native_ui

# An event from the `app.nit` framework
interface AppEvent
	# Reaction to this event
	fun react do end
end

# A control click event
class ClickEvent
	super AppEvent

	# Sender of this event
	var sender: Button

	redef fun react do sender.click self
end

# Receiver of events not handled directly by the sender
interface EventCatcher
	fun catch_event(event: AppEvent) do end
end

redef class App
	super EventCatcher
end

# An `Object` that raises events
abstract class Eventful
	var event_catcher: EventCatcher = app is lazy, writable
end

#
## Nity classes and services
#

# An Android control with text
abstract class TextView
	super Finalizable
	super Eventful

	# Native Java variant to this Nity class
	type NATIVE: NativeTextView

	# The native Java object encapsulated by `self`
	var native: NATIVE is noinit

	# Get the text of this view
	fun text: String
	do
		var jstr = native.text
		var str = jstr.to_s
		jstr.delete_local_ref
		return str
	end

	# Set the text of this view
	fun text=(value: Text)
	do
		var jstr = value.to_s.to_java_string
		native.text = jstr
		jstr.delete_local_ref
	end

	# Get whether this view is enabled or not
	fun enabled: Bool do return native.enabled

	# Set if this view is enabled
	fun enabled=(val: Bool) do native.enabled = val

	# Set the size of the text in this view at `dpi`
	fun text_size=(dpi: Numeric) do native.text_size = dpi.to_f

	private var finalized = false
	redef fun finalize
	do
		if not finalized then
			native.delete_global_ref
			finalized = true
		end
	end
end

# An Android button
class Button
	super TextView

	redef type NATIVE: NativeButton

	init
	do
		var native = new NativeButton(app.native_activity, self)
		self.native = native.new_global_ref
	end

	# Click event
	#
	# By default, this method calls `app.catch_event`. It can be specialized
	# with custom behavior or the receiver of `catch_event` can be changed
	# with `event_catcher=`.
	fun click(event: AppEvent) do event_catcher.catch_event(event)

	private fun click_from_native do click(new ClickEvent(self))
end

# An Android editable text field
class EditText
	super TextView

	redef type NATIVE: NativeEditText

	init
	do
		var native = new NativeEditText(app.activities.first.native)
		self.native = native.new_global_ref
	end
end

redef class NativeButton
	new (context: NativeActivity, sender_object: Object)
	import Button.click_from_native in "Java" `{
		final int final_sender_object = sender_object;

		return new android.widget.Button(context){
			@Override
			public boolean onTouchEvent(android.view.MotionEvent event) {
				if(event.getAction() == android.view.MotionEvent.ACTION_DOWN) {
					Button_click_from_native(final_sender_object);
					return true;
				}
				return false;
			}
		};
	`}
end
