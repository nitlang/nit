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

# Test Suites generation.
module testing_gen

import testing_base
import template

# Used to generate a nitunit test file skeleton.
class NitUnitGenerator

	var toolcontext: ToolContext

	# Generate the NitUnit test file skeleton for `mmodule` in `test_file`.
	fun gen_unit(mmodule: MModule, test_file: String): Template do
		var with_private = toolcontext.opt_gen_private.value
		var tpl = new Template
		tpl.addn "module test_{mmodule.name} is test"
		tpl.addn ""
		if with_private then
			tpl.addn "intrude import {mmodule.name}"
		else
			tpl.addn "import {mmodule.name}"
		end
		for mclassdef in mmodule.mclassdefs do
			if mclassdef.mclass.kind != concrete_kind then continue
			tpl.addn ""
			tpl.addn "class Test{mclassdef.name}"
			tpl.addn "\ttest"
			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef isa MMethodDef then continue
				var mproperty = mpropdef.mproperty
				if mpropdef.is_abstract then continue
				if mproperty.is_init then continue
				if not with_private and mproperty.visibility <= protected_visibility then continue
				var case_name = case_name(mpropdef)
				tpl.addn ""
				tpl.addn "\tfun {case_name} is test do"
				tpl.addn "\t\tassert not_implemented: false # TODO remove once implemented"
				tpl.addn ""
				tpl.addn gen_init(mclassdef)
				var args = new Array[String]
				for mparameter in mpropdef.msignature.mparameters do
					tpl.addn gen_decl(mparameter.name, mparameter.mtype, mclassdef)
					args.add mparameter.name
				end
				var return_mtype = mpropdef.msignature.return_mtype
				if return_mtype != null then
					tpl.addn gen_decl("exp", return_mtype, mclassdef)
					tpl.add "\t\tvar res = "
				else
					tpl.add "\t\t"
				end
				tpl.addn gen_call(mpropdef, args)
				if return_mtype != null then
					tpl.addn "\t\tassert exp == res"
				end
				tpl.addn "\tend"
			end
			tpl.addn "end"
		end
		return tpl
	end

	# Generate case name based on `MMethodDef`.
	# special method name like "[]", "+"... are filtered
	private fun case_name(mmethoddef: MMethodDef): String do
		var name = mmethoddef.name
		if name == "[]" then return "test_bra"
		if name == "[]=" then return "test_bra_assign"
		if name == "+" then return "test_plus"
		if name == "-" then return "test_minus"
		if name == "*" then return "test_star"
		if name == "/" then return "test_slash"
		if name == "%" then return "test_percent"
		if name == "unary -" then return "test_unary_minus"
		if name == "==" then return "test_equals"
		if name == "!=" then return "test_not_equals"
		if name == "<" then return "test_lt"
		if name == "<=" then return "test_le"
		if name == "<=>" then return "test_compare"
		if name == ">=" then return "test_ge"
		if name == ">" then return "test_gt"
		return "test_{name}"
	end

	# Method names that do not need a "." in call.
	var nodot: Array[String] = ["+", "-", "*", "/", "%", "==", "!=", "<", "<=", "<=>", ">", ">=", ">"]

	# Generate subject init.
	private fun gen_init(mclassdef: MClassDef): Writable do
		if mclassdef.mclass.arity == 0 then
			return "\t\tvar subject: {mclassdef.name}"
		end
		return "\t\tvar subject: {mclassdef.name}[{mclassdef.bound_mtype.arguments.join(", ")}]"
	end

	private fun gen_decl(name: String, mtype: MType, mclassdef: MClassDef): String do
		if mtype.need_anchor then
			mtype = mtype.anchor_to(mclassdef.mmodule, mclassdef.bound_mtype)
		end
		return "\t\tvar {name}: {mtype.to_s}"
	end

	# Generate call to `method` using `args`.
	private fun gen_call(method: MMethodDef, args: Array[String]): Writable do
		# Here we handle the magic of the Nit syntax, have fun :)
		var name = method.name
		if name == "[]" then return "subject[{args.join(", ")}]"
		if name == "[]=" then
			var last = args.pop
			return "subject[{args.join(", ")}] = {last}"
		end
		if name == "unary -" then return "-subject"
		var tpl = new Template
		if nodot.has(name) then
			tpl.add "subject {name}"
			if args.length == 1 then
				tpl.add " {args.first}"
			else if args.length > 1 then
				tpl.add " ({args.join(", ")})"
			end
			return tpl
		end
		if name.has_suffix("=") then
			name = name.substring(0, name.length - 1)
			var last = args.pop
			tpl.add "subject.{name}"
			if not args.is_empty then
				tpl.add "({args.join(", ")})"
			end
			tpl.add " = {last}"
			return tpl
		end
		tpl.add "subject.{name}"
		if args.length == 1 then
			tpl.add " {args.first}"
		else if args.length > 1 then
			tpl.add "({args.join(", ")})"
		end
		return tpl
	end
end

redef class ModelBuilder
	# Generate NitUnit test file skeleton for `mmodule`.
	fun gen_test_unit(mmodule: MModule) do
		var test_file = "test_{mmodule.name}.nit"
		if test_file.file_exists and not toolcontext.opt_gen_force.value and not toolcontext.opt_gen_show.value then
			toolcontext.info("Skip generation for {mmodule}, file {test_file} already exists", 1)
			return
		end
		var generator = new NitUnitGenerator(toolcontext)
		var tpl = generator.gen_unit(mmodule, test_file)
		if toolcontext.opt_gen_show.value then
			tpl.write_to(sys.stdout)
		else
			tpl.write_to_file(test_file)
		end
	end
end

redef class ToolContext
	var opt_gen_unit = new OptionBool("Generate test suite skeleton for a module", "--gen-suite")
	var opt_gen_force = new OptionBool("Force test generation even if file exists", "-f", "--force")
	var opt_gen_private = new OptionBool("Also generate test case for private methods", "--private")
	var opt_gen_show = new OptionBool("Only display the skeleton, do not write any file", "--only-show")
end
