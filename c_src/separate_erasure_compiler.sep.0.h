#include "nit.common.h"
#define COLOR_separate_erasure_compiler__ToolContext___opt_erasure 70
#define COLOR_separate_erasure_compiler__ToolContext___opt_rta 71
#define COLOR_separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast 72
#define COLOR_separate_erasure_compiler__ToolContext__init 121
#define COLOR_toolcontext__ToolContext___option_context 5
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arrayopts__Option;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArrayopts__Option;
#define COLOR_array__Array__with_native 65
void opts__OptionContext__add_option(val* self, val* p0);
void separate_erasure_compiler__ToolContext__init(val* self);
#define COLOR_phase__Phase___toolcontext 0
#define COLOR_opts__Option___value 6
val* modelbuilder__ToolContext__modelbuilder(val* self);
val* rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(val* self, val* p0);
void separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler(val* self, val* p0, val* p1);
void separate_erasure_compiler__ErasureCompilerPhase__process_mainmodule(val* self, val* p0, val* p1);
#include "time_nit.h"
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
val* string__NativeString__to_s_with_length(char* self, long p0);
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
val* NEW_separate_erasure_compiler__SeparateErasureCompiler(const struct type* type);
extern const struct type type_separate_erasure_compiler__SeparateErasureCompiler;
void separate_erasure_compiler__SeparateErasureCompiler__init(val* self, val* p0, val* p1, val* p2);
void abstract_compiler__AbstractCompiler__compile_header(val* self);
#define COLOR_mmodule__MModule___name 4
extern const struct type type_array__Arraykernel__Object;
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_string__Object__to_s 7
val* abstract_compiler__AbstractCompiler__new_file(val* self, val* p0);
void separate_compiler__SeparateCompiler__do_property_coloring(val* self);
#define COLOR_mmodule__MModule___in_importation 7
val* poset__POSetElement__greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_model__MModule___intro_mclasses 12
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
void separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c(val* self, val* p0);
void array__ArrayIterator__next(val* self);
#define COLOR_abstract_collection__Iterator__next 30
#define COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_colors 33
void separate_compiler__SeparateCompiler__compile_color_consts(val* self, val* p0);
void abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions(val* self);
void abstract_compiler__AbstractCompiler__compile_main_function(val* self);
void separate_compiler__SeparateCompiler__compile_module_to_c(val* self, val* p0);
void separate_compiler__SeparateCompiler__display_stats(val* self);
extern const struct type type_kernel__Int;
val* BOX_kernel__Int(long);
void abstract_compiler__ModelBuilder__write_and_make(val* self, val* p0);
#define COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_ids 31
#define COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_colors 32
void separate_compiler__SeparateCompiler__init(val* self, val* p0, val* p1, val* p2);
val* model__MModule__flatten_mclass_hierarchy(val* self);
val* NEW_hash_collection__HashSet(const struct type* type);
extern const struct type type_hash_collection__HashSetmodel__MClass;
void hash_collection__HashSet__from(val* self, val* p0);
val* NEW_coloring__POSetColorer(const struct type* type);
extern const struct type type_coloring__POSetColorermodel__MClass;
void coloring__POSetColorer__colorize(val* self, val* p0);
val* coloring__POSetColorer__ids(val* self);
val* coloring__POSetColorer__colors(val* self);
val* separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables(val* self, val* p0);
#define COLOR_separate_erasure_compiler__SeparateErasureCompiler___class_tables 34
val* NEW_hash_collection__HashMap(const struct type* type);
extern const struct type type_hash_collection__HashMapmodel__MClassabstract_collection__Setmodel__MVirtualTypeProp;
void hash_collection__HashMap__init(val* self);
val* hash_collection__HashSet__iterator(val* self);
extern const struct type type_hash_collection__HashSetmodel__MVirtualTypeProp;
void hash_collection__HashSet__init(val* self);
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__AbstractCompiler___mainmodule 1
val* abstract_compiler__MModule__properties(val* self, val* p0);
extern const struct type type_model__MVirtualTypeProp;
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
#define COLOR_abstract_collection__SimpleCollection__add 51
val* NEW_coloring__POSetBucketsColorer(const struct type* type);
extern const struct type type_coloring__POSetBucketsColorermodel__MClassmodel__MVirtualTypeProp;
val* coloring__POSetColorer__conflicts(val* self);
void coloring__POSetBucketsColorer__init(val* self, val* p0, val* p1);
val* coloring__POSetBucketsColorer__colorize(val* self, val* p0);
val* separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables(val* self, val* p0);
#define COLOR_separate_erasure_compiler__SeparateErasureCompiler___vt_tables 35
extern const struct type type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef;
extern const struct type type_array__Arraynullable_model__MPropDef;
void array__Array__init(val* self);
extern const struct type type_array__Arraymodel__MClass;
short int poset__POSet__has(val* self, val* p0);
val* model__MClass__in_hierarchy(val* self, val* p0);
val* array__Collection__to_a(val* self);
void model__MModule__linearize_mclasses(val* self, val* p0);
#define COLOR_abstract_collection__MapRead___91d_93d 29
long array__AbstractArrayRead__length(val* self);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
void array__Array___91d_93d_61d(val* self, long p0, val* p1);
#define COLOR_model__MProperty___mpropdefs 4
#define COLOR_model__MPropDef___mclassdef 2
#define COLOR_model__MClassDef___mclass 2
extern const struct type type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MClass;
extern const struct type type_array__Arraynullable_model__MClass;
#define COLOR_abstract_compiler__AbstractCompiler___header 5
void abstract_compiler__CodeWriter__add_decl(val* self, val* p0);
void separate_compiler__SeparateCompiler__compile_header_attribute_structs(val* self);
void separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs(val* self);
val* model__MClass__intro(val* self);
#define COLOR_model__MClassDef___bound_mtype 3
val* abstract_compiler__MClass__c_name(val* self);
val* separate_compiler__MClass__c_instance_name(val* self);
#define COLOR_separate_compiler__SeparateCompiler___method_tables 27
#define COLOR_separate_compiler__SeparateCompiler___attr_tables 28
val* separate_erasure_compiler__SeparateErasureCompiler__new_visitor(val* self);
#define COLOR_separate_compiler__SeparateCompiler___runtime_type_analysis 15
#define COLOR_model__MClass___kind 4
val* model__Object__abstract_kind(val* self);
val* model__Object__interface_kind(val* self);
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes 4
short int hash_collection__HashSet__has(val* self, val* p0);
val* abstract_compiler__MClassType__ctype(val* self);
short int string__FlatString___61d_61d(val* self, val* p0);
#define COLOR_model__MClass___name 2
void abstract_compiler__AbstractCompilerVisitor__add_decl(val* self, val* p0);
void abstract_compiler__AbstractCompiler__provide_declaration(val* self, val* p0, val* p1);
long separate_compiler__SeparateCompiler__box_kind_of(val* self, val* p0);
short int separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table(val* self, val* p0);
void abstract_compiler__AbstractCompilerVisitor__require_declaration(val* self, val* p0);
val* array__Array___91d_93d(val* self, long p0);
extern const struct type type_model__MMethodDef;
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
#define COLOR_model__MClass___intro_mmodule 1
val* abstract_compiler__MPropDef__c_name(val* self);
#define COLOR_model__MClassType___mclass 3
val* model__Object__extern_kind(val* self);
#define COLOR_abstract_compiler__MType__c_name 51
void abstract_compiler__AbstractCompilerVisitor__add(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__get_name(val* self, val* p0);
#define COLOR_model__MClassType___arguments 4
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_abstract_compiler__MType__ctype 49
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__new_named_var(val* self, val* p0, val* p1);
#define COLOR_abstract_compiler__RuntimeVariable___is_exact 3
void abstract_compiler__AbstractCompiler__generate_init_attr(val* self, val* p0, val* p1, val* p2);
short int array__AbstractArrayRead__is_empty(val* self);
extern const struct type type_model__MVirtualTypeDef;
#define COLOR_model__MVirtualTypeDef___bound 7
val* separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound(val* self, val* p0, val* p1);
extern const struct type type_model__MNullableType;
#define COLOR_model__MNullableType___mtype 3
extern const struct type type_model__MClassType;
void file__Object__print(val* self, val* p0);
extern const struct type type_model__MVirtualType;
val* model__MType__anchor_to(val* self, val* p0, val* p1);
extern const struct type type_model__MParameterType;
val* NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(const struct type* type);
extern const struct type type_separate_erasure_compiler__SeparateErasureCompilerVisitor;
void abstract_compiler__AbstractCompilerVisitor__init(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompiler_VTVISITOR 0
#define COLOR_abstract_collection__MapRead__iterator 32
#define COLOR_abstract_collection__MapIterator__is_ok 32
#define COLOR_abstract_collection__MapIterator__key 30
#define COLOR_abstract_collection__MapIterator__item 29
#define COLOR_abstract_collection__MapIterator__next 31
void separate_erasure_compiler__SeparateErasureCompiler__display_sizes(val* self);
#define COLOR_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite 104
#define COLOR_typing__CallSite___erasure_cast 8
#define COLOR_abstract_compiler__AbstractCompilerVisitor___compiler 0
#define COLOR_abstract_compiler__AbstractCompiler___modelbuilder 3
#define COLOR_typing__CallSite___msignature 7
#define COLOR_model__MSignature___return_mtype 4
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2);
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite(val* self, val* p0, val* p1);
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1);
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance(val* self, val* p0);
val* abstract_compiler__RuntimeVariable__inspect(val* self);
val* abstract_compiler__AbstractCompilerVisitor__bool_type(val* self);
val* abstract_compiler__AbstractCompilerVisitor__new_var(val* self, val* p0);
short int separate_compiler__SeparateCompilerVisitor__maybe_null(val* self, val* p0);
#define COLOR_abstract_compiler__AbstractCompilerVisitor___frame 2
#define COLOR_abstract_compiler__Frame___mpropdef 1
#define COLOR_model__MClassDef___mmodule 1
val* model__MParameterType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_abstract_compiler__RuntimeVariable___mcasttype 2
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_compiler__ToolContext___opt_typing_test_metrics 52
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped 14
#define COLOR_abstract_compiler__RuntimeVariable___mtype 1
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved 12
#define COLOR_abstract_compiler__Frame___arguments 3
#define COLOR_model__MVirtualType___mproperty 3
val* separate_compiler__MProperty__const_color(val* self);
val* string__String__to_s(val* self);
#define COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved 13
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0);
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string(val* self, val* p0);
val* abstract_compiler__AbstractCompilerVisitor__get_class(val* self, val* p0);
extern const struct type type_array__Arraymodel__MType;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
val* model__MClass__get_mtype(val* self, val* p0);
val* separate_erasure_compiler__SeparateErasureCompilerVisitor__native_array_instance(val* self, val* p0, val* p1);
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0);
void separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array(val* self, val* p0, val* p1);
