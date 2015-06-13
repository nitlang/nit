#include "nit.common.h"
#define COLOR_nit__separate_compiler__ToolContext___opt_separate 54
extern const char FILE_nit__separate_compiler[];
#define COLOR_nit__separate_compiler__ToolContext___opt_no_inline_intern 55
#define COLOR_nit__separate_compiler__ToolContext___opt_no_union_attribute 56
#define COLOR_nit__separate_compiler__ToolContext___opt_no_shortcut_equate 57
#define COLOR_nit__separate_compiler__ToolContext___opt_no_tag_primitives 58
#define COLOR_nit__separate_compiler__ToolContext___opt_colors_are_symbols 59
#define COLOR_nit__separate_compiler__ToolContext___opt_trampoline_call 60
#define COLOR_nit__separate_compiler__ToolContext___opt_guard_call 61
#define COLOR_nit__separate_compiler__ToolContext___opt_substitute_monomorph 62
#define COLOR_nit__separate_compiler__ToolContext___opt_link_boost 63
#define COLOR_nit__separate_compiler__ToolContext___opt_inline_coloring_numbers 64
#define COLOR_nit__separate_compiler__ToolContext___opt_inline_some_methods 65
#define COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph 66
#define COLOR_nit__separate_compiler__ToolContext___opt_direct_call_monomorph0 67
#define COLOR_nit__separate_compiler__ToolContext___opt_skip_dead_methods 68
#define COLOR_nit__separate_compiler__ToolContext___opt_semi_global 69
#define COLOR_nit__separate_compiler__ToolContext___opt_colo_dead_methods 70
#define COLOR_nit__separate_compiler__ToolContext___opt_tables_metrics 71
#define COLOR_nit__separate_compiler__ToolContext___opt_type_poset 72
#define COLOR_nit__separate_compiler___ToolContext___standard__kernel__Object__init 143
#define COLOR_nit__toolcontext__ToolContext___option_context 15
extern const char FILE_nit__toolcontext[];
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__opts__Option;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__opts__Option;
#define COLOR_standard__array__Array__with_native 58
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_nit__separate_compiler___ToolContext___process_options 147
#define COLOR_opts__Option___value 6
#define COLOR_opts__Option__VALUE 0
extern const struct type type_standard__Bool;
extern const char FILE_opts[];
#define COLOR_nit__phase__Phase___toolcontext 0
extern const char FILE_nit__phase[];
val* nit__modelbuilder_base___ToolContext___modelbuilder(val* self);
val* nit__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0);
void nit__separate_compiler___ModelBuilder___run_separate_compiler(val* self, val* p0, val* p1);
#include "time_nit.h"
#define COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext 10
extern const char FILE_nit__modelbuilder_base[];
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
void nit___nit__ToolContext___info(val* self, val* p0, long p1);
val* NEW_nit__SeparateCompiler(const struct type* type);
extern const struct type type_nit__SeparateCompiler;
#define COLOR_nit__abstract_compiler__AbstractCompiler__mainmodule_61d 17
#define COLOR_nit__abstract_compiler__AbstractCompiler__modelbuilder_61d 18
#define COLOR_nit__separate_compiler__SeparateCompiler__runtime_type_analysis_61d 55
#define COLOR_standard__kernel__Object__init 0
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__do_compilation(val* self);
void nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats(val* self);
extern const struct type type_standard__NativeArray__standard__String;
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
val* standard__string___Int___Object__to_s(long self);
#define COLOR_standard__string__NativeArray__native_to_s 16
void nit__abstract_compiler___ModelBuilder___write_and_make(val* self, val* p0);
#define COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_tables 13
#define COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_direct 14
#define COLOR_nit__separate_compiler__ModelBuilder___nb_invok_by_inline 15
#define COLOR_nit__separate_compiler__SeparateCompiler___runtime_type_analysis 19
#define COLOR_nit__separate_compiler__SeparateCompiler___undead_types 20
#define COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types 21
#define COLOR_nit__separate_compiler__SeparateCompiler___type_ids 22
#define COLOR_nit__separate_compiler__SeparateCompiler___type_colors 23
#define COLOR_nit__separate_compiler__SeparateCompiler___opentype_colors 24
#define COLOR_nit___nit__SeparateCompiler___standard__kernel__Object__init 105
val* nit___nit__AbstractCompiler___new_file(val* self, val* p0);
val* NEW_nit__CodeWriter(const struct type* type);
extern const struct type type_nit__CodeWriter;
#define COLOR_nit__abstract_compiler__CodeWriter__file_61d 16
#define COLOR_nit__abstract_compiler__AbstractCompiler___header 7
void nit___nit__SeparateCompiler___compile_box_kinds(val* self);
void nit___nit__AbstractCompiler___compile_header(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule 1
extern const char FILE_nit__abstract_compiler[];
val* nit___nit__MModule___nit__model_base__MEntity__c_name(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder 3
void nit___nit__SeparateCompiler___do_property_coloring(val* self);
void nit___nit__SeparateCompiler___compile_class_infos(val* self);
#define COLOR_nit__mmodule__MModule___in_importation 33
extern const char FILE_nit__mmodule[];
val* poset___poset__POSetElement___greaters(val* self);
#define COLOR_standard__abstract_collection__Collection__iterator 25
#define COLOR_standard__abstract_collection__Iterator__is_ok 16
#define COLOR_standard__abstract_collection__Iterator__item 17
#define COLOR_nit__model__MModule___intro_mclasses 4
extern const char FILE_nit__model[];
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
#define COLOR_nit__separate_compiler__SeparateCompiler__compile_class_to_c 59
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(val* self);
#define COLOR_standard__abstract_collection__Iterator__next 18
#define COLOR_standard__abstract_collection__Iterator__finish 19
void nit___nit__AbstractCompiler___compile_nitni_global_ref_functions(val* self);
void nit___nit__AbstractCompiler___compile_main_function(val* self);
void nit___nit__AbstractCompiler___compile_finalizer_function(val* self);
void nit___nit__SeparateCompiler___link_mmethods(val* self);
val* nit___nit__MModule___nit__model_base__MEntity__full_name(val* self);
void nit___nit__SeparateCompiler___compile_module_to_c(val* self, val* p0);
#define COLOR_nit__separate_compiler__SeparateCompiler__compile_types 62
val* nit___nit__SeparateCompiler___do_type_coloring(val* self);
void nit___nit__SeparateCompiler___compile_type_to_c(val* self, val* p0);
#define COLOR_standard__abstract_collection__Collection__has 28
void nit___nit__CodeWriter___add_decl(val* self, val* p0);
void nit___nit__SeparateCompiler___compile_header_attribute_structs(val* self);
#define COLOR_nit__separate_compiler__SeparateCompiler___box_kinds 25
val* standard___standard__HashMap___standard__abstract_collection__MapRead__iterator(val* self);
short int standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__is_ok(val* self);
val* standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__key(val* self);
val* standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__item(val* self);
#define COLOR_nit__model__MClass___mclass_type 17
#define COLOR_nit__model__MClassType___mclass 6
#define COLOR_nit__model__MClass___name 6
#define COLOR_standard__kernel__Object___61d_61d 4
val* nit__abstract_compiler___MClassType___MType__ctype_extern(val* self);
val* nit__abstract_compiler___MClassType___MType__ctypename(val* self);
void standard___standard__HashMapIterator___standard__abstract_collection__MapIterator__next(val* self);
extern const struct type type_standard__Array__standard__String;
void standard___standard__Array___with_capacity(val* self, long p0);
void standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(val* self, val* p0);
#define COLOR_nit__mmodule__MModule___model 29
val* nit__model___Model___get_mclasses_by_name(val* self, val* p0);
short int standard___standard__Array___standard__kernel__Object___61d_61d(val* self, val* p0);
#define COLOR_standard__array__AbstractArrayRead___length 0
val* standard__string___Collection___join(val* self, val* p0);
void standard__file___Sys___print(val* self, val* p0);
val* standard___standard__SequenceRead___Collection__first(val* self);
long standard___standard__HashMap___standard__abstract_collection__MapRead__length(val* self);
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nit__model__MClass___kind 13
val* nit__model___standard__Sys___extern_kind(val* self);
val* nit__model___MModule___pointer_type(val* self);
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler__new_visitor 38
#define COLOR_standard__abstract_collection__MapRead__iterator 17
#define COLOR_standard__abstract_collection__MapIterator__is_ok 16
#define COLOR_standard__abstract_collection__MapIterator__key 17
#define COLOR_standard__abstract_collection__MapIterator__item 18
void nit___nit__SeparateCompiler___compile_color_const(val* self, val* p0, val* p1, long p2);
#define COLOR_standard__abstract_collection__MapIterator__next 19
#define COLOR_nit__separate_compiler__SeparateCompiler___color_consts_done 26
short int standard___standard__HashSet___standard__abstract_collection__Collection__has(val* self, val* p0);
extern const struct type type_nit__MEntity;
val* nit__separate_compiler___MEntity___const_color(val* self);
void nit___nit__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler 0
#define COLOR_nit__abstract_compiler__AbstractCompiler___target_platform 5
short int nit___nit__Platform___supports_linker_script(val* self);
void nit___nit__AbstractCompilerVisitor___add(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompiler___linker_script 8
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
void standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nit__separate_compiler__SeparateCompiler___class_conflict_graph 27
val* nit__model___MModule___flatten_mclass_hierarchy(val* self);
val* nit__coloring___poset__POSet___to_conflict_graph(val* self);
val* NEW_standard__HashMap(const struct type* type);
extern const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__PropertyLayoutElement;
void standard___standard__HashMap___standard__kernel__Object__init(val* self);
extern const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__MAttribute;
extern const struct type type_standard__Array__nit__PropertyLayoutElement;
void standard___standard__Array___standard__kernel__Object__init(val* self);
val* poset___poset__POSet___standard__abstract_collection__Collection__iterator(val* self);
val* NEW_standard__HashSet(const struct type* type);
extern const struct type type_standard__HashSet__nit__PropertyLayoutElement;
void standard___standard__HashSet___standard__kernel__Object__init(val* self);
extern const struct type type_standard__HashSet__nit__MAttribute;
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods 8
extern const char FILE_nit__rapid_type_analysis[];
val* standard___standard__HashSet___standard__abstract_collection__Collection__iterator(val* self);
#define COLOR_nit__model__MProperty___intro_mclassdef 4
#define COLOR_nit__model__MClassDef___mclass 6
#define COLOR_standard__abstract_collection__SimpleCollection__add 45
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends 11
#define COLOR_nit__model__MPropDef___mclassdef 5
#define COLOR_nit__model__MModule___mclassdefs 5
#define COLOR_nit__model__MClassDef___intro_mproperties 16
extern const struct type type_nit__MMethod;
extern const struct type type_nit__MAttribute;
#define COLOR_nit__model__MClassDef___mpropdefs 17
extern const struct type type_nit__MMethodDef;
#define COLOR_nit__modelize_property__MPropDef___has_supercall 4
val* NEW_nit__POSetGroupColorer(const struct type* type);
extern const struct type type_nit__POSetGroupColorer__nit__MClass__nit__PropertyLayoutElement;
#define COLOR_nit__coloring__POSetGroupColorer__graph_61d 20
#define COLOR_nit__coloring__POSetGroupColorer__buckets_61d 21
val* nit___nit__POSetGroupColorer___colors(val* self);
void nit___nit__SeparateCompiler___compile_color_consts(val* self, val* p0);
extern const struct type type_nit__POSetGroupColorer__nit__MClass__nit__MAttribute;
extern const struct type type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef;
#define COLOR_nit__separate_compiler__SeparateCompiler___method_tables 30
extern const struct type type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MProperty;
#define COLOR_nit__separate_compiler__SeparateCompiler___attr_tables 31
#define COLOR_nit__model__MClass___has_new_factory 19
val* nit__model___standard__Sys___abstract_kind(val* self);
val* nit__model___standard__Sys___interface_kind(val* self);
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes 4
#define COLOR_nit__model__MClass___intro 16
#define COLOR_nit__model__MClassDef___bound_mtype 7
val* nit___nit__POSetGroupColorer___build_layout(val* self, val* p0);
extern const struct type type_standard__Array__nullable__nit__MPropDef;
#define COLOR_standard__abstract_collection__Map___91d_93d_61d 25
val* nit___nit__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
val* nit___nit__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types 2
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
extern const struct type type_standard__HashSet__nit__MType;
void standard___standard__SimpleCollection___add_all(val* self, val* p0);
val* nit___nit__SeparateCompiler___poset_from_mtypes(val* self, val* p0, val* p1);
val* NEW_nit__POSetColorer(const struct type* type);
extern const struct type type_nit__POSetColorer__nit__MType;
void nit___nit__POSetColorer___colorize(val* self, val* p0);
val* nit___nit__POSetColorer___ids(val* self);
val* nit___nit__POSetColorer___colors(val* self);
val* nit___nit__SeparateCompiler___build_type_tables(val* self, val* p0);
#define COLOR_nit__separate_compiler__SeparateCompiler___type_tables 28
void nit___nit__SeparateCompiler___compute_type_test_layouts(val* self, val* p0, val* p1);
extern const struct type type_standard__HashMap__nit__MType__standard__Int;
#define COLOR_standard__abstract_collection__MapRead__length 16
void nit___nit__SeparateCompiler___compute_resolution_tables(val* self, val* p0);
val* NEW_poset__POSet(const struct type* type);
extern const struct type type_poset__POSet__nit__MType;
val* NEW_more_collections__MultiHashMap(const struct type* type);
extern const struct type type_more_collections__MultiHashMap__nit__MClass__nit__MType;
#define COLOR_nit__model__MType__undecorate 45
extern const struct type type_nit__MClassType;
val* poset___poset__POSet___add_node(val* self, val* p0);
val* nit___nit__MClass___in_hierarchy(val* self, val* p0);
short int nit___nit__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
void poset___poset__POSet___add_edge(val* self, val* p0, val* p1);
extern const struct type type_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType;
extern const struct type type_standard__Array__nullable__nit__MType;
val* poset___poset__POSet____91d_93d(val* self, val* p0);
#define COLOR_standard__abstract_collection__MapRead___91d_93d 19
void standard___standard__Array___standard__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
long standard___standard__Int___Discrete__successor(long self, long p0);
extern const struct type type_standard__HashMap__nit__MClass__standard__Set__nit__MType;
short int standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(val* self, val* p0);
extern const struct type type_nit__POSetGroupColorer__nit__MClass__nit__MType;
extern const struct type type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MType;
val* standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(val* self, val* p0);
short int standard___standard__Set___standard__kernel__Object___61d_61d(val* self, val* p0);
val* nit___nit__MClassType___MType__collect_mclassdefs(val* self, val* p0);
#define COLOR_standard__abstract_collection__MapRead__has_key 18
val* NEW_nit__BucketsColorer(const struct type* type);
extern const struct type type_nit__BucketsColorer__nit__MClass__nit__MType;
val* nit___nit__BucketsColorer___colorize(val* self, val* p0);
val* nit___nit__SeparateCompiler___build_resolution_tables(val* self, val* p0, val* p1);
#define COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables 29
#define COLOR_standard__abstract_collection__MapRead__values 24
extern const struct type type_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType;
#define COLOR_nit__model__MMethodDef___msignature 13
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
val* nit__separate_compiler___MMethodDef___separate_runtime_function(val* self);
void nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0);
val* nit__separate_compiler___MMethodDef___virtual_runtime_function(val* self);
void nit___nit__SeparateRuntimeFunction___compile_trampolines(val* self, val* p0);
void nit___nit__SeparateCompiler___link_mmethod(val* self, val* p0);
#define COLOR_standard__string__String___43d 71
val* nit___nit__SeparateCompiler___is_monomorphic(val* self, val* p0);
val* nit___nit__AbstractRuntimeFunction___c_name(val* self);
#define COLOR_nit__model__MProperty___intro 13
val* nit___nit__SeparateRuntimeFunction___c_ret(val* self);
val* nit___nit__SeparateRuntimeFunction___c_sig(val* self);
#define COLOR_nit__model__MProperty___mpropdefs 12
#define COLOR_nit__model__MType__need_anchor 28
#define COLOR_nit__model_base__MEntity__c_name 16
val* NEW_nit__SeparateCompilerVisitor(const struct type* type);
extern const struct type type_nit__SeparateCompilerVisitor;
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compiler_61d 27
#define COLOR_standard__string__Object__to_s 3
void nit___nit__AbstractCompilerVisitor___add_decl(val* self, val* p0);
extern const struct type type_nit__MNullableType;
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(val* self);
void nit___nit__SeparateCompiler___compile_type_resolution_table(val* self, val* p0);
void nit___nit__AbstractCompilerVisitor___require_declaration(val* self, val* p0);
#define COLOR_nit__model__MType__resolve_for 26
val* nit___nit__MClass___nit__model_base__MEntity__c_name(val* self);
short int nit__abstract_compiler___MClassType___MType__is_c_primitive(val* self);
long nit___nit__SeparateCompiler___box_kind_of(val* self, val* p0);
#define COLOR_standard__abstract_collection__MapRead__get_or_null 23
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nit__model__MClass___intro_mmodule 5
#define COLOR_nit__separate_compiler__MType___is_tagged 5
val* nit__abstract_compiler___MClassType___MType__ctype(val* self);
void nit___nit__AbstractCompilerVisitor___add_abort(val* self, val* p0);
val* nit___nit__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__RuntimeVariable___is_exact 3
void nit___nit__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1);
val* nit___nit__AbstractCompilerVisitor___get_name(val* self, val* p0);
#define COLOR_nit__model__MClassType__arguments 54
#define COLOR_nit__abstract_compiler__MType__ctype 27
void nit___nit__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2);
void nit___nit__AbstractCompilerVisitor___set_finalizer(val* self, val* p0);
extern const struct type type_standard__Array__nullable__nit__MClass;
void standard___standard__Array___filled_with(val* self, val* p0, long p1);
val* standard___standard__HashMap___standard__abstract_collection__MapRead__keys(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler__VISITOR 0
#define COLOR_nit__abstract_compiler__ToolContext___opt_hardening 82
#define COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats 106
#define COLOR_nit__separate_compiler__SeparateCompiler__display_sizes 63
#define COLOR_nit__abstract_compiler__ToolContext___opt_isset_checks_metrics 91
void nit___nit__SeparateCompiler___display_isset_checks(val* self);
val* counter___standard__Sys___div(val* self, long p0, long p1);
#define COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count 32
#define COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count 33
#define COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs 107
#define COLOR_nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module 108
#define COLOR_nit__model__MClassDef___mmodule 5
val* nit___nit__MSignature___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_nit__abstract_compiler__RuntimeVariable___mtype 1
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1);
void standard___standard__Sequence___first_61d(val* self, val* p0);
long nit___nit__MSignature___arity(val* self);
#define COLOR_nit__model__MSignature___mparameters 6
#define COLOR_nit__model__MParameter___mtype 5
#define COLOR_nit__model__MSignature___vararg_rank 8
#define COLOR_nit__model__MPropDef___mproperty 6
#define COLOR_nit__model__MMethod___is_init 17
#define COLOR_nit__model__MMethodDef___is_extern 18
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern 77
#define COLOR_nit__abstract_compiler__MType__is_c_primitive 37
#define COLOR_nit__model_base__MEntity__name 18
val* nit___nit__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1);
val* nit___nit__AbstractCompilerVisitor___new_var(val* self, val* p0);
val* nit___nit__AbstractCompilerVisitor___new_var_extern(val* self, val* p0);
short int nit___nit__SeparateCompilerVisitor___can_be_primitive(val* self, val* p0);
val* nit___nit__SeparateCompilerVisitor___extract_tag(val* self, val* p0);
#define COLOR_nit__typing__CallSite___mpropdef 6
extern const char FILE_nit__typing[];
#define COLOR_nit__model__MMethodDef___initializers 15
val* nit___nit__RapidTypeAnalysis___live_targets(val* self, val* p0);
#define COLOR_standard__abstract_collection__Collection__length 23
#define COLOR_standard__abstract_collection__Collection__first 29
val* nit___nit__SeparateCompilerVisitor___direct_call(val* self, val* p0, val* p1);
#define COLOR_nit__model__MMethodDef___is_intern 17
#define COLOR_nit__typing__CallSite___mproperty 5
#define COLOR_nit__model__MProperty___name 5
#define COLOR_nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite 105
val* nit___nit__SeparateCompilerVisitor___before_send(val* self, val* p0, val* p1);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
void nit___nit__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype 2
#define COLOR_nit__abstract_compiler__AbstractCompiler___realmainmodule 2
val* nit___nit__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2);
val* nit___nit__SeparateCompilerVisitor___table_send(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_null 87
extern const struct type type_nit__MNullType;
val* nit___nit__AbstractCompilerVisitor___bool_type(val* self);
val* nit___nit__RuntimeVariable___standard__string__Object__inspect(val* self);
#define COLOR_nit__abstract_compiler__ToolContext___opt_invocation_metrics 90
void nit___nit__AbstractCompilerVisitor___debug(val* self, val* p0);
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_signature 3
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
#define COLOR_nit__model__MSignature___return_mtype 7
val* nit___nit__SeparateRuntimeFunction___c_funptrtype(val* self);
val* nit___nit__SeparateCompilerVisitor___class_info(val* self, val* p0);
short int nit__abstract_compiler___MMethodDef___can_inline(val* self, val* p0);
val* NEW_nit__StaticFrame(const struct type* type);
extern const struct type type_nit__StaticFrame;
#define COLOR_nit__abstract_compiler__StaticFrame__visitor_61d 18
#define COLOR_nit__abstract_compiler__StaticFrame__mpropdef_61d 19
#define COLOR_nit__abstract_compiler__StaticFrame__receiver_61d 20
#define COLOR_nit__abstract_compiler__StaticFrame__arguments_61d 21
#define COLOR_nit__abstract_compiler__StaticFrame___returnlabel 5
#define COLOR_nit__abstract_compiler__StaticFrame___returnvar 4
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame 2
val* nit__abstract_compiler___MMethodDef___compile_inside_to_c(val* self, val* p0, val* p1);
val* nit___nit__MPropDef___nit__model_base__MEntity__c_name(val* self);
val* nit___nit__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2);
extern const struct type type_standard__Array__nit__RuntimeVariable;
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1);
void nit___nit__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0);
#define COLOR_nit__model__MAttributeDef___static_mtype 13
val* nit___nit__AbstractCompilerVisitor___object_type(val* self);
val* nit___nit__MType___as_nullable(val* self);
#define COLOR_nit__abstract_compiler__ToolContext___opt_no_check_attr_isset 84
#define COLOR_nit__abstract_compiler__MType__ctypename 48
val* nit__model___MModule___object_type(val* self);
val* standard___standard__Text___escape_to_c(val* self);
extern const struct type type_nit__MGenericType;
#define COLOR_nit__model__MGenericType___need_anchor 23
void nit___nit__SeparateCompilerVisitor___hardening_live_open_type(val* self, val* p0);
#define COLOR_nit__abstract_compiler__StaticFrame___mpropdef 1
void nit___nit__SeparateCompilerVisitor___link_unresolved_type(val* self, val* p0, val* p1);
#define COLOR_nit__abstract_compiler__StaticFrame___arguments 3
val* nit___nit__SeparateCompilerVisitor___type_info(val* self, val* p0);
short int nit___nit__SeparateCompilerVisitor___maybe_null(val* self, val* p0);
#define COLOR_nit__model__MProxyType___mtype 6
#define COLOR_nit__abstract_compiler__ToolContext___opt_typing_test_metrics 89
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped 17
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved 16
void nit___nit__SeparateCompilerVisitor___hardening_cast_type(val* self, val* p0);
val* standard___standard__String___Object__to_s(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved 15
val* nit___nit__MType___nit__model_base__MEntity__name(val* self);
val* nit___nit__AbstractCompilerVisitor___mmodule(val* self);
val* nit__model___MModule___native_array_class(val* self);
val* nit__model___MModule___array_class(val* self);
extern const struct type type_standard__Array__nit__MType;
val* nit___nit__MClass___get_mtype(val* self, val* p0);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__init_instance 24
val* nit___nit__AbstractCompilerVisitor___int_instance(val* self, long p0);
#define COLOR_nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance 85
val* nit___nit__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1);
val* nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1);
val* nit__model___MModule___native_array_type(val* self, val* p0);
val* nit__model___MModule___int_type(val* self);
val* nit___nit__MGenericType___nit__model_base__MEntity__c_name(val* self);
void nit___nit__AbstractCompilerVisitor___ret(val* self, val* p0);
#define COLOR_nit__separate_compiler__MMethodDef___separate_runtime_function_cache 20
val* NEW_nit__SeparateRuntimeFunction(const struct type* type);
extern const struct type type_nit__SeparateRuntimeFunction;
#define COLOR_nit__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d 19
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_recv_61d 29
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction__called_signature_61d 30
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction__build_c_name_61d 31
#define COLOR_nit__separate_compiler__MMethodDef___virtual_runtime_function_cache 21
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___called_recv 2
short int nit__separate_compiler___MSignature___c_equiv(val* self, val* p0);
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk 5
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name 4
#define COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
#define COLOR_nit__model__MPropDef___to_s 12
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_ret 6
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_sig 8
val* NEW_standard__FlatBuffer(const struct type* type);
extern const struct type type_standard__FlatBuffer;
#define COLOR_standard___standard__FlatBuffer___standard__kernel__Object__init 80
void standard___standard__FlatBuffer___Buffer__append(val* self, val* p0);
val* nit__model___MModule___array_type(val* self, val* p0);
val* standard___standard__FlatBuffer___Object__to_s(val* self);
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___c_funptrtype 10
#define COLOR_nit__separate_compiler__SeparateRuntimeFunction___arguments 12
#define COLOR_nit__abstract_compiler__AbstractRuntimeFunction__COMPILER 0
val* NEW_nit__RuntimeVariable(const struct type* type);
extern const struct type type_nit__RuntimeVariable;
#define COLOR_nit__abstract_compiler__RuntimeVariable__name_61d 17
#define COLOR_nit__abstract_compiler__RuntimeVariable__mtype_61d 18
#define COLOR_nit__abstract_compiler__RuntimeVariable__mcasttype_61d 19
val* standard__array___Collection___to_a(val* self);
#define COLOR_nit__abstract_compiler__AbstractCompiler___names 0
val* nit___nit__MPropDef___nit__model_base__MEntity__full_name(val* self);
#define COLOR_nit__model__MPropDef___location 7
#define COLOR_nit__location__Location___file 0
extern const char FILE_nit__location[];
#define COLOR_nit__location__SourceFile___filename 1
#define COLOR_nit__location__Location___line_start 1
short int nit___nit__MPropDef___is_intro(val* self);
#define COLOR_nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init 37
#define COLOR_nit__separate_compiler__MEntity___const_color 2
#define COLOR_nit__modelize_property__APropdef___mpropdef 4
#define COLOR_nit__separate_compiler___AMethPropdef___nit__abstract_compiler__APropdef__can_inline 100
#define COLOR_nit__separate_compiler___AAttrPropdef___init_expr 98
#define COLOR_nit__modelize_property__AAttrPropdef___is_lazy 14
#define COLOR_nit__modelize_property__AAttrPropdef___mlazypropdef 16
val* nit___nit__AbstractCompilerVisitor___bool_instance(val* self, short int p0);
void nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2);
