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

# Support services for Gamnit on Android
module gamnit_android is
	android_api_min 15
	android_api_target 15
	android_manifest_activity """android:theme="@android:style/Theme.NoTitleBar.Fullscreen""""
	android_manifest_activity """android:configChanges="orientation|screenSize|keyboard|keyboardHidden""""
end

import android

intrude import gamnit
intrude import android::input_events
import egl

private import realtime

# Print Android lifecycle events to the log?
fun print_lifecycle_events: Bool do return true

redef class App

	# ---
	# User inputs

	redef fun feed_events do app.poll_looper 0

	redef fun native_input_key(event) do return accept_event(event)

	redef fun native_input_motion(event)
	do
		if not scene_created then return false

		var ie = new AndroidMotionEvent(event)
		var handled = accept_event(ie)

		if not handled then accept_event ie.acting_pointer

		return handled
	end

	# ---
	# Handle OS lifecycle and set current state flag

	# State between `init_window` and `term_window`
	private var window_created = false

	# State between `gained_focus` and `lost_focus`
	private var focused = false

	# State between `resume` and `pause`
	private var resumed = false

	# Stage after `destroy`
	private var destroyed = false

	redef fun init_window
	do
		if print_lifecycle_events then print "+ init_window"
		window_created = true
		set_active
		super
	end

	redef fun term_window
	do
		if print_lifecycle_events then print "+ term_window"
		window_created = false
		set_inactive
		super
	end

	redef fun resume
	do
		if print_lifecycle_events then print "+ resume"
		resumed = true
		set_active
		super
	end

	redef fun pause
	do
		if print_lifecycle_events then print "+ pause"
		resumed = false
		set_inactive
		super
	end

	redef fun gained_focus
	do
		if print_lifecycle_events then print "+ gained_focus"
		focused = true
		set_active
		super
	end

	redef fun lost_focus
	do
		if print_lifecycle_events then print "+ lost_focus"
		focused = false
		super
	end

	redef fun destroy
	do
		if print_lifecycle_events then print "+ destroy"
		destroyed = true
		super
	end

	redef fun start
	do
		if print_lifecycle_events then print "+ start"
		super
	end

	redef fun stop
	do
		if print_lifecycle_events then print "+ stop"
		set_inactive
		super
	end

	redef fun config_changed
	do
		if print_lifecycle_events then print "+ config_changed"
		super
	end

	redef fun window_resized
	do
		if print_lifecycle_events then print "+ window_resized"
		super
	end

	redef fun content_rect_changed
	do
		if print_lifecycle_events then print "+ content_rect_changed"
		super
	end

	# ---
	# Update gamnit app

	# The app is fully visible and focused
	private var active = false

	# The scene was set up
	private var scene_created = false

	private fun set_active
	do
		assert not destroyed
		if window_created and resumed and focused and not active then
			var display = display
			if display == null then
				# Initial create
				create_display
				create_gamnit
				display = self.display
			else
				# Try to reuse the EGL context
				var native_window = app.native_app_glue.window
				assert not native_window.address_is_null
				var needs_recreate = display.check_egl_context(native_window)
				if needs_recreate then

					# Skip frame
					if display.native_window_is_invalid then
						print_error "the native window is invalid, skip frame"
						return
					end

					# The context was lost, reload everything
					create_gamnit
					recreate_gamnit
				end
			end

			# Update screen dimensions
			assert display != null
			display.update_size
			app.on_resize display

			if not scene_created then
				# Initial launch
				if debug_gamnit then print "set_active: create"
				create_scene
				scene_created = true
				on_restore_state
			else
				# Next to first launch, reload
				if debug_gamnit then print "set_active: recreate"
			end

			active = true
		end
	end

	private fun set_inactive
	do
		active = false
	end

	# ---
	# Implement gamnit entry points

	redef fun recreate_gamnit
	do
		super

		# Reload all textures
		if debug_gamnit then print "recreate_gamnit: reloading {all_root_textures.length} textures"
		for texture in all_root_textures do
			if debug_gamnit then print "recreate_gamnit: loading {texture}"
			texture.load true
			var gamnit_error = texture.error
			if gamnit_error != null then print_error gamnit_error
		end
	end

	redef fun run
	do
		if debug_gamnit then print "run: start"
		scene_created = false

		while not destroyed do
			if not active then
				if debug_gamnit then print "run: wait"
				app.poll_looper_pause -1

			else
				if debug_gamnit then print "run: frame"

				var native_window = app.native_app_glue.window
				assert not native_window.address_is_null

				var display = display
				assert display != null

				var needs_recreate = display.check_egl_context(native_window)
				if needs_recreate then
					if display.native_window_is_invalid then
						# This should be rare and may cause more issues, log it
						print "The native window is invalid, skip frame"
						set_inactive
						continue
					end

					# The context was lost, reload everything
					create_gamnit
					recreate_gamnit
				end

				assert scene_created
				frame_full
			end
		end

		if debug_gamnit then print "run: exit"
		exit 0
	end
end

redef class GamnitDisplay

	redef var width = 1080
	redef var height = 720

	# Update `width` and `height`
	private fun update_size
	do
		var context = app.native_activity
		self.width = context.window_width
		self.height = context.window_height
	end
end

redef class NativeActivity

	private fun window_height: Int in "Java" `{
		android.view.View view = self.getWindow().getDecorView();
		return view.getBottom() - view.getTop();
	`}

	private fun window_width: Int in "Java" `{
		android.view.View view = self.getWindow().getDecorView();
		return view.getRight() - view.getLeft();
	`}

	private fun orientation: Int in "Java" `{
		return self.getResources().getConfiguration().orientation;
	`}
end
