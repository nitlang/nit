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

import glesv2

var shader = """
#version 300 es
precision mediump float;

in vec4 v_color;
in vec2 v_texCoord;
uniform sampler2D vTex;
layout(binding = 0) out vec4 outColor;

void main()
{
	outColor = v_color * texture(vTex, v_texCoord);
	b;
}
""" @ glsl_fragment_shader

shader.to_s # silences the "never read warning"
