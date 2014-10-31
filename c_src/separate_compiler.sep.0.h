#include "nit.common.h"
#define COLOR_separate_compiler__ToolContext___opt_separate 66
#define COLOR_separate_compiler__ToolContext___opt_no_inline_intern 67
#define COLOR_separate_compiler__ToolContext___opt_no_union_attribute 68
#define COLOR_separate_compiler__ToolContext___opt_no_shortcut_equate 69
#define COLOR_separate_compiler__ToolContext___opt_inline_coloring_numbers 70
#define COLOR_separate_compiler__ToolContext___opt_inline_some_methods 71
#define COLOR_separate_compiler__ToolContext___opt_direct_call_monomorph 72
#define COLOR_separate_compiler__ToolContext___opt_skip_dead_methods 73
#define COLOR_separate_compiler__ToolContext___opt_semi_global 74
#define COLOR_separate_compiler__ToolContext___opt_colo_dead_methods 75
#define COLOR_separate_compiler__ToolContext___opt_tables_metrics 76
#define COLOR_separate_compiler__ToolContext__init 136
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 74
void opts__OptionContext__add_option(val* self, val* p0);
void separate_compiler__ToolContext__init(val* self);
#define COLOR_separate_compiler__ToolContext__process_options 140
#define COLOR_opts__Option___value 6
#define COLOR_opts__Option_VTVALUE 0
extern const struct type type_kernel__Bool;
val* BOX_kernel__Bool(short int);
void separate_compiler__ToolContext__process_options(val* self, val* p0);
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
val* rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(val* self, val* p0);
void separate_compiler__ModelBuilder__run_separate_compiler(val* self, val* p0, val* p1);
void separate_compiler__SeparateCompilerPhase__process_mainmodule(val* self, val* p0, val* p1);
#include "time_nit.h"
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
val* string__NativeString__to_s_with_length(char* self, long p0);
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
val* NEW_separate_compiler__SeparateCompiler(const struct type* type);
extern const struct type type_separate_compiler__SeparateCompiler;
void separate_compiler__SeparateCompiler__init(val* self, val* p0, val* p1, val* p2);
void abstract_compiler__AbstractCompiler__compile_header(val* self);
#define COLOR_mmodule__MModule___name 4
extern const struct type type_array__Arraykernel__Object;
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_string__Object__to_s 9
val* abstract_compiler__AbstractCompiler__new_file(val* self, val* p0);
void separate_compiler__SeparateCompiler__do_property_coloring(val* self);
#define COLOR_mmodule__MModule___in_importation 7
val* poset__POSetElement__greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
#define COLOR_model__MModule___intro_mclasses 12
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_separate_compiler__SeparateCompiler__compile_class_to_c 99
void array__ArrayIterator__next(val* self);
#define COLOR_abstract_collection__Iterator__next 32
void abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(val* self);
void abstract_compiler__AbstractCompiler__compile_main_function(val* self);
void abstract_compiler__AbstractCompiler__compile_finalizer_function(val* self);
void separate_compiler__SeparateCompiler__compile_module_to_c(val* self, val* p0);
val* separate_compiler__SeparateCompiler__do_type_coloring(val* self);
val* poset__POSet__iterator(val* self);
void separate_compiler__SeparateCompiler__compile_type_to_c(val* self, val* p0);
#define COLOR_separate_compiler__SeparateCompiler___undead_types 16
short int poset__POSet__has(val* self, val* p0);
void separate_compiler__SeparateCompiler__display_stats(val* self);
extern const struct type type_kernel__Int;
val* BOX_kernel__Int(long);
void abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0);
#define COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables 13
#define COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct 14
#define COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline 15
#define COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis 15
#define COLOR_separate_compiler__SeparateCompiler___live_unresolved_types 17
#define COLOR_separate_compiler__SeparateCompiler___type_ids 18
#define COLOR_separate_compiler__SeparateCompiler___type_colors 19
#define COLOR_separate_compiler__SeparateCompiler___opentype_colors 20
#define COLOR_separate_compiler__SeparateCompiler___method_colors 21
#define COLOR_separate_compiler__SeparateCompiler___attr_colors 22
void abstract_compiler__AbstractCompiler__init(val* self, val* p0, val* p1);
val* NEW_abstract_compiler__CodeWriter(const struct type* type);
extern const struct type type_abstract_compiler__CodeWriter;
void abstract_compiler__CodeWriter__init(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler___header 5
void separate_compiler__SeparateCompiler__compile_box_kinds(val* self);
void abstract_compiler__CodeWriter__add_decl(val* self, val* p0);
void separate_compiler__SeparateCompiler__compile_header_attribute_structs(val* self);
void separate_compiler__SeparateCompiler__compile_header_structs(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___modelbuilder 3
#define COLOR_separate_compiler__SeparateCompiler___box_kinds 23
val* hash_collection__HashMap__iterator(val* self);
short int hash_collection__HashMapIterator__is_ok(val* self);
val* hash_collection__HashMapIterator__key(val* self);
val* hash_collection__HashMapIterator__item(val* self);
#define COLOR_model__MClass___mclass_type 10
#define COLOR_model__MClassType___mclass 4
#define COLOR_model__MClass___name 3
short int string__FlatString___61d_61d(val* self, val* p0);
val* abstract_compiler__MClassType__ctype_extern(val* self);
val* abstract_compiler__MClassType__ctypename(val* self);
void hash_collection__HashMapIterator__next(val* self);
extern const struct type type_array__Arraystring__String;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler___mainmodule 1
#define COLOR_mmodule__MModule___model 2
val* model__Model__get_mclasses_by_name(val* self, val* p0);
short int array__Array___61d_61d(val* self, val* p0);
#define COLOR_array__AbstractArrayRead___length 0
val* string__Collection__join(val* self, val* p0);
void file__Object__print(val* self, val* p0);
val* abstract_collection__SequenceRead__first(val* self);
long hash_collection__HashMap__length(val* self);
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_model__MClass___kind 6
val* model__Object__extern_kind(val* self);
#define COLOR_kernel__Object___61d_61d 2
val* model__MModule__get_primitive_class(val* self, val* p0);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
long separate_compiler__SeparateCompiler__box_kind_of(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler__new_visitor 41
#define COLOR_abstract_collection__MapRead__iterator 34
#define COLOR_abstract_collection__MapIterator__is_ok 34
#define COLOR_abstract_collection__MapIterator__key 32
#define COLOR_abstract_collection__MapIterator__item 31
void separate_compiler__SeparateCompiler__compile_color_const(val* self, val* p0, val* p1, long p2);
#define COLOR_abstract_collection__MapIterator__next 33
void separate_compiler__SeparateCompiler__compile_color_consts(val* self, val* p0);
#define COLOR_separate_compiler__SeparateCompiler___color_consts_done 24
short int hash_collection__HashSet__has(val* self, val* p0);
extern const struct type type_model__MProperty;
val* separate_compiler__MProperty__const_color(val* self);
void abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0);
extern const struct type type_model__MPropDef;
val* separate_compiler__MPropDef__const_color(val* self);
extern const struct type type_model__MType;
val* separate_compiler__MType__const_color(val* self);
void hash_collection__HashSet__add(val* self, val* p0);
val* model__MModule__flatten_mclass_hierarchy(val* self);
val* NEW_hash_collection__HashSet(const struct type* type);
extern const struct type type_hash_collection__HashSetmodel__MClass;
void hash_collection__HashSet__from(val* self, val* p0);
val* NEW_coloring__POSetColorer(const struct type* type);
extern const struct type type_coloring__POSetColorermodel__MClass;
#define COLOR_kernel__Object__init 7
void coloring__POSetColorer__colorize(val* self, val* p0);
extern const struct type type_array__Arraymodel__MMethod;
val* NEW_hash_collection__HashMap(const struct type* type);
extern const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setseparate_compiler__PropertyLayoutElement;
extern const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MAttribute;
val* hash_collection__HashSet__iterator(val* self);
extern const struct type type_hash_collection__HashSetseparate_compiler__PropertyLayoutElement;
extern const struct type type_hash_collection__HashSetmodel__MAttribute;
val* abstract_compiler__MModule__properties(val* self, val* p0);
extern const struct type type_model__MMethod;
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods 8
void array__Array__add(val* self, val* p0);
#define COLOR_abstract_collection__SimpleCollection__add 58
extern const struct type type_model__MAttribute;
extern const struct type type_hash_collection__HashSetmodel__MMethodDef;
#define COLOR_model__MModule___mclassdefs 13
#define COLOR_model__MClassDef___mpropdefs 10
extern const struct type type_model__MMethodDef;
#define COLOR_modelize_property__MPropDef___has_supercall 6
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends 11
#define COLOR_model__MPropDef___mclassdef 3
#define COLOR_model__MClassDef___mclass 3
val* model__MClass__in_hierarchy(val* self, val* p0);
val* poset__POSetElement__smallers(val* self);
val* NEW_coloring__POSetBucketsColorer(const struct type* type);
extern const struct type type_coloring__POSetBucketsColorermodel__MClassseparate_compiler__PropertyLayoutElement;
val* coloring__POSetColorer__conflicts(val* self);
void coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1);
val* coloring__POSetBucketsColorer__colorize(val* self, val* p0);
val* separate_compiler__SeparateCompiler__build_method_tables(val* self, val* p0, val* p1);
#define COLOR_separate_compiler__SeparateCompiler___method_tables 27
extern const struct type type_coloring__POSetBucketsColorermodel__MClassmodel__MAttribute;
val* separate_compiler__SeparateCompiler__build_attr_tables(val* self, val* p0);
#define COLOR_separate_compiler__SeparateCompiler___attr_tables 28
extern const struct type type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef;
extern const struct type type_array__Arraynullable_model__MPropDef;
#define COLOR_model__MClass___intro 9
#define COLOR_model__MClassDef___bound_mtype 4
short int abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_abstract_collection__MapRead___91d_93d 31
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
long kernel__Int__successor(long self, long p0);
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1);
val* model__MClassType__collect_mclassdefs(val* self, val* p0);
#define COLOR_abstract_collection__Collection__has 40
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1);
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types 2
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
extern const struct type type_hash_collection__HashSetmodel__MType;
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
#define COLOR_hash_collection__HashMap___keys 7
val* separate_compiler__SeparateCompiler__poset_from_mtypes(val* self, val* p0);
extern const struct type type_coloring__POSetColorermodel__MType;
val* coloring__POSetColorer__ids(val* self);
val* coloring__POSetColorer__colors(val* self);
val* separate_compiler__SeparateCompiler__build_type_tables(val* self, val* p0);
#define COLOR_separate_compiler__SeparateCompiler___type_tables 25
void separate_compiler__SeparateCompiler__compile_resolution_tables(val* self, val* p0);
val* NEW_poset__POSet(const struct type* type);
extern const struct type type_poset__POSetmodel__MType;
val* poset__POSet__add_node(val* self, val* p0);
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
void poset__POSet__add_edge(val* self, val* p0, val* p1);
extern const struct type type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType;
extern const struct type type_array__Arraynullable_model__MType;
val* poset__POSet___91d_93d(val* self, val* p0);
extern const struct type type_hash_collection__HashMapmodel__MClassTypeabstract_collection__Setmodel__MType;
val* NEW_coloring__BucketsColorer(const struct type* type);
extern const struct type type_coloring__BucketsColorermodel__MTypemodel__MType;
val* coloring__BucketsColorer__colorize(val* self, val* p0);
val* separate_compiler__SeparateCompiler__build_resolution_tables(val* self, val* p0);
#define COLOR_separate_compiler__SeparateCompiler___resolution_tables 26
#define COLOR_abstract_collection__MapRead__values 35
extern const struct type type_hash_collection__HashMapmodel__MTypekernel__Int;
extern const struct type type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType;
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
val* separate_compiler__MMethodDef__separate_runtime_function(val* self);
#define COLOR_abstract_compiler__AbstractRuntimeFunction__compile_to_c 37
val* separate_compiler__MMethodDef__virtual_runtime_function(val* self);
#define COLOR_model__MType__need_anchor 39
extern const struct type type_model__MClassType;
#define COLOR_abstract_compiler__MType__c_name 55
val* NEW_separate_compiler__SeparateCompilerVisitor(const struct type* type);
extern const struct type type_separate_compiler__SeparateCompilerVisitor;
void abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0);
extern const struct type type_model__MNullableType;
#define COLOR_model__MType__as_notnullable 44
short int array__AbstractArrayRead__is_empty(val* self);
void separate_compiler__SeparateCompiler__compile_type_resolution_table(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0);
#define COLOR_model__MType__resolve_for 41
val* abstract_compiler__MClass__c_name(val* self);
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes 4
val* abstract_compiler__MClassType__ctype(val* self);
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_model__MClass___intro_mmodule 2
val* abstract_compiler__AbstractRuntimeFunction__c_name(val* self);
#define COLOR_abstract_compiler__AbstractCompilerVisitor___compiler 0
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__RuntimeVariable___is_exact 3
void separate_compiler__SeparateCompiler__hardening_live_type(val* self, val* p0, val* p1);
val* abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0);
#define COLOR_model__MClassType___arguments 5
#define COLOR_abstract_compiler__MType__ctype 52
#define COLOR_model__MModule___pointer_type 16
void abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2);
void abstract_compiler__AbstractCompilerVisitor__set_finalizer(val* self, val* p0);
void separate_compiler__SeparateCompiler__compile_class_to_c(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler_VTVISITOR 0
#define COLOR_abstract_compiler__ToolContext___opt_hardening 53
val* separate_compiler__SeparateCompiler__new_visitor(val* self);
#define COLOR_separate_compiler__SeparateCompiler__display_stats 115
#define COLOR_separate_compiler__SeparateCompiler__display_sizes 109
#define COLOR_abstract_compiler__ToolContext___opt_isset_checks_metrics 62
void separate_compiler__SeparateCompiler__display_isset_checks(val* self);
val* abstract_compiler__AbstractCompiler__div(val* self, long p0, long p1);
void separate_compiler__SeparateCompiler__display_sizes(val* self);
#define COLOR_separate_compiler__SeparateCompiler___isset_checks_count 29
#define COLOR_separate_compiler__SeparateCompiler___attr_read_count 30
#define COLOR_separate_compiler__SeparateCompiler__compile_nitni_structs 116
void separate_compiler__SeparateCompiler__compile_nitni_structs(val* self);
#define COLOR_separate_compiler__SeparateCompiler__finalize_ffi_for_module 117
void separate_compiler__SeparateCompiler__finalize_ffi_for_module(val* self, val* p0);
#define COLOR_model__MMethodDef___msignature 8
#define COLOR_model__MClassDef___mmodule 2
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_abstract_compiler__RuntimeVariable___mtype 1
val* separate_compiler__SeparateCompilerVisitor__autobox(val* self, val* p0, val* p1);
void abstract_collection__Sequence__first_61d(val* self, val* p0);
long model__MSignature__arity(val* self);
#define COLOR_model__MSignature___mparameters 4
#define COLOR_model__MParameter___mtype 3
#define COLOR_model__MSignature___vararg_rank 6
void separate_compiler__SeparateCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
#define COLOR_model__MPropDef___mproperty 4
#define COLOR_model__MMethod___is_init 11
#define COLOR_model__MMethodDef___is_extern 13
#define COLOR_abstract_compiler__AbstractCompilerVisitor__unbox_extern 57
void separate_compiler__SeparateCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1);
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1);
val* abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__new_var_extern(val* self, val* p0);
val* separate_compiler__SeparateCompilerVisitor__unbox_extern(val* self, val* p0, val* p1);
val* separate_compiler__SeparateCompilerVisitor__box_extern(val* self, val* p0, val* p1);
val* separate_compiler__SeparateCompilerVisitor__type_info(val* self, val* p0);
#define COLOR_typing__CallSite___mproperty 5
#define COLOR_model__MMethod___is_root_init 12
val* rapid_type_analysis__RapidTypeAnalysis__live_targets(val* self, val* p0);
#define COLOR_abstract_collection__Collection__length 39
val* separate_compiler__SeparateCompilerVisitor__before_send(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__Collection__first 41
val* separate_compiler__SeparateCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
void abstract_compiler__AbstractCompilerVisitor__assign(val* self, val* p0, val* p1);
#define COLOR_separate_compiler__SeparateCompilerVisitor__compile_callsite 113
val* separate_compiler__SeparateCompilerVisitor__compile_callsite(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__RuntimeVariable___mcasttype 2
#define COLOR_abstract_compiler__AbstractCompiler___realmainmodule 2
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_send(val* self, val* p0, val* p1, val* p2);
val* separate_compiler__SeparateCompilerVisitor__table_send(val* self, val* p0, val* p1, val* p2);
val* separate_compiler__SeparateCompilerVisitor__send(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__ToolContext___opt_no_check_null 58
#define COLOR_model__MProperty___name 3
val* abstract_compiler__AbstractCompilerVisitor__bool_type(val* self);
extern const struct type type_model__MNullType;
val* abstract_compiler__RuntimeVariable__inspect(val* self);
#define COLOR_abstract_compiler__ToolContext___opt_invocation_metrics 61
#define COLOR_model__MProperty___intro 6
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0);
#define COLOR_model__MSignature___return_mtype 5
val* NEW_string__FlatBuffer(const struct type* type);
extern const struct type type_string__FlatBuffer;
void string__FlatBuffer__append(val* self, val* p0);
#define COLOR_model__MMethodDef___is_intern 12
short int abstract_compiler__MMethodDef__can_inline(val* self, val* p0);
val* NEW_abstract_compiler__Frame(const struct type* type);
extern const struct type type_abstract_compiler__Frame;
#define COLOR_abstract_compiler__Frame__visitor_61d 31
#define COLOR_abstract_compiler__Frame__mpropdef_61d 33
#define COLOR_abstract_compiler__Frame__receiver_61d 35
#define COLOR_abstract_compiler__Frame__arguments_61d 37
#define COLOR_abstract_compiler__Frame___returnlabel 5
#define COLOR_abstract_compiler__Frame___returnvar 4
#define COLOR_abstract_compiler__AbstractCompilerVisitor___frame 2
val* abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1);
val* abstract_compiler__MPropDef__c_name(val* self);
val* abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send(val* self, val* p0, val* p1, val* p2);
val* separate_compiler__SeparateCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2);
extern const struct type type_array__Arrayabstract_compiler__RuntimeVariable;
val* separate_compiler__SeparateCompilerVisitor__array_instance(val* self, val* p0, val* p1);
val* separate_compiler__SeparateCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3);
void abstract_compiler__AbstractCompilerVisitor__check_recv_notnull(val* self, val* p0);
#define COLOR_model__MAttributeDef___static_mtype 8
val* separate_compiler__SeparateCompilerVisitor__isset_attribute(val* self, val* p0, val* p1);
val* abstract_compiler__AbstractCompilerVisitor__object_type(val* self);
val* model__MType__as_nullable(val* self);
#define COLOR_abstract_compiler__ToolContext___opt_no_check_attr_isset 55
#define COLOR_abstract_compiler__MType__ctypename 54
val* separate_compiler__SeparateCompilerVisitor__read_attribute(val* self, val* p0, val* p1);
void separate_compiler__SeparateCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2);
val* string__Text__escape_to_c(val* self);
void separate_compiler__SeparateCompilerVisitor__hardening_live_open_type(val* self, val* p0);
void separate_compiler__SeparateCompilerVisitor__hardening_cast_type(val* self, val* p0);
extern const struct type type_model__MGenericType;
#define COLOR_model__MGenericType___need_anchor 10
#define COLOR_abstract_compiler__Frame___mpropdef 1
void separate_compiler__SeparateCompilerVisitor__link_unresolved_type(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__Frame___arguments 3
val* separate_compiler__SeparateCompilerVisitor__init_instance(val* self, val* p0);
short int separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0);
#define COLOR_model__MNullableType___mtype 4
#define COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics 60
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped 14
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved 13
val* string__String__to_s(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved 12
val* separate_compiler__SeparateCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2);
val* separate_compiler__SeparateCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1);
val* model__MType__name(val* self);
val* separate_compiler__SeparateCompilerVisitor__class_name_string(val* self, val* p0);
short int separate_compiler__SeparateCompilerVisitor__can_be_primitive(val* self, val* p0);
val* separate_compiler__SeparateCompilerVisitor__equal_test(val* self, val* p0, val* p1);
val* model__Object__interface_kind(val* self);
val* abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0);
extern const struct type type_array__Arraymodel__MType;
val* model__MClass__get_mtype(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor__init_instance 83
val* abstract_compiler__AbstractCompilerVisitor__int_instance(val* self, long p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor__native_array_instance 45
val* abstract_compiler__AbstractCompilerVisitor__get_property(val* self, val* p0, val* p1);
val* abstract_compiler__MGenericType__c_name(val* self);
val* separate_compiler__SeparateCompilerVisitor__native_array_instance(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0);
void separate_compiler__SeparateCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MClass___mparameters 5
void separate_compiler__SeparateCompilerVisitor__calloc_array(val* self, val* p0, val* p1);
#define COLOR_abstract_collection__Map___91d_93d_61d 40
#define COLOR_separate_compiler__MMethodDef___separate_runtime_function_cache 15
val* NEW_separate_compiler__SeparateRuntimeFunction(const struct type* type);
extern const struct type type_separate_compiler__SeparateRuntimeFunction;
#define COLOR_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d 32
#define COLOR_separate_compiler__MMethodDef___virtual_runtime_function_cache 16
val* NEW_separate_compiler__VirtualRuntimeFunction(const struct type* type);
extern const struct type type_separate_compiler__VirtualRuntimeFunction;
#define COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
val* separate_compiler__SeparateRuntimeFunction__build_c_name(val* self);
#define COLOR_model__MPropDef___to_s 5
val* separate_compiler__SeparateRuntimeFunction__to_s(val* self);
#define COLOR_abstract_compiler__AbstractRuntimeFunction_VTCOMPILER 0
val* NEW_abstract_compiler__RuntimeVariable(const struct type* type);
extern const struct type type_abstract_compiler__RuntimeVariable;
void abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2);
short int string__Text__has_substring(val* self, val* p0, long p1);
#define COLOR_abstract_compiler__AbstractCompiler___names 0
#define COLOR_model__MPropDef___location 2
#define COLOR_location__Location___file 0
#define COLOR_location__SourceFile___filename 0
#define COLOR_location__Location___line_start 1
void separate_compiler__SeparateRuntimeFunction__compile_to_c(val* self, val* p0);
val* separate_compiler__VirtualRuntimeFunction__build_c_name(val* self);
val* separate_compiler__VirtualRuntimeFunction__to_s(val* self);
void separate_compiler__VirtualRuntimeFunction__compile_to_c(val* self, val* p0);
val* abstract_compiler__MProperty__c_name(val* self);
#define COLOR_modelize_property__APropdef___mpropdef 9
#define COLOR_separate_compiler__AMethPropdef__can_inline 103
short int separate_compiler__AMethPropdef__can_inline(val* self);
