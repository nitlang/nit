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

# Example of using `GamnitDisplay` to setup a screen for custom calls to OpenGL ES 2.0
#
# This example does not support the lifecycle of mobile platforms, as such it only works on desktop computers.
#
# References:
# * The book OpenGL ES 2.0 Programming Guide
# * https://code.google.com/p/opengles-book-samples/source/browse/trunk/LinuxX11/Chapter_2/Hello_Triangle/Hello_Triangle.c
module standalone_triangle

import app
import gamnit::display

if "NIT_TESTING".environ == "true" then exit(0)

# Setup gamnit
var display = new GamnitDisplay
display.setup

var width = display.width
var height = display.height
print "Width: {width}"
print "Height: {height}"

# Custom calls to OpenGL ES 2.0
assert_no_gl_error
assert gl.shader_compiler else print "Cannot compile shaders"

# GL program
print gl.error.to_s
var program = new GLProgram
if not program.is_ok then
	print "Program is not ok: {gl.error.to_s}\nLog:"
	print program.info_log
	abort
end
assert_no_gl_error

# Vertex shader
var vertex_shader = new GLVertexShader
assert vertex_shader.is_ok else print "Vertex shader is not ok: {gl.error}"
vertex_shader.source = """
attribute vec4 vPosition;
void main()
{
  gl_Position = vPosition;
}
"""@glsl_vertex_shader.to_cstring
vertex_shader.compile
assert vertex_shader.is_compiled else print "Vertex shader compilation failed with: {vertex_shader.info_log} {program.info_log}"
assert_no_gl_error

# Fragment shader
var fragment_shader = new GLFragmentShader
assert fragment_shader.is_ok else print "Fragment shader is not ok: {gl.error}"
fragment_shader.source = """
precision mediump float;
void main()
{
	gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
}
"""@glsl_fragment_shader.to_cstring
fragment_shader.compile
assert fragment_shader.is_compiled else print "Fragment shader compilation failed with: {fragment_shader.info_log}"
assert_no_gl_error

# Attach to program
program.attach_shader vertex_shader
program.attach_shader fragment_shader
program.bind_attrib_location(0, "vPosition")
program.link
assert program.is_linked else print "Linking failed: {program.info_log}"
assert_no_gl_error

# Draw!
var vertices = [0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0]
var vertex_array = new VertexArray(0, 3, vertices)
vertex_array.attrib_pointer
gl.clear_color(0.5, 0.0, 0.5, 1.0)
for i in [0..1000[ do
	printn "."
	assert_no_gl_error
	gl.viewport(0, 0, width, height)
	gl.clear((new GLBuffer).color)
	program.use
	vertex_array.enable

	glDrawArrays(new GLDrawMode.triangles, 0, 3)

	display.flip
end

# Clean up
program.delete
vertex_shader.delete
fragment_shader.delete

# Close gamnit
display.close
