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

# Aesthetic variation for Android for API 14+
module android14

import calculator
import android

redef class Button
	init do set_android_style(native, app.native_activity,
	                          (text or else "?").is_int,
	                          ["+","-","×","C","÷","=","."].has(text))

	# Set color and text style
	private fun set_android_style(java_button: NativeButton, activity: NativeActivity,
		is_number: Bool, is_basic_op: Bool)
	in "Java" `{
		// Set color
		int back_color_id = 0;
		if (is_number)
			back_color_id = R.color.pad_numeric_background_color;
		else if (is_basic_op)
			back_color_id = R.color.pad_operator_background_color;
		else {
			back_color_id = R.color.pad_advanced_background_color;

			int text_color = activity.getResources().getColor(R.color.pad_button_advanced_text_color);
			java_button.setTextColor(text_color);
		}
		java_button.setBackgroundResource(back_color_id);

		// Center label, use lowercase and make text bigger
		java_button.setGravity(android.view.Gravity.CENTER);
		java_button.setAllCaps(false);
		java_button.setTextSize(android.util.TypedValue.COMPLEX_UNIT_FRACTION, 100.0f);
	`}
end

redef class TextInput
	init do set_android_style(native, app.native_activity)

	# Set text style and hide cursor
	private fun set_android_style(java_edit_text: NativeEditText, activity: NativeActivity)
	in "Java" `{
		java_edit_text.setBackgroundResource(R.color.display_background_color);
		java_edit_text.setTextColor(
			activity.getResources().getColor(R.color.display_formula_text_color));
		java_edit_text.setTextSize(android.util.TypedValue.COMPLEX_UNIT_FRACTION, 120.0f);
		java_edit_text.setCursorVisible(false);
		java_edit_text.setGravity(android.view.Gravity.CENTER_VERTICAL | android.view.Gravity.END);
	`}
end
