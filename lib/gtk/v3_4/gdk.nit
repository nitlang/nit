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

# Services from GDK
module gdk is pkgconfig "gtk+-3.0"

import gtk_core

`{
#ifdef Task_gdk_main
	// Callback to Task::gdk_main
	gboolean nit_gdk_callback_task(gpointer user_data) {
		Task_decr_ref(user_data);
		return Task_gdk_main(user_data);
	}
#endif
`}

redef class Task

	# Small unit of code executed by the GDK loop when idle
	#
	# Returns `true` if this object should be invoked again.
	fun gdk_main: Bool
	do
		main
		return false
	end
end

# Add a callback to execute whenever there are no higher priority events pending
fun gdk_threads_add_idle(task: Task): Int import Task.gdk_main `{
	Task_incr_ref(task);
	return gdk_threads_add_idle(&nit_gdk_callback_task, task);
`}
