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
module standalone_triangle is example

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
assert glGetError == gl_NO_ERROR
assert gl.shader_compiler else print "Cannot compile shaders"

# GL program
print glGetError.to_s
var program = new GLProgram
if not glIsProgram(program) then
	print "Program is not ok: {glGetError.to_s}\nLog:"
	print glGetProgramInfoLog(program)
	abort
end
assert glGetError == gl_NO_ERROR

# Vertex shader
var vertex_shader = new GLVertexShader
assert glIsShader(vertex_shader) else print "Vertex shader is not ok: {glGetError}"
glShaderSource(vertex_shader, """
attribute vec4 vPosition;
void main()
{
  gl_Position = vPosition;
}
"""@glsl_vertex_shader.to_cstring)
glCompileShader vertex_shader
assert vertex_shader.is_compiled else print "Vertex shader compilation failed with: {glGetShaderInfoLog(vertex_shader)} {glGetProgramInfoLog(program)}"
assert glGetError == gl_NO_ERROR

# Fragment shader
var fragment_shader = new GLFragmentShader
assert glIsShader(fragment_shader) else print "Fragment shader is not ok: {glGetError}"
glShaderSource(fragment_shader, """
precision mediump float;
void main()
{
	gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);
}
"""@glsl_fragment_shader.to_cstring)
glCompileShader fragment_shader
assert fragment_shader.is_compiled else print "Fragment shader compilation failed with: {glGetShaderInfoLog(fragment_shader)}"
assert glGetError == gl_NO_ERROR

# Attach to program
glAttachShader(program, vertex_shader)
glAttachShader(program, fragment_shader)
program.bind_attrib_location(0, "vPosition")
glLinkProgram program
assert program.is_linked else print "Linking failed: {glGetProgramInfoLog(program)}"
assert glGetError == gl_NO_ERROR

# Draw!
var vertices = [0.0, 0.5, 0.0, -0.5, -0.5, 0.0, 0.5, -0.5, 0.0]
var vertex_array = new VertexArray(0, 3, vertices)
vertex_array.attrib_pointer
glClearColor(0.5, 0.0, 0.5, 1.0)
for i in [0..1000[ do
	printn "."
	assert glGetError == gl_NO_ERROR
	glViewport(0, 0, width, height)
	glClear gl_COLOR_BUFFER_BIT
	glUseProgram program
	vertex_array.enable

	glDrawArrays(gl_TRIANGLES, 0, 3)

	display.flip
end

# Clean up
glDeleteProgram program
glDeleteShader vertex_shader
glDeleteShader fragment_shader

# Close gamnit
display.close
