#include "nit.common.h"
val* NEW_nitc__RapidTypeAnalysis(const struct type* type);
extern const struct type type_nitc__RapidTypeAnalysis;
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d 12
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d 13
#define COLOR_core__kernel__Object__init 0
void nitc___nitc__RapidTypeAnalysis___run_analysis(val* self);
#define COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext 13
extern const char FILE_nitc__modelbuilder_base[];
#define COLOR_nitc__toolcontext__ToolContext___opt_log 19
extern const char FILE_nitc__toolcontext[];
#define COLOR_opts__Option___value 6
#define COLOR_nitc__toolcontext__ToolContext___log_directory 9
#define COLOR_nitc__mmodule__MModule___name 43
extern const char FILE_nitc__mmodule[];
val* core__file___String____47d(val* self, val* p0);
val* nitc___nitc__RapidTypeAnalysis___live_methods_to_tree(val* self);
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_core__abstract_text__Text___43d 39
void core__file___Writable___write_to_file(val* self, val* p0);
val* nitc___nitc__RapidTypeAnalysis___live_types_to_csv(val* self);
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder 0
extern const char FILE_nitc__rapid_type_analysis[];
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule 1
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types 2
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types 3
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes 4
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types 6
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods 8
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules 9
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_callsites 10
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache 11
#define COLOR_nitc__typing__CallSite___recv 7
extern const char FILE_nitc__typing[];
#define COLOR_nitc__typing__CallSite___anchor 9
#define COLOR_core__kernel__Object___61d_61d 4
#define COLOR_nitc__typing__CallSite___mmodule 8
#define COLOR_nitc__model__MType__anchor_to 33
#define COLOR_nitc__model__MType__undecorate 51
extern const struct type type_nitc__MClassType;
#define COLOR_nitc__model__MClassType___mclass 9
extern const char FILE_nitc__model[];
#define COLOR_nitc__model__MClass___intro 19
#define COLOR_nitc__model__MClassDef___bound_mtype 9
#define COLOR_nitc__typing__CallSite___mproperty 11
val* more_collections___more_collections__HashMap2____91d_93d(val* self, val* p0, val* p1);
val* NEW_core__ArraySet(const struct type* type);
extern const struct type type_core__ArraySet__nitc__MMethodDef;
void core___core__ArraySet___core__kernel__Object__init(val* self);
void more_collections___more_collections__HashMap2____91d_93d_61d(val* self, val* p0, val* p1, val* p2);
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
void core___core__ArraySet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends 12
val* NEW_core__HashSet(const struct type* type);
extern const struct type type_core__HashSet__nitc__MType;
void core___core__HashSet___core__kernel__Object__init(val* self);
void core___core__SimpleCollection___add_all(val* self, val* p0);
val* core__array___Collection___to_a(val* self);
val* NEW_core__CachedAlphaComparator(const struct type* type);
extern const struct type type_core__CachedAlphaComparator;
void core___core__Comparator___sort(val* self, val* p0);
val* NEW_csv__CsvDocument(const struct type* type);
extern const struct type type_csv__CsvDocument;
#define COLOR_csv__CsvDocument__header_61d 18
#define COLOR_csv__CsvDocument__records_61d 19
#define COLOR_csv__CsvStream___separator 1
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__core__String;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
#define COLOR_csv__CsvDocument___header 3
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_nitc__model__MType__need_anchor 31
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
extern const struct type type_core__Array__core__Object;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__Object;
#define COLOR_core__array__Array__with_native 32
void csv___csv__CsvDocument___add_record(val* self, val* p0);
val* NEW_ordered_tree__OrderedTree(const struct type* type);
extern const struct type type_ordered_tree__OrderedTree__core__Object;
val* nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(val* self);
void ordered_tree___ordered_tree__OrderedTree___add(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MProperty___mpropdefs 15
#define COLOR_nitc__model__MPropDef___to_s 14
val* core__abstract_text___Sys___alpha_comparator(val* self);
void ordered_tree___ordered_tree__OrderedTree___sort_with(val* self, val* p0);
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods 13
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove 14
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods 15
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo 16
#define COLOR_nitc__modelbuilder_base__ModelBuilder___model 12
val* nitc__model___Model___get_mclasses_by_name(val* self, val* p0);
#define COLOR_nitc__model__MClass___mclass_type 20
void nitc___nitc__RapidTypeAnalysis___add_new(val* self, val* p0, val* p1);
val* nitc__model___MModule___sys_type(val* self);
val* nitc__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1);
void nitc___nitc__RapidTypeAnalysis___add_send(val* self, val* p0, val* p1);
val* nitc__model___MModule___finalizable_type(val* self);
void nitc___nitc__RapidTypeAnalysis___force_alive(val* self, val* p0);
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self);
val* core___core__List___core__abstract_collection__Sequence__shift(val* self);
#define COLOR_nitc__model__MPropDef___mproperty 8
#define COLOR_nitc__model__MMethodDef___msignature 15
val* NEW_nitc__RapidTypeVisitor(const struct type* type);
extern const struct type type_nitc__RapidTypeVisitor;
#define COLOR_nitc__model__MPropDef___mclassdef 7
#define COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__analysis_61d 15
#define COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__receiver_61d 16
#define COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d 17
#define COLOR_nitc__model__MSignature___vararg_rank 11
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
val* nitc__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0);
#define COLOR_nitc__model__MSignature___mparameters 9
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nitc__model__MParameter___mtype 7
val* nitc__model___MModule___array_type(val* self, val* p0);
void nitc___nitc__RapidTypeVisitor___add_type(val* self, val* p0);
val* nitc__model___MModule___native_array_type(val* self, val* p0);
val* nitc___nitc__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
void nitc___nitc__RapidTypeVisitor___add_monomorphic_send(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MProperty___intro 16
long nitc___nitc__MSignature___arity(val* self);
void nitc___nitc__RapidTypeAnalysis___add_cast(val* self, val* p0);
long core___core__Int___Discrete__successor(long self, long p0);
#define COLOR_nitc__model__MMethodDef___is_abstract 18
extern const struct type type_nitc__AClassdef;
#define COLOR_nitc__model__MMethod___is_root_init 21
short int nitc___nitc__MPropDef___is_intro(val* self);
#define COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver 2
void nitc___nitc__RapidTypeAnalysis___add_super_send(val* self, val* p0, val* p1);
extern const struct type type_core__NativeArray__core__String;
#define COLOR_core__abstract_text__Object__to_s 3
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
void nitc___nitc__ANode___debug(val* self, val* p0);
#define COLOR_nitc__model__MMethodDef___constant_value 21
#define COLOR_core__kernel__Object___33d_61d 1
#define COLOR_nitc__model__MSignature___return_mtype 10
extern const struct type type_nitc__AMethPropdef;
#define COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits 25
void nitc___nitc__RapidTypeVisitor___add_callsite(val* self, val* p0);
#define COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call 26
#define COLOR_nitc__model__MMethodDef___is_intern 19
#define COLOR_nitc__model__MMethodDef___is_extern 20
#define COLOR_nitc__model__MClass___kind 16
val* nitc__model___core__Sys___abstract_kind(val* self);
val* nitc__model___core__Sys___interface_kind(val* self);
void nitc___nitc__Visitor___enter_visit(val* self, val* p0);
val* NEW_core__List(const struct type* type);
extern const struct type type_core__List__nitc__MClassType;
#define COLOR_core___core__List___core__kernel__Object__init 17
#define COLOR_nitc__model__MType__can_resolve_for 32
val* nitc___nitc__MClassType___MType__anchor_to(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MType__is_legal_in 34
short int nitc___nitc__RapidTypeAnalysis___check_depth(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
void core___core__List___core__abstract_collection__Sequence__unshift(val* self, val* p0);
#define COLOR_nitc__model__MType__length 40
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
void nitc___nitc__ToolContext___fatal_error(val* self, val* p0, val* p1);
void nitc___nitc__RapidTypeAnalysis___try_send(val* self, val* p0, val* p1);
void nitc___nitc__RapidTypeAnalysis___try_super_send(val* self, val* p0, val* p1);
void core___core__HashSet___core__abstract_collection__RemovableCollection__remove(val* self, val* p0);
void core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(val* self);
val* nitc___nitc__MClassType___MType__collect_mclassdefs(val* self, val* p0);
#define COLOR_core__abstract_collection__Collection__iterator 24
val* nitc__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0);
#define COLOR_nitc__modelize_property__AAttrPropdef___has_value 18
#define COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef 20
#define COLOR_nitc__parser_nodes__AAttrPropdef___n_expr 26
#define COLOR_nitc__parser_nodes__AAttrPropdef___n_block 28
short int nitc___nitc__MType___has_mproperty(val* self, val* p0, val* p1);
void nitc___nitc__RapidTypeAnalysis___add_call(val* self, val* p0);
#define COLOR_nitc__model__MClassDef___mmodule 7
void core___core__Sequence___SimpleCollection__add(val* self, val* p0);
#define COLOR_core__array__AbstractArrayRead___length 0
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
val* core___core__SequenceRead___Collection__first(val* self);
#define COLOR_core__abstract_collection__Collection__has 27
val* nitc___nitc__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
#define COLOR_nitc__modelize_property__MPropDef___has_supercall 6
#define COLOR_nitc___nitc__RapidTypeAnalysis___core__kernel__Object__init 44
#define COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis 1
#define COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___mpropdef 3
#define COLOR_nitc___nitc__RapidTypeVisitor___core__kernel__Object__init 26
extern const struct type type_nitc__AExpr;
#define COLOR_nitc__typing__AExpr__mtype 49
#define COLOR_nitc__typing__AExpr___is_typed 13
#define COLOR_nitc__rapid_type_analysis__ANode__accept_rapid_type_visitor 23
#define COLOR_nitc__typing__AExpr___implicit_cast_to 14
void nitc___nitc__RapidTypeVisitor___add_cast_type(val* self, val* p0);
extern const struct type type_nitc__AAnnotations;
#define COLOR_nitc__parser_nodes__ANode__visit_all 14
extern const struct type type_nitc__MNullType;
val* nitc___nitc__RapidTypeVisitor___cleanup_type(val* self, val* p0);
#define COLOR_nitc__parser_nodes__Visitor___current_node 0
#define COLOR_nitc__typing__CallSite___mpropdef 12
#define COLOR_nitc__model__MMethodDef___initializers 17
extern const struct type type_nitc__MMethod;
void nitc__rapid_type_analysis___AExpr___allocate_mtype(val* self, val* p0);
#define COLOR_nitc__typing__AExpr___mtype 12
#define COLOR_nitc__model__MClassType__arguments 61
val* nitc___nitc__RapidTypeVisitor___get_method(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__AArrayExpr___with_capacity_callsite 8
#define COLOR_nitc__typing__AArrayExpr___push_callsite 18
val* nitc__model___MModule___c_string_type(val* self);
#define COLOR_nitc__typing__AugmentedStringFormExpr___to_re 20
#define COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case 21
#define COLOR_nitc__typing__AugmentedStringFormExpr___newline 22
#define COLOR_nitc__typing__AugmentedStringFormExpr___extended 23
#define COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy 24
val* nitc__model___MModule___string_type(val* self);
#define COLOR_nitc__typing__ARangeExpr___init_callsite 6
#define COLOR_nitc__typing__AIsaExpr___cast_type 6
#define COLOR_nitc__typing__ASendExpr___callsite 4
#define COLOR_nitc__typing__AReassignFormExpr___reassign_callsite 7
#define COLOR_nitc__typing__ASendReassignFormExpr___write_callsite 20
#define COLOR_nitc__typing__ASuperExpr___callsite 6
#define COLOR_nitc__typing__ASuperExpr___mpropdef 7
#define COLOR_nitc__typing__AForGroup___method_iterator 7
#define COLOR_nitc__typing__AForGroup___method_is_ok 8
#define COLOR_nitc__scope__AForGroup___variables 17
extern const char FILE_core__array[];
#define COLOR_nitc__typing__AForGroup___method_item 11
#define COLOR_nitc__typing__AForGroup___method_key 13
#define COLOR_nitc__typing__AForGroup___method_next 12
#define COLOR_nitc__typing__AForGroup___method_finish 14
#define COLOR_nitc__typing__ANewExpr___recvtype 8
#define COLOR_nitc__typing__ANewExpr___callsite 7
