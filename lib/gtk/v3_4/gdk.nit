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

# Services from GDK
module gdk is pkgconfig "gtk+-3.0"

import gtk_core

`{
#ifdef GdkCallback_run
	// Callback to GdkCallaback::run
	gboolean nit_gdk_callback(gpointer user_data) {
		GdkCallback_decr_ref(user_data);
		return GdkCallback_run(user_data);
	}
#endif
`}

# Callback to pass to `gdk_threads_add_idle`
class GdkCallback

	# Small unit of code executed by the GDK loop when idle
	#
	# Returns true if this object should be invoked again.
	fun run: Bool do return false
end

# Add a callback to execute whenever there are no higher priority events pending
fun gdk_threads_add_idle(callback: GdkCallback): Int import GdkCallback.run `{
	GdkCallback_incr_ref(callback);
	return gdk_threads_add_idle(&nit_gdk_callback, callback);
`}
