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

# Support services for gamnit on iOS
module gamnit_ios

import ios
import gamnit

import ios::assets

redef class App
	redef fun did_finish_launching_with_options
	do
		create_gamnit
		create_scene
		return super
	end

	# Disable the game loop to rely on the GLKView callbacks on each frame instead
	redef fun run do end

	private fun frame_full_indirect do frame_full
end

redef class GamnitGLKView
	redef fun update do app.frame_full_indirect
end

redef fun bind_screen_framebuffer(fbo)
do
	var display = app.display
	assert display != null
	display.glk_view.bind_drawable
end
