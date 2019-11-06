#include "nit.common.h"
#define COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure 54
extern const char FILE_nitc__separate_erasure_compiler[];
#define COLOR_nitc__separate_erasure_compiler__ToolContext___opt_rta 55
#define COLOR_nitc__separate_erasure_compiler__ToolContext___opt_no_check_erasure_cast 56
#define COLOR_nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init 141
#define COLOR_nitc__toolcontext__ToolContext___option_context 15
extern const char FILE_nitc__toolcontext[];
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__opts__Option;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__opts__Option;
#define COLOR_core__array__Array__with_native 32
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_nitc__separate_erasure_compiler___ToolContext___process_options 144
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all 92
extern const char FILE_nitc__abstract_compiler[];
#define COLOR_opts__Option___value 6
#define COLOR_opts__Option__VALUE 0
extern const struct type type_core__Bool;
extern const char FILE_opts[];
#define COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives 62
extern const char FILE_nitc__separate_compiler[];
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
val* nitc__modelbuilder_base___ToolContext___modelbuilder(val* self);
val* nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0);
void nitc__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler(val* self, val* p0, val* p1);
long core__time___Sys_get_time___impl( struct nitni_instance * self );
#define COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext 13
extern const char FILE_nitc__modelbuilder_base[];
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
void nitc___nitc__ToolContext___info(val* self, val* p0, long p1);
val* NEW_nitc__SeparateErasureCompiler(const struct type* type);
extern const struct type type_nitc__SeparateErasureCompiler;
#define COLOR_nitc__abstract_compiler__AbstractCompiler__mainmodule_61d 13
#define COLOR_nitc__abstract_compiler__AbstractCompiler__modelbuilder_61d 14
#define COLOR_nitc__separate_compiler__SeparateCompiler__runtime_type_analysis_61d 55
#define COLOR_core__kernel__Object__init 0
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation(val* self);
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats(val* self);
extern const struct type type_core__NativeArray__core__String;
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
void nitc__abstract_compiler___ModelBuilder___write_and_make(val* self, val* p0);
#define COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_ids 34
#define COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_colors 35
#define COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_colors 36
#define COLOR_nitc___nitc__SeparateErasureCompiler___core__kernel__Object__init 123
#define COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule 1
val* nitc__model___MModule___flatten_mclass_hierarchy(val* self);
val* NEW_core__HashSet(const struct type* type);
extern const struct type type_core__HashSet__nitc__MClass;
void core___core__HashSet___from(val* self, val* p0);
val* NEW_nitc__POSetColorer(const struct type* type);
extern const struct type type_nitc__POSetColorer__nitc__MClass;
void nitc___nitc__POSetColorer___colorize(val* self, val* p0);
val* nitc___nitc__POSetColorer___ids(val* self);
val* nitc___nitc__POSetColorer___colors(val* self);
val* nitc___nitc__SeparateErasureCompiler___build_class_typing_tables(val* self, val* p0);
#define COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___class_tables 37
val* NEW_core__HashMap(const struct type* type);
extern const struct type type_core__HashMap__nitc__MClass__core__Set__nitc__MVirtualTypeProp;
void core___core__HashMap___core__kernel__Object__init(val* self);
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
extern const struct type type_core__HashSet__nitc__MVirtualTypeProp;
void core___core__HashSet___core__kernel__Object__init(val* self);
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
val* nitc__abstract_compiler___MModule___properties(val* self, val* p0);
#define COLOR_core__abstract_collection__Collection__iterator 24
extern const struct type type_nitc__MVirtualTypeProp;
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_core__abstract_collection__SimpleCollection__add 49
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
val* NEW_nitc__POSetBucketsColorer(const struct type* type);
extern const struct type type_nitc__POSetBucketsColorer__nitc__MClass__nitc__MVirtualTypeProp;
val* nitc___nitc__POSetColorer___conflicts(val* self);
#define COLOR_nitc__coloring__POSetBucketsColorer__poset_61d 12
#define COLOR_nitc__coloring__POSetBucketsColorer__conflicts_61d 13
val* nitc___nitc__POSetBucketsColorer___colorize(val* self, val* p0);
val* nitc___nitc__SeparateErasureCompiler___build_vt_tables(val* self, val* p0);
#define COLOR_nitc__separate_erasure_compiler__SeparateErasureCompiler___vt_tables 38
extern const struct type type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MPropDef;
extern const struct type type_core__Array__nullable__nitc__MPropDef;
void core___core__Array___core__kernel__Object__init(val* self);
extern const struct type type_core__Array__nitc__MClass;
short int poset___poset__POSet___core__abstract_collection__Collection__has(val* self, val* p0);
val* nitc___nitc__MClass___in_hierarchy(val* self, val* p0);
val* poset___poset__POSetElement___greaters(val* self);
#define COLOR_core__array__Collection__to_a 21
void nitc__model___MModule___linearize_mclasses(val* self, val* p0);
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__MapRead___91d_93d 15
#define COLOR_core__array__AbstractArrayRead___length 0
void core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
long core___core__Int___Discrete__successor(long self, long p0);
#define COLOR_nitc__model__MProperty___mpropdefs 15
extern const char FILE_nitc__model[];
#define COLOR_nitc__model__MPropDef___mclassdef 7
#define COLOR_nitc__model__MClassDef___mclass 8
extern const struct type type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MClass;
extern const struct type type_core__Array__nullable__nitc__MClass;
#define COLOR_nitc__abstract_compiler__AbstractCompiler___header 7
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0);
void nitc___nitc__SeparateCompiler___compile_header_attribute_structs(val* self);
#define COLOR_nitc__model__MClass___intro 19
#define COLOR_nitc__model__MClassDef___bound_mtype 9
val* nitc___nitc__MClass___nitc__model_base__MEntity__c_name(val* self);
val* nitc___nitc__SeparateErasureCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self);
#define COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis 19
#define COLOR_core__kernel__Object___61d_61d 4
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes 4
extern const char FILE_nitc__rapid_type_analysis[];
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
short int nitc__abstract_compiler___MClassType___MType__is_c_primitive(val* self);
#define COLOR_nitc__model__MClass___name 8
void nitc___nitc__AbstractCompilerVisitor___add_decl(val* self, val* p0);
void nitc___nitc__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1);
long nitc___nitc__SeparateCompiler___box_kind_of(val* self, val* p0);
short int nitc___nitc__SeparateErasureCompiler___build_class_vts_table(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___require_declaration(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateCompiler___method_tables 30
#define COLOR_core__abstract_collection__MapRead__get_or_null 20
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
extern const struct type type_nitc__MMethodDef;
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
#define COLOR_nitc__model__MClass___intro_mmodule 7
#define COLOR_core__abstract_text__Object__to_s 3
val* nitc__separate_compiler___MMethodDef___virtual_runtime_function(val* self);
val* nitc___nitc__AbstractRuntimeFunction___c_name(val* self);
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(val* self);
#define COLOR_nitc__model__MClassType___mclass 9
val* nitc__abstract_compiler___MClassType___MType__ctype(val* self);
val* nitc__abstract_compiler___MClassType___MType__ctype_extern(val* self);
#define COLOR_nitc__model_base__MEntity__c_name 12
void nitc___nitc__AbstractCompilerVisitor___add(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___add_abort(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact 3
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0);
#define COLOR_nitc__model__MClassType__arguments 61
val* core___core__SequenceRead___Collection__first(val* self);
#define COLOR_nitc__abstract_compiler__MType__ctype 30
#define COLOR_nitc__model__MClass___kind 16
val* nitc__model___core__Sys___extern_kind(val* self);
val* nitc__model___MModule___pointer_type(val* self);
#define COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables 31
short int core___core__Array___core__kernel__Object___61d_61d(val* self, val* p0);
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2);
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self);
extern const struct type type_nitc__MVirtualTypeDef;
#define COLOR_nitc__model__MVirtualTypeDef___bound 15
val* nitc___nitc__SeparateErasureCompiler___retrieve_vt_bound(val* self, val* p0, val* p1);
extern const struct type type_nitc__MNullableType;
#define COLOR_nitc__model__MProxyType___mtype 9
extern const struct type type_nitc__MClassType;
void core__file___Sys___print(val* self, val* p0);
extern const struct type type_nitc__MVirtualType;
val* nitc___nitc__MType___anchor_to(val* self, val* p0, val* p1);
extern const struct type type_nitc__MParameterType;
void nitc___nitc__SeparateCompiler___compile_color_consts(val* self, val* p0);
val* NEW_nitc__SeparateErasureCompilerVisitor(const struct type* type);
extern const struct type type_nitc__SeparateErasureCompilerVisitor;
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d 24
#define COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR 0
#define COLOR_core__abstract_collection__MapRead__iterator 13
#define COLOR_core__abstract_collection__MapIterator__is_ok 12
#define COLOR_core__abstract_collection__MapIterator__key 13
#define COLOR_core__abstract_collection__MapIterator__item 14
#define COLOR_core__abstract_collection__MapIterator__next 15
#define COLOR_nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite 110
#define COLOR_nitc__typing__CallSite___erasure_cast 14
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler 0
#define COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder 3
#define COLOR_nitc__typing__CallSite___msignature 13
extern const char FILE_nitc__typing[];
#define COLOR_nitc__model__MSignature___return_mtype 10
val* nitc___nitc__SeparateErasureCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1);
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(val* self);
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self);
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0);
short int nitc___nitc__SeparateCompilerVisitor___maybe_null(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame 2
#define COLOR_nitc__abstract_compiler__StaticFrame___mpropdef 1
#define COLOR_nitc__model__MClassDef___mmodule 7
val* nitc___nitc__MParameterType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype 2
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics 93
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped 17
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mtype 1
#define COLOR_nitc__abstract_compiler__MType__is_c_primitive 43
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved 15
#define COLOR_nitc__abstract_compiler__StaticFrame___arguments 3
#define COLOR_nitc__model__MVirtualType___mproperty 11
val* nitc__separate_compiler___MEntity___const_color(val* self);
val* core___core__String___Object__to_s(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved 16
void nitc___nitc__AbstractCompilerVisitor___debug(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0);
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types 2
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self);
val* nitc__model___MModule___native_array_class(val* self);
extern const struct type type_core__Array__nitc__MType;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
val* nitc___nitc__MClass___get_mtype(val* self, val* p0);
