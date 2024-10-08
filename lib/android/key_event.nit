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

module key_event

import platform

# Java class: android.view.KeyEvent
extern class NativeKeyEvent in "Java" `{ android.view.KeyEvent `}
	super JavaObject

	# Java implementation: boolean android.view.KeyEvent.isSystem()
	fun is_system: Bool in "Java" `{
		return self.isSystem();
	`}

	# Java implementation:  android.view.KeyEvent.setSource(int)
	fun set_source(arg0: Int) in "Java" `{
		self.setSource((int)arg0);
	`}

	# Java implementation: int android.view.KeyEvent.getMetaState()
	fun meta_state: Int in "Java" `{
		return self.getMetaState();
	`}

	# Java implementation: int android.view.KeyEvent.getModifiers()
	fun modifiers: Int in "Java" `{
		return self.getModifiers();
	`}

	# Java implementation: int android.view.KeyEvent.getFlags()
	fun flags: Int in "Java" `{
		return self.getFlags();
	`}

	# Java implementation: boolean android.view.KeyEvent.hasNoModifiers()
	fun has_no_modifiers: Bool in "Java" `{
		return self.hasNoModifiers();
	`}

	# Java implementation: boolean android.view.KeyEvent.hasModifiers(int)
	fun has_modifiers(arg0: Int): Bool in "Java" `{
		return self.hasModifiers((int)arg0);
	`}

	# Java implementation: boolean android.view.KeyEvent.isAltPressed()
	fun is_alt_pressed: Bool in "Java" `{
		return self.isAltPressed();
	`}

	# Java implementation: boolean android.view.KeyEvent.isShiftPressed()
	fun is_shift_pressed: Bool in "Java" `{
		return self.isShiftPressed();
	`}

	# Java implementation: boolean android.view.KeyEvent.isSymPressed()
	fun is_sym_pressed: Bool in "Java" `{
		return self.isSymPressed();
	`}

	# Java implementation: boolean android.view.KeyEvent.isCtrlPressed()
	fun is_ctrl_pressed: Bool in "Java" `{
		return self.isCtrlPressed();
	`}

	# Java implementation: boolean android.view.KeyEvent.isMetaPressed()
	fun is_meta_pressed: Bool in "Java" `{
		return self.isMetaPressed();
	`}

	# Java implementation: boolean android.view.KeyEvent.isFunctionPressed()
	fun is_function_pressed: Bool in "Java" `{
		return self.isFunctionPressed();
	`}

	# Java implementation: boolean android.view.KeyEvent.isCapsLockOn()
	fun is_caps_lock_on: Bool in "Java" `{
		return self.isCapsLockOn();
	`}

	# Java implementation: boolean android.view.KeyEvent.isNumLockOn()
	fun is_num_lock_on: Bool in "Java" `{
		return self.isNumLockOn();
	`}

	# Java implementation: boolean android.view.KeyEvent.isScrollLockOn()
	fun is_scroll_lock_on: Bool in "Java" `{
		return self.isScrollLockOn();
	`}

	# Java implementation: int android.view.KeyEvent.getAction()
	fun action: Int in "Java" `{
		return self.getAction();
	`}

	# Java implementation: boolean android.view.KeyEvent.isCanceled()
	fun is_canceled: Bool in "Java" `{
		return self.isCanceled();
	`}

	# Java implementation:  android.view.KeyEvent.startTracking()
	fun start_tracking in "Java" `{
		self.startTracking();
	`}

	# Java implementation: boolean android.view.KeyEvent.isTracking()
	fun is_tracking: Bool in "Java" `{
		return self.isTracking();
	`}

	# Java implementation: boolean android.view.KeyEvent.isLongPress()
	fun is_long_press: Bool in "Java" `{
		return self.isLongPress();
	`}

	# Java implementation: int android.view.KeyEvent.getKeyCode()
	fun key_code: Int in "Java" `{
		return self.getKeyCode();
	`}

	# Java implementation: java.lang.String android.view.KeyEvent.getCharacters()
	fun characters: JavaString in "Java" `{
		return self.getCharacters();
	`}

	# Java implementation: int android.view.KeyEvent.getScanCode()
	fun scan_code: Int in "Java" `{
		return self.getScanCode();
	`}

	# Java implementation: int android.view.KeyEvent.getRepeatCount()
	fun repeat_count: Int in "Java" `{
		return self.getRepeatCount();
	`}

	# Java implementation: long android.view.KeyEvent.getDownTime()
	fun down_time: Int in "Java" `{
		return self.getDownTime();
	`}

	# Java implementation: long android.view.KeyEvent.getEventTime()
	fun event_time: Int in "Java" `{
		return self.getEventTime();
	`}

	# Java implementation: char android.view.KeyEvent.getDisplayLabel()
	fun display_label: Char in "Java" `{
		return self.getDisplayLabel();
	`}

	# Java implementation: int android.view.KeyEvent.getUnicodeChar()
	fun unicode_char: Int in "Java" `{
		return self.getUnicodeChar();
	`}

	# Java implementation: char android.view.KeyEvent.getNumber()
	fun number: Char in "Java" `{
		return self.getNumber();
	`}

	# Java implementation: boolean android.view.KeyEvent.isPrintingKey()
	fun is_printing_key: Bool in "Java" `{
		return self.isPrintingKey();
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeKeyEvent_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java getter: android.view.KeyEvent.KEYCODE_BACK
fun android_view_key_event_keycode_back: Int in "Java" `{
	return android.view.KeyEvent.KEYCODE_BACK;
`}
