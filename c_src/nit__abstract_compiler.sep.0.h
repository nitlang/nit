#include "nit.common.h"
#define COLOR_nit__abstract_compiler__ToolContext___opt_output 51
extern const char FILE_nit__abstract_compiler[];
#define COLOR_nit__abstract_compiler__ToolContext___opt_dir 52
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_cc 53
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_main 54
#define COLOR_nit__abstract_compiler__ToolContext___opt_make_flags 55
#define COLOR_nit__abstract_compiler__ToolContext___opt_max_c_lines 56
#define COLOR_nit__abstract_compiler__ToolContext___opt_group_c_files 57
#define COLOR_nit__abstract_compiler__ToolContext___opt_compile_dir 58
#define COLOR_nit__abstract_compiler__ToolContext___opt_hardening 59
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance 60
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset 61
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_assert 62
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast 63
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null 64
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_all 65
#define COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics 66
#define COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics 67
#define COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics 68
#define COLOR_nit__abstract_compiler__ToolContext___opt_stacktrace 69
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_gcc_directive 70
#define COLOR_nit__abstract_compiler__ToolContext___opt_release 71
#define COLOR_nit__abstract_compiler___ToolContext___standard__kernel__Object__init 149
#define COLOR_nit__toolcontext__ToolContext___option_context 7
extern const char FILE_nit__toolcontext[];
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__opts__Option;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__opts__Option;
#define COLOR_standard__array__Array__with_native 73
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_opts__Option___hidden 4
#define COLOR_nit__abstract_compiler___ToolContext___process_options 152
#define COLOR_opts__Option___value 6
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
#define COLOR_standard__kernel__Object___61d_61d 2
#define COLOR_opts__Option__VALUE 0
extern const char FILE_opts[];
extern const struct type type_standard__Array__standard__Object;
extern const struct type type_standard__NativeArray__standard__Object;
#define COLOR_standard__string__Object__to_s 9
void standard__file___Object___print(val* self, val* p0);
extern const struct type type_standard__Bool;
val* BOX_standard__Bool(short int);
#define COLOR_nit__abstract_compiler__ModelBuilder___compile_dir 13
#define COLOR_nit__abstract_compiler__AbstractCompiler___target_platform 4
#define COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext 1
extern const char FILE_nit__modelbuilder_base[];
val* nit__abstract_compiler___Platform___toolchain(val* self, val* p0);
val* nit___nit__Toolchain___compile_dir(val* self);
void nit___nit__MakefileToolchain___Toolchain__write_and_make(val* self, val* p0);
val* NEW_nit__MakefileToolchain(const struct type* type);
extern const struct type type_nit__MakefileToolchain;
#define COLOR_nit__abstract_compiler__Toolchain__toolcontext_61d 33
#define COLOR_standard__kernel__Object__init 7
#define COLOR_nit__abstract_compiler__Toolchain___toolcontext 0
#define COLOR_nit___nit__Toolchain___standard__kernel__Object__init 36
#include "time_nit.h"
void nit___nit__ToolContext___info(val* self, val* p0, long p1);
void standard__file___String___mkdir(val* self);
extern const struct type type_standard__Array__standard__String;
void standard___standard__Array___standard__kernel__Object__init(val* self);
void nit___nit__MakefileToolchain___write_files(val* self, val* p0, val* p1, val* p2);
void nit___nit__MakefileToolchain___write_makefile(val* self, val* p0, val* p1, val* p2);
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
val* BOX_standard__Int(long);
void nit___nit__MakefileToolchain___compile_c_code(val* self, val* p0, val* p1);
short int nit___nit__Platform___supports_libunwind(val* self);
void nit___nit__AbstractCompiler___build_c_to_nit_bindings(val* self);
short int nit___nit__Platform___supports_libgc(val* self);
val* NEW_nit__ExternCFile(const struct type* type);
extern const struct type type_nit__ExternCFile;
#define COLOR_nit__c_tools__ExternFile__filename_61d 33
#define COLOR_nit__c_tools__ExternCFile__cflags_61d 41
#define COLOR_nit__c_tools__ExternFile___pkgconfigs 1
extern const char FILE_nit__c_tools[];
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies 10
#define COLOR_nit__toolcontext__ToolContext___nit_dir 25
val* standard__file___String____47d(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy 11
#define COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule 1
#define COLOR_nit__mmodule__MModule___in_importation 8
extern const char FILE_nit__mmodule[];
val* poset___poset__POSetElement___greaters(val* self);
#define COLOR_standard__abstract_collection__Collection__iterator 37
#define COLOR_standard__abstract_collection__Iterator__is_ok 34
#define COLOR_standard__abstract_collection__Iterator__item 32
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0);
#define COLOR_standard__abstract_collection__Iterator__next 33
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
val* standard__file___String___basename(val* self, val* p0);
void standard__file___String___file_copy_to(val* self, val* p0);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___header 6
#define COLOR_nit__abstract_compiler__CodeWriter___file 0
#define COLOR_nit__abstract_compiler__CodeFile___name 0
#define COLOR_standard__string__String___43d 82
val* NEW_standard__OFStream(const struct type* type);
extern const struct type type_standard__OFStream;
void standard___standard__OFStream___open(val* self, val* p0);
#define COLOR_nit__abstract_compiler__CodeWriter___decl_lines 2
val* standard___standard__List___standard__abstract_collection__Collection__iterator(val* self);
short int standard___standard__ListIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard___standard__ListIterator___standard__abstract_collection__Iterator__item(val* self);
void standard___standard__OFStream___standard__stream__OStream__write(val* self, val* p0);
void standard___standard__ListIterator___standard__abstract_collection__Iterator__next(val* self);
#define COLOR_nit__abstract_compiler__CodeWriter___lines 1
void standard___standard__OFStream___standard__stream__IOS__close(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___files 5
#define COLOR_nit__abstract_compiler__CodeFile___writers 1
long standard___standard__List___standard__abstract_collection__Collection__length(val* self);
#define COLOR_nit__abstract_compiler__CodeFile___required_declarations 2
val* standard___standard__HashSet___standard__abstract_collection__Collection__iterator(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations 8
short int standard___standard__MapRead___has_key(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations 9
val* standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(val* self, val* p0);
void nit___nit__ANode___debug(val* self, val* p0);
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_standard__array__AbstractArrayRead___length 0
val* nit___nit__MModule___nit__model_base__MEntity__c_name(val* self);
#define COLOR_nit__mmodule__MModule___name 6
#define COLOR_nit__mmodule__MModule___is_fictive 16
val* poset___poset__POSetElement___direct_greaters(val* self);
#define COLOR_standard__abstract_collection__Collection__first 41
val* nit___nit__MakefileToolchain___default_outname(val* self, val* p0);
val* standard__file___String___join_path(val* self, val* p0);
val* nit___nit__MakefileToolchain___outfile(val* self, val* p0);
val* standard__file___String___relpath(val* self, val* p0);
val* standard___standard__Text___escape_to_mk(val* self);
val* nit___nit__MakefileToolchain___makefile_name(val* self, val* p0);
val* NEW_standard__HashSet(const struct type* type);
extern const struct type type_standard__HashSet__standard__String;
void standard___standard__HashSet___standard__kernel__Object__init(val* self);
val* nit__abstract_compiler___MModule___collect_linker_libs(val* self);
void standard___standard__SimpleCollection___add_all(val* self, val* p0);
val* standard__string___Collection___join(val* self, val* p0);
val* standard___standard__Text___escape_to_sh(val* self);
val* standard__string_search___Text___replace(val* self, val* p0, val* p1);
val* standard__file___String___strip_extension(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler___linker_script 7
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(val* self);
extern const struct type type_standard__Array__nit__ExternFile;
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(val* self, val* p0);
val* nit___nit__ExternCFile___ExternFile__makefile_rule_name(val* self);
#define COLOR_nit__c_tools__ExternFile___filename 0
val* nit___nit__ExternCFile___ExternFile__makefile_rule_content(val* self);
short int nit___nit__ExternCFile___ExternFile__compiles_to_o_file(val* self);
short int nit___nit__ExternFile___add_to_jar(val* self);
#define COLOR_nit__toolcontext__ToolContext___verbose_level 22
long standard__exec___Sys___system(val* self, val* p0);
extern const struct class class_standard__Int;
void nit___nit__ToolContext___error(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__AbstractCompiler___names 0
#define COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule 2
#define COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder 3
val* nit__platform___MModule___target_platform(val* self);
val* NEW_nit__Platform(const struct type* type);
extern const struct type type_nit__Platform;
short int standard___standard__List___standard__abstract_collection__Collection__is_empty(val* self);
val* NEW_nit__CodeFile(const struct type* type);
extern const struct type type_nit__CodeFile;
#define COLOR_nit__abstract_compiler__CodeFile__name_61d 33
void standard___standard__Sequence___SimpleCollection__add(val* self, val* p0);
val* standard___standard__List___standard__abstract_collection__Collection__first(val* self);
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
long standard___standard__HashMap___standard__abstract_collection__MapRead__length(val* self);
#define COLOR_standard__hash_collection__HashMap___keys 7
extern const char FILE_standard__hash_collection[];
val* standard___standard__Text___escape_to_c(val* self);
void nit___nit__CodeWriter___add_decl(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler__compile_header_structs 53
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self);
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(val* self, val* p0);
val* nit__model___MModule___finalizable_type(val* self);
#define COLOR_nit__model__MClassType___mclass 5
extern const char FILE_nit__model[];
val* nit__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor 44
void nit___nit__AbstractCompilerVisitor___add_decl(val* self, val* p0);
val* nit___nit__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1);
extern const struct type type_standard__Array__nit__RuntimeVariable;
void standard___standard__Array___with_capacity(val* self, long p0);
void standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(val* self, val* p0);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1);
void nit___nit__AbstractCompilerVisitor___add(val* self, val* p0);
short int nit___nit__Platform___no_main(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags 13
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler 0
val* nit__model___MModule___sys_type(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance 82
val* standard__array___Collection___to_a(val* self);
#define COLOR_nit__mmodule__MModule___location 7
#define COLOR_nit__location__Location___file 0
extern const char FILE_nit__location[];
#define COLOR_nit__location__SourceFile___filename 0
void nit___nit__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern 12
#define COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR 0
val* nit___nit__MClassType___MType__collect_mclassdefs(val* self, val* p0);
void nit__model___MModule___linearize_mclassdefs(val* self, val* p0);
val* nit__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0);
void nit__abstract_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved 14
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved 15
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped 16
val* NEW_standard__HashMap(const struct type* type);
extern const struct type type_standard__HashMap__standard__String__standard__Int;
void standard___standard__HashMap___standard__kernel__Object__init(val* self);
val* nit___nit__AbstractCompiler___init_count_type_test_tags(val* self);
void standard__file___Object___printn(val* self, val* p0);
val* nit___nit__AbstractCompiler___div(val* self, long p0, long p1);
extern const struct type type_standard__Float;
val* standard__string___Float___to_precision(double self, long p0);
#define COLOR_nit___nit__CodeFile___standard__kernel__Object__init 36
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__COMPILER 0
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node 1
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame 2
val* nit__model___MModule___object_type(val* self);
val* nit__model___MModule___bool_type(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer 3
val* NEW_nit__CodeWriter(const struct type* type);
extern const struct type type_nit__CodeWriter;
val* standard___standard__List___standard__abstract_collection__SequenceRead__last(val* self);
#define COLOR_nit__abstract_compiler__CodeWriter__file_61d 33
val* nit__model___MModule___get_primitive_class(val* self, val* p0);
extern const struct type type_nit__MClassType;
val* nit___nit__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nit__typing__CallSite___mpropdef 6
extern const char FILE_nit__typing[];
#define COLOR_nit__model__MMethodDef___initializers 15
val* standard___standard__SequenceRead___Collection__first(val* self);
extern const struct type type_nit__MMethod;
#define COLOR_nit__model__MProperty___intro 12
#define COLOR_nit__model__MMethodDef___msignature 13
#define COLOR_nit__model__MSignature___mparameters 5
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
extern const struct type type_nit__MAttribute;
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__typing__CallSite___mproperty 5
#define COLOR_nit__model__MMethodDef___new_msignature 14
#define COLOR_standard__abstract_collection__Collection__is_empty 38
#define COLOR_nit__model__MSignature___vararg_rank 7
#define COLOR_standard__abstract_collection__Collection__length 39
long nit___nit__MSignature___arity(val* self);
#define COLOR_standard__abstract_collection__SequenceRead___91d_93d 45
extern const struct type type_nit__AVarargExpr;
#define COLOR_nit__parser_nodes__AVarargExpr___n_expr 10
extern const char FILE_nit__parser_nodes[];
val* nit___nit__AbstractCompilerVisitor___expr(val* self, val* p0, val* p1);
long standard___standard__Int___Discrete__successor(long self, long p0);
#define COLOR_nit__model__MParameter___mtype 5
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nit__model__MType__need_anchor 43
#define COLOR_nit__abstract_compiler__StaticFrame___receiver 2
#define COLOR_nit__model__MType__anchor_to 42
#define COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype 2
#define COLOR_nit__model__MType__resolve_for 45
val* nit___nit__AbstractCompilerVisitor___anchor(val* self, val* p0);
short int nit___nit__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
extern const struct type type_nit__MNullableType;
#define COLOR_nit__model__MNullableType___mtype 5
val* NEW_nit__RuntimeVariable(const struct type* type);
extern const struct type type_nit__RuntimeVariable;
#define COLOR_nit__abstract_compiler__RuntimeVariable___name 0
#define COLOR_nit__abstract_compiler__RuntimeVariable__name_61d 33
#define COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d 35
#define COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d 37
val* nit___nit__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
val* nit___nit__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
extern const struct type type_nit__MNullType;
void nit___nit__AbstractCompilerVisitor___add_abort(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names 4
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last 5
short int standard___standard__HashSet___standard__abstract_collection__Collection__has(val* self, val* p0);
void standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
val* standard__string___Int___Object__to_s(long self);
#define COLOR_nit__abstract_compiler__StaticFrame___escapemark_names 6
#define COLOR_nit__scope__EscapeMark___name 0
val* nit___nit__AbstractCompilerVisitor___get_name(val* self, val* p0);
#define COLOR_nit__scope__EscapeMark___escapes 2
extern const char FILE_nit__scope[];
val* nit___nit__AbstractCompilerVisitor___escapemark_name(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables 6
#define COLOR_nit__scope__Variable___name 0
#define COLOR_nit__typing__Variable___declared_type 3
#define COLOR_nit__abstract_compiler__MType__ctype 58
#define COLOR_nit__abstract_compiler__MType__ctype_extern 59
#define COLOR_nit__abstract_compiler__RuntimeVariable___mtype 1
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1);
val* nit__abstract_compiler___MClassType___MType__ctype(val* self);
#define COLOR_nit__model__MClass___name 5
val* nit___nit__AbstractCompilerVisitor___get_class(val* self, val* p0);
#define COLOR_nit__model__MClass___mclass_type 16
val* nit___nit__AbstractCompilerVisitor___new_var(val* self, val* p0);
#define COLOR_standard__string__Text__length 47
val* nit___nit__AbstractCompilerVisitor___int_instance(val* self, long p0);
val* nit___nit__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1);
val* nit___nit__AbstractCompilerVisitor___bool_instance(val* self, short int p0);
extern const struct type type_standard__String;
val* nit___nit__AbstractCompilerVisitor___string_instance(val* self, val* p0);
void nit___nit__AbstractCompilerVisitor___require_declaration(val* self, val* p0);
short int standard__file___String___file_exists(val* self);
void nit___nit__AbstractCompilerVisitor___declare_once(val* self, val* p0);
short int standard___standard__ArraySet___standard__abstract_collection__Collection__has(val* self, val* p0);
void standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
void nit___nit__AbstractCompilerVisitor___add_raw_abort(val* self);
#define COLOR_nit__parser_nodes__ANode___location 0
extern const char FILE_nit__loader[];
#define COLOR_nit__loader__SourceFile___mmodule 6
#define COLOR_nit__location__Location___line_start 1
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__type_test 58
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string 75
#define COLOR_nit__abstract_compiler__StaticFrame___returnvar 4
void nit___nit__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__StaticFrame___returnlabel 5
#define COLOR_nit__typing__AExpr___comprehension 8
#define COLOR_nit__abstract_compiler__StaticFrame___comprehension 7
#define COLOR_nit__typing__AArrayExpr___element_mtype 16
#define COLOR_nit__typing__AArrayExpr___push_callsite 15
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite 44
#define COLOR_nit__abstract_compiler__AExpr__stmt 76
#define COLOR_nit__abstract_compiler__AExpr__expr 75
#define COLOR_nit__typing__AExpr__mtype 60
val* nit___nit__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1);
#define COLOR_nit__typing__AExpr___implicit_cast_to 7
void nit___nit__AbstractCompilerVisitor___add_cast(val* self, val* p0, val* p1, val* p2);
val* nit___nit__AbstractCompilerVisitor___bool_type(val* self);
#define COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
#define COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache 1
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name 4
extern const char FILE_nit__separate_compiler[];
#define COLOR_nit___nit__AbstractRuntimeFunction___standard__kernel__Object__init 39
#define COLOR_nit__abstract_compiler__RuntimeVariable___is_exact 3
#define COLOR_nit__abstract_compiler__StaticFrame__VISITOR 0
#define COLOR_nit__abstract_compiler__StaticFrame___visitor 0
#define COLOR_nit__abstract_compiler__StaticFrame___mpropdef 1
#define COLOR_nit__abstract_compiler__StaticFrame___arguments 3
#define COLOR_nit___nit__StaticFrame___standard__kernel__Object__init 46
#define COLOR_nit__model__MClass___kind 12
val* nit__model___standard__Object___extern_kind(val* self);
#define COLOR_nit__abstract_compiler__MPropDef__VISITOR 0
#define COLOR_nit__model__MMethodDef___is_abstract 16
val* nit__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0);
extern const struct type type_nit__APropdef;
#define COLOR_nit__abstract_compiler__APropdef__can_inline 93
extern const struct type type_nit__AClassdef;
#define COLOR_nit__model__MMethodDef___constant_value 19
void nit__abstract_compiler___MMethodDef___compile_parameter_check(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__APropdef__compile_to_c 92
void nit__abstract_compiler___AClassdef___compile_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_standard__kernel__Object___33d_61d 3
val* nit___nit__AbstractCompilerVisitor___value_instance(val* self, val* p0);
void nit___nit__AbstractCompilerVisitor___ret(val* self, val* p0);
#define COLOR_nit__model__MPropDef___mproperty 5
#define COLOR_nit__model__MParameter___name 4
val* nit___nit__RuntimeVariable___standard__string__Object__inspect(val* self);
val* standard__string___Object___class_name(val* self);
val* nit___nit__Location___standard__string__Object__to_s(val* self);
#define COLOR_nit__model__MProperty___name 5
#define COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits 26
void standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(val* self);
#define COLOR_nit__typing__CallSite___msignature 7
#define COLOR_nit__auto_super_init__AMethPropdef___auto_super_call 27
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__model__MMethodDef___is_intern 17
short int nit__abstract_compiler___AMethPropdef___compile_intern_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__model__MMethodDef___is_extern 18
#define COLOR_nit__model__MMethod___is_init 16
short int nit__abstract_compiler___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2);
short int nit__abstract_compiler___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__parser_nodes__AMethPropdef___n_block 23
#define COLOR_nit__parser_nodes__AMethPropdef___n_signature 22
#define COLOR_nit__parser_nodes__ASignature___n_params 5
val* nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nit__scope__AParam___variable 7
val* nit___nit__AbstractCompilerVisitor___variable(val* self, val* p0);
void nit___nit__AbstractCompilerVisitor___stmt(val* self, val* p0);
#define COLOR_nit__modelize_property__APropdef___mpropdef 16
#define COLOR_nit__model__MPropDef___mclassdef 4
#define COLOR_nit__model__MClassDef___mclass 5
extern const struct type type_nit__ABlockExpr;
#define COLOR_nit__parser_nodes__ABlockExpr___n_expr 10
long nit___nit__ANodes___standard__abstract_collection__Collection__length(val* self);
#define COLOR_nit__model__MSignature___return_mtype 6
val* nit___nit__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1);
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1);
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__calloc_array 46
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1);
val* nit__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AAnnotation___n_args 15
val* nit__annotation___AAnnotation___arg_as_string(val* self, val* p0);
#define COLOR_nit__model__MClassDef___mmodule 4
void nit___nit__AbstractCompilerVisitor___add_extern(val* self, val* p0);
val* nit___nit__AbstractCompilerVisitor___new_var_extern(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__box_extern 56
val* standard___standard__AbstractArray___standard__abstract_collection__Sequence__shift(val* self);
#define COLOR_nit__modelize_property__AAttrPropdef___is_lazy 24
#define COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef 27
#define COLOR_nit__model__MAttributeDef___static_mtype 13
#define COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef 26
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1);
val* nit__abstract_compiler___AAttrPropdef___evaluate_expr(val* self, val* p0, val* p1);
#define COLOR_nit__modelize_property__AAttrPropdef___mwritepropdef 28
#define COLOR_nit__modelize_property__AAttrPropdef___has_value 25
val* NEW_nit__StaticFrame(const struct type* type);
extern const struct type type_nit__StaticFrame;
#define COLOR_nit__model__MType__as_notnullable 50
#define COLOR_nit__abstract_compiler__StaticFrame__visitor_61d 32
#define COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d 34
#define COLOR_nit__abstract_compiler__StaticFrame__receiver_61d 36
#define COLOR_nit__abstract_compiler__StaticFrame__arguments_61d 38
#define COLOR_nit__parser_nodes__AAttrPropdef___n_expr 21
#define COLOR_nit__parser_nodes__AAttrPropdef___n_block 22
#define COLOR_nit__modelize_property__AClassdef___mfree_init 9
#define COLOR_nit__model__MMethod___is_root_init 17
short int nit___nit__MPropDef___is_intro(val* self);
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self);
val* standard___standard__SequenceRead___last(val* self);
#define COLOR_nit__scope__AVardeclExpr___variable 15
#define COLOR_nit__parser_nodes__AVardeclExpr___n_expr 14
#define COLOR_nit__scope__AVarFormExpr___variable 11
#define COLOR_nit__typing__AExpr___mtype 5
#define COLOR_nit__parser_nodes__AAssignFormExpr___n_value 13
#define COLOR_nit__parser_nodes__AReassignFormExpr___n_value 13
#define COLOR_nit__typing__AReassignFormExpr___reassign_callsite 14
#define COLOR_nit__scope__AEscapeExpr___escapemark 12
#define COLOR_nit__parser_nodes__AReturnExpr___n_expr 11
#define COLOR_nit__parser_nodes__AIfExpr___n_expr 11
val* nit___nit__AbstractCompilerVisitor___expr_bool(val* self, val* p0);
#define COLOR_nit__parser_nodes__AIfExpr___n_then 12
#define COLOR_nit__parser_nodes__AIfExpr___n_else 13
#define COLOR_nit__parser_nodes__AIfexprExpr___n_expr 11
#define COLOR_nit__parser_nodes__AIfexprExpr___n_then 13
#define COLOR_nit__parser_nodes__AIfexprExpr___n_else 15
#define COLOR_nit__parser_nodes__ADoExpr___n_block 12
#define COLOR_nit__scope__ADoExpr___break_mark 13
void nit___nit__AbstractCompilerVisitor___add_escape_label(val* self, val* p0);
#define COLOR_nit__parser_nodes__AWhileExpr___n_expr 12
#define COLOR_nit__parser_nodes__AWhileExpr___n_block 14
#define COLOR_nit__scope__AWhileExpr___continue_mark 16
#define COLOR_nit__scope__AWhileExpr___break_mark 15
#define COLOR_nit__parser_nodes__ALoopExpr___n_block 12
#define COLOR_nit__scope__ALoopExpr___continue_mark 14
#define COLOR_nit__scope__ALoopExpr___break_mark 13
#define COLOR_nit__parser_nodes__AForExpr___n_expr 13
#define COLOR_nit__typing__AForExpr___method_iterator 20
#define COLOR_nit__typing__AForExpr___method_is_ok 21
#define COLOR_nit__scope__AForExpr___variables 16
extern const char FILE_standard__array[];
#define COLOR_nit__typing__AForExpr___method_item 22
#define COLOR_nit__typing__AForExpr___method_key 24
#define COLOR_nit__parser_nodes__AForExpr___n_block 15
#define COLOR_nit__scope__AForExpr___continue_mark 18
#define COLOR_nit__typing__AForExpr___method_next 23
#define COLOR_nit__scope__AForExpr___break_mark 17
#define COLOR_nit__typing__AForExpr___method_finish 25
#define COLOR_nit__parser_nodes__AAssertExpr___n_expr 12
#define COLOR_nit__parser_nodes__AAssertExpr___n_else 13
#define COLOR_nit__parser_nodes__AAssertExpr___n_id 11
val* nit__lexer_work___Token___text(val* self);
#define COLOR_nit__parser_nodes__ABinBoolExpr___n_expr 10
#define COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2 11
#define COLOR_nit__parser_nodes__ANotExpr___n_expr 11
#define COLOR_nit__literal__AIntExpr___value 10
#define COLOR_nit__parser_nodes__AFloatExpr___n_float 10
#define COLOR_nit__literal__ACharExpr___value 11
val* standard__string___Char___Object__to_s(char self);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AArrayExpr___n_exprs 11
#define COLOR_nit__literal__AStringFormExpr___value 11
#define COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs 10
extern const struct type type_nit__AStringFormExpr;
val* nit___nit__AbstractCompilerVisitor___object_type(val* self);
#define COLOR_nit__parser_nodes__ARangeExpr___n_expr 10
#define COLOR_nit__parser_nodes__ARangeExpr___n_expr2 11
#define COLOR_nit__typing__ARangeExpr___init_callsite 12
#define COLOR_nit__parser_nodes__AIsaExpr___n_expr 10
#define COLOR_nit__typing__AIsaExpr___cast_type 12
#define COLOR_nit__parser_nodes__AAsCastForm___n_expr 10
#define COLOR_nit__parser_nodes__AParExpr___n_expr 11
#define COLOR_nit__parser_nodes__AOnceExpr___n_expr 11
#define COLOR_nit__parser_nodes__ASendExpr___n_expr 10
#define COLOR_nit__typing__ASendExpr___callsite 11
val* nit__typing___ASendExpr___raw_arguments(val* self);
val* nit___nit__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__typing__ASendReassignFormExpr___write_callsite 18
#define COLOR_nit__typing__ASuperExpr___callsite 13
#define COLOR_nit__parser_nodes__ASuperExpr___n_args 12
#define COLOR_nit__parser_nodes__AExprs___n_exprs 4
#define COLOR_nit__typing__ASuperExpr___mpropdef 14
#define COLOR_nit__typing__ANewExpr___recvtype 15
#define COLOR_nit__parser_nodes__ANewExpr___n_args 13
extern const struct type type_nit__MGenericType;
#define COLOR_nit__model__MGenericType___arguments 12
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance 45
val* nit___nit__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0);
#define COLOR_nit__typing__ANewExpr___callsite 14
#define COLOR_nit__parser_nodes__AAttrFormExpr___n_expr 10
#define COLOR_nit__typing__AAttrFormExpr___mproperty 16
#define COLOR_nit__abstract_compiler__MModule___properties_cache 26
extern const struct type type_standard__HashSet__nit__MProperty;
extern const struct type type_standard__Array__nit__MClass;
val* nit__model___MModule___flatten_mclass_hierarchy(val* self);
short int poset___poset__POSet___standard__abstract_collection__Collection__has(val* self, val* p0);
val* nit___nit__MClass___in_hierarchy(val* self, val* p0);
val* nit__abstract_compiler___MModule___properties(val* self, val* p0);
#define COLOR_nit__model__MClass___mclassdefs 14
short int poset___poset__POSetElement____60d_61d(val* self, val* p0);
#define COLOR_nit__model__MClassDef___intro_mproperties 15
#define COLOR_standard__abstract_collection__Map___91d_93d_61d 41
#define COLOR_standard__abstract_collection__MapRead___91d_93d 32
val* NEW_nit__ToolContext(const struct type* type);
extern const struct type type_nit__ToolContext;
void nit__separate_erasure_compiler___ToolContext___standard__kernel__Object__init(val* self);
#define COLOR_nit__toolcontext__ToolContext___tooldescription 23
val* standard__string___Object___args(val* self);
void nit__nith___ToolContext___process_options(val* self, val* p0);
val* NEW_nit__Model(const struct type* type);
extern const struct type type_nit__Model;
val* NEW_nit__ModelBuilder(const struct type* type);
extern const struct type type_nit__ModelBuilder;
#define COLOR_nit__modelbuilder_base__ModelBuilder__model_61d 33
#define COLOR_nit__modelbuilder_base__ModelBuilder__toolcontext_61d 35
#define COLOR_opts__OptionContext___rest 1
val* nit__loader___ModelBuilder___parse(val* self, val* p0);
void nit__modelbuilder___ModelBuilder___run_phases(val* self);
extern const struct type type_standard__Array__nit__MModule;
void nit__modelbuilder___ToolContext___run_global_phases(val* self, val* p0);
