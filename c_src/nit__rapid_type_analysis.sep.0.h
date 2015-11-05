#include "nit.common.h"
val* NEW_nit__RapidTypeAnalysis(const struct type* type);
extern const struct type type_nit__RapidTypeAnalysis;
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d 16
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d 17
#define COLOR_standard__kernel__Object__init 0
void nit___nit__RapidTypeAnalysis___run_analysis(val* self);
#define COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext 10
extern const char FILE_nit__modelbuilder_base[];
#define COLOR_nit__toolcontext__ToolContext___opt_log 19
extern const char FILE_nit__toolcontext[];
#define COLOR_opts__Option___value 6
#define COLOR_nit__toolcontext__ToolContext___log_directory 9
#define COLOR_nit__mmodule__MModule___name 31
extern const char FILE_nit__mmodule[];
val* standard__file___String____47d(val* self, val* p0);
val* nit___nit__RapidTypeAnalysis___live_methods_to_tree(val* self);
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
#define COLOR_standard__string__String___43d 71
void standard__file___Writable___write_to_file(val* self, val* p0);
val* nit___nit__RapidTypeAnalysis___live_types_to_csv(val* self);
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___modelbuilder 0
extern const char FILE_nit__rapid_type_analysis[];
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___mainmodule 1
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types 2
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types 3
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes 4
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types 6
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods 8
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_callsites 9
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache 10
#define COLOR_nit__typing__CallSite___recv 1
extern const char FILE_nit__typing[];
#define COLOR_nit__typing__CallSite___anchor 3
#define COLOR_standard__kernel__Object___61d_61d 4
#define COLOR_nit__typing__CallSite___mmodule 2
#define COLOR_nit__model__MType__anchor_to 30
#define COLOR_nit__model__MType__undecorate 45
extern const struct type type_nit__MClassType;
#define COLOR_nit__model__MClassType___mclass 6
extern const char FILE_nit__model[];
#define COLOR_nit__model__MClass___intro 16
#define COLOR_nit__model__MClassDef___bound_mtype 7
#define COLOR_nit__typing__CallSite___mproperty 5
val* more_collections___more_collections__HashMap2____91d_93d(val* self, val* p0, val* p1);
val* NEW_standard__ArraySet(const struct type* type);
extern const struct type type_standard__ArraySet__nit__MMethodDef;
void standard___standard__ArraySet___standard__kernel__Object__init(val* self);
void more_collections___more_collections__HashMap2____91d_93d_61d(val* self, val* p0, val* p1, val* p2);
val* standard___standard__HashSet___standard__abstract_collection__Collection__iterator(val* self);
#define COLOR_standard__abstract_collection__Iterator__is_ok 16
#define COLOR_standard__abstract_collection__Iterator__item 17
short int nit___nit__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
val* nit___nit__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
void standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_standard__abstract_collection__Iterator__next 18
#define COLOR_standard__abstract_collection__Iterator__finish 19
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends 11
val* NEW_standard__HashSet(const struct type* type);
extern const struct type type_standard__HashSet__nit__MType;
void standard___standard__HashSet___standard__kernel__Object__init(val* self);
void standard___standard__SimpleCollection___add_all(val* self, val* p0);
val* standard__array___Collection___to_a(val* self);
val* NEW_standard__CachedAlphaComparator(const struct type* type);
extern const struct type type_standard__CachedAlphaComparator;
void standard___standard__Comparator___sort(val* self, val* p0);
val* NEW_csv__CsvDocument(const struct type* type);
extern const struct type type_csv__CsvDocument;
val* NEW_csv__CsvFormat(const struct type* type);
extern const struct type type_csv__CsvFormat;
#define COLOR_csv__CsvFormat__delimiter_61d 17
#define COLOR_csv__CsvFormat__separator_61d 18
#define COLOR_csv__CsvFormat__eol_61d 19
#define COLOR_csv__CsvDocument___format 0
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__String;
void standard___standard__Array___with_capacity(val* self, long p0);
void standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(val* self, val* p0);
#define COLOR_csv__CsvDocument___header 1
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
#define COLOR_nit__model__MType__need_anchor 28
short int standard___standard__HashSet___standard__abstract_collection__Collection__has(val* self, val* p0);
extern const struct type type_standard__Array__standard__Object;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__Object;
#define COLOR_standard__array__Array__with_native 58
void csv___csv__CsvDocument___add_record(val* self, val* p0);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(val* self);
val* NEW_ordered_tree__OrderedTree(const struct type* type);
extern const struct type type_ordered_tree__OrderedTree__standard__Object;
val* nit___nit__MProperty___nit__model_base__MEntity__full_name(val* self);
void ordered_tree___ordered_tree__OrderedTree___add(val* self, val* p0, val* p1);
#define COLOR_nit__model__MProperty___mpropdefs 12
#define COLOR_nit__model__MPropDef___to_s 12
val* standard__string___Sys___alpha_comparator(val* self);
void ordered_tree___ordered_tree__OrderedTree___sort_with(val* self, val* p0);
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods 12
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove 13
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___try_methods 14
#define COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo 15
#define COLOR_nit__modelbuilder_base__ModelBuilder___model 9
val* nit__model___Model___get_mclasses_by_name(val* self, val* p0);
#define COLOR_nit__model__MClass___mclass_type 17
void nit___nit__RapidTypeAnalysis___add_new(val* self, val* p0, val* p1);
val* nit__model___MModule___sys_type(val* self);
val* nit__model___MModule___try_get_primitive_method(val* self, val* p0, val* p1);
void nit___nit__RapidTypeAnalysis___add_send(val* self, val* p0, val* p1);
val* nit__model___MModule___finalizable_type(val* self);
void nit___nit__RapidTypeAnalysis___force_alive(val* self, val* p0);
short int standard___standard__List___standard__abstract_collection__Collection__is_empty(val* self);
val* standard___standard__List___standard__abstract_collection__Sequence__shift(val* self);
#define COLOR_nit__model__MPropDef___mproperty 6
#define COLOR_nit__model__MMethodDef___msignature 13
val* NEW_nit__RapidTypeVisitor(const struct type* type);
extern const struct type type_nit__RapidTypeVisitor;
#define COLOR_nit__model__MPropDef___mclassdef 5
#define COLOR_nit__rapid_type_analysis__RapidTypeVisitor__analysis_61d 19
#define COLOR_nit__rapid_type_analysis__RapidTypeVisitor__receiver_61d 20
#define COLOR_nit__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d 21
#define COLOR_nit__model__MSignature___vararg_rank 8
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
val* nit__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0);
#define COLOR_nit__model__MSignature___mparameters 6
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nit__model__MParameter___mtype 5
val* nit__model___MModule___array_type(val* self, val* p0);
void nit___nit__RapidTypeVisitor___add_type(val* self, val* p0);
val* nit__model___MModule___native_array_type(val* self, val* p0);
val* nit___nit__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
void nit___nit__RapidTypeVisitor___add_monomorphic_send(val* self, val* p0, val* p1);
#define COLOR_nit__model__MProperty___intro 13
long nit___nit__MSignature___arity(val* self);
void nit___nit__RapidTypeAnalysis___add_cast(val* self, val* p0);
long standard___standard__Int___Discrete__successor(long self, long p0);
extern const struct type type_nit__AClassdef;
#define COLOR_nit__modelize_property__AClassdef___mfree_init 5
#define COLOR_nit__model__MMethod___is_root_init 18
short int nit___nit__MPropDef___is_intro(val* self);
#define COLOR_nit__rapid_type_analysis__RapidTypeVisitor___receiver 2
void nit___nit__RapidTypeAnalysis___add_super_send(val* self, val* p0, val* p1);
#define COLOR_nit__model__MMethodDef___constant_value 19
#define COLOR_standard__kernel__Object___33d_61d 1
#define COLOR_nit__model__MSignature___return_mtype 7
extern const struct type type_nit__AMethPropdef;
#define COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits 23
void nit___nit__RapidTypeVisitor___add_callsite(val* self, val* p0);
#define COLOR_nit__auto_super_init__AMethPropdef___auto_super_call 24
#define COLOR_nit__model__MMethodDef___is_intern 17
#define COLOR_nit__model__MMethodDef___is_extern 18
#define COLOR_nit__model__MClass___kind 13
val* nit__model___standard__Sys___abstract_kind(val* self);
val* nit__model___standard__Sys___interface_kind(val* self);
void nit___nit__Visitor___enter_visit(val* self, val* p0);
val* NEW_standard__List(const struct type* type);
extern const struct type type_standard__List__nit__MClassType;
#define COLOR_nit__model__MType__can_resolve_for 29
val* nit___nit__MClassType___MType__anchor_to(val* self, val* p0, val* p1);
short int nit___nit__RapidTypeAnalysis___check_depth(val* self, val* p0);
void standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
void standard___standard__Sequence___SimpleCollection__add(val* self, val* p0);
#define COLOR_nit__model__MType__length 35
extern const struct type type_standard__NativeArray__standard__String;
val* standard__string___Int___Object__to_s(long self);
#define COLOR_standard__string__Object__to_s 3
#define COLOR_standard__string__NativeArray__native_to_s 16
void nit___nit__ToolContext___fatal_error(val* self, val* p0, val* p1);
void nit___nit__RapidTypeAnalysis___try_send(val* self, val* p0, val* p1);
void nit___nit__RapidTypeAnalysis___try_super_send(val* self, val* p0, val* p1);
void standard___standard__HashSet___standard__abstract_collection__RemovableCollection__remove(val* self, val* p0);
void standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(val* self);
val* nit___nit__MClassType___MType__collect_mclassdefs(val* self, val* p0);
#define COLOR_standard__abstract_collection__Collection__iterator 25
val* nit__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0);
#define COLOR_nit__modelize_property__AAttrPropdef___has_value 15
#define COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef 17
#define COLOR_nit__parser_nodes__AAttrPropdef___n_expr 23
#define COLOR_nit__parser_nodes__AAttrPropdef___n_block 25
short int nit___nit__MType___has_mproperty(val* self, val* p0, val* p1);
void nit___nit__RapidTypeAnalysis___add_call(val* self, val* p0);
#define COLOR_standard__array__AbstractArrayRead___length 0
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
val* standard___standard__SequenceRead___Collection__first(val* self);
#define COLOR_standard__abstract_collection__Collection__has 28
val* nit___nit__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
#define COLOR_nit__modelize_property__MPropDef___has_supercall 4
#define COLOR_nit___nit__RapidTypeAnalysis___standard__kernel__Object__init 47
#define COLOR_nit__rapid_type_analysis__RapidTypeVisitor___analysis 1
#define COLOR_nit__rapid_type_analysis__RapidTypeVisitor___mpropdef 3
#define COLOR_nit___nit__RapidTypeVisitor___standard__kernel__Object__init 30
extern const struct type type_nit__AExpr;
#define COLOR_nit__typing__AExpr__mtype 42
#define COLOR_nit__typing__AExpr___is_typed 6
#define COLOR_nit__rapid_type_analysis__ANode__accept_rapid_type_visitor 25
#define COLOR_nit__typing__AExpr___implicit_cast_to 7
void nit___nit__RapidTypeVisitor___add_cast_type(val* self, val* p0);
extern const struct type type_nit__AAnnotations;
#define COLOR_nit__parser_nodes__ANode__visit_all 20
extern const struct type type_nit__MNullType;
val* nit___nit__RapidTypeVisitor___cleanup_type(val* self, val* p0);
#define COLOR_nit__parser_nodes__Visitor___current_node 0
#define COLOR_nit__typing__CallSite___mpropdef 6
#define COLOR_nit__model__MMethodDef___initializers 15
extern const struct type type_nit__MMethod;
#define COLOR_nit__typing__AExpr___mtype 5
#define COLOR_nit__model__MClassType__arguments 54
val* nit___nit__RapidTypeVisitor___get_method(val* self, val* p0, val* p1);
#define COLOR_nit__typing__AArrayExpr___with_capacity_callsite 15
#define COLOR_nit__typing__AArrayExpr___push_callsite 16
val* nit__model___MModule___native_string_type(val* self);
val* nit__model___MModule___string_type(val* self);
#define COLOR_nit__typing__ARangeExpr___init_callsite 13
#define COLOR_nit__typing__AIsaExpr___cast_type 13
#define COLOR_nit__typing__ASendExpr___callsite 11
#define COLOR_nit__typing__AReassignFormExpr___reassign_callsite 14
#define COLOR_nit__typing__ASendReassignFormExpr___write_callsite 18
#define COLOR_nit__typing__ASuperExpr___callsite 13
#define COLOR_nit__typing__ASuperExpr___mpropdef 14
#define COLOR_nit__typing__AForExpr___method_iterator 18
#define COLOR_nit__typing__AForExpr___method_is_ok 19
#define COLOR_nit__scope__AForExpr___variables 26
extern const char FILE_standard__array[];
#define COLOR_nit__typing__AForExpr___method_item 20
#define COLOR_nit__typing__AForExpr___method_key 22
#define COLOR_nit__typing__AForExpr___method_next 21
#define COLOR_nit__typing__AForExpr___method_finish 23
#define COLOR_nit__typing__ANewExpr___recvtype 15
#define COLOR_nit__typing__ANewExpr___callsite 14
