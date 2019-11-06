#include "nit.common.h"
#define COLOR_nitc__separate_compiler__ToolContext___opt_separate 58
extern const char FILE_nitc__separate_compiler[];
#define COLOR_nitc__separate_compiler__ToolContext___opt_no_inline_intern 59
#define COLOR_nitc__separate_compiler__ToolContext___opt_no_union_attribute 60
#define COLOR_nitc__separate_compiler__ToolContext___opt_no_shortcut_equate 61
#define COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives 62
#define COLOR_nitc__separate_compiler__ToolContext___opt_colors_are_symbols 63
#define COLOR_nitc__separate_compiler__ToolContext___opt_trampoline_call 64
#define COLOR_nitc__separate_compiler__ToolContext___opt_guard_call 65
#define COLOR_nitc__separate_compiler__ToolContext___opt_substitute_monomorph 66
#define COLOR_nitc__separate_compiler__ToolContext___opt_link_boost 67
#define COLOR_nitc__separate_compiler__ToolContext___opt_inline_coloring_numbers 68
#define COLOR_nitc__separate_compiler__ToolContext___opt_inline_some_methods 69
#define COLOR_nitc__separate_compiler__ToolContext___opt_direct_call_monomorph 70
#define COLOR_nitc__separate_compiler__ToolContext___opt_direct_call_monomorph0 71
#define COLOR_nitc__separate_compiler__ToolContext___opt_skip_dead_methods 72
#define COLOR_nitc__separate_compiler__ToolContext___opt_semi_global 73
#define COLOR_nitc__separate_compiler__ToolContext___opt_colo_dead_methods 74
#define COLOR_nitc__separate_compiler__ToolContext___opt_tables_metrics 75
#define COLOR_nitc__separate_compiler__ToolContext___opt_type_poset 76
#define COLOR_nitc__separate_compiler___ToolContext___core__kernel__Object__init 143
#define COLOR_nitc__toolcontext__ToolContext___option_context 15
extern const char FILE_nitc__toolcontext[];
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__opts__Option;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__opts__Option;
#define COLOR_core__array__Array__with_native 32
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_nitc__separate_compiler___ToolContext___process_options 147
#define COLOR_opts__Option___value 6
#define COLOR_opts__Option__VALUE 0
extern const struct type type_core__Bool;
extern const char FILE_opts[];
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
val* nitc__modelbuilder_base___ToolContext___modelbuilder(val* self);
val* nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0);
void nitc__separate_compiler___ModelBuilder___run_separate_compiler(val* self, val* p0, val* p1);
long core__time___Sys_get_time___impl( struct nitni_instance * self );
#define COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext 13
extern const char FILE_nitc__modelbuilder_base[];
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
void nitc___nitc__ToolContext___info(val* self, val* p0, long p1);
val* NEW_nitc__SeparateCompiler(const struct type* type);
extern const struct type type_nitc__SeparateCompiler;
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
#define COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables 17
#define COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct 18
#define COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline 19
#define COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis 19
#define COLOR_nitc__separate_compiler__SeparateCompiler___undead_types 20
#define COLOR_nitc__separate_compiler__SeparateCompiler___live_unresolved_types 21
#define COLOR_nitc__separate_compiler__SeparateCompiler___type_ids 22
#define COLOR_nitc__separate_compiler__SeparateCompiler___type_colors 23
#define COLOR_nitc__separate_compiler__SeparateCompiler___opentype_colors 24
#define COLOR_nitc___nitc__SeparateCompiler___core__kernel__Object__init 105
val* nitc___nitc__AbstractCompiler___new_file(val* self, val* p0);
val* NEW_nitc__CodeWriter(const struct type* type);
extern const struct type type_nitc__CodeWriter;
#define COLOR_nitc__abstract_compiler__CodeWriter__file_61d 12
#define COLOR_nitc__abstract_compiler__AbstractCompiler___header 7
void nitc___nitc__SeparateCompiler___compile_box_kinds(val* self);
void nitc___nitc__AbstractCompiler___compile_header(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule 1
extern const char FILE_nitc__abstract_compiler[];
val* nitc___nitc__MModule___nitc__model_base__MEntity__c_name(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder 3
void nitc___nitc__SeparateCompiler___do_property_coloring(val* self);
void nitc___nitc__SeparateCompiler___compile_class_infos(val* self);
#define COLOR_nitc__mmodule__MModule___in_importation 45
extern const char FILE_nitc__mmodule[];
val* poset___poset__POSetElement___greaters(val* self);
#define COLOR_core__abstract_collection__Collection__iterator 24
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
#define COLOR_nitc__model__MModule___intro_mclasses 6
extern const char FILE_nitc__model[];
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_nitc__separate_compiler__SeparateCompiler__compile_class_to_c 59
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
void nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(val* self);
void nitc___nitc__AbstractCompiler___compile_main_function(val* self);
void nitc___nitc__AbstractCompiler___compile_finalizer_function(val* self);
void nitc___nitc__SeparateCompiler___link_mmethods(val* self);
val* nitc___nitc__MModule___nitc__model_base__MEntity__full_name(val* self);
void nitc___nitc__SeparateCompiler___compile_module_to_c(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateCompiler__compile_types 62
val* nitc___nitc__SeparateCompiler___do_type_coloring(val* self);
void nitc___nitc__SeparateCompiler___compile_type_to_c(val* self, val* p0);
#define COLOR_core__abstract_collection__Collection__has 27
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0);
void nitc___nitc__SeparateCompiler___compile_header_attribute_structs(val* self);
#define COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds 25
val* core___core__HashMap___core__abstract_collection__MapRead__iterator(val* self);
#define COLOR_core__abstract_collection__MapIterator__is_ok 12
#define COLOR_core__abstract_collection__MapIterator__key 13
#define COLOR_core__abstract_collection__MapIterator__item 14
#define COLOR_nitc__model__MClass___mclass_type 20
#define COLOR_nitc__model__MClassType___mclass 9
#define COLOR_nitc__model__MClass___name 8
#define COLOR_core__kernel__Object___61d_61d 4
val* nitc__abstract_compiler___MClassType___MType__ctype_extern(val* self);
val* nitc__abstract_compiler___MClassType___MType__ctypename(val* self);
#define COLOR_core__abstract_collection__MapIterator__next 15
extern const struct type type_core__Array__core__String;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
#define COLOR_nitc__mmodule__MModule___model 41
val* nitc__model___Model___get_mclasses_by_name(val* self, val* p0);
short int core___core__Array___core__kernel__Object___61d_61d(val* self, val* p0);
#define COLOR_core__array__AbstractArrayRead___length 0
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1);
void core__file___Sys___print_error(val* self, val* p0);
val* core___core__SequenceRead___Collection__first(val* self);
long core___core__HashMap___core__abstract_collection__MapRead__length(val* self);
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MClass___kind 16
val* nitc__model___core__Sys___extern_kind(val* self);
val* nitc__model___MModule___pointer_type(val* self);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor 35
#define COLOR_core__abstract_collection__MapRead__iterator 13
void nitc___nitc__SeparateCompiler___compile_color_const(val* self, val* p0, val* p1, long p2);
#define COLOR_nitc__separate_compiler__SeparateCompiler___color_consts_done 26
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
extern const struct type type_nitc__MEntity;
val* nitc__separate_compiler___MEntity___const_color(val* self);
void nitc___nitc__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler 0
#define COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform 5
short int nitc___nitc__Platform___supports_linker_script(val* self);
void nitc___nitc__AbstractCompilerVisitor___add(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script 8
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateCompiler___class_conflict_graph 27
val* nitc__model___MModule___flatten_mclass_hierarchy(val* self);
val* nitc__coloring___poset__POSet___to_conflict_graph(val* self);
val* NEW_core__HashMap(const struct type* type);
extern const struct type type_core__HashMap__nitc__MClass__core__Set__nitc__PropertyLayoutElement;
void core___core__HashMap___core__kernel__Object__init(val* self);
extern const struct type type_core__HashMap__nitc__MClass__core__Set__nitc__MAttribute;
extern const struct type type_core__Array__nitc__PropertyLayoutElement;
void core___core__Array___core__kernel__Object__init(val* self);
val* poset___poset__POSet___core__abstract_collection__Collection__iterator(val* self);
val* NEW_core__HashSet(const struct type* type);
extern const struct type type_core__HashSet__nitc__PropertyLayoutElement;
void core___core__HashSet___core__kernel__Object__init(val* self);
extern const struct type type_core__HashSet__nitc__MAttribute;
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods 8
extern const char FILE_nitc__rapid_type_analysis[];
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_nitc__model__MProperty___intro_mclassdef 6
#define COLOR_nitc__model__MClassDef___mclass 8
#define COLOR_core__abstract_collection__SimpleCollection__add 49
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends 12
#define COLOR_nitc__model__MPropDef___mclassdef 7
#define COLOR_nitc__model__MModule___mclassdefs 7
#define COLOR_nitc__model__MClassDef___intro_mproperties 18
extern const struct type type_nitc__MMethod;
extern const struct type type_nitc__MAttribute;
#define COLOR_nitc__model__MClassDef___mpropdefs 19
extern const struct type type_nitc__MMethodDef;
#define COLOR_nitc__modelize_property__MPropDef___has_supercall 6
val* NEW_nitc__POSetGroupColorer(const struct type* type);
extern const struct type type_nitc__POSetGroupColorer__nitc__MClass__nitc__PropertyLayoutElement;
#define COLOR_nitc__coloring__POSetGroupColorer__graph_61d 16
#define COLOR_nitc__coloring__POSetGroupColorer__buckets_61d 17
val* nitc___nitc__POSetGroupColorer___colors(val* self);
void nitc___nitc__SeparateCompiler___compile_color_consts(val* self, val* p0);
extern const struct type type_nitc__POSetGroupColorer__nitc__MClass__nitc__MAttribute;
extern const struct type type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MPropDef;
#define COLOR_nitc__separate_compiler__SeparateCompiler___method_tables 30
extern const struct type type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MProperty;
#define COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables 31
#define COLOR_nitc__model__MClass___has_new_factory 22
val* nitc__model___core__Sys___abstract_kind(val* self);
val* nitc__model___core__Sys___interface_kind(val* self);
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes 4
#define COLOR_nitc__model__MClass___intro 19
#define COLOR_nitc__model__MClassDef___bound_mtype 9
val* nitc___nitc__POSetGroupColorer___build_layout(val* self, val* p0);
extern const struct type type_core__Array__nullable__nitc__MPropDef;
#define COLOR_core__abstract_collection__Map___91d_93d_61d 22
val* nitc___nitc__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
val* nitc___nitc__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types 2
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
extern const struct type type_core__HashSet__nitc__MType;
void core___core__SimpleCollection___add_all(val* self, val* p0);
val* nitc___nitc__SeparateCompiler___poset_from_mtypes(val* self, val* p0, val* p1);
val* NEW_nitc__POSetColorer(const struct type* type);
extern const struct type type_nitc__POSetColorer__nitc__MType;
void nitc___nitc__POSetColorer___colorize(val* self, val* p0);
val* nitc___nitc__POSetColorer___ids(val* self);
val* nitc___nitc__POSetColorer___colors(val* self);
val* nitc___nitc__SeparateCompiler___build_type_tables(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateCompiler___type_tables 28
void nitc___nitc__SeparateCompiler___compute_type_test_layouts(val* self, val* p0, val* p1);
extern const struct type type_core__HashMap__nitc__MType__core__Int;
#define COLOR_core__abstract_collection__MapRead__length 12
void nitc___nitc__SeparateCompiler___compute_resolution_tables(val* self, val* p0);
val* NEW_poset__POSet(const struct type* type);
extern const struct type type_poset__POSet__nitc__MType;
val* NEW_more_collections__MultiHashMap(const struct type* type);
extern const struct type type_more_collections__MultiHashMap__nitc__MClass__nitc__MType;
#define COLOR_nitc__model__MType__undecorate 51
extern const struct type type_nitc__MClassType;
val* poset___poset__POSet___add_node(val* self, val* p0);
val* nitc___nitc__MClass___in_hierarchy(val* self, val* p0);
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
void poset___poset__POSet___add_edge(val* self, val* p0, val* p1);
extern const struct type type_core__HashMap__nitc__MType__core__Array__nullable__nitc__MType;
extern const struct type type_core__Array__nullable__nitc__MType;
val* poset___poset__POSet____91d_93d(val* self, val* p0);
#define COLOR_core__abstract_collection__MapRead___91d_93d 15
void core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
long core___core__Int___Discrete__successor(long self, long p0);
extern const struct type type_core__HashMap__nitc__MClass__core__Set__nitc__MType;
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
extern const struct type type_nitc__POSetGroupColorer__nitc__MClass__nitc__MType;
extern const struct type type_core__HashMap__nitc__MClass__core__Array__nullable__nitc__MType;
val* core___core__HashMap___core__abstract_collection__MapRead__get_or_null(val* self, val* p0);
short int core___core__Set___core__kernel__Object___61d_61d(val* self, val* p0);
val* nitc___nitc__MClassType___MType__collect_mclassdefs(val* self, val* p0);
#define COLOR_core__abstract_collection__MapRead__has_key 14
val* NEW_nitc__BucketsColorer(const struct type* type);
extern const struct type type_nitc__BucketsColorer__nitc__MClass__nitc__MType;
val* nitc___nitc__BucketsColorer___colorize(val* self, val* p0);
val* nitc___nitc__SeparateCompiler___build_resolution_tables(val* self, val* p0, val* p1);
#define COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables 29
#define COLOR_core__abstract_collection__MapRead__values 21
extern const struct type type_core__HashMap__nitc__MClassType__core__Array__nullable__nitc__MType;
#define COLOR_nitc__model__MPropDef___mproperty 8
#define COLOR_nitc__model_base__MEntity___is_broken 0
#define COLOR_nitc__model__MMethodDef___msignature 15
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
val* nitc__separate_compiler___MMethodDef___separate_runtime_function(val* self);
void nitc___nitc__SeparateRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0);
val* nitc__separate_compiler___MMethodDef___virtual_runtime_function(val* self);
void nitc___nitc__SeparateRuntimeFunction___compile_trampolines(val* self, val* p0);
void nitc___nitc__SeparateCompiler___link_mmethod(val* self, val* p0);
#define COLOR_core__abstract_text__Text___43d 39
val* nitc___nitc__SeparateCompiler___is_monomorphic(val* self, val* p0);
val* nitc___nitc__AbstractRuntimeFunction___c_name(val* self);
#define COLOR_nitc__model__MProperty___intro 16
val* nitc___nitc__SeparateRuntimeFunction___c_ret(val* self);
val* nitc___nitc__SeparateRuntimeFunction___c_sig(val* self);
#define COLOR_nitc__model__MProperty___mpropdefs 15
#define COLOR_nitc__model__MType__need_anchor 31
#define COLOR_nitc__model_base__MEntity__c_name 12
val* NEW_nitc__SeparateCompilerVisitor(const struct type* type);
extern const struct type type_nitc__SeparateCompilerVisitor;
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d 24
#define COLOR_core__abstract_text__Object__to_s 3
void nitc___nitc__AbstractCompilerVisitor___add_decl(val* self, val* p0);
extern const struct type type_nitc__MNullableType;
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self);
void nitc___nitc__SeparateCompiler___compile_type_resolution_table(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___require_declaration(val* self, val* p0);
#define COLOR_nitc__model__MType__resolve_for 29
val* nitc___nitc__MClass___nitc__model_base__MEntity__c_name(val* self);
short int nitc__abstract_compiler___MClassType___MType__is_c_primitive(val* self);
val* nitc__model___core__Sys___enum_kind(val* self);
val* nitc___nitc__MClass___nitc__model_base__MEntity__full_name(val* self);
val* core__abstract_text___Bool___Object__to_s(short int self);
long nitc___nitc__SeparateCompiler___box_kind_of(val* self, val* p0);
#define COLOR_core__abstract_collection__MapRead__get_or_null 20
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nitc__model__MClass___intro_mmodule 7
#define COLOR_nitc__separate_compiler__MType___is_tagged 7
val* nitc___nitc__AbstractCompilerVisitor___nit_alloc(val* self, val* p0, val* p1);
val* nitc__abstract_compiler___MClassType___MType__ctype(val* self);
void nitc___nitc__AbstractCompilerVisitor___add_abort(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact 3
void nitc___nitc__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1);
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0);
#define COLOR_nitc__model__MClassType__arguments 61
#define COLOR_nitc__abstract_compiler__MType__ctype 30
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2);
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0);
extern const struct type type_core__Array__nullable__nitc__MClass;
void core___core__Array___filled_with(val* self, val* p0, long p1);
val* core___core__HashMap___core__abstract_collection__MapRead__keys(val* self);
#define COLOR_nitc__separate_compiler__MType___tag_value 8
#define COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR 0
#define COLOR_nitc__abstract_compiler__ToolContext___opt_hardening 86
#define COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats 106
#define COLOR_nitc__separate_compiler__SeparateCompiler__display_sizes 63
#define COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics 95
void nitc___nitc__SeparateCompiler___display_isset_checks(val* self);
val* counter___core__Sys___div(val* self, long p0, long p1);
void core__file___Sys___print(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count 32
#define COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count 33
#define COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs 107
#define COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module 108
#define COLOR_nitc__model__MClassDef___mmodule 7
val* nitc___nitc__MSignature___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mtype 1
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1);
void core___core__Sequence___first_61d(val* self, val* p0);
long nitc___nitc__MSignature___arity(val* self);
#define COLOR_nitc__model__MSignature___mparameters 9
#define COLOR_nitc__model__MParameter___mtype 7
#define COLOR_nitc__model__MParameter___is_vararg 8
#define COLOR_nitc__model__MMethod___is_init 20
#define COLOR_nitc__model__MMethodDef___is_extern 20
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern 73
#define COLOR_nitc__abstract_compiler__MType__is_c_primitive 43
#define COLOR_nitc__model_base__MEntity__name 16
val* nitc___nitc__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype 2
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0);
short int nitc___nitc__SeparateCompilerVisitor___can_be_primitive(val* self, val* p0);
val* nitc___nitc__SeparateCompilerVisitor___extract_tag(val* self, val* p0);
#define COLOR_nitc__typing__CallSite___mpropdef 12
extern const char FILE_nitc__typing[];
#define COLOR_nitc__model__MMethodDef___initializers 17
val* nitc___nitc__RapidTypeAnalysis___live_targets(val* self, val* p0);
#define COLOR_core__abstract_collection__Collection__length 22
#define COLOR_core__abstract_collection__Collection__first 29
val* nitc___nitc__SeparateCompilerVisitor___direct_call(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MMethodDef___is_intern 19
#define COLOR_nitc__typing__CallSite___mproperty 11
#define COLOR_nitc__model__MProperty___name 7
#define COLOR_nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite 109
val* nitc___nitc__SeparateCompilerVisitor___before_send(val* self, val* p0, val* p1);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule 2
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__SeparateCompilerVisitor___table_send(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null 91
short int nitc___nitc__AbstractCompilerVisitor___maybenull(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self);
extern const struct type type_nitc__MNullType;
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(val* self);
#define COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics 94
void nitc___nitc__AbstractCompilerVisitor___debug(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_signature 3
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MSignature___return_mtype 10
val* nitc___nitc__SeparateRuntimeFunction___c_funptrtype(val* self);
val* nitc___nitc__SeparateCompilerVisitor___class_info(val* self, val* p0);
short int nitc__abstract_compiler___MMethodDef___can_inline(val* self, val* p0);
val* NEW_nitc__StaticFrame(const struct type* type);
extern const struct type type_nitc__StaticFrame;
#define COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d 14
#define COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d 15
#define COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d 16
#define COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d 17
#define COLOR_nitc__abstract_compiler__StaticFrame___returnlabel 5
#define COLOR_nitc__abstract_compiler__StaticFrame___returnvar 4
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame 2
val* nitc__abstract_compiler___MMethodDef___compile_inside_to_c(val* self, val* p0, val* p1);
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(val* self);
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2);
extern const struct type type_core__Array__nitc__RuntimeVariable;
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1);
void nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0);
#define COLOR_nitc__model__MAttributeDef___static_mtype 15
val* nitc___nitc__AbstractCompilerVisitor___object_type(val* self);
val* nitc___nitc__MType___as_nullable(val* self);
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset 88
#define COLOR_nitc__abstract_compiler__MType__ctypename 53
val* nitc__model___MModule___object_type(val* self);
#define COLOR_core__abstract_text__Text__escape_to_c 69
extern const struct type type_nitc__MGenericType;
#define COLOR_nitc__model__MGenericType___need_anchor 26
void nitc___nitc__SeparateCompilerVisitor___hardening_live_open_type(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__StaticFrame___mpropdef 1
void nitc___nitc__SeparateCompilerVisitor___link_unresolved_type(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__StaticFrame___arguments 3
val* nitc___nitc__SeparateCompilerVisitor___type_info(val* self, val* p0);
short int nitc___nitc__SeparateCompilerVisitor___maybe_null(val* self, val* p0);
#define COLOR_nitc__model__MProxyType___mtype 9
#define COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics 93
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped 17
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved 16
void nitc___nitc__SeparateCompilerVisitor___hardening_cast_type(val* self, val* p0);
val* core___core__String___Object__to_s(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved 15
val* nitc___nitc__MType___nitc__model_base__MEntity__name(val* self);
short int core___core__Collection___not_empty(val* self);
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self);
val* nitc__model___MModule___native_array_class(val* self);
val* nitc__model___MModule___array_class(val* self);
extern const struct type type_core__Array__nitc__MType;
val* nitc___nitc__MClass___get_mtype(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance 21
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, long p0);
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance 82
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1);
val* nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1);
val* nitc__model___MModule___native_array_type(val* self, val* p0);
val* nitc__model___MModule___int_type(val* self);
val* nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name(val* self);
void nitc___nitc__AbstractCompilerVisitor___ret(val* self, val* p0);
#define COLOR_nitc__separate_compiler__MMethodDef___separate_runtime_function_cache 22
val* NEW_nitc__SeparateRuntimeFunction(const struct type* type);
extern const struct type type_nitc__SeparateRuntimeFunction;
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d 15
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_recv_61d 25
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction__called_signature_61d 26
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction__build_c_name_61d 27
#define COLOR_nitc__separate_compiler__MMethodDef___virtual_runtime_function_cache 23
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___called_recv 2
short int nitc__separate_compiler___MSignature___c_equiv(val* self, val* p0);
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___is_thunk 5
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name 4
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
#define COLOR_nitc__model__MPropDef___to_s 14
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_ret 6
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_sig 8
val* NEW_core__FlatBuffer(const struct type* type);
extern const struct type type_core__FlatBuffer;
#define COLOR_core___core__FlatBuffer___core__kernel__Object__init 122
void core___core__FlatBuffer___core__abstract_text__Buffer__append(val* self, val* p0);
val* nitc__model___MModule___array_type(val* self, val* p0);
val* core___core__FlatBuffer___core__abstract_text__Object__to_s(val* self);
#define COLOR_nitc__separate_compiler__SeparateRuntimeFunction___c_funptrtype 10
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__COMPILER 0
val* NEW_nitc__RuntimeVariable(const struct type* type);
extern const struct type type_nitc__RuntimeVariable;
#define COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d 13
#define COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d 14
#define COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d 15
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules 9
#define COLOR_nitc__abstract_compiler__AbstractCompiler___names 0
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name(val* self);
#define COLOR_nitc__model__MPropDef___location 9
#define COLOR_nitc__location__Location___file 0
extern const char FILE_nitc__location[];
#define COLOR_nitc__location__SourceFile___filename 1
#define COLOR_nitc__location__Location___line_start 1
short int nitc___nitc__MPropDef___is_intro(val* self);
#define COLOR_nitc___nitc__SeparateRuntimeFunction___core__kernel__Object__init 31
#define COLOR_nitc__separate_compiler__MEntity___const_color 4
#define COLOR_nitc__modelize_property__APropdef___mpropdef 3
#define COLOR_nitc__separate_compiler___AMethPropdef___nitc__abstract_compiler__APropdef__can_inline 102
#define COLOR_nitc__separate_compiler___AAttrPropdef___init_expr 102
#define COLOR_nitc__modelize_property__AAttrPropdef___is_lazy 16
#define COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef 19
val* nitc___nitc__AbstractCompilerVisitor___bool_instance(val* self, short int p0);
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2);
