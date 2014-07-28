#include "nit.common.h"
#define COLOR_modelize_property__ToolContext___modelize_property_phase 33
#define COLOR_parser_nodes__AModule___n_classdefs 7
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_modelize_class__AClassdef___all_defs 7
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0);
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
void modelize_property__ModelBuilder__build_properties(val* self, val* p0);
#define COLOR_abstract_collection__Iterator__next 30
void modelize_property__ModelizePropertyPhase__process_nmodule(val* self, val* p0);
#define COLOR_modelize_property__ModelBuilder___mpropdef2npropdef 9
#define COLOR_modelize_property__AClassdef___build_properties_is_done 8
#define COLOR_modelize_class__AClassdef___mclassdef 6
#define COLOR_model__MClassDef___in_hierarchy 8
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef 8
short int abstract_collection__MapRead__has_key(val* self, val* p0);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_parser_nodes__AClassdef___n_propdefs 4
#define COLOR_modelize_property__APropdef__build_property 66
#define COLOR_modelize_property__APropdef__build_signature 67
#define COLOR_modelize_property__APropdef__check_signature 68
void array__ArrayIterator__next(val* self);
void modelize_property__ModelBuilder__process_default_constructors(val* self, val* p0);
short int model__MClassDef__is_intro(val* self);
#define COLOR_model__MClassDef___mclass 2
#define COLOR_model__MClass___kind 4
#define COLOR_model__MClassKind___need_init 1
#define COLOR_model__MClassDef___mpropdefs 10
extern const struct type type_model__MMethodDef;
#define COLOR_model__MPropDef___mproperty 3
#define COLOR_model__MMethod___is_init 9
extern const struct type type_parser_nodes__AStdClassdef;
#define COLOR_model__MClassDef___mmodule 1
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraymodel__MMethod;
void array__Array__init(val* self);
#define COLOR_model__MClassDef___supertypes 7
#define COLOR_model__MClassType___mclass 3
#define COLOR_model__MClassDef___bound_mtype 3
val* model__MClassType__anchor_to(val* self, val* p0, val* p1);
val* string__NativeString__to_s_with_length(char* self, long p0);
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_nullable_model__MMethod;
#define COLOR_kernel__Object___61d_61d 2
val* model__MProperty__intro(val* self);
#define COLOR_model__MMethodDef___msignature 7
long model__MSignature__arity(val* self);
void array__Array__add(val* self, val* p0);
#define COLOR_modelize_property__MClass___inherit_init_from 9
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
extern const struct type type_array__Arraymodel__MParameter;
extern const struct type type_parser_nodes__AAttrPropdef;
#define COLOR_modelize_property__APropdef___mpropdef 9
val* annotation__Prod__get_single_annotation(val* self, val* p0, val* p1);
#define COLOR_modelize_property__AAttrPropdef___noinit 18
val* parser_nodes__AAttrPropdef__n_expr(val* self);
#define COLOR_model__MProperty___name 2
val* string__Text__substring_from(val* self, long p0);
#define COLOR_model__MAttributeDef___static_mtype 7
val* NEW_model__MParameter(const struct type* type);
extern const struct type type_model__MParameter;
void model__MParameter__init(val* self, val* p0, val* p1, short int p2);
short int array__AbstractArrayRead__is_empty(val* self);
val* string__Collection__join(val* self, val* p0);
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
long array__AbstractArrayRead__length(val* self);
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_model__MProperty___intro_mclassdef 1
#define COLOR_modelize_property__AClassdef___super_inits 9
val* NEW_model__MMethod(const struct type* type);
extern const struct type type_model__MMethod;
#define COLOR_model__MClass___visibility 5
void model__MMethod__init(val* self, val* p0, val* p1, val* p2);
val* NEW_model__MMethodDef(const struct type* type);
val* parser_nodes__ANode__location(val* self);
void model__MMethodDef__init(val* self, val* p0, val* p1, val* p2);
val* NEW_model__MSignature(const struct type* type);
extern const struct type type_model__MSignature;
void model__MSignature__init(val* self, val* p0, val* p1);
#define COLOR_modelize_property__AClassdef___mfree_init 10
#define COLOR_model__MPropDef___mclassdef 2
#define COLOR_model__MType__as_notnullable 41
extern const struct type type_model__MClassType;
val* model__MClass__intro(val* self);
extern const struct type type_model__MVirtualType;
#define COLOR_model__MVirtualType___mproperty 3
#define COLOR_model__MProperty___visibility 3
extern const struct type type_model__MParameterType;
void parser_nodes__ANode__debug(val* self, val* p0);
val* mmodule__MModule__visibility_for(val* self, val* p0);
short int kernel__Comparable___62d(val* self, val* p0);
extern const struct type type_parser_nodes__AType;
#define COLOR_parser_nodes__AType___n_types 6
#define COLOR_modelize_class__AType___mtype 7
void modelize_property__ModelBuilder__check_visibility(val* self, val* p0, val* p1, val* p2);
extern const struct type type_model__MGenericType;
#define COLOR_model__MClassType___arguments 4
#define COLOR_modelize_property__MPropDef___has_supercall 5
#define COLOR_modelize_property__MClassDef___mprop2npropdef 11
val* NEW_modelize_property__TextCollectorVisitor(const struct type* type);
extern const struct type type_modelize_property__TextCollectorVisitor;
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
#define COLOR_modelize_property__TextCollectorVisitor___text 1
val* modelize_property__Prod__collect_text(val* self);
extern const struct type type_parser_nodes__Token;
val* lexer_work__Token__text(val* self);
val* string__FlatString___43d(val* self, val* p0);
#define COLOR_parser_nodes__ANode__visit_all 37
void modelize_property__TextCollectorVisitor__visit(val* self, val* p0);
#define COLOR_nullable_parser_nodes__APropdef_VTMPROPDEF 0
val* model_base__Object__public_visibility(val* self);
#define COLOR_modelbuilder__AVisibility__mvisibility 53
val* model_base__Object__intrude_visibility(val* self);
val* model_base__Object__private_visibility(val* self);
val* model_base__Object__protected_visibility(val* self);
val* modelize_property__APropdef__new_property_visibility(val* self, val* p0, val* p1, val* p2);
val* parser_nodes__APropdef__n_doc(val* self);
val* modelbuilder__ADoc__to_mdoc(val* self);
#define COLOR_mdoc__MEntity___mdoc 0
#define COLOR_mdoc__MDoc___original_mentity 1
void modelize_property__APropdef__set_doc(val* self, val* p0);
void modelize_property__APropdef__check_redef_property_visibility(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_collection__MapRead___91d_93d 29
#define COLOR_location__Location___line_start 1
val* BOX_kernel__Int(long);
#define COLOR_model__MMethod___is_toplevel 8
#define COLOR_parser_nodes__ANode___parent 1
extern const struct type type_parser_nodes__ATopClassdef;
short int modelize_property__APropdef__check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4);
#define COLOR_modelize_property__ASignature___is_visited 8
#define COLOR_modelize_property__ASignature___param_names 9
#define COLOR_modelize_property__ASignature___param_types 10
#define COLOR_modelize_property__ASignature___vararg_rank 11
#define COLOR_modelize_property__ASignature___ret_type 12
#define COLOR_parser_nodes__ASignature___n_params 5
val* parser_nodes__AParam__n_id(val* self);
val* parser_nodes__AParam__n_type(val* self);
val* modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
extern const struct type type_kernel__Int;
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
val* parser_nodes__AParam__n_dotdotdot(val* self);
val* array__Array___91d_93d(val* self, long p0);
val* parser_nodes__ASignature__n_type(val* self);
short int modelize_property__ASignature__visit_signature(val* self, val* p0, val* p1);
#define COLOR_modelize_property__AParam___mparameter 8
val* parser_nodes__AMethPropdef__n_kwinit(val* self);
val* parser_nodes__AMethPropdef__n_kwnew(val* self);
val* parser_nodes__AMethPropdef__n_methid(val* self);
extern const struct type type_parser_nodes__AIdMethid;
val* parser_nodes__AIdMethid__n_id(val* self);
short int string__FlatString___61d_61d(val* self, val* p0);
val* parser_nodes__AMethPropdef__n_signature(val* self);
long parser_nodes__ANodes__length(val* self);
val* parser_nodes__APropdef__n_kwredef(val* self);
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2);
val* parser_nodes__APropdef__n_visibility(val* self);
#define COLOR_model__MMethod___is_new 10
extern const struct type type_parser_nodes__AMainMethPropdef;
#define COLOR_abstract_collection__Map___91d_93d_61d 39
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
short int model__MPropDef__is_intro(val* self);
val* model__MProperty__full_name(val* self);
void modelize_property__AMethPropdef__build_property(val* self, val* p0, val* p1);
extern const struct type type_array__Arraystring__String;
extern const struct type type_array__Arraymodel__MType;
#define COLOR_model__MSignature___mparameters 3
#define COLOR_model__MParameter___mtype 2
#define COLOR_model__MSignature___vararg_rank 5
#define COLOR_model__MSignature___return_mtype 4
val* parser_nodes__ANodes___91d_93d(val* self, long p0);
extern const struct type type_parser_nodes__ADeferredMethPropdef;
#define COLOR_model__MMethodDef___is_abstract 8
extern const struct type type_parser_nodes__AInternMethPropdef;
#define COLOR_model__MMethodDef___is_intern 9
extern const struct type type_parser_nodes__AExternPropdef;
#define COLOR_model__MMethodDef___is_extern 10
void modelize_property__AMethPropdef__build_signature(val* self, val* p0);
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MParameter___name 1
void modelize_property__AMethPropdef__check_signature(val* self, val* p0);
#define COLOR_modelize_property__AAttrPropdef___is_lazy 19
#define COLOR_modelize_property__AAttrPropdef___mlazypropdef 20
#define COLOR_modelize_property__AAttrPropdef___mreadpropdef 21
#define COLOR_modelize_property__AAttrPropdef___mwritepropdef 22
val* parser_nodes__AAttrPropdef__n_id(val* self);
val* parser_nodes__AAttrPropdef__n_id2(val* self);
val* model__Object__interface_kind(val* self);
val* model__Object__enum_kind(val* self);
val* model__Object__extern_kind(val* self);
val* NEW_model__MAttribute(const struct type* type);
extern const struct type type_model__MAttribute;
void model__MAttribute__init(val* self, val* p0, val* p1, val* p2);
val* NEW_model__MAttributeDef(const struct type* type);
extern const struct type type_model__MAttributeDef;
void model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2);
val* parser_nodes__AAttrPropdef__n_readable(val* self);
val* parser_nodes__AAttrPropdef__n_writable(val* self);
val* model_base__Object__none_visibility(val* self);
#define COLOR_parser_nodes__AAnnotation___n_args 9
short int parser_nodes__ANodes__is_empty(val* self);
val* annotation__AAnnotation__arg_as_id(val* self, val* p0);
val* parser_nodes__AAble__n_kwredef(val* self);
val* parser_nodes__AAnnotation__n_kwredef(val* self);
val* parser_nodes__AAble__n_visibility(val* self);
val* parser_nodes__AAnnotation__n_visibility(val* self);
void modelize_property__AAttrPropdef__build_property(val* self, val* p0, val* p1);
val* parser_nodes__AAttrPropdef__n_type(val* self);
extern const struct type type_parser_nodes__ANewExpr;
val* parser_nodes__ANewExpr__n_type(val* self);
extern const struct type type_parser_nodes__AIntExpr;
val* modelbuilder__ModelBuilder__try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MClass___mclass_type 7
extern const struct type type_parser_nodes__AFloatExpr;
extern const struct type type_parser_nodes__ACharExpr;
extern const struct type type_parser_nodes__ABoolExpr;
extern const struct type type_parser_nodes__ASuperstringExpr;
extern const struct type type_parser_nodes__AStringFormExpr;
#define COLOR_toolcontext__ToolContext___opt_warn 6
#define COLOR_opts__Option___value 6
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1);
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
#define COLOR_modelbuilder__ModelBuilder___model 0
val* model__Model__get_mclasses_by_name(val* self, val* p0);
void modelize_property__AAttrPropdef__build_signature(val* self, val* p0);
void modelize_property__AAttrPropdef__check_method_signature(val* self, val* p0, val* p1);
void modelize_property__AAttrPropdef__check_signature(val* self, val* p0);
val* parser_nodes__ATypePropdef__n_id(val* self);
val* NEW_model__MVirtualTypeProp(const struct type* type);
extern const struct type type_model__MVirtualTypeProp;
void model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_string__FlatString___chars 6
extern const struct type type_kernel__Char;
val* NEW_model__MVirtualTypeDef(const struct type* type);
extern const struct type type_model__MVirtualTypeDef;
void model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MVirtualTypeDef___is_fixed 8
void modelize_property__ATypePropdef__build_property(val* self, val* p0, val* p1);
val* parser_nodes__ATypePropdef__n_type(val* self);
#define COLOR_model__MVirtualTypeDef___bound 7
void modelize_property__ATypePropdef__build_signature(val* self, val* p0);
extern const struct type type_array__Arraymodel__MVirtualType;
#define COLOR_model__MVirtualTypeProp___mvirtualtype 8
short int array__AbstractArrayRead__has(val* self, val* p0);
val* model__MVirtualType__lookup_bound(val* self, val* p0, val* p1);
val* model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1);
void modelize_property__ATypePropdef__check_signature(val* self, val* p0);
