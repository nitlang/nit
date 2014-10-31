#include "nit.common.h"
#define COLOR_abstract_compiler__ToolContext___opt_output 44
#define COLOR_abstract_compiler__ToolContext___opt_dir 45
#define COLOR_abstract_compiler__ToolContext___opt_no_cc 46
#define COLOR_abstract_compiler__ToolContext___opt_no_main 47
#define COLOR_abstract_compiler__ToolContext___opt_cc_path 48
#define COLOR_abstract_compiler__ToolContext___opt_make_flags 49
#define COLOR_abstract_compiler__ToolContext___opt_max_c_lines 50
#define COLOR_abstract_compiler__ToolContext___opt_group_c_files 51
#define COLOR_abstract_compiler__ToolContext___opt_compile_dir 52
#define COLOR_abstract_compiler__ToolContext___opt_hardening 53
#define COLOR_abstract_compiler__ToolContext___opt_no_check_covariance 54
#define COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset 55
#define COLOR_abstract_compiler__ToolContext___opt_no_check_assert 56
#define COLOR_abstract_compiler__ToolContext___opt_no_check_autocast 57
#define COLOR_abstract_compiler__ToolContext___opt_no_check_null 58
#define COLOR_abstract_compiler__ToolContext___opt_no_check_all 59
#define COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics 60
#define COLOR_abstract_compiler__ToolContext___opt_invocation_metrics 61
#define COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics 62
#define COLOR_abstract_compiler__ToolContext___opt_stacktrace 63
#define COLOR_abstract_compiler__ToolContext___opt_no_gcc_directive 64
#define COLOR_abstract_compiler__ToolContext___opt_release 65
#define COLOR_abstract_compiler__ToolContext__init 139
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 74
void opts__OptionContext__add_option(val* self, val* p0);
void abstract_compiler__ToolContext__init(val* self);
#define COLOR_abstract_compiler__ToolContext__process_options 142
#define COLOR_opts__Option___value 6
val* string__NativeString__to_s_with_length(char* self, long p0);
short int string__FlatString___61d_61d(val* self, val* p0);
#define COLOR_opts__Option_VTVALUE 0
extern const struct type type_array__Arraykernel__Object;
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_string__Object__to_s 9
void file__Object__print(val* self, val* p0);
#define COLOR_kernel__Object___61d_61d 2
extern const struct type type_kernel__Bool;
val* BOX_kernel__Bool(short int);
void abstract_compiler__ToolContext__process_options(val* self, val* p0);
#define COLOR_abstract_compiler__ModelBuilder___compile_dir 12
#define COLOR_abstract_compiler__AbstractCompiler___mainmodule 1
val* platform__MModule__target_platform(val* self);
val* NEW_abstract_compiler__MakefileToolchain(const struct type* type);
extern const struct type type_abstract_compiler__MakefileToolchain;
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
#define COLOR_abstract_compiler__Toolchain__toolcontext_61d 32
#define COLOR_kernel__Object__init 7
#define COLOR_abstract_compiler__Platform__toolchain 34
val* abstract_compiler__Toolchain__compile_dir(val* self);
void abstract_compiler__MakefileToolchain__write_and_make(val* self, val* p0);
void abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0);
#define COLOR_abstract_compiler__Toolchain___toolcontext 0
#define COLOR_abstract_compiler__Toolchain__init 35
#define COLOR_abstract_compiler__MakefileToolchain___cc_paths 1
#define COLOR_abstract_compiler__MakefileToolchain___clib 2
#define COLOR_toolcontext__ToolContext___nit_dir 22
short int file__String__file_exists(val* self);
void toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1);
void abstract_collection__Sequence__append(val* self, val* p0);
val* environ__String__environ(val* self);
short int string__Text__is_empty(val* self);
val* BOX_kernel__Char(char);
val* string_search__Text__split_with(val* self, val* p0);
void abstract_compiler__MakefileToolchain__gather_cc_paths(val* self);
#include "time_nit.h"
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
void file__String__mkdir(val* self);
extern const struct type type_array__Arraystring__String;
void abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1, val* p2);
void abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1, val* p2);
extern const struct type type_kernel__Int;
val* BOX_kernel__Int(long);
void abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0, val* p1);
#define COLOR_platform__Platform__supports_libunwind 31
void abstract_compiler__AbstractCompiler__build_c_to_nit_bindings(val* self);
#define COLOR_kernel__Object___33d_61d 3
#define COLOR_platform__Platform__supports_libgc 32
val* NEW_c_tools__ExternCFile(const struct type* type);
extern const struct type type_c_tools__ExternCFile;
void c_tools__ExternCFile__init(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__AbstractCompiler___extern_bodies 8
void array__Array__add(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler___files_to_copy 9
#define COLOR_mmodule__MModule___in_importation 7
val* poset__POSetElement__greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
void separate_compiler__SeparateCompiler__finalize_ffi_for_module(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 32
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
val* file__String__basename(val* self, val* p0);
void file__String__file_copy_to(val* self, val* p0);
void array__ArrayIterator__next(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___header 5
#define COLOR_abstract_compiler__CodeWriter___file 0
#define COLOR_abstract_compiler__CodeFile___name 0
val* string__FlatString___43d(val* self, val* p0);
val* NEW_file__OFStream(const struct type* type);
extern const struct type type_file__OFStream;
void file__OFStream__open(val* self, val* p0);
#define COLOR_abstract_compiler__CodeWriter___decl_lines 2
val* list__List__iterator(val* self);
short int list__ListIterator__is_ok(val* self);
val* list__ListIterator__item(val* self);
void file__OFStream__write(val* self, val* p0);
void list__ListIterator__next(val* self);
#define COLOR_abstract_compiler__CodeWriter___lines 1
void file__OFStream__close(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___files 4
#define COLOR_abstract_compiler__CodeFile___writers 1
long list__List__length(val* self);
#define COLOR_abstract_compiler__CodeFile___required_declarations 2
val* hash_collection__HashSet__iterator(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___provided_declarations 6
short int abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations 7
val* abstract_collection__MapRead__get_or_null(val* self, val* p0);
void parser_nodes__ANode__debug(val* self, val* p0);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
#define COLOR_array__AbstractArrayRead___length 0
#define COLOR_mmodule__MModule___name 4
val* abstract_compiler__MakefileToolchain__makefile_name(val* self, val* p0);
#define COLOR_mmodule__MModule___is_fictive 11
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__first 41
val* abstract_compiler__MakefileToolchain__default_outname(val* self, val* p0);
val* file__String__join_path(val* self, val* p0);
val* abstract_compiler__MakefileToolchain__outfile(val* self, val* p0);
val* file__String__relpath(val* self, val* p0);
val* NEW_hash_collection__HashSet(const struct type* type);
extern const struct type type_hash_collection__HashSetstring__String;
val* abstract_compiler__MModule__collect_linker_libs(val* self);
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
val* string__Collection__join(val* self, val* p0);
val* file__String__strip_extension(val* self, val* p0);
extern const struct type type_array__Arrayc_tools__ExternFile;
val* c_tools__ExternCFile__makefile_rule_name(val* self);
#define COLOR_c_tools__ExternFile___filename 0
val* c_tools__ExternCFile__makefile_rule_content(val* self);
short int c_tools__ExternCFile__compiles_to_o_file(val* self);
short int c_tools__ExternFile__add_to_jar(val* self);
short int array__AbstractArrayRead__is_empty(val* self);
#define COLOR_toolcontext__ToolContext___verbose_level 19
long exec__Sys__system(val* self, val* p0);
extern const struct class class_kernel__Int;
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__AbstractCompiler___names 0
#define COLOR_abstract_compiler__AbstractCompiler___realmainmodule 2
#define COLOR_abstract_compiler__AbstractCompiler___modelbuilder 3
void abstract_compiler__AbstractCompiler__init(val* self, val* p0, val* p1);
short int list__List__is_empty(val* self);
val* NEW_abstract_compiler__CodeFile(const struct type* type);
extern const struct type type_abstract_compiler__CodeFile;
#define COLOR_abstract_compiler__CodeFile__name_61d 32
void abstract_collection__Sequence__add(val* self, val* p0);
val* list__List__first(val* self);
val* abstract_compiler__AbstractCompiler__new_file(val* self, val* p0);
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1);
long hash_collection__HashMap__length(val* self);
#define COLOR_hash_collection__HashMap___keys 7
void abstract_compiler__CodeWriter__add_decl(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler__compile_header_structs 49
void separate_compiler__SeparateCompiler__compile_nitni_structs(val* self);
short int array__AbstractArrayRead__has(val* self, val* p0);
void abstract_compiler__AbstractCompiler__compile_header(val* self);
void abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self);
val* model__MModule__finalizable_type(val* self);
#define COLOR_model__MClassType___mclass 4
val* model__MModule__try_get_primitive_method(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__AbstractCompiler__new_visitor 41
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1);
extern const struct type type_array__Arrayabstract_compiler__RuntimeVariable;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
val* separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0);
void abstract_compiler__AbstractCompiler__compile_finalizer_function(val* self);
#define COLOR_platform__Platform__no_main 33
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags 11
#define COLOR_abstract_compiler__AbstractCompilerVisitor___compiler 0
val* model__MModule__sys_type(val* self);
#define COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance 83
val* array__Collection__to_a(val* self);
void abstract_compiler__AbstractCompiler__compile_main_function(val* self);
void abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___seen_extern 10
#define COLOR_abstract_compiler__AbstractCompiler_VTVISITOR 0
val* model__MClassType__collect_mclassdefs(val* self, val* p0);
void model__MModule__linearize_mclassdefs(val* self, val* p0);
#define COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef 8
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
val* parser_nodes__ANodes__iterator(val* self);
extern const struct type type_parser_nodes__AAttrPropdef;
void abstract_compiler__AAttrPropdef__init_expr(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved 12
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved 13
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped 14
val* NEW_hash_collection__HashMap(const struct type* type);
extern const struct type type_hash_collection__HashMapstring__Stringkernel__Int;
val* abstract_compiler__AbstractCompiler__init_count_type_test_tags(val* self);
void file__Object__printn(val* self, val* p0);
val* abstract_compiler__AbstractCompiler__div(val* self, long p0, long p1);
void abstract_compiler__AbstractCompiler__display_stats(val* self);
void abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0);
extern const struct type type_kernel__Float;
val* string__Float__to_precision(double self, long p0);
#define COLOR_abstract_compiler__CodeFile__init 35
void abstract_compiler__CodeWriter__init(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor_VTCOMPILER 0
#define COLOR_abstract_compiler__AbstractCompilerVisitor___current_node 1
#define COLOR_abstract_compiler__AbstractCompilerVisitor___frame 2
val* model__MModule__object_type(val* self);
val* abstract_compiler__AbstractCompilerVisitor__object_type(val* self);
val* model__MModule__bool_type(val* self);
val* abstract_compiler__AbstractCompilerVisitor__bool_type(val* self);
#define COLOR_abstract_compiler__AbstractCompilerVisitor___writer 3
val* NEW_abstract_compiler__CodeWriter(const struct type* type);
extern const struct type type_abstract_compiler__CodeWriter;
val* list__List__last(val* self);
void abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0);
val* model__MModule__get_primitive_class(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0);
extern const struct type type_model__MClassType;
val* modelbuilder__ModelBuilder__force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
val* abstract_compiler__AbstractCompilerVisitor__get_property(val* self, val* p0, val* p1);
#define COLOR_typing__CallSite___mpropdef 6
#define COLOR_model__MMethodDef___initializers 10
val* abstract_collection__SequenceRead__first(val* self);
extern const struct type type_model__MMethod;
#define COLOR_model__MProperty___intro 6
#define COLOR_model__MMethodDef___msignature 8
#define COLOR_model__MSignature___mparameters 4
val* array__Array___91d_93d(val* self, long p0);
extern const struct type type_model__MAttribute;
void separate_compiler__SeparateCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2);
#define COLOR_typing__CallSite___mproperty 5
val* abstract_compiler__AbstractCompilerVisitor__compile_callsite(val* self, val* p0, val* p1);
#define COLOR_model__MMethodDef___new_msignature 9
#define COLOR_abstract_collection__Collection__is_empty 38
#define COLOR_model__MSignature___vararg_rank 6
#define COLOR_abstract_collection__Collection__length 39
long model__MSignature__arity(val* self);
#define COLOR_abstract_collection__SequenceRead___91d_93d 46
extern const struct type type_parser_nodes__AVarargExpr;
#define COLOR_parser_nodes__AVarargExpr___n_expr 9
val* abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1);
long kernel__Int__successor(long self, long p0);
#define COLOR_model__MParameter___mtype 3
val* separate_compiler__SeparateCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3);
val* abstract_compiler__AbstractCompilerVisitor__varargize(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MType__need_anchor 39
#define COLOR_abstract_compiler__Frame___receiver 2
#define COLOR_model__MType__anchor_to 38
val* abstract_compiler__AbstractCompilerVisitor__anchor(val* self, val* p0);
#define COLOR_abstract_compiler__RuntimeVariable___mcasttype 2
#define COLOR_model__MType__resolve_for 41
val* abstract_compiler__AbstractCompilerVisitor__resolve_for(val* self, val* p0, val* p1);
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
extern const struct type type_model__MNullableType;
#define COLOR_model__MNullableType___mtype 4
val* NEW_abstract_compiler__RuntimeVariable(const struct type* type);
extern const struct type type_abstract_compiler__RuntimeVariable;
#define COLOR_abstract_compiler__RuntimeVariable___name 0
void abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2);
val* abstract_compiler__AbstractCompilerVisitor__autoadapt(val* self, val* p0, val* p1);
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1);
val* separate_compiler__SeparateCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_send(val* self, val* p0, val* p1, val* p2);
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1);
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(val* self, val* p0, val* p1, val* p2);
extern const struct type type_model__MNullType;
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor___names 4
#define COLOR_abstract_compiler__AbstractCompilerVisitor___last 5
short int hash_collection__HashSet__has(val* self, val* p0);
void hash_collection__HashSet__add(val* self, val* p0);
val* string__Int__to_s(long self);
val* abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names 6
#define COLOR_scope__EscapeMark___name 0
val* abstract_compiler__AbstractCompilerVisitor__escapemark_name(val* self, val* p0);
#define COLOR_scope__EscapeMark___escapes 2
void abstract_compiler__AbstractCompilerVisitor__add_escape_label(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor___variables 7
#define COLOR_scope__Variable___name 0
#define COLOR_typing__Variable___declared_type 3
#define COLOR_abstract_compiler__MType__ctype 52
val* abstract_compiler__AbstractCompilerVisitor__variable(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0);
#define COLOR_abstract_compiler__MType__ctype_extern 53
val* abstract_compiler__AbstractCompilerVisitor__new_var_extern(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__RuntimeVariable___mtype 1
val* separate_compiler__SeparateCompilerVisitor__autobox(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompilerVisitor__set_finalizer(val* self, val* p0);
#define COLOR_model__MClass___mclass_type 10
val* abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0);
val* abstract_compiler__AbstractCompilerVisitor__bool_instance(val* self, short int p0);
val* abstract_compiler__MClassType__ctype(val* self);
val* string__Text__escape_to_c(val* self);
#define COLOR_string__FlatText___length 3
val* abstract_compiler__AbstractCompilerVisitor__string_instance(val* self, val* p0);
extern const struct type type_string__String;
val* abstract_compiler__AbstractCompilerVisitor__value_instance(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__declare_once(val* self, val* p0);
short int array__ArraySet__has(val* self, val* p0);
void array__ArraySet__add(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self);
#define COLOR_parser_nodes__ANode___location 0
#define COLOR_location__Location___file 0
#define COLOR_location__SourceFile___filename 0
#define COLOR_location__Location___line_start 1
#define COLOR_abstract_compiler__AbstractCompilerVisitor__type_test 58
#define COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string 76
void abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_compiler__Frame___returnvar 4
#define COLOR_abstract_compiler__Frame___returnlabel 5
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0);
#define COLOR_abstract_compiler__AExpr__stmt 72
void abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0);
#define COLOR_abstract_compiler__AExpr__expr 71
#define COLOR_typing__AExpr__mtype 58
#define COLOR_typing__AExpr___implicit_cast_to 7
val* abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
#define COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache 1
#define COLOR_abstract_compiler__AbstractRuntimeFunction__build_c_name 34
val* abstract_compiler__AbstractRuntimeFunction__c_name(val* self);
#define COLOR_abstract_compiler__AbstractRuntimeFunction__init 38
#define COLOR_abstract_compiler__RuntimeVariable___is_exact 3
val* abstract_compiler__RuntimeVariable__to_s(val* self);
val* abstract_compiler__RuntimeVariable__inspect(val* self);
#define COLOR_abstract_compiler__Frame_VTVISITOR 0
#define COLOR_abstract_compiler__Frame___visitor 0
#define COLOR_abstract_compiler__Frame___mpropdef 1
#define COLOR_abstract_compiler__Frame___arguments 3
#define COLOR_abstract_compiler__Frame__init 42
val* abstract_compiler__MType__ctype(val* self);
val* abstract_compiler__MType__ctype_extern(val* self);
val* abstract_compiler__MType__ctypename(val* self);
#define COLOR_abstract_compiler__MType___c_name_cache 3
#define COLOR_model__MClass___intro_mmodule 2
val* string__Text__to_cmangle(val* self);
#define COLOR_model__MClass___name 3
val* abstract_compiler__MClassType__c_name(val* self);
#define COLOR_model__MClass___kind 6
val* model__Object__extern_kind(val* self);
val* abstract_compiler__MClassType__ctype_extern(val* self);
val* abstract_compiler__MClassType__ctypename(val* self);
#define COLOR_abstract_compiler__MGenericType__c_name 72
#define COLOR_model__MClassType___arguments 5
#define COLOR_abstract_compiler__MType__c_name 55
val* abstract_compiler__MGenericType__c_name(val* self);
#define COLOR_model__MParameterType___mclass 4
val* abstract_compiler__MClass__c_name(val* self);
#define COLOR_model__MParameterType___rank 5
val* abstract_compiler__MParameterType__c_name(val* self);
#define COLOR_model__MVirtualType___mproperty 4
#define COLOR_model__MPropDef___mclassdef 3
#define COLOR_model__MClassDef___mclass 3
#define COLOR_model__MProperty___name 3
val* abstract_compiler__MVirtualType__c_name(val* self);
val* abstract_compiler__MNullableType__c_name(val* self);
#define COLOR_abstract_compiler__MClass___c_name_cache 13
#define COLOR_abstract_compiler__MProperty___c_name_cache 9
val* abstract_compiler__MPropDef__c_name(val* self);
val* abstract_compiler__MProperty__c_name(val* self);
#define COLOR_abstract_compiler__MPropDef___c_name_cache 7
#define COLOR_model__MClassDef___mmodule 2
#define COLOR_model__MPropDef___mproperty 4
#define COLOR_model__MPropDef_VTVISITOR 1
#define COLOR_model__MMethodDef___is_abstract 11
#define COLOR_modelize_property__ModelBuilder___mpropdef2npropdef 10
#define COLOR_abstract_compiler__APropdef__can_inline 77
#define COLOR_model__MMethod___is_root_init 12
short int abstract_compiler__MMethodDef__can_inline(val* self, val* p0);
#define COLOR_model__MMethodDef___constant_value 14
void abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__APropdef__compile_to_c 76
void abstract_compiler__AClassdef__compile_to_c(val* self, val* p0, val* p1, val* p2);
val* abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1);
#define COLOR_model__MParameter___name 2
val* string__Object__class_name(val* self);
val* location__Location__to_s(val* self);
void abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2);
short int abstract_compiler__APropdef__can_inline(val* self);
#define COLOR_auto_super_init__AMethPropdef___auto_super_inits 19
void array__AbstractArray__clear(val* self);
#define COLOR_typing__CallSite___msignature 7
#define COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite 44
#define COLOR_auto_super_init__AMethPropdef___auto_super_call 20
val* separate_compiler__SeparateCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MMethodDef___is_intern 12
short int abstract_compiler__AMethPropdef__compile_intern_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MMethodDef___is_extern 13
#define COLOR_model__MMethod___is_init 11
short int abstract_compiler__AMethPropdef__compile_externinit_to_c(val* self, val* p0, val* p1, val* p2);
short int abstract_compiler__AMethPropdef__compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_parser_nodes__AMethPropdef___n_block 16
#define COLOR_parser_nodes__AMethPropdef___n_signature 15
#define COLOR_parser_nodes__ASignature___n_params 5
val* parser_nodes__ANodes___91d_93d(val* self, long p0);
#define COLOR_scope__AParam___variable 7
void abstract_compiler__AMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_modelize_property__APropdef___mpropdef 9
extern const struct type type_parser_nodes__ABlockExpr;
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
long parser_nodes__ANodes__length(val* self);
short int abstract_compiler__AMethPropdef__can_inline(val* self);
#define COLOR_model__MSignature___return_mtype 5
void separate_compiler__SeparateCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
void separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1);
val* separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1);
void separate_compiler__SeparateCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_compiler__AbstractCompilerVisitor__calloc_array 46
val* separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1);
val* annotation__Prod__get_single_annotation(val* self, val* p0, val* p1);
val* annotation__AAnnotation__arg_as_string(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor__box_extern 56
val* array__AbstractArray__shift(val* self);
#define COLOR_modelize_property__AAttrPropdef___mreadpropdef 20
#define COLOR_modelize_property__AAttrPropdef___is_lazy 17
#define COLOR_model__MAttributeDef___static_mtype 8
#define COLOR_modelize_property__AAttrPropdef___mlazypropdef 19
val* separate_compiler__SeparateCompilerVisitor__isset_attribute(val* self, val* p0, val* p1);
val* separate_compiler__SeparateCompilerVisitor__read_attribute(val* self, val* p0, val* p1);
val* abstract_compiler__AAttrPropdef__evaluate_expr(val* self, val* p0, val* p1);
#define COLOR_modelize_property__AAttrPropdef___mwritepropdef 21
void abstract_compiler__AAttrPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2);
#define COLOR_modelize_property__AAttrPropdef___has_value 18
val* NEW_abstract_compiler__Frame(const struct type* type);
extern const struct type type_abstract_compiler__Frame;
#define COLOR_abstract_compiler__Frame__visitor_61d 31
#define COLOR_abstract_compiler__Frame__mpropdef_61d 33
#define COLOR_abstract_compiler__Frame__receiver_61d 35
#define COLOR_abstract_compiler__Frame__arguments_61d 37
#define COLOR_parser_nodes__AAttrPropdef___n_expr 14
#define COLOR_parser_nodes__AAttrPropdef___n_block 15
#define COLOR_modelize_property__AClassdef___mfree_init 9
short int model__MPropDef__is_intro(val* self);
val* abstract_compiler__AExpr__expr(val* self, val* p0);
void abstract_compiler__AExpr__stmt(val* self, val* p0);
void abstract_compiler__ABlockExpr__stmt(val* self, val* p0);
val* abstract_collection__SequenceRead__last(val* self);
val* abstract_compiler__ABlockExpr__expr(val* self, val* p0);
#define COLOR_scope__AVardeclExpr___variable 14
#define COLOR_parser_nodes__AVardeclExpr___n_expr 13
void abstract_compiler__AVardeclExpr__stmt(val* self, val* p0);
#define COLOR_scope__AVarFormExpr___variable 10
#define COLOR_typing__AExpr___mtype 5
val* abstract_compiler__AVarExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AAssignFormExpr___n_value 12
val* abstract_compiler__AVarAssignExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AReassignFormExpr___n_value 12
#define COLOR_typing__AReassignFormExpr___reassign_callsite 13
void abstract_compiler__AVarReassignExpr__stmt(val* self, val* p0);
val* abstract_compiler__ASelfExpr__expr(val* self, val* p0);
#define COLOR_scope__AEscapeExpr___escapemark 11
void abstract_compiler__AEscapeExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__AReturnExpr___n_expr 10
void abstract_compiler__AReturnExpr__stmt(val* self, val* p0);
void abstract_compiler__AAbortExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__AIfExpr___n_expr 10
#define COLOR_parser_nodes__AIfExpr___n_then 11
#define COLOR_parser_nodes__AIfExpr___n_else 12
void abstract_compiler__AIfExpr__stmt(val* self, val* p0);
val* abstract_compiler__AIfExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AIfexprExpr___n_expr 10
#define COLOR_parser_nodes__AIfexprExpr___n_then 12
#define COLOR_parser_nodes__AIfexprExpr___n_else 14
val* abstract_compiler__AIfexprExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__ADoExpr___n_block 11
#define COLOR_scope__ADoExpr___break_mark 12
void abstract_compiler__ADoExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__AWhileExpr___n_expr 11
#define COLOR_parser_nodes__AWhileExpr___n_block 13
#define COLOR_scope__AWhileExpr___continue_mark 15
#define COLOR_scope__AWhileExpr___break_mark 14
void abstract_compiler__AWhileExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__ALoopExpr___n_block 11
#define COLOR_scope__ALoopExpr___continue_mark 13
#define COLOR_scope__ALoopExpr___break_mark 12
void abstract_compiler__ALoopExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__AForExpr___n_expr 12
#define COLOR_typing__AForExpr___method_iterator 19
#define COLOR_typing__AForExpr___method_is_ok 20
#define COLOR_scope__AForExpr___variables 15
#define COLOR_typing__AForExpr___method_item 21
#define COLOR_typing__AForExpr___method_key 23
#define COLOR_parser_nodes__AForExpr___n_block 14
#define COLOR_scope__AForExpr___continue_mark 17
#define COLOR_typing__AForExpr___method_next 22
#define COLOR_scope__AForExpr___break_mark 16
#define COLOR_typing__AForExpr___method_finish 24
void abstract_compiler__AForExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__AAssertExpr___n_expr 11
#define COLOR_parser_nodes__AAssertExpr___n_else 12
#define COLOR_parser_nodes__AAssertExpr___n_id 10
val* lexer_work__Token__text(val* self);
void abstract_compiler__AAssertExpr__stmt(val* self, val* p0);
#define COLOR_parser_nodes__AOrExpr___n_expr 9
#define COLOR_parser_nodes__AOrExpr___n_expr2 10
val* abstract_compiler__AOrExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AImpliesExpr___n_expr 9
#define COLOR_parser_nodes__AImpliesExpr___n_expr2 10
val* abstract_compiler__AImpliesExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AAndExpr___n_expr 9
#define COLOR_parser_nodes__AAndExpr___n_expr2 10
val* abstract_compiler__AAndExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__ANotExpr___n_expr 10
val* abstract_compiler__ANotExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AOrElseExpr___n_expr 9
#define COLOR_parser_nodes__AOrElseExpr___n_expr2 10
val* abstract_compiler__AOrElseExpr__expr(val* self, val* p0);
#define COLOR_literal__AIntExpr___value 9
val* abstract_compiler__AIntExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AFloatExpr___n_float 9
val* abstract_compiler__AFloatExpr__expr(val* self, val* p0);
#define COLOR_literal__ACharExpr___value 10
val* string__Char__to_s(char self);
val* abstract_compiler__ACharExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AArrayExpr___n_exprs 10
#define COLOR_parser_nodes__AExprs___n_exprs 4
val* separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1);
val* abstract_compiler__AArrayExpr__expr(val* self, val* p0);
#define COLOR_literal__AStringFormExpr___value 10
val* abstract_compiler__AStringFormExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__ASuperstringExpr___n_exprs 9
extern const struct type type_parser_nodes__AStringFormExpr;
val* abstract_compiler__ASuperstringExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__ARangeExpr___n_expr 9
#define COLOR_parser_nodes__ARangeExpr___n_expr2 10
#define COLOR_typing__ARangeExpr___init_callsite 11
val* abstract_compiler__ACrangeExpr__expr(val* self, val* p0);
val* abstract_compiler__AOrangeExpr__expr(val* self, val* p0);
val* abstract_compiler__ATrueExpr__expr(val* self, val* p0);
val* abstract_compiler__AFalseExpr__expr(val* self, val* p0);
val* abstract_compiler__ANullExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AIsaExpr___n_expr 9
#define COLOR_typing__AIsaExpr___cast_type 11
val* abstract_compiler__AIsaExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AAsCastExpr___n_expr 9
val* abstract_compiler__AAsCastExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AAsNotnullExpr___n_expr 9
val* abstract_compiler__AAsNotnullExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AParExpr___n_expr 10
val* abstract_compiler__AParExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AOnceExpr___n_expr 10
val* abstract_compiler__AOnceExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__ASendExpr___n_expr 9
#define COLOR_typing__ASendExpr___callsite 10
val* typing__ASendExpr__raw_arguments(val* self);
val* abstract_compiler__ASendExpr__expr(val* self, val* p0);
#define COLOR_typing__ASendReassignFormExpr___write_callsite 17
void abstract_compiler__ASendReassignFormExpr__stmt(val* self, val* p0);
#define COLOR_typing__ASuperExpr___callsite 12
#define COLOR_parser_nodes__ASuperExpr___n_args 11
#define COLOR_typing__ASuperExpr___mpropdef 13
val* abstract_compiler__ASuperExpr__expr(val* self, val* p0);
#define COLOR_typing__ANewExpr___recvtype 14
#define COLOR_parser_nodes__ANewExpr___n_args 12
extern const struct type type_model__MGenericType;
#define COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance 45
#define COLOR_typing__ANewExpr___callsite 13
val* abstract_compiler__ANewExpr__expr(val* self, val* p0);
#define COLOR_parser_nodes__AAttrFormExpr___n_expr 9
#define COLOR_typing__AAttrFormExpr___mproperty 15
val* abstract_compiler__AAttrExpr__expr(val* self, val* p0);
val* abstract_compiler__AAttrAssignExpr__expr(val* self, val* p0);
void abstract_compiler__AAttrReassignExpr__stmt(val* self, val* p0);
val* abstract_compiler__AIssetAttrExpr__expr(val* self, val* p0);
#define COLOR_abstract_compiler__MModule___properties_cache 20
extern const struct type type_hash_collection__HashSetmodel__MProperty;
extern const struct type type_array__Arraymodel__MClass;
val* model__MModule__flatten_mclass_hierarchy(val* self);
short int poset__POSet__has(val* self, val* p0);
val* model__MClass__in_hierarchy(val* self, val* p0);
val* abstract_compiler__MModule__properties(val* self, val* p0);
#define COLOR_model__MClass___mclassdefs 8
short int poset__POSetElement___60d_61d(val* self, val* p0);
#define COLOR_model__MClassDef___intro_mproperties 9
#define COLOR_abstract_collection__Map___91d_93d_61d 40
#define COLOR_abstract_collection__MapRead___91d_93d 31
val* NEW_toolcontext__ToolContext(const struct type* type);
extern const struct type type_toolcontext__ToolContext;
#define COLOR_toolcontext__ToolContext___tooldescription 20
val* string__Object__args(val* self);
void nith__ToolContext__process_options(val* self, val* p0);
val* NEW_model_base__Model(const struct type* type);
extern const struct type type_model_base__Model;
val* NEW_modelbuilder__ModelBuilder(const struct type* type);
extern const struct type type_modelbuilder__ModelBuilder;
void modelbuilder__ModelBuilder__init(val* self, val* p0, val* p1);
#define COLOR_opts__OptionContext___rest 1
val* modelbuilder__ModelBuilder__parse(val* self, val* p0);
void modelbuilder__ModelBuilder__run_phases(val* self);
extern const struct type type_array__Arraymmodule__MModule;
void modelbuilder__ToolContext__run_global_phases(val* self, val* p0);
void abstract_compiler__Sys__main(val* self);
