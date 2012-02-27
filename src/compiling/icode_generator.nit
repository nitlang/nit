# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Generates ICode as an output format
package icode_generator

private import compiling_base
import program
private import analysis
private import primitive_info

redef class Program
	# Generates ICode for the whole program
	fun generate_icode_files do
		tc.compdir.mkdir

		with_each_live_local_classes !action(c) do
			c.generate_icode_file(tc.compdir.as(not null))
		end
	end
end

# A class to dump ICode to a file
class FileICodeDumper
	super ICodeDumper
	var _file: OFStream

	init(f: OFStream) do
		# We don't want to output line numbers and locations
		super(false, false)
		_file = f
	end

	redef fun write(s) do
		for i in [0..indent_level[ do
			_file.write("    ")
		end
		_file.write(s)
		_file.write("\n")
	end
end

redef class MMLocalClass
	# Generates ICode for all properties of this class in a file
	fun generate_icode_file(dir: String) do
		var file = new OFStream.open("{dir}/{self}.icode")
		if primitive_info == null then
			# Initialization methods
			if init_var_iroutine != null then
				var icd = new FileICodeDumper(file)
				icd.indent
				file.write("Init var iroutine::\n")
				init_var_iroutine.dump(icd)
				file.write("\n\n")
			end
			if checknew_iroutine != null then
				var icd = new FileICodeDumper(file)
				icd.indent
				file.write("Check new instance iroutine::\n")
				checknew_iroutine.dump(icd)
				file.write("\n\n")
			end

			# 'new' methods
			for pg in global_properties do
				if not pg.is_init_for(self) then continue
				var p = self[pg]
				assert p isa MMMethod
				if not new_instance_iroutine.has_key(p) then continue
				var icd = new FileICodeDumper(file)
				icd.indent
				file.write("New instance:: {p.full_name}\n")
				new_instance_iroutine[p].dump(icd)
				file.write("\n\n")
			end
		end

		# Other methods
		for pg in global_properties do
			var p = self[pg]
			if p.local_class == self and p isa MMMethod then
				p.generate_icode(file)
			end
		end
		file.close
	end
end

redef class MMMethod
	# Generates ICode for this method with a little header
	fun generate_icode(file: OFStream) do
		var icd = new FileICodeDumper(file)
		icd.indent
		file.write("Method:: {full_name}\n")
		iroutine.dump(icd)
		file.write("\n\n")
	end
end
