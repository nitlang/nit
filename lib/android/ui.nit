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
#
# Events, such as a button click, come from the UI thread and are then
# passed to the main thread. It is recommended to specialize one of the
# methods of the main thread to customize the response to a given event.
#
# This graph shows the path of a button click:
# ~~~raw
#     UI Thread     #   Main thread
#
#       User
#        |
#        V
# Button::click_ui --> Button::click
#                           |
#                           V
#                    App::catch_event
# ~~~
module ui is min_api_version 14

import native_app_glue
import pthreads::concurrent_collections

in "Java" `{
	import android.app.Activity;

	import android.view.Gravity;
	import android.view.MotionEvent;
	import android.view.ViewGroup;
	import android.view.ViewGroup.MarginLayoutParams;

	import android.widget.Button;
	import android.widget.LinearLayout;
	import android.widget.GridLayout;
	import android.widget.PopupWindow;
	import android.widget.TextView;

	import java.lang.*;
	import java.util.*;
`}

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

	# Queue of events to be received by the main thread
	var event_queue = new ConcurrentList[AppEvent]

	# Call `react` on all `AppEvent` available in `event_queue`
	protected fun loop_on_ui_callbacks
	do
		var queue = event_queue
		while not queue.is_empty do
			var event = queue.pop
			event.react
		end
	end

	redef fun run
	do
		loop
			# Process Android events
			poll_looper 100

			# Process app.nit events
			loop_on_ui_callbacks
		end
	end
end

redef extern class NativeActivity

	# Set the main layout of this activity
	fun content_view=(layout: NativeViewGroup) in "Java" `{
		final ViewGroup final_layout = layout;
		final Activity final_recv = recv;

		recv.runOnUiThread(new Runnable() {
			@Override
			public void run()  {
				final_recv.setContentView(final_layout);

				final_layout.requestFocus();
			}
		});
	`}
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
		var native = new NativeButton(app.native_activity, app.event_queue, self)
		self.native = native.new_global_ref
	end

	# Click event on the Main thread
	#
	# By default, this method calls `app.catch_event`. It can be specialized
	# with custom behavior or the receiver of `catch_event` can be changed
	# with `event_catcher=`.
	fun click(event: AppEvent) do event_catcher.catch_event(event)

	# Click event on the UI thread
	#
	# This method is called on the UI thread and redirects the event to `click`
	# throught `App::event_queue`. In most cases, you should implement `click`
	# and leave `click_ui` as is.
	fun click_ui do app.event_queue.add(new ClickEvent(self))
end

# An Android editable text field
class EditText
	super TextView

	redef type NATIVE: NativeEditText

	init
	do
		var native = new NativeEditText(app.native_activity)
		self.native = native.new_global_ref
	end
end

#
## Native classes
#

# A `View` for Android
extern class NativeView in "Java" `{ android.view.View `}
	super JavaObject

	fun minimum_width=(val: Int) in "Java" `{ recv.setMinimumWidth((int)val); `}
	fun minimum_height=(val: Int) in "Java" `{ recv.setMinimumHeight((int)val); `}
end

# A collection of `NativeView`
extern class NativeViewGroup in "Java" `{ android.view.ViewGroup `}
	super NativeView

	fun add_view(view: NativeView) in "Java" `{ recv.addView(view); `}
end

# A `NativeViewGroup` organized in a line
extern class NativeLinearLayout in "Java" `{ android.widget.LinearLayout `}
	super NativeViewGroup

	new(context: NativeActivity) in "Java" `{ return new LinearLayout(context); `}

	fun set_vertical in "Java" `{ recv.setOrientation(LinearLayout.VERTICAL); `}
	fun set_horizontal in "Java" `{ recv.setOrientation(LinearLayout.HORIZONTAL); `}

	redef fun add_view(view) in "Java"
	`{
		MarginLayoutParams params = new MarginLayoutParams(
			LinearLayout.LayoutParams.MATCH_PARENT,
			LinearLayout.LayoutParams.WRAP_CONTENT);
		recv.addView(view, params);
	`}

	fun add_view_with_weight(view: NativeView, weight: Float)
	in "Java" `{
		recv.addView(view, new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.MATCH_PARENT, (float)weight));
	`}
end

# A `NativeViewGroup` organized as a grid
extern class NativeGridLayout in "Java" `{ android.widget.GridLayout `}
	super NativeViewGroup

	new(context: NativeActivity) in "Java" `{ return new android.widget.GridLayout(context); `}

	fun row_count=(val: Int) in "Java" `{ recv.setRowCount((int)val); `}

	fun column_count=(val: Int) in "Java" `{ recv.setColumnCount((int)val); `}

	redef fun add_view(view) in "Java" `{ recv.addView(view); `}
end

extern class NativePopupWindow in "Java" `{ android.widget.PopupWindow `}
	super NativeView

	new (context: NativeActivity) in "Java" `{
		PopupWindow recv = new PopupWindow(context);
		recv.setWindowLayoutMode(LinearLayout.LayoutParams.MATCH_PARENT,
			LinearLayout.LayoutParams.MATCH_PARENT);
		recv.setClippingEnabled(false);
		return recv;
	`}

	fun content_view=(layout: NativeViewGroup) in "Java" `{ recv.setContentView(layout); `}
end

extern class NativeTextView in "Java" `{ android.widget.TextView `}
	super NativeView

	new (context: NativeActivity) in "Java" `{ return new TextView(context); `}

	fun text: JavaString in "Java" `{ return recv.getText().toString(); `}

	fun text=(value: JavaString) in "Java" `{

		final TextView final_recv = recv;
		final String final_value = value;

		((Activity)recv.getContext()).runOnUiThread(new Runnable() {
			@Override
			public void run()  {
				final_recv.setText(final_value);
			}
		});
	`}

	fun enabled: Bool in "Java" `{ return recv.isEnabled(); `}
	fun enabled=(value: Bool) in "Java" `{
		final TextView final_recv = recv;
		final boolean final_value = value;

		((Activity)recv.getContext()).runOnUiThread(new Runnable() {
			@Override
			public void run()  {
				final_recv.setEnabled(final_value);
			}
		});
	`}

	fun gravity_center in "Java" `{
		recv.setGravity(Gravity.CENTER);
	`}

	fun text_size=(dpi: Float) in "Java" `{
		recv.setTextSize(android.util.TypedValue.COMPLEX_UNIT_DIP, (float)dpi);
	`}
end

extern class NativeEditText in "Java" `{ android.widget.EditText `}
	super NativeTextView

	redef type SELF: NativeEditText

	new (context: NativeActivity) in "Java" `{ return new android.widget.EditText(context); `}

	fun width=(val: Int) in "Java" `{ recv.setWidth((int)val); `}

	fun input_type_text in "Java" `{ recv.setInputType(android.text.InputType.TYPE_CLASS_TEXT); `}

	redef fun new_global_ref: SELF import sys, Sys.jni_env `{
		Sys sys = NativeEditText_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

extern class NativeButton in "Java" `{ android.widget.Button `}
	super NativeTextView

	redef type SELF: NativeButton

	new (context: NativeActivity, queue: ConcurrentList[AppEvent], sender_object: Object) import Button.click_ui in "Java" `{
		final int final_sender_object = sender_object;

		return new Button(context){
			@Override
			public boolean onTouchEvent(MotionEvent event) {
				if(event.getAction() == MotionEvent.ACTION_DOWN) {
					Button_click_ui(final_sender_object);
					return true;
				}
				return false;
			}
		};
	`}

	redef fun new_global_ref: SELF import sys, Sys.jni_env `{
		Sys sys = NativeButton_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end
