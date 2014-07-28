#include "nit.common.h"
val* NEW_rapid_type_analysis__RapidTypeAnalysis(const struct type* type);
extern const struct type type_rapid_type_analysis__RapidTypeAnalysis;
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___modelbuilder 0
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___mainmodule 1
void rapid_type_analysis__RapidTypeAnalysis__run_analysis(val* self);
val* rapid_type_analysis__ModelBuilder__do_rapid_type_analysis(val* self, val* p0);
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types 2
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types 3
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes 4
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types 6
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs 7
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods 8
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_callsites 9
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache 10
#define COLOR_typing__CallSite___recv 1
#define COLOR_typing__CallSite___anchor 3
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_typing__CallSite___mmodule 2
#define COLOR_model__MType__anchor_to 35
#define COLOR_model__MType__as_notnullable 41
extern const struct type type_model__MClassType;
#define COLOR_model__MClassType___mclass 3
val* model__MClass__intro(val* self);
#define COLOR_model__MClassDef___bound_mtype 3
#define COLOR_typing__CallSite___mproperty 5
val* more_collections__HashMap2___91d_93d(val* self, val* p0, val* p1);
val* NEW_array__ArraySet(const struct type* type);
extern const struct type type_array__ArraySetmodel__MMethodDef;
void array__ArraySet__init(val* self);
void more_collections__HashMap2___91d_93d_61d(val* self, val* p0, val* p1, val* p2);
val* hash_collection__HashSet__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1);
void array__ArraySet__add(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 30
val* rapid_type_analysis__RapidTypeAnalysis__live_targets(val* self, val* p0);
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends 11
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods 12
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove 13
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods 14
#define COLOR_rapid_type_analysis__RapidTypeAnalysis___todo 15
#define COLOR_modelbuilder__ModelBuilder___model 0
val* model__Model__get_mclasses_by_name(val* self, val* p0);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_model__MClass___mclass_type 7
void rapid_type_analysis__RapidTypeAnalysis__add_new(val* self, val* p0, val* p1);
void array__ArrayIterator__next(val* self);
void rapid_type_analysis__RapidTypeAnalysis__force_alive(val* self, val* p0);
val* model__MModule__sys_type(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* model__MModule__try_get_primitive_method(val* self, val* p0, val* p1);
void rapid_type_analysis__RapidTypeAnalysis__add_send(val* self, val* p0, val* p1);
short int list__List__is_empty(val* self);
val* list__List__shift(val* self);
#define COLOR_model__MPropDef___mproperty 3
val* NEW_rapid_type_analysis__RapidTypeVisitor(const struct type* type);
extern const struct type type_rapid_type_analysis__RapidTypeVisitor;
#define COLOR_model__MPropDef___mclassdef 2
void rapid_type_analysis__RapidTypeVisitor__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MMethodDef___msignature 7
#define COLOR_model__MSignature___vararg_rank 5
extern const struct type type_kernel__Int;
#define COLOR_modelize_property__ModelBuilder___mpropdef2npropdef 9
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
#define COLOR_model__MSignature___mparameters 3
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_model__MParameter___mtype 2
val* model__MModule__get_primitive_class(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraymodel__MType;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
val* model__MClass__get_mtype(val* self, val* p0);
void rapid_type_analysis__RapidTypeVisitor__add_type(val* self, val* p0);
val* modelbuilder__ModelBuilder__force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3);
void rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send(val* self, val* p0, val* p1);
val* model__MProperty__intro(val* self);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
long model__MSignature__arity(val* self);
val* BOX_kernel__Int(long);
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
#define COLOR_model__MType__need_anchor 36
void rapid_type_analysis__RapidTypeAnalysis__add_cast(val* self, val* p0);
short int abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_model__MProperty___name 2
short int string__FlatString___61d_61d(val* self, val* p0);
#define COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef 8
#define COLOR_modelize_property__AClassdef___super_inits 9
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_rapid_type_analysis__RapidTypeVisitor___receiver 2
extern const struct type type_parser_nodes__AMethPropdef;
#define COLOR_auto_super_init__AMethPropdef___auto_super_inits 20
void rapid_type_analysis__RapidTypeVisitor__add_callsite(val* self, val* p0);
#define COLOR_model__MMethod___is_new 10
#define COLOR_model__MMethodDef___is_intern 9
#define COLOR_model__MMethodDef___is_extern 10
#define COLOR_model__MSignature___return_mtype 4
#define COLOR_model__MClass___kind 4
val* model__Object__abstract_kind(val* self);
val* model__Object__interface_kind(val* self);
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
val* NEW_list__List(const struct type* type);
extern const struct type type_list__Listmodel__MClassType;
void abstract_collection__SimpleCollection__add_all(val* self, val* p0);
#define COLOR_model__MType__can_resolve_for 39
val* model__MClassType__anchor_to(val* self, val* p0, val* p1);
short int hash_collection__HashSet__has(val* self, val* p0);
void hash_collection__HashSet__add(val* self, val* p0);
void abstract_collection__Sequence__add(val* self, val* p0);
void rapid_type_analysis__RapidTypeAnalysis__check_depth(val* self, val* p0);
#define COLOR_model__MType__length 44
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1);
void rapid_type_analysis__RapidTypeAnalysis__try_send(val* self, val* p0, val* p1);
void rapid_type_analysis__RapidTypeAnalysis__try_super_send(val* self, val* p0, val* p1);
void hash_collection__HashSet__remove(val* self, val* p0);
void array__AbstractArray__clear(val* self);
val* model__MClassType__collect_mclassdefs(val* self, val* p0);
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
val* parser_nodes__ANodes__iterator(val* self);
extern const struct type type_parser_nodes__AAttrPropdef;
val* parser_nodes__AAttrPropdef__n_expr(val* self);
#define COLOR_modelize_property__APropdef___mpropdef 9
short int model__MType__has_mproperty(val* self, val* p0, val* p1);
void rapid_type_analysis__RapidTypeAnalysis__add_call(val* self, val* p0);
#define COLOR_model__MProperty___mpropdefs 4
long array__AbstractArrayRead__length(val* self);
#define COLOR_model__MMethodDef___is_abstract 8
void array__Array__add(val* self, val* p0);
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_abstract_collection__Collection__has 32
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1);
void rapid_type_analysis__RapidTypeAnalysis__add_super_send(val* self, val* p0, val* p1);
#define COLOR_rapid_type_analysis__RapidTypeVisitor___analysis 1
#define COLOR_rapid_type_analysis__RapidTypeVisitor___mpropdef 3
#define COLOR_rapid_type_analysis__ANode__accept_rapid_type_visitor 44
extern const struct type type_parser_nodes__AExpr;
#define COLOR_typing__AExpr___implicit_cast_to 7
void rapid_type_analysis__RapidTypeVisitor__add_cast_type(val* self, val* p0);
extern const struct type type_parser_nodes__AAnnotations;
#define COLOR_parser_nodes__ANode__visit_all 37
void rapid_type_analysis__RapidTypeVisitor__visit(val* self, val* p0);
extern const struct type type_model__MNullType;
val* rapid_type_analysis__RapidTypeVisitor__cleanup_type(val* self, val* p0);
val* rapid_type_analysis__RapidTypeVisitor__get_class(val* self, val* p0);
val* parser_nodes__Visitor__current_node(val* self);
val* rapid_type_analysis__RapidTypeVisitor__get_method(val* self, val* p0, val* p1);
#define COLOR_typing__AExpr___mtype 5
void rapid_type_analysis__AIntExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__ACharExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_model__MClassType___arguments 4
void rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor(val* self, val* p0);
extern const struct type type_array__Arraymodel__MClassType;
void rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__ARangeExpr___init_callsite 11
void rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__AIsaExpr___cast_type 11
void rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__ASendExpr___callsite 10
void rapid_type_analysis__ASendExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__AReassignFormExpr___reassign_callsite 13
#define COLOR_typing__ASendReassignFormExpr___write_callsite 17
void rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor(val* self, val* p0);
void rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__ASuperExpr___callsite 12
#define COLOR_typing__ASuperExpr___mpropdef 13
void rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__AForExpr___method_iterator 18
#define COLOR_typing__AForExpr___method_is_ok 19
#define COLOR_scope__AForExpr___variables 15
#define COLOR_typing__AForExpr___method_item 20
#define COLOR_typing__AForExpr___method_key 22
#define COLOR_typing__AForExpr___method_next 21
void rapid_type_analysis__AForExpr__accept_rapid_type_visitor(val* self, val* p0);
#define COLOR_typing__ANewExpr___callsite 13
void rapid_type_analysis__ANewExpr__accept_rapid_type_visitor(val* self, val* p0);
