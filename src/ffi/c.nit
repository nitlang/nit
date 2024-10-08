# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Support for nesting C code within a Nit program using its FFI
module c

import ffi_base
import light_c

redef class CLanguage
	redef fun compile_callback(callback, mmodule, mainmodule, ecc)
	do
		callback.compile_callback_to_c(mainmodule, ecc)
	end
end

redef class NitniCallback
	fun compile_callback_to_c(mmodule: MModule, ffi_ccu: CCompilationUnit) do end
end

redef class MExplicitCall
	redef fun compile_callback_to_c(mmodule, ffi_ccu)
	do
		var mproperty = mproperty.as(MMethod)

		var full_cname = mproperty.build_cname(recv_mtype, mmodule, null, long_signature)
		var friendly_cname = mproperty.build_cname(recv_mtype, mmodule, null, short_signature)
		ffi_ccu.body_decl.add("#define {friendly_cname} {full_cname}\n")
	end
end
