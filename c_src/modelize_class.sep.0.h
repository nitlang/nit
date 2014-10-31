#include "nit.common.h"
#define COLOR_modelize_class__ToolContext___modelize_class_phase 35
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
void modelize_class__ModelBuilder__build_classes(val* self, val* p0);
void modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0);
#define COLOR_modelbuilder__AModule___mmodule 8
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraystring__String;
#define COLOR_kernel__Object__init 7
extern const struct type type_parser_nodes__AStdClassdef;
#define COLOR_parser_nodes__AStdClassdef___n_id 14
val* lexer_work__Token__text(val* self);
#define COLOR_parser_nodes__AStdClassdef___n_classkind 13
#define COLOR_modelize_class__AClasskind__mkind 54
#define COLOR_parser_nodes__AStdClassdef___n_visibility 12
#define COLOR_modelbuilder__AVisibility__mvisibility 54
#define COLOR_parser_nodes__AStdClassdef___n_formaldefs 15
long parser_nodes__ANodes__length(val* self);
val* model_base__Object__protected_visibility(val* self);
val* string__NativeString__to_s_with_length(char* self, long p0);
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
val* model_base__Object__intrude_visibility(val* self);
extern const struct type type_kernel__Int;
val* parser_nodes__ANodes___91d_93d(val* self, long p0);
#define COLOR_parser_nodes__AFormaldef___n_id 4
short int array__AbstractArrayRead__has(val* self, val* p0);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
#define COLOR_string__FlatString___chars 6
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
extern const struct type type_kernel__Char;
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1, val* p2);
#define COLOR_abstract_collection__Iterator__next 32
void array__Array__add(val* self, val* p0);
long kernel__Int__successor(long self, long p0);
extern const struct type type_parser_nodes__ATopClassdef;
val* model__Object__interface_kind(val* self);
val* model_base__Object__public_visibility(val* self);
extern const struct type type_parser_nodes__AMainClassdef;
val* model__Object__concrete_kind(val* self);
val* modelbuilder__ModelBuilder__try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
#define COLOR_parser_nodes__AStdClassdef___n_kwredef 11
#define COLOR_kernel__Object___61d_61d 2
val* NEW_model__MClass(const struct type* type);
extern const struct type type_model__MClass;
void model__MClass__init(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
#define COLOR_modelize_class__AModule___mclass2nclassdef 11
short int abstract_collection__MapRead__has_key(val* self, val* p0);
#define COLOR_abstract_collection__MapRead___91d_93d 31
#define COLOR_parser_nodes__ANode___location 0
#define COLOR_location__Location___line_start 1
val* BOX_kernel__Int(long);
#define COLOR_model__MClass___arity 4
#define COLOR_model__MClass___kind 6
#define COLOR_model__MClass___visibility 7
#define COLOR_modelize_class__AClassdef___mclass 5
#define COLOR_abstract_collection__Map___91d_93d_61d 40
extern const struct type type_array__Arrayparser_nodes__AClassdef;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
#define COLOR_modelize_class__AClassdef___all_defs 7
void modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1);
#define COLOR_modelize_class__AClassdef___mclassdef 6
extern const struct type type_array__Arraymodel__MType;
short int parser_nodes__ANodes__is_empty(val* self);
#define COLOR_model__MClass___intro 9
#define COLOR_model__MClassDef___bound_mtype 4
#define COLOR_model__MClassType___arguments 5
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_model__MClass___mparameters 5
#define COLOR_model__MParameterType___name 6
#define COLOR_model__MClassDef___mmodule 2
#define COLOR_parser_nodes__AFormaldef___n_type 5
val* modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_model__MType__need_anchor 39
#define COLOR_modelize_class__AFormaldef___bound 7
extern const struct type type_model__MClassType;
#define COLOR_model__MClassType___mclass 4
val* model__Object__enum_kind(val* self);
#define COLOR_model__MClass___mclassdefs 8
short int array__AbstractArrayRead__is_empty(val* self);
#define COLOR_model__MClass___mclass_type 10
val* model__MType__as_nullable(val* self);
val* model__MClass__get_mtype(val* self, val* p0);
val* NEW_model__MClassDef(const struct type* type);
extern const struct type type_model__MClassDef;
void model__MClassDef__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef 8
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__AStdClassdef___n_doc 10
val* modelbuilder__ADoc__to_mdoc(val* self);
#define COLOR_mdoc__MEntity___mdoc 0
#define COLOR_mdoc__MDoc___original_mentity 1
short int model__MClassDef__is_intro(val* self);
short int kernel__Comparable___62d_61d(val* self, val* p0);
void modelbuilder__ModelBuilder__advice(val* self, val* p0, val* p1, val* p2);
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
val* model__MClass__full_name(val* self);
void toolcontext__ToolContext__info(val* self, val* p0, long p1);
void modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1);
extern const struct type type_array__Arraymodel__MClassType;
#define COLOR_parser_nodes__AStdClassdef___n_superclasses 17
val* parser_nodes__ANodes__iterator(val* self);
#define COLOR_parser_nodes__ASuperclass___n_type 5
short int model__MClassKind__can_specialize(val* self, val* p0);
val* model__Object__extern_kind(val* self);
#define COLOR_model__MClass___name 3
void model__MClassDef__set_supertypes(val* self, val* p0);
val* string__Collection__join(val* self, val* p0);
void modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1);
#define COLOR_model__MClassDef___supertypes 7
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
void array__ArrayIterator__next(val* self);
void modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1);
#define COLOR_toolcontext__ToolContext___error_count 0
#define COLOR_modelize_class__AModule___build_classes_is_done 10
#define COLOR_mmodule__MModule___in_importation 7
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_modelbuilder__ModelBuilder___mmodule2nmodule 7
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
#define COLOR_parser_nodes__AModule___n_classdefs 7
#define COLOR_model__MModule___mclassdefs 13
void model__MClassDef__add_in_hierarchy(val* self);
#define COLOR_modelize_class__AType___mtype 7
val* modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2);
val* NEW_hash_collection__HashMap(const struct type* type);
extern const struct type type_hash_collection__HashMapmodel__MClassmodel__MClassType;
#define COLOR_model__MClassDef___in_hierarchy 8
val* poset__POSetElement__greaters(val* self);
#define COLOR_model__MClassDef___mclass 3
#define COLOR_model__MType__resolve_for 41
extern const struct type type_array__Arraymodel__MClass;
val* NEW_array__ArrayMap(const struct type* type);
extern const struct type type_array__ArrayMapmodel__MClassparser_nodes__AType;
#define COLOR_location__Location___file 0
#define COLOR_location__SourceFile___filename 0
short int string__Text__is_empty(val* self);
void array__ArrayMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_parser_nodes__AType___n_id 5
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2);
extern const struct type type_nullable_model__MVirtualTypeProp;
#define COLOR_parser_nodes__AType___n_types 6
#define COLOR_model__MVirtualTypeProp___mvirtualtype 10
#define COLOR_parser_nodes__AType___n_kwnullable 4
#define COLOR_modelize_class__AType___checked_mtype 8
extern const struct type type_model__MGenericType;
val* modelize_class__AConcreteClasskind__mkind(val* self);
val* model__Object__abstract_kind(val* self);
val* modelize_class__AAbstractClasskind__mkind(val* self);
val* modelize_class__AInterfaceClasskind__mkind(val* self);
val* modelize_class__AEnumClasskind__mkind(val* self);
val* modelize_class__AExternClasskind__mkind(val* self);
