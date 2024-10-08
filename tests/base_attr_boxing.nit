# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

import kernel

class A
	var f: Float = 1.0
	var nf: nullable Float = 2.0
	var o: Object = 3.0

	var f_f: Float = f
	var nf_f: nullable Float = f
	var o_f: Object = f

	var f_nf: Float = nf.as(not null)
	var nf_nf: nullable Float = nf.as(not null)
	var o_nf: Object = nf.as(not null)

	var f_o: Float = o.as(Float)
	var nf_o: nullable Float = o.as(Float)
	var o_o: Object = o.as(Float)

	redef fun output
	do
		f.output
		nf.output
		o.output
		'\n'.output

		f_f.output
		nf_f.output
		o_f.output
		'\n'.output

		f_nf.output
		nf_nf.output
		o_nf.output
		'\n'.output

		f_o.output
		nf_o.output
		o_o.output
	end
end

var a = new A
a.output
