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

# Aesthetic variation for Android Lollypop (API 21)
module android21 is
	android_api_min 21
	android_api_target 21
	android_manifest_activity """android:theme="@style/CalculatorTheme" """
	app_files
end

import android14

redef class TextInput
	init do
		set_android_style(native, app.native_activity)
		super
	end

	# Deactivate the virtual keyboard and set the text style from XML resources
	private fun set_android_style(java_edit_text: NativeEditText, activity: NativeActivity)
	in "Java" `{
		java_edit_text.setShowSoftInputOnFocus(false);
		java_edit_text.setTextAppearance(activity, R.style.DisplayEditTextStyle);
	`}
end

redef class Button
	init do
		set_text_style(native, app.native_activity)
		super
	end

	# Set the text style from XML resources
	private fun set_text_style(java_button: NativeButton, activity: NativeActivity)
	in "Java" `{
		java_button.setTextAppearance(activity, R.style.PadButtonStyle);
	`}
end
