#include "nit.common.h"
#define COLOR_nitc__abstract_compiler__ToolContext___opt_output 74
extern const char FILE_nitc__abstract_compiler[];
#define COLOR_nitc__abstract_compiler__ToolContext___opt_dir 75
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc 76
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_main 77
#define COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags 78
#define COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines 79
#define COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files 80
#define COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir 81
#define COLOR_nitc__abstract_compiler__ToolContext___opt_hardening 82
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance 83
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset 84
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert 85
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast 86
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null 87
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all 88
#define COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics 89
#define COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics 90
#define COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics 91
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace 92
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive 93
#define COLOR_nitc__abstract_compiler__ToolContext___opt_release 94
#define COLOR_nitc__abstract_compiler__ToolContext___opt_debug 95
#define COLOR_nitc__abstract_compiler___ToolContext___core__kernel__Object__init 144
#define COLOR_nitc__toolcontext__ToolContext___option_context 15
extern const char FILE_nitc__toolcontext[];
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__opts__Option;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__opts__Option;
#define COLOR_core__array__Array__with_native 27
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_opts__Option___hidden 4
#define COLOR_nitc__abstract_compiler___ToolContext___process_options 147
#define COLOR_opts__Option___value 6
#define COLOR_core__kernel__Object___61d_61d 4
val* core__flat___NativeString___to_s_full(char* self, long p0, long p1);
void core__file___Sys___print(val* self, val* p0);
#define COLOR_opts__Option__VALUE 0
extern const struct type type_core__Bool;
extern const char FILE_opts[];
#define COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform 5
#define COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext 12
extern const char FILE_nitc__modelbuilder_base[];
val* nitc__abstract_compiler___Platform___toolchain(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain 4
void nitc___nitc__MakefileToolchain___Toolchain__write_and_make(val* self);
val* NEW_nitc__MakefileToolchain(const struct type* type);
extern const struct type type_nitc__MakefileToolchain;
#define COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d 13
#define COLOR_nitc__abstract_compiler__Toolchain__compiler_61d 14
#define COLOR_core__kernel__Object__init 0
#define COLOR_nitc__abstract_compiler__Toolchain___toolcontext 0
#define COLOR_nitc__abstract_compiler__Toolchain___compiler 1
val* nitc___nitc__Toolchain___root_compile_dir(val* self);
#define COLOR_nitc___nitc__Toolchain___core__kernel__Object__init 19
val* nitc___nitc__Toolchain___compile_dir(val* self);
long time___Sys_get_time___impl( struct nitni_instance * self );
void nitc___nitc__ToolContext___info(val* self, val* p0, long p1);
val* core__file___String___mkdir(val* self);
extern const struct type type_core__Array__core__String;
void core___core__Array___core__kernel__Object__init(val* self);
void nitc___nitc__MakefileToolchain___write_files(val* self, val* p0, val* p1);
void nitc___nitc__MakefileToolchain___write_makefile(val* self, val* p0, val* p1);
extern const struct type type_core__NativeArray__core__String;
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
void nitc___nitc__MakefileToolchain___compile_c_code(val* self, val* p0);
val* core___core__Text___escape_to_sh(val* self);
long core__exec___Sys___system(val* self, val* p0);
short int nitc___nitc__Platform___supports_libunwind(val* self);
void nitc___nitc__AbstractCompiler___build_c_to_nit_bindings(val* self);
short int nitc___nitc__Platform___supports_libgc(val* self);
val* NEW_nitc__ExternCFile(const struct type* type);
extern const struct type type_nitc__ExternCFile;
#define COLOR_nitc__c_tools__ExternFile__filename_61d 12
#define COLOR_nitc__c_tools__ExternCFile__cflags_61d 20
#define COLOR_nitc__c_tools__ExternFile___pkgconfigs 1
extern const char FILE_nitc__c_tools[];
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies 11
#define COLOR_nitc__toolcontext__ToolContext___nit_dir 34
val* core__file___String____47d(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy 12
#define COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule 1
#define COLOR_nitc__mmodule__MModule___in_importation 46
extern const char FILE_nitc__mmodule[];
val* poset___poset__POSetElement___greaters(val* self);
#define COLOR_core__abstract_collection__Collection__iterator 21
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0);
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__file__String__basename 84
void core__file___String___file_copy_to(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___header 7
#define COLOR_nitc__abstract_compiler__CodeWriter___file 0
#define COLOR_nitc__abstract_compiler__CodeFile___name 0
#define COLOR_core__abstract_text__String___43d 76
val* NEW_core__FileWriter(const struct type* type);
extern const struct type type_core__FileWriter;
void core___core__FileWriter___open(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__CodeWriter___decl_lines 2
val* core___core__List___core__abstract_collection__Collection__iterator(val* self);
short int core___core__ListIterator___core__abstract_collection__Iterator__is_ok(val* self);
val* core___core__ListIterator___core__abstract_collection__Iterator__item(val* self);
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__CodeWriter___lines 1
void core___core__FileWriter___core__stream__Stream__close(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___files 6
#define COLOR_nitc__abstract_compiler__CodeFile___writers 1
#define COLOR_core__list__List___length 0
#define COLOR_nitc__abstract_compiler__CodeFile___required_declarations 2
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations 9
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations 10
val* core___core__HashMap___core__abstract_collection__MapRead__get_or_null(val* self, val* p0);
void nitc___nitc__ANode___debug(val* self, val* p0);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_core__array__AbstractArrayRead___length 0
val* nitc___nitc__MModule___nitc__model_base__MEntity__c_name(val* self);
val* nitc___nitc__MModule___first_real_mmodule(val* self);
#define COLOR_nitc__mmodule__MModule___name 44
val* nitc___nitc__MakefileToolchain___default_outname(val* self);
val* core__file___String___join_path(val* self, val* p0);
val* nitc___nitc__MakefileToolchain___outfile(val* self, val* p0);
val* core__file___String___relpath(val* self, val* p0);
val* core___core__Text___escape_to_mk(val* self);
val* nitc___nitc__MakefileToolchain___makefile_name(val* self);
val* NEW_core__HashSet(const struct type* type);
extern const struct type type_core__HashSet__core__String;
void core___core__HashSet___core__kernel__Object__init(val* self);
val* nitc__light___MModule___collect_linker_libs(val* self);
void core___core__SimpleCollection___add_all(val* self, val* p0);
val* core__abstract_text___Collection___join(val* self, val* p0);
val* core__string_search___Text___replace(val* self, val* p0, val* p1);
val* core__file___String___strip_extension(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script 8
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self);
extern const struct type type_core__Array__nitc__ExternFile;
void core___core__Array___core__abstract_collection__SimpleCollection__add_all(val* self, val* p0);
val* nitc___nitc__ExternCFile___ExternFile__makefile_rule_name(val* self);
#define COLOR_nitc__c_tools__ExternFile___filename 0
val* nitc___nitc__ExternCFile___ExternFile__makefile_rule_content(val* self);
short int nitc___nitc__ExternCFile___ExternFile__compiles_to_o_file(val* self);
short int nitc___nitc__ExternFile___add_to_jar(val* self);
#define COLOR_nitc__toolcontext__ToolContext___verbose_level 31
val* nitc___nitc__ToolContext___error(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___names 0
#define COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule 2
#define COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder 3
#define COLOR_nitc___nitc__AbstractCompiler___core__kernel__Object__init 51
val* nitc__platform___MModule___target_platform(val* self);
val* NEW_nitc__Platform(const struct type* type);
extern const struct type type_nitc__Platform;
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self);
val* NEW_nitc__CodeFile(const struct type* type);
extern const struct type type_nitc__CodeFile;
#define COLOR_nitc__abstract_compiler__CodeFile__name_61d 12
void core___core__Sequence___SimpleCollection__add(val* self, val* p0);
val* core___core__List___core__abstract_collection__Collection__first(val* self);
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
long core___core__HashMap___core__abstract_collection__MapRead__length(val* self);
val* core___core__HashMap___core__abstract_collection__MapRead__keys(val* self);
#define COLOR_core__abstract_text__Text__escape_to_c 60
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler__compile_header_structs 32
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__has(val* self, val* p0);
val* nitc__model___MModule___finalizable_type(val* self);
#define COLOR_nitc__model__MClassType___mclass 9
extern const char FILE_nitc__model[];
val* nitc__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor 34
void nitc___nitc__AbstractCompilerVisitor___add_decl(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1);
extern const struct type type_core__Array__nitc__RuntimeVariable;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1);
void nitc___nitc__AbstractCompilerVisitor___add(val* self, val* p0);
short int nitc___nitc__Platform___no_main(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags 14
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler 0
val* nitc__model___MModule___sys_type(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance 20
#define COLOR_core__abstract_text__Object__to_s 3
val* core__array___Collection___to_a(val* self);
#define COLOR_nitc__mmodule__MModule___location 45
#define COLOR_nitc__location__Location___file 0
extern const char FILE_nitc__location[];
#define COLOR_nitc__location__SourceFile___filename 1
void nitc___nitc__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern 13
#define COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR 0
val* nitc___nitc__MClassType___MType__collect_mclassdefs(val* self, val* p0);
void nitc__model___MModule___linearize_mclassdefs(val* self, val* p0);
val* nitc__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0);
void nitc__separate_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved 15
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved 16
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped 17
val* NEW_core__HashMap(const struct type* type);
extern const struct type type_core__HashMap__core__String__core__Int;
void core___core__HashMap___core__kernel__Object__init(val* self);
val* nitc___nitc__AbstractCompiler___init_count_type_test_tags(val* self);
extern const struct type type_core__Array__core__Object;
extern const struct type type_core__NativeArray__core__Object;
void core__file___Sys___printn(val* self, val* p0);
val* counter___core__Sys___div(val* self, long p0, long p1);
void nitc__light___MModule___finalize_ffi(val* self, val* p0);
#define COLOR_nitc___nitc__CodeFile___core__kernel__Object__init 16
#define COLOR_nitc___nitc__CodeWriter___core__kernel__Object__init 17
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__COMPILER 0
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node 1
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame 2
val* nitc__model___MModule___object_type(val* self);
val* nitc__model___MModule___bool_type(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer 3
#define COLOR_nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init 95
val* NEW_nitc__CodeWriter(const struct type* type);
extern const struct type type_nitc__CodeWriter;
val* core___core__List___core__abstract_collection__SequenceRead__last(val* self);
#define COLOR_nitc__abstract_compiler__CodeWriter__file_61d 12
extern const struct type type_nitc__MClassType;
val* nitc___nitc__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nitc__model_base__MEntity___is_broken 0
#define COLOR_nitc__typing__CallSite___mpropdef 12
extern const char FILE_nitc__typing[];
#define COLOR_nitc__model__MMethodDef___initializers 17
val* core___core__SequenceRead___Collection__first(val* self);
extern const struct type type_nitc__MMethod;
#define COLOR_nitc__model__MProperty___intro 15
#define COLOR_nitc__model__MMethodDef___msignature 15
#define COLOR_nitc__model__MSignature___mparameters 9
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
extern const struct type type_nitc__MAttribute;
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__typing__CallSite___mproperty 11
#define COLOR_nitc__model__MMethodDef___new_msignature 16
long nitc___nitc__MSignature___arity(val* self);
#define COLOR_core__abstract_collection__Collection__length 19
val* nitc___nitc__AbstractCompilerVisitor___expr(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__SignatureMap___map 0
val* core___core__MapRead___get_or_null(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___null_instance(val* self);
#define COLOR_nitc__model__MParameter___is_vararg 8
#define COLOR_core__abstract_collection__SequenceRead___91d_93d 29
#define COLOR_nitc__typing__AExpr___vararg_decl 10
val* core___core__AbstractArrayRead___sub(val* self, long p0, long p1);
#define COLOR_nitc__model__MParameter___mtype 7
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3);
long core___core__Int___Discrete__successor(long self, long p0);
#define COLOR_nitc__model__MType__need_anchor 29
#define COLOR_nitc__abstract_compiler__StaticFrame___receiver 2
#define COLOR_nitc__model__MType__anchor_to 31
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype 2
#define COLOR_nitc__model__MType__resolve_for 27
val* nitc___nitc__AbstractCompilerVisitor___anchor(val* self, val* p0);
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
extern const struct type type_nitc__MNullableType;
#define COLOR_nitc__model__MProxyType___mtype 9
val* NEW_nitc__RuntimeVariable(const struct type* type);
extern const struct type type_nitc__RuntimeVariable;
#define COLOR_nitc__abstract_compiler__RuntimeVariable___name 0
#define COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d 13
#define COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d 14
#define COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d 15
val* nitc___nitc__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
extern const struct type type_nitc__MNullType;
void nitc___nitc__AbstractCompilerVisitor___add_abort(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names 4
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last 5
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names 6
#define COLOR_nitc__scope__EscapeMark___name 0
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0);
#define COLOR_nitc__scope__EscapeMark___escapes 2
extern const char FILE_nitc__scope[];
val* nitc___nitc__AbstractCompilerVisitor___escapemark_name(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables 6
#define COLOR_nitc__scope__Variable___name 2
#define COLOR_nitc__typing__Variable___declared_type 0
#define COLOR_nitc__abstract_compiler__MType__ctype 28
#define COLOR_nitc__abstract_compiler__MType__ctype_extern 41
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mtype 1
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1);
val* nitc__abstract_compiler___MClassType___MType__ctype(val* self);
#define COLOR_nitc__model__MClass___name 8
short int nitc__abstract_compiler___MClassType___MType__is_c_primitive(val* self);
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self);
val* nitc__model___MModule___int_type(val* self);
val* nitc__model___MModule___byte_type(val* self);
val* core__abstract_text___Byte___Object__to_s(unsigned char self);
val* nitc__model___MModule___int8_type(val* self);
val* core___core__Int8___core__abstract_text__Object__to_s(int8_t self);
val* nitc__model___MModule___int16_type(val* self);
val* core___core__Int16___core__abstract_text__Object__to_s(int16_t self);
val* nitc__model___MModule___uint16_type(val* self);
val* core___core__UInt16___core__abstract_text__Object__to_s(uint16_t self);
val* nitc__model___MModule___int32_type(val* self);
val* core___core__Int32___core__abstract_text__Object__to_s(int32_t self);
val* nitc__model___MModule___uint32_type(val* self);
val* core___core__UInt32___core__abstract_text__Object__to_s(uint32_t self);
val* nitc__model___MModule___char_type(val* self);
val* core__abstract_text___Char___Object__to_s(uint32_t self);
val* nitc__model___MModule___float_type(val* self);
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self);
#define COLOR_nitc__mmodule__MModule___model 41
#define COLOR_nitc__model__Model___null_type 13
val* nitc__model___MModule___string_type(val* self);
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0);
val* nitc__model___MModule___native_string_type(val* self);
#define COLOR_core__abstract_text__Text__bytelen 35
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, long p0);
#define COLOR_core__abstract_text__Text__length 22
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1);
val* nitc___nitc__AbstractCompilerVisitor___bool_instance(val* self, short int p0);
extern const struct type type_core__String;
val* nitc___nitc__AbstractCompilerVisitor___string_instance(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___require_declaration(val* self, val* p0);
#define COLOR_nitc__mmodule__MModule___filepath 43
short int core__file___String___file_exists(val* self);
void nitc___nitc__AbstractCompilerVisitor___declare_once(val* self, val* p0);
short int core___core__ArraySet___core__abstract_collection__Collection__has(val* self, val* p0);
void core___core__ArraySet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___add_raw_abort(val* self);
extern const char FILE_nitc__parser_nodes[];
#define COLOR_nitc__parser_nodes__ANode___location 1
extern const char FILE_nitc__loader[];
#define COLOR_nitc__loader__SourceFile___mmodule 0
#define COLOR_nitc__location__Location___line_start 1
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test 60
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string 42
#define COLOR_nitc__abstract_compiler__StaticFrame___returnvar 4
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__StaticFrame___returnlabel 5
#define COLOR_nitc__modelbuilder_base__ANode___is_broken 0
#define COLOR_nitc__typing__AExpr___comprehension 9
#define COLOR_nitc__abstract_compiler__StaticFrame___comprehension 7
#define COLOR_nitc__typing__AArrayExpr___element_mtype 19
#define COLOR_nitc__typing__AArrayExpr___push_callsite 18
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite 50
#define COLOR_nitc__abstract_compiler__AExpr__stmt 55
#define COLOR_nitc__typing__AExpr__mtype 41
#define COLOR_nitc__abstract_compiler__AExpr__expr 59
val* nitc___nitc__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__AExpr___implicit_cast_to 8
void nitc___nitc__AbstractCompilerVisitor___add_cast(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache 1
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name 4
extern const char FILE_nitc__separate_compiler[];
#define COLOR_nitc___nitc__AbstractRuntimeFunction___core__kernel__Object__init 19
#define COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact 3
#define COLOR_nitc___nitc__RuntimeVariable___core__kernel__Object__init 20
#define COLOR_nitc__abstract_compiler__StaticFrame__VISITOR 0
#define COLOR_nitc__abstract_compiler__StaticFrame___visitor 0
#define COLOR_nitc__abstract_compiler__StaticFrame___mpropdef 1
#define COLOR_nitc__abstract_compiler__StaticFrame___arguments 3
#define COLOR_nitc___nitc__StaticFrame___core__kernel__Object__init 26
#define COLOR_nitc__abstract_compiler__MClassType___ctype 16
#define COLOR_nitc__abstract_compiler__MClassType__lazy_32d_is_c_primitive 19
#define COLOR_nitc__abstract_compiler__MClassType___is_c_primitive 18
#define COLOR_nitc__model__MClass___kind 15
val* nitc__model___core__Sys___extern_kind(val* self);
#define COLOR_nitc__abstract_compiler__MPropDef__VISITOR 0
#define COLOR_nitc__model__MMethodDef___is_abstract 18
#define COLOR_nitc__model__MMethodDef___constant_value 21
#define COLOR_core__kernel__Object___33d_61d 1
val* nitc__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0);
extern const struct type type_nitc__APropdef;
#define COLOR_nitc__abstract_compiler__APropdef__can_inline 65
extern const struct type type_nitc__AClassdef;
#define COLOR_nitc__model__MPropDef___mproperty 8
#define COLOR_nitc__model__MProperty___name 7
void nitc__abstract_compiler___MMethodDef___compile_parameter_check(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__APropdef__compile_to_c 49
void nitc__abstract_compiler___AClassdef___compile_to_c(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__AbstractCompilerVisitor___value_instance(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___ret(val* self, val* p0);
#define COLOR_nitc__model__MParameter___name 6
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(val* self);
val* core__abstract_text___Object___class_name(val* self);
val* nitc___nitc__Location___core__abstract_text__Object__to_s(val* self);
#define COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits 24
void core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(val* self);
#define COLOR_nitc__typing__CallSite___msignature 13
#define COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call 25
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__model__MMethodDef___is_intern 19
short int nitc__abstract_compiler___AMethPropdef___compile_intern_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__model__MMethodDef___is_extern 20
#define COLOR_nitc__model__MMethod___is_init 19
short int nitc__light___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2);
short int nitc__light___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__parser_nodes__AMethPropdef___n_block 20
#define COLOR_nitc__parser_nodes__AMethPropdef___n_signature 18
#define COLOR_nitc__parser_nodes__ASignature___n_params 11
val* nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nitc__scope__AParam___variable 9
val* nitc___nitc__AbstractCompilerVisitor___variable(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___stmt(val* self, val* p0);
#define COLOR_nitc__modelize_property__APropdef___mpropdef 5
#define COLOR_nitc__model__MPropDef___mclassdef 7
#define COLOR_nitc__model__MClassDef___mclass 8
extern const struct type type_nitc__ABlockExpr;
#define COLOR_nitc__parser_nodes__ABlockExpr___n_expr 12
long nitc___nitc__ANodes___core__abstract_collection__Collection__length(val* self);
#define COLOR_nitc__model__MSignature___return_mtype 10
val* nitc___nitc__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1);
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1);
short int nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__calloc_array 66
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1);
val* nitc__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AAnnotation___n_args 15
val* nitc__annotation___AAnnotation___arg_as_string(val* self, val* p0);
#define COLOR_nitc__model__MClassDef___mmodule 7
void nitc___nitc__AbstractCompilerVisitor___add_extern(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern 68
val* core___core__AbstractArray___core__abstract_collection__Sequence__shift(val* self);
#define COLOR_nitc__modelize_property__AAttrPropdef___is_lazy 15
#define COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef 18
#define COLOR_nitc__modelize_property__AAttrPropdef___mtype 10
#define COLOR_nitc__abstract_compiler__MType__is_c_primitive 39
#define COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef 17
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1);
val* nitc__abstract_compiler___AAttrPropdef___evaluate_expr(val* self, val* p0, val* p1);
#define COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef 19
#define COLOR_nitc__modelize_property__AAttrPropdef___has_value 16
#define COLOR_nitc__parser_nodes__AAttrPropdef___n_expr 24
extern const struct type type_nitc__ANullExpr;
val* NEW_nitc__StaticFrame(const struct type* type);
extern const struct type type_nitc__StaticFrame;
#define COLOR_nitc__model__MType__undecorate 47
#define COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d 14
#define COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d 15
#define COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d 16
#define COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d 17
#define COLOR_nitc__parser_nodes__AAttrPropdef___n_block 26
#define COLOR_nitc__modelize_property__AClassdef___mfree_init 6
#define COLOR_nitc__model__MMethod___is_root_init 20
short int nitc___nitc__MPropDef___is_intro(val* self);
val* nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(val* self);
val* core___core__SequenceRead___last(val* self);
#define COLOR_nitc__scope__AVardeclExpr___variable 17
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_expr 16
#define COLOR_nitc__scope__AVarFormExpr___variable 13
#define COLOR_nitc__typing__AExpr___mtype 6
#define COLOR_nitc__parser_nodes__AAssignFormExpr___n_value 15
#define COLOR_nitc__parser_nodes__AReassignFormExpr___n_value 15
#define COLOR_nitc__typing__AReassignFormExpr___reassign_callsite 16
#define COLOR_nitc__typing__AImplicitSelfExpr___is_sys 15
#define COLOR_nitc__abstract_compiler___AImplicitSelfExpr___AExpr__expr 73
#define COLOR_nitc__scope__AEscapeExpr___escapemark 14
#define COLOR_nitc__parser_nodes__AReturnExpr___n_expr 13
#define COLOR_nitc__parser_nodes__AIfExpr___n_expr 13
val* nitc___nitc__AbstractCompilerVisitor___expr_bool(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AIfExpr___n_then 15
#define COLOR_nitc__parser_nodes__AIfExpr___n_else 17
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_expr 13
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_then 15
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_else 17
#define COLOR_nitc__parser_nodes__ADoExpr___n_block 14
#define COLOR_nitc__scope__ADoExpr___break_mark 15
void nitc___nitc__AbstractCompilerVisitor___add_escape_label(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AWhileExpr___n_expr 14
#define COLOR_nitc__parser_nodes__AWhileExpr___n_block 16
#define COLOR_nitc__scope__AWhileExpr___continue_mark 18
#define COLOR_nitc__scope__AWhileExpr___break_mark 17
#define COLOR_nitc__parser_nodes__ALoopExpr___n_block 14
#define COLOR_nitc__scope__ALoopExpr___continue_mark 16
#define COLOR_nitc__scope__ALoopExpr___break_mark 15
#define COLOR_nitc__parser_nodes__AForExpr___n_groups 14
#define COLOR_nitc__parser_nodes__AForGroup___n_expr 7
#define COLOR_nitc__typing__AForGroup___method_iterator 9
#define COLOR_nitc__abstract_compiler__AForGroup___it 18
#define COLOR_nitc__typing__AForGroup___method_is_ok 10
#define COLOR_nitc__scope__AForGroup___variables 17
extern const char FILE_core__array[];
#define COLOR_nitc__typing__AForGroup___method_item 11
#define COLOR_nitc__typing__AForGroup___method_key 13
#define COLOR_nitc__parser_nodes__AForExpr___n_block 16
#define COLOR_nitc__scope__AForExpr___continue_mark 18
#define COLOR_nitc__typing__AForGroup___method_next 12
#define COLOR_nitc__scope__AForExpr___break_mark 17
#define COLOR_nitc__typing__AForGroup___method_finish 14
#define COLOR_nitc__parser_nodes__AAssertExpr___n_expr 14
#define COLOR_nitc__parser_nodes__AAssertExpr___n_else 16
#define COLOR_nitc__parser_nodes__AAssertExpr___n_id 13
val* nitc__lexer_work___Token___text(val* self);
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr 12
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2 14
#define COLOR_nitc__parser_nodes__ANotExpr___n_expr 13
#define COLOR_nitc__literal__AIntegerExpr___value 13
extern const struct type type_core__Byte;
val* nitc___nitc__AbstractCompilerVisitor___byte_instance(val* self, unsigned char p0);
extern const struct type type_core__Int8;
val* nitc___nitc__AbstractCompilerVisitor___int8_instance(val* self, int8_t p0);
extern const struct type type_core__Int16;
val* nitc___nitc__AbstractCompilerVisitor___int16_instance(val* self, int16_t p0);
extern const struct type type_core__UInt16;
val* nitc___nitc__AbstractCompilerVisitor___uint16_instance(val* self, uint16_t p0);
extern const struct type type_core__Int32;
val* nitc___nitc__AbstractCompilerVisitor___int32_instance(val* self, int32_t p0);
extern const struct type type_core__UInt32;
val* nitc___nitc__AbstractCompilerVisitor___uint32_instance(val* self, uint32_t p0);
#define COLOR_nitc__parser_nodes__AFloatExpr___n_float 12
val* nitc___nitc__AbstractCompilerVisitor___float_instance(val* self, val* p0);
#define COLOR_nitc__literal__ACharExpr___value 13
val* nitc___nitc__AbstractCompilerVisitor___char_instance(val* self, uint32_t p0);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AArrayExpr___n_exprs 13
#define COLOR_nitc__literal__AStringFormExpr___value 13
extern const struct type type_core__Array__nitc__AExpr;
#define COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs 12
extern const struct type type_nitc__AStringFormExpr;
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance 81
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(val* self, val* p0, long p1, val* p2);
val* nitc___nitc__AbstractCompilerVisitor___object_type(val* self);
#define COLOR_nitc__parser_nodes__ARangeExpr___n_expr 12
#define COLOR_nitc__parser_nodes__ARangeExpr___n_expr2 14
#define COLOR_nitc__typing__ARangeExpr___init_callsite 15
#define COLOR_nitc__parser_nodes__AIsaExpr___n_expr 12
#define COLOR_nitc__typing__AIsaExpr___cast_type 15
#define COLOR_nitc__parser_nodes__AAsCastForm___n_expr 12
#define COLOR_nitc__parser_nodes__AParExpr___n_expr 13
#define COLOR_nitc__parser_nodes__AOnceExpr___n_expr 13
#define COLOR_nitc__parser_nodes__ASendExpr___n_expr 12
#define COLOR_nitc__typing__ASendExpr___callsite 13
#define COLOR_nitc__typing__CallSite___signaturemap 15
val* nitc__typing___ASendExpr___raw_arguments(val* self);
val* nitc___nitc__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nitc__typing__ASendReassignFormExpr___write_callsite 20
#define COLOR_nitc__typing__ASuperExpr___callsite 15
#define COLOR_nitc__parser_nodes__ASuperExpr___n_args 14
#define COLOR_nitc__parser_nodes__AExprs___n_exprs 5
short int nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(val* self);
#define COLOR_nitc__typing__ASuperExpr___mpropdef 16
#define COLOR_nitc__typing__ASuperExpr___signaturemap 17
#define COLOR_nitc__typing__ANewExpr___recvtype 17
#define COLOR_nitc__parser_nodes__ANewExpr___n_args 15
extern const struct type type_nitc__MGenericType;
#define COLOR_nitc__model__MGenericType___arguments 20
val* nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0);
#define COLOR_nitc__typing__ANewExpr___callsite 16
#define COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr 12
#define COLOR_nitc__typing__AAttrFormExpr___mproperty 18
#define COLOR_nitc__parser_nodes__AVarargExpr___n_expr 12
#define COLOR_nitc__parser_nodes__ANamedargExpr___n_expr 14
#define COLOR_nitc__abstract_compiler__MModule___properties_cache 55
#define COLOR_core__abstract_collection__MapRead__has_key 14
extern const struct type type_core__HashSet__nitc__MProperty;
extern const struct type type_core__Array__nitc__MClass;
val* nitc__model___MModule___flatten_mclass_hierarchy(val* self);
short int poset___poset__POSet___core__abstract_collection__Collection__has(val* self, val* p0);
val* nitc___nitc__MClass___in_hierarchy(val* self, val* p0);
val* poset___poset__POSetElement___direct_greaters(val* self);
val* nitc__abstract_compiler___MModule___properties(val* self, val* p0);
#define COLOR_nitc__model__MClass___mclassdefs 17
short int poset___poset__POSetElement____60d_61d(val* self, val* p0);
#define COLOR_nitc__model__MClassDef___intro_mproperties 18
#define COLOR_core__abstract_collection__Map___91d_93d_61d 21
#define COLOR_core__abstract_collection__MapRead___91d_93d 15
val* NEW_nitc__ToolContext(const struct type* type);
extern const struct type type_nitc__ToolContext;
void nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init(val* self);
#define COLOR_nitc__toolcontext__ToolContext___tooldescription 32
val* core__abstract_text___Sys___args(val* self);
void nitc__nith___ToolContext___process_options(val* self, val* p0);
val* NEW_nitc__Model(const struct type* type);
extern const struct type type_nitc__Model;
val* NEW_nitc__ModelBuilder(const struct type* type);
extern const struct type type_nitc__ModelBuilder;
#define COLOR_nitc__modelbuilder_base__ModelBuilder__model_61d 12
#define COLOR_nitc__modelbuilder_base__ModelBuilder__toolcontext_61d 13
#define COLOR_opts__OptionContext___rest 1
val* nitc__loader___ModelBuilder___parse(val* self, val* p0);
void nitc___nitc__ToolContext___quit(val* self);
void nitc__modelbuilder___ModelBuilder___run_phases(val* self);
extern const struct type type_core__Array__nitc__MModule;
void nitc__modelbuilder___ToolContext___run_global_phases(val* self, val* p0);
