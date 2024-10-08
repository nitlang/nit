# This file is part of NIT (https://nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Services from the Google Cardboard SDK for virtual reality on Android
#
# Projects using this module should keep the `cardboard.jar` archive in the
# `libs` folder at the root of the project.
#
# External resources:
# * Download `cardboard.jar` from
# https://raw.githubusercontent.com/googlesamples/cardboard-java/master/CardboardSample/libs/cardboard.jar
# * Read about Cardboard at
# https://developers.google.com/cardboard/
# * Find the Cardboard SDK documentation at
# https://developers.google.com/cardboard/android/latest/reference/com/google/vrtoolkit/cardboard/package-summary
module cardboard

import java::collections
import native_app_glue

in "Java" `{
	import com.google.vrtoolkit.cardboard.CardboardActivity;
	import com.google.vrtoolkit.cardboard.sensors.HeadTracker;
`}

# Provides head tracking information from the device IMU
#
# The corresponding Java class is no longer documented, but it is still useful.
extern class NativeHeadTracker in "Java" `{ com.google.vrtoolkit.cardboard.sensors.HeadTracker `}
	super JavaObject

	# Instantiate a new `NativeHeadTracker` for the given `context`
	new (context: NativeContext) in "Java" `{
		return HeadTracker.createFromContext(context);
	`}

	# Start tracking head movement
	fun start_tracking in "Java" `{ self.startTracking(); `}

	# Stop tracking head movement
	fun stop_tracking in "Java" `{ self.stopTracking(); `}

	# Enable finer analysis using the neck as center of movement
	fun neck_model_enabled=(value: Bool) in "Java" `{
		self.setNeckModelEnabled(value);
	`}

	# Fill `matrix` with the last rotation matrix calculated from head movements
	#
	# Require: matrix.length >= offset + 16
	fun last_head_view(matrix: JavaFloatArray, offset: Int) in "Java" `{
		self.getLastHeadView(matrix, (int)offset);
	`}
end
