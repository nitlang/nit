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

# Aesthetic adaptations for Android
module android_calculator

import calculator
import android::ui

redef class Button
	init do set_android_style(native, (text or else "?").is_int)

	private fun set_android_style(java_button: NativeButton, is_number: Bool)
	in "Java" `{
		// Flatten the background and use a different color for digit buttons
		int color = is_number? android.graphics.Color.DKGRAY: android.graphics.Color.TRANSPARENT;
		java_button.setBackgroundColor(color);

		// Center the label on both horizontal and vertical axes
		java_button.setGravity(android.view.Gravity.CENTER);

		// Set lowercase text to correctly display constants like e and π
		java_button.setAllCaps(false);
	`}
end
