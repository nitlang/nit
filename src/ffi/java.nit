# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# FFI support for the Java language
#
# TODO support callbacks to super and casts
module java

import extern_classes
import c
import c_compiler_options

redef class FFILanguageAssignationPhase
	var java_language: FFILanguage = new JavaLanguage(self)
end

class JavaLanguage
	super FFILanguage

	redef fun identify_language(n) do return n.is_java

	redef fun compile_module_block(block, ccu, mmodule)
	do
		mmodule.ensure_java_files
		var java_file = mmodule.java_file
		assert java_file != null

		if block.is_inner_java then
			java_file.class_content.add(block.code)
		else java_file.header.add(block.code)
	end

	redef fun compile_extern_method(block, m, ccu, mmodule)
	do
		ffi_ccu = ccu
		mmodule.ensure_java_files
		var java_file = mmodule.java_file
		assert java_file != null

		var mclass_type = m.parent.as(AClassdef).mclass.mclass_type
		var mmethodef = m.mpropdef
		var mproperty = m.mpropdef.mproperty

		# C function calling the Java method through JNI
		var fc = new ExternCFunction(m, mmodule)

		fc.exprs.add """
	jclass java_class;
	jmethodID java_meth_id;

	// retrieve the current JVM
	Sys sys = Pointer_sys(NULL);
	JNIEnv *nit_ffi_jni_env = Sys_jni_env(sys);

	// retrieve the implementation Java class
	java_class = Sys_load_jclass(sys, "{{{mmodule.impl_java_class_name}}}");
	if (java_class == NULL) {
		PRINT_ERROR("Nit FFI with Java error: failed to load class.\\n");
		(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);
		exit(1);
	}

	// register callbacks (only once per Nit module)
	if (!nit_ffi_with_java_registered_natives) nit_ffi_with_java_register_natives(nit_ffi_jni_env, java_class);
"""

		# Retrieve the Java implementation function id
		var java_fun_name = mproperty.build_cname(mclass_type, mmodule, "___java_impl", long_signature)
		var jni_format = mproperty.build_jni_format(mclass_type, mmodule)
		fc.exprs.add """
	// retreive the implementation static function
	java_meth_id = (*nit_ffi_jni_env)->GetStaticMethodID(nit_ffi_jni_env, java_class, "{{{java_fun_name}}}", "{{{jni_format}}}");
	if (java_meth_id == NULL) {
		PRINT_ERROR("Nit FFI with Java error: Java implementation not found.\\n");
		(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);
		exit(1);
	}
"""

		# Call the C Java implementation method from C
		var signature = mmethodef.msignature
		assert signature != null

		var jni_signature_alt
		var return_type
		var params = new Array[String]
		params.add "nit_ffi_jni_env"
		params.add "java_class"
		params.add "java_meth_id"

		if mproperty.is_init then
			jni_signature_alt = mclass_type.jni_signature_alt
			return_type = mclass_type
		else
			params.add to_java_call_context.cast_to(mclass_type, "self")
			if signature.return_mtype != null then
				var ret_mtype = signature.return_mtype
				ret_mtype = ret_mtype.resolve_for(mclass_type, mclass_type, mmodule, true)
				return_type = signature.return_mtype
				jni_signature_alt = return_type.jni_signature_alt
			else
				jni_signature_alt = "Void"
				return_type = null
			end
		end

		for p in signature.mparameters do
			var param_mtype = p.mtype
			param_mtype = param_mtype.resolve_for(mclass_type, mclass_type, mmodule, true)
			params.add(to_java_call_context.cast_to(param_mtype, p.name))
		end

		var cname = "(*nit_ffi_jni_env)->CallStatic{jni_signature_alt}Method"
		var ccall
		if return_type != null then
			ccall = "{return_type.jni_type} jni_res = {cname}({params.join(", ")});"
		else ccall = "{cname}({params.join(", ")});"

		fc.exprs.add """
	// execute implementation code
	{{{ccall}}}
	if ((*nit_ffi_jni_env)->ExceptionCheck(nit_ffi_jni_env)) {
		PRINT_ERROR("Nit FFI with Java error: Exception after call.\\n");
		(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);
		exit(1);
	}

	(*nit_ffi_jni_env)->DeleteLocalRef(nit_ffi_jni_env, java_class);
"""

		if return_type != null then
			fc.exprs.add "\treturn {to_java_call_context.cast_from(return_type, "jni_res")};"
		end

		ccu.add_exported_function( fc )

		# Java implementation function in Java
		var java_csig = mproperty.build_csignature(mclass_type, mmodule, "___java_impl", long_signature, java_call_context)
		mmodule.java_file.class_content.add """
	public static {{{java_csig}}} {
		// from Nit FII at: {{{block.location}}}
		{{{block.code}}}
	}
"""

		mmodule.callbacks_used_from_java.join m.foreign_callbacks
	end

	redef fun compile_extern_class(block, m, ccu, mmodule) do end

	redef fun get_ftype(block, m) do return new ForeignJavaType(block.code)

	redef fun compile_to_files(mmodule, compdir)
	do
		var ffi_ccu = ffi_ccu
		assert ffi_ccu != null

		# Make sure we have a .java file
		mmodule.ensure_java_files

		# Needed compiler and linker options
		mmodule.insert_compiler_options

		# Enable linking C callbacks to java native methods
		mmodule.ensure_linking_callback_methods(ffi_ccu)

		# Function to build instances to the Java class NitObject
		var callbacks = mmodule.callbacks_used_from_java.callbacks
		if callbacks.not_empty then
			var cf = new CFunction("jobject nit_ffi_with_java_new_nit_object(JNIEnv *env, void *data)")
			cf.exprs.add """
	// retrieve the current JVM
	Sys sys = Pointer_sys(NULL);

	jclass java_class = Sys_load_jclass(sys, "nit/app/NitObject");
	if (java_class == NULL) {
		PRINT_ERROR("Nit FFI with Java error: failed to load class NitObject.\\n");
		(*env)->ExceptionDescribe(env);
		exit(1);
	}

	jmethodID java_init = (*env)->GetMethodID(env, java_class, "<init>", "(J)V");
	if (java_init == NULL) {
		PRINT_ERROR("Nit FFI with Java error: NitObject constructor not found.\\n");
		(*env)->ExceptionDescribe(env);
		exit(1);
	}

	jobject nit_object = (*env)->NewObject(env, java_class, java_init, (jlong)data);
	if (nit_object == NULL) {
		PRINT_ERROR("Nit FFI with Java error: NitObject construction failed.\\n");
		(*env)->ExceptionDescribe(env);
		exit(1);
	}

	return nit_object;
	"""
			ffi_ccu.add_local_function cf

			# Function to extract the pointer held by instances of the Java class NitObject
			cf = new CFunction("void *nit_ffi_with_java_nit_object_data(JNIEnv *env, jobject nit_object)")
			cf.exprs.add """
	Sys sys = Pointer_sys(NULL);
	jclass java_class = Sys_load_jclass(sys, "nit/app/NitObject");
	if (java_class == NULL) {
		PRINT_ERROR("Nit FFI with Java error: failed to load class NitObject.\\n");
		(*env)->ExceptionDescribe(env);
		exit(1);
	}

	jfieldID java_field = (*env)->GetFieldID(env, java_class, "pointer", "J");
	if (java_field == NULL) {
		PRINT_ERROR("Nit FFI with Java error: NitObject field not found.\\n");
		(*env)->ExceptionDescribe(env);
		exit(1);
	}

	jlong data = (*env)->GetLongField(env, nit_object, java_field);

	return (void*)data;
	"""
			ffi_ccu.add_local_function cf
		end

		# Java implementation code
		var java_file = mmodule.java_file
		assert java_file != null
		var extern_java_file = java_file.write_to_files(compdir)
		mmodule.ffi_files.add(extern_java_file)
	end

	var ffi_ccu: nullable CCompilationUnit = null # HACK

	redef fun compile_callback(callback, mmodule, mainmodule, ccu)
	do
		ffi_ccu = ccu
		callback.compile_callback_to_java(mmodule, mainmodule, ccu)
	end
end

redef class MModule
	private var callbacks_used_from_java = new ForeignCallbackSet

	# Java source file extracted from user FFI code with generated structure
	var java_file: nullable JavaClassTemplate = null

	# Set up the templates of the Java implementation class
	private fun ensure_java_files
	do
		if java_file != null then return

		# Java implementation code
		java_file = new JavaClassTemplate(impl_java_class_name)
	end

	# Compile C code to call JNI and link C callbacks implementations to Java extern methods
	private fun ensure_linking_callback_methods(ccu: CCompilationUnit)
	do
		var callbacks = callbacks_used_from_java.callbacks
		if callbacks.is_empty then
			ccu.body_decl.add "static int nit_ffi_with_java_registered_natives = 1;\n"
			return
		end

		ccu.body_decl.add "static int nit_ffi_with_java_registered_natives = 0;\n"

		var jni_methods = new Array[String]
		for cb in callbacks do
			jni_methods.add_all(cb.jni_methods_declaration(self))
		end
		for cb in callbacks_used_from_java.types do
			jni_methods.add_all(cb.jni_methods_declaration(self))
		end

		var cf = new CFunction("void nit_ffi_with_java_register_natives(JNIEnv* env, jclass jclazz)")
		cf.exprs.add """
	nit_ffi_with_java_registered_natives = 1;

	jint n_methods = {{{jni_methods.length}}};
	JNINativeMethod methods[] = {
		{{{jni_methods.join(",\n\t\t")}}}
	};
	jint res = (*env)->RegisterNatives(env, jclazz, methods, n_methods);
	if (res != JNI_OK) {
		PRINT_ERROR("RegisterNatives failed\\n");
		(*env)->ExceptionDescribe(env);
		exit(1);
	}
		"""
		ccu.add_local_function cf
	end

	# Tell the C compiler where to find jni.h and how to link with libjvm
	private fun insert_compiler_options
	do
		cflags.add_one("", "-I $(JAVA_HOME)/include/ -I $(JAVA_HOME)/include/linux/")
	end

	# Name of the generated Java class where to store all implementation methods of this module
	# as well as generated callbacks.
	private fun impl_java_class_name: String do return "Nit_{name}"
end

redef class AMethPropdef
	redef fun verify_nitni_callbacks(toolcontext)
	do
		super

		var block = n_extern_code_block
		if block != null and block.is_java then
			insert_artificial_callbacks(toolcontext)
		end
	end

	# Insert additional explicit calls to get the current `JNIEnv`
	#
	# This forces declaration of callbacks to Nit. The callbacks will be available in Java
	# but will be used mainly by the FFI itself.
	#
	# The developer can also customize the JNIEnv used by the FFI by redefining `Sys::jni_env`.
	private fun insert_artificial_callbacks(toolcontext: ToolContext)
	do
		var fcc = foreign_callbacks

		var modelbuilder = toolcontext.modelbuilder
		var mmodule = mpropdef.mclassdef.mmodule

		# We use callbacks from the C FFI since they will be called from generated C
		var c_language_visitor = toolcontext.ffi_language_assignation_phase.as(FFILanguageAssignationPhase).c_language
		if not mmodule.ffi_callbacks.keys.has(c_language_visitor) then
			mmodule.ffi_callbacks[c_language_visitor] = new HashSet[NitniCallback]
		end

		# Pointer::sys
		var pointer_class = modelbuilder.try_get_mclass_by_name(self, mmodule, "Pointer")
		assert pointer_class != null
		var pointer_sys_meth = modelbuilder.try_get_mproperty_by_name2(self, mmodule, pointer_class.mclass_type, "sys")
		assert pointer_sys_meth != null and pointer_sys_meth isa MMethod

		var explicit_call = new MExplicitCall(pointer_class.mclass_type, pointer_sys_meth, mmodule)
		fcc.callbacks.add(explicit_call)
		mmodule.ffi_callbacks[c_language_visitor].add(explicit_call)

		# Sys::jni_env
		var sys_class = modelbuilder.try_get_mclass_by_name(self, mmodule, "Sys")
		assert sys_class != null
		var sys_jni_env_meth = modelbuilder.try_get_mproperty_by_name2(self, mmodule, sys_class.mclass_type, "jni_env")
		if sys_jni_env_meth == null or not sys_jni_env_meth isa MMethod then
			toolcontext.error(self.location, "Java FFI Error: you must import the `java` module when using the FFI with Java")
			return
		end

		explicit_call = new MExplicitCall(sys_class.mclass_type, sys_jni_env_meth, mmodule)
		fcc.callbacks.add(explicit_call)
		mmodule.ffi_callbacks[c_language_visitor].add(explicit_call)

		# Sys::load_jclass
		var sys_jni_load_jclass_meth = modelbuilder.try_get_mproperty_by_name2(self, mmodule, sys_class.mclass_type, "load_jclass")
		assert sys_jni_load_jclass_meth != null
		assert sys_jni_load_jclass_meth isa MMethod

		explicit_call = new MExplicitCall(sys_class.mclass_type, sys_jni_load_jclass_meth, mmodule)
		fcc.callbacks.add(explicit_call)
		mmodule.ffi_callbacks[c_language_visitor].add(explicit_call)
		explicit_call.fill_type_for(fcc, mmodule)
	end
end

redef class AExternCodeBlock
	# Is this code block in Java?
	fun is_java: Bool do return is_default_java or (parent isa AModule and is_inner_java)

	# Is this code block in Java, with the default mode? (On module blocks it targets the file header)
	private fun is_default_java: Bool do return language_name != null and
		language_name_lowered == "java"

	# Is this code block in Java, and for a module block to generate in the class?
	private fun is_inner_java: Bool do return language_name != null and
		language_name_lowered == "java inner"
end

# Java class source template
class JavaClassTemplate
	super Template

	var java_class_name: String

	var header = new Template
	var class_content = new Template

	fun write_to_files(compdir: String): ExternFile
	do
		var filename = "{java_class_name}.java"
		var filepath = compdir/filename

		write_to_file filepath

		return new JavaFile(filename)
	end

	redef fun rendering
	do
		add header
		add "\n"
		add "public class {java_class_name} \{\n"
		add class_content
		add "\}"
	end
end

# A generated Java source file, represent the corresponding Makefile rules
class JavaFile
	super ExternFile

	# Full Java class name: package and class
	fun full_name: String do return filename.basename(".java")

	redef fun makefile_rule_name do return full_name.replace(".", "/") + ".class"
	redef fun makefile_rule_content do return "javac {filename} -d ."
	redef fun add_to_jar do return true
end

# Context in pure Java code
private class JavaCallContext
	super CallContext

	redef fun name_mtype(mtype) do return mtype.java_type
end

# Context in C, when call are from normal C to JNI
private class ToJavaCallContext
	super CallContext

	redef fun cast_to(mtype, name)
	do
		if mtype.java_is_nit_object then
			return "nit_ffi_with_java_new_nit_object(nit_ffi_jni_env, {name})"
		else
			return "({mtype.jni_type})({name})"
		end
	end

	redef fun cast_from(mtype, name)
	do
		if mtype.java_is_nit_object then
			return "({mtype.cname})nit_ffi_with_java_nit_object_data(nit_ffi_jni_env, {name})"
		else
			return "({mtype.cname})({name})"
		end
	end

	redef fun name_mtype(mtype) do return mtype.jni_type
end

# Context in C, when call are from JNI to normal C
private class FromJavaCallContext
	super CallContext

	redef fun cast_to(mtype, name)
	do
		if mtype.java_is_nit_object then
			return "({mtype.cname})nit_ffi_with_java_nit_object_data(nit_ffi_jni_env, {name})"
		else
			return "({mtype.cname})({name})"
		end
	end

	redef fun cast_from(mtype, name)
	do
		if mtype.java_is_nit_object then
			return "nit_ffi_with_java_new_nit_object(nit_ffi_jni_env, {name})"
		else
			return "({mtype.jni_type})({name})"
		end
	end

	redef fun name_mtype(mtype) do return mtype.jni_type
end

# Foreign type attach to Nit extern Java classes
class ForeignJavaType
	super ForeignType

	var java_type: String
end

redef class NitniCallback
	# Compile C and Java code to implement this callback
	fun compile_callback_to_java(mmodule: MModule, mainmodule: MModule, ccu: CCompilationUnit) do end

	# Returns the list of C functions to link with extern Java methods, as required
	# to enable this callback from Java code.
	#
	# Return used by `MModule::ensure_linking_callback_methods`
	#
	# TODO we return an Array to support cast and other features like that
	fun jni_methods_declaration(from_module: MModule): Array[String] do return new Array[String]
end

redef class MExplicitCall
	redef fun compile_callback_to_java(mmodule, mainmodule, ccu)
	do
		if not mmodule.callbacks_used_from_java.callbacks.has(self) then return

		var mproperty = mproperty
		assert mproperty isa MMethod

		# In C, indirection implementing the Java extern methods
		var csignature = mproperty.build_c_implementation_signature(recv_mtype, mmodule, "___indirect", long_signature, from_java_call_context)
		var cf = new CFunction("JNIEXPORT {csignature}")
		cf.exprs.add "\t{mproperty.build_ccall(recv_mtype, mainmodule, null, long_signature, from_java_call_context, null)}\n"
		ccu.add_non_static_local_function cf

		# In Java, declare the extern method as a private static local method
		var java_signature = mproperty.build_csignature(recv_mtype, mainmodule, null, short_signature, java_call_context)
		mmodule.java_file.class_content.add "private native static {java_signature};\n"
	end

	redef fun jni_methods_declaration(from_mmodule)
	do
		var mproperty = mproperty
		assert mproperty isa MMethod

		var java_name = mproperty.build_cname(recv_mtype, from_mmodule, null, short_signature)
		var jni_format = mproperty.build_jni_format(recv_mtype, from_mmodule)
		var c_name = mproperty.build_cname(recv_mtype, from_mmodule, "___indirect", long_signature)

		return ["""{"{{{java_name}}}", "{{{jni_format}}}", {{{c_name}}}}"""]
	end
end

redef class MType

	# Type name in Java
	#
	# * Primitives common to both languages use their Java primitive type
	# * Nit extern Java classes are represented by their full Java type
	# * Other Nit objects are represented by `NitObject` in Java, a class
	#   encapsulating the pointer to the underlying C structure.
	private fun java_type: String do return "nit.app.NitObject"

	# Is this type opaque in Java? As so it is represented by `nit.app.NitObject`.
	private fun java_is_nit_object: Bool do return true

	# JNI type name (in C)
	#
	# So this is a C type, usually defined in `jni.h`
	private fun jni_type: String do return "jobject"

	# JNI short type name (for signatures)
	#
	# Is used by `MMethod::build_jni_format` to pass a Java method signature
	# to the JNI function `GetStaticMetodId`.
	private fun jni_format: String do return "Lnit/app/NitObject;"

	# Type name appearing within JNI function names.
	#
	# Used by `JavaLanguage::compile_extern_method` when calling JNI's `CallStatic*Method`.
	# This strategy is used by JNI to type the return of callbacks to Java.
	private fun jni_signature_alt: String do return "Int"

	redef fun compile_callback_to_java(mmodule, mainmodule, ccu)
	do
		if self isa MClassType and mclass.ftype isa ForeignJavaType then return

		var java_file = mmodule.java_file
		if java_file == null or mmodule.callbacks_used_from_java.callbacks.is_empty then return

		for variation in ["incr", "decr"] do
			var friendly_name = "{mangled_cname}_{variation}_ref"

			# C
			var csignature = "void {mmodule.impl_java_class_name}_{friendly_name}(JNIEnv *nit_ffi_jni_env, jclass clazz, jobject object)"
			var cf = new CFunction("JNIEXPORT {csignature}")
			cf.exprs.add "\tnitni_global_ref_{variation}(nit_ffi_with_java_nit_object_data(nit_ffi_jni_env, object));"
			ccu.add_non_static_local_function cf

			# Java
			java_file.class_content.add "private native static void {friendly_name}(nit.app.NitObject object);\n"
		end
	end

	redef fun jni_methods_declaration(from_mmodule)
	do
		var arr = new Array[String]
		for variation in ["incr", "decr"] do
			var friendly_name = "{mangled_cname}_{variation}_ref"
			var jni_format = "(Lnit/app/NitObject;)V"
			var cname = "{from_mmodule.impl_java_class_name}_{friendly_name}"
			arr.add """{"{{{friendly_name}}}", "{{{jni_format}}}", {{{cname}}}}"""
		end

		return arr
	end
end

redef class MClassType
	redef fun java_type
	do
		var ftype = mclass.ftype
		if ftype isa ForeignJavaType then return ftype.java_type.
			replace('/', ".").replace('$', ".").replace(' ', "").replace('\n',"")
		if mclass.name == "Bool" then return "boolean"
		if mclass.name == "Char" then return "int"
		if mclass.name == "Int" then return "long"
		if mclass.name == "Float" then return "double"
		if mclass.name == "Byte" then return "byte"
		if mclass.name == "Int8" then return "byte"
		if mclass.name == "Int16" then return "short"
		if mclass.name == "UInt16" then return "short"
		if mclass.name == "Int32" then return "int"
		if mclass.name == "UInt32" then return "int"
		return super
	end

	redef fun java_is_nit_object
	do
		var ftype = mclass.ftype
		if ftype isa ForeignJavaType then return false

		var java_primitives = once new HashSet[String].from(
			["Bool", "Char", "Int", "Float", "Byte", "Int8", "Int16", "UInt16", "Int32", "UInt32"])
		return not java_primitives.has(mclass.name)
	end

	redef fun jni_type
	do
		var ftype = mclass.ftype
		if ftype isa ForeignJavaType then return "jobject"
		if mclass.name == "Bool" then return "jboolean"
		if mclass.name == "Char" then return "jint"
		if mclass.name == "Int" then return "jlong"
		if mclass.name == "Float" then return "jdouble"
		if mclass.name == "Byte" then return "jbyte"
		if mclass.name == "Int8" then return "jbyte"
		if mclass.name == "Int16" then return "jshort"
		if mclass.name == "UInt16" then return "jshort"
		if mclass.name == "Int32" then return "jint"
		if mclass.name == "UInt32" then return "jint"
		return super
	end

	redef fun jni_format
	do
		var ftype = mclass.ftype
		if ftype isa ForeignJavaType then
			var jni_type = ftype.java_type.
				replace('.', "/").replace(' ', "").replace('\n', "")

			# Remove parameters of generic types
			loop
				var i = jni_type.last_index_of('<')
				if i >= 0 then
					var j = jni_type.index_of_from('>', i)
					if j == -1 then
						print "Error: missing closing '>' in extern Java type of \"{mclass.name}\""
						exit 1
					end
					jni_type = jni_type.substring(0, i) +
						jni_type.substring(j+1, jni_type.length)
				else break
			end

			# Change `float[]` to `[float`
			if jni_type.has('[') then
				var depth = jni_type.chars.count('[')
				var java_type = jni_type.replace("[]", "")
				var short

				if java_type == "boolean" then
					short = "Z"
				else if java_type == "byte" then
					short = "B"
				else if java_type == "char" then
					short = "C"
				else if java_type == "short" then
					short = "S"
				else if java_type == "int" then
					short = "I"
				else if java_type == "long" then
					short = "J"
				else if java_type == "float" then
					short = "F"
				else if java_type == "double" then
					short = "D"
				else
					short = "L{java_type};"
				end

				return "["*depth + short
			end

			return "L{jni_type};"
		end
		if mclass.name == "Bool" then return "Z"
		if mclass.name == "Char" then return "I"
		if mclass.name == "Int" then return "J"
		if mclass.name == "Float" then return "D"
		if mclass.name == "Byte" then return "B"
		if mclass.name == "Int8" then return "B"
		if mclass.name == "Int16" then return "S"
		if mclass.name == "UInt16" then return "S"
		if mclass.name == "Int32" then return "I"
		if mclass.name == "UInt32" then return "I"
		return super
	end

	redef fun jni_signature_alt
	do
		var ftype = mclass.ftype

		if ftype isa ForeignJavaType then return "Object"
		if mclass.name == "Bool" then return "Boolean"
		if mclass.name == "Char" then return "Int"
		if mclass.name == "Int" then return "Long"
		if mclass.name == "Float" then return "Double"
		if mclass.name == "Byte" then return "Byte"
		if mclass.name == "Int8" then return "Byte"
		if mclass.name == "Int16" then return "Short"
		if mclass.name == "UInt16" then return "Short"
		if mclass.name == "Int32" then return "Int"
		if mclass.name == "UInt32" then return "Int"
		return super
	end

	redef fun compile_callback_to_java(mmodule, mainmodule, ccu)
	do
		# Don't generate functions for reference counters on extern classes
		if mclass.ftype != null then return

		super
	end

	redef fun jni_methods_declaration(from_mmodule)
	do
		# Don't generate functions for reference counters on extern classes
		if mclass.ftype != null then return new Array[String]

		return super
	end
end

redef class MMethod
	# Returns the JNI signature format of this Nit method
	#
	# Example: a Nity signature `(Bool, Int, Float, JavaString)` is represented by
	# the JNI format `(ZIDLjava/lang/string;)V"
	private fun build_jni_format(recv_mtype: MClassType, from_mmodule: MModule): String
	do
		var mmethoddef = lookup_first_definition(from_mmodule, recv_mtype)
		var msignature = mmethoddef.msignature
		var format = new Array[String]

		format.add "("

		# receiver
		if not self.is_init then format.add recv_mtype.jni_format

		# parameters
		for p in msignature.mparameters do
			var param_mtype = p.mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
			format.add param_mtype.jni_format
		end
		format.add ")"

		# return
		if self.is_init then
			format.add recv_mtype.jni_format
		else
			var return_mtype = msignature.return_mtype
			if return_mtype != null then
				return_mtype = return_mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
				format.add return_mtype.jni_format
			else format.add "V"
		end

		return format.join
	end

	# Similar to `build_c_signature` but adapted to create the signature expected by JNI for C functions
	# implementing Java extern methods.
	#
	# Is used to generate FFI callbacks to Nit at `MExplicitCall::compile_callback_to_java`.
	private fun build_c_implementation_signature(recv_mtype: MClassType, from_mmodule: MModule,
		suffix: nullable String, length: SignatureLength, call_context: CallContext): String
	do
		var mmethoddef = lookup_first_definition(from_mmodule, recv_mtype)
		var signature = mmethoddef.msignature
		assert signature != null

		var creturn_type
		if self.is_init then
			creturn_type = call_context.name_mtype(recv_mtype)
		else if signature.return_mtype != null then
			var ret_mtype = signature.return_mtype
			ret_mtype = ret_mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
			creturn_type = call_context.name_mtype(ret_mtype)
		else
			creturn_type = "void"
		end

		var cname = build_cname(recv_mtype, from_mmodule, suffix, length)

		var cparams = new List[String]

		cparams.add "JNIEnv *nit_ffi_jni_env"
		cparams.add "jclass clazz"

		if not self.is_init then
			cparams.add "{call_context.name_mtype(recv_mtype)} self"
		end
		for p in signature.mparameters do
			var param_mtype = p.mtype.resolve_for(recv_mtype, recv_mtype, from_mmodule, true)
			cparams.add "{call_context.name_mtype(param_mtype)} {p.name}"
		end

		return "{creturn_type} {cname}( {cparams.join(", ")} )"
	end
end

private fun java_call_context: JavaCallContext do return new JavaCallContext
private fun to_java_call_context: ToJavaCallContext do return new ToJavaCallContext
private fun from_java_call_context: FromJavaCallContext do return new FromJavaCallContext

redef class CCompilationUnit
	# Similar to `add_local_function` but not `static`
	#
	# Used when the signature contains a visibility attribute.
	private fun add_non_static_local_function(c_function: CFunction)
	do
		body_decl.add c_function.signature
		body_decl.add ";\n"

		body_impl.add "\n"
		body_impl.add c_function.to_writer
	end
end
