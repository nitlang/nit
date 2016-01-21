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

# Framework for 3D games in Nit
module depth

intrude import more_materials
import more_models

redef class App

	redef fun on_create
	do
		super

		# Move the camera back a bit
		world_camera.reset_height(10.0)
		world_camera.near = 0.1

		# Prepare programs
		var program = versatile_program
		program.compile_and_link
		var gamnit_error = program.error
		assert gamnit_error == null else print_error gamnit_error

		program = normals_program
		normals_program.compile_and_link
		gamnit_error = program.error
		assert gamnit_error == null else print_error gamnit_error
	end

	redef fun frame_core_draw(display) do frame_core_depth display

	# Draw all elements of `actors` and then call `frame_core_flat`
	protected fun frame_core_depth(display: GamnitDisplay)
	do
		# Update cameras on both our programs
		versatile_program.use
		versatile_program.mvp.uniform world_camera.mvp_matrix

		normals_program.use
		normals_program.mvp.uniform app.world_camera.mvp_matrix

		for actor in actors do
			for leaf in actor.model.leaves do
				leaf.material.draw(actor, leaf)
			end
		end

		frame_core_flat display
	end
end
