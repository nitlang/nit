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

# Handle SIGINT and SIGTERM to close the server after all active events
module signal_handler

import reactor

redef class HttpFactory
	super EventCallback

	private var signal_handlers: Array[NativeEvSignal] = [
		new NativeEvSignal(event_base, 2, self), # SIGINT
		new NativeEvSignal(event_base, 15, self) # SIGTERM
		] is lazy

	redef fun run
	do
		for handler in signal_handlers do handler.add
		super
	end

	redef fun callback(events)
	do
		event_base.loopexit
		for handler in signal_handlers do handler.del
	end
end
