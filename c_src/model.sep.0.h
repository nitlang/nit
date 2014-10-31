#include "nit.common.h"
#define COLOR_model__Model___mclasses 6
#define COLOR_model__Model___mproperties 7
#define COLOR_model__Model___mclassdef_hierarchy 8
#define COLOR_model__Model___intro_mtype_specialization_hierarchy 9
#define COLOR_model__Model___full_mtype_specialization_hierarchy 10
#define COLOR_model__Model___mclasses_by_name 11
short int abstract_collection__MapRead__has_key(val* self, val* p0);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
val* model__Model__get_mclasses_by_name(val* self, val* p0);
#define COLOR_model__Model___mproperties_by_name 12
val* model__Model__get_mproperties_by_name(val* self, val* p0);
#define COLOR_model__Model___null_type 13
#define COLOR_model__MModule___intro_mclasses 12
#define COLOR_model__MModule___mclassdefs 13
#define COLOR_model__MModule___flatten_mclass_hierarchy_cache 14
#define COLOR_kernel__Object___61d_61d 2
val* NEW_poset__POSet(const struct type* type);
extern const struct type type_poset__POSetmodel__MClass;
#define COLOR_kernel__Object__init 7
#define COLOR_mmodule__MModule___in_importation 7
val* poset__POSetElement__greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_model__MClassDef___mclass 3
val* poset__POSet__add_node(val* self, val* p0);
#define COLOR_model__MClassDef___supertypes 7
#define COLOR_model__MClassType___mclass 4
void poset__POSet__add_edge(val* self, val* p0, val* p1);
void array__ArrayIterator__next(val* self);
#define COLOR_abstract_collection__Iterator__next 32
val* model__MModule__flatten_mclass_hierarchy(val* self);
void sorter__Comparator__sort(val* self, val* p0);
void model__MModule__linearize_mclasses(val* self, val* p0);
val* NEW_model__MClassDefSorter(const struct type* type);
extern const struct type type_model__MClassDefSorter;
#define COLOR_model__MClassDefSorter__mmodule_61d 37
void model__MModule__linearize_mclassdefs(val* self, val* p0);
val* NEW_model__MPropDefSorter(const struct type* type);
extern const struct type type_model__MPropDefSorter;
#define COLOR_model__MPropDefSorter__mmodule_61d 37
void model__MModule__linearize_mpropdefs(val* self, val* p0);
#define COLOR_model__MModule___object_type_cache 15
val* string__NativeString__to_s_with_length(char* self, long p0);
val* model__MModule__get_primitive_class(val* self, val* p0);
#define COLOR_model__MClass___mclass_type 10
val* model__MModule__object_type(val* self);
#define COLOR_model__MModule___pointer_type 16
#define COLOR_model__MModule___bool_type_cache 18
val* model__MModule__bool_type(val* self);
#define COLOR_mmodule__MModule___model 2
short int array__Array___61d_61d(val* self, val* p0);
val* model__MModule__sys_type(val* self);
val* model__MModule__finalizable_type(val* self);
short int string__FlatString___61d_61d(val* self, val* p0);
val* NEW_model__MClass(const struct type* type);
extern const struct type type_model__MClass;
val* model__Object__enum_kind(val* self);
val* model_base__Object__public_visibility(val* self);
void model__MClass__init(val* self, val* p0, val* p1, val* p2, val* p3, val* p4);
val* NEW_model__MClassDef(const struct type* type);
extern const struct type type_model__MClassDef;
val* NEW_location__Location(const struct type* type);
extern const struct type type_location__Location;
void location__Location__init(val* self, val* p0, long p1, long p2, long p3, long p4);
void model__MClassDef__init(val* self, val* p0, val* p1, val* p2);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
void file__Object__print(val* self, val* p0);
#define COLOR_array__AbstractArrayRead___length 0
val* model__MClass__full_name(val* self);
val* string__FlatString___43d(val* self, val* p0);
val* abstract_collection__SequenceRead__first(val* self);
extern const struct type type_model__MMethod;
#define COLOR_model__MProperty___intro_mclassdef 2
#define COLOR_model__MClass___mclassdefs 8
#define COLOR_model__MClassDef___mmodule 2
#define COLOR_abstract_collection__Collection__has 40
#define COLOR_model__MClassDef___in_hierarchy 8
val* model__MProperty__full_name(val* self);
val* model__MModule__try_get_primitive_method(val* self, val* p0, val* p1);
#define COLOR_model__MClassDefSorter___mmodule 0
#define COLOR_sorter__Comparator_VTCOMPARED 0
long poset__POSet__compare(val* self, val* p0, val* p1);
long model__MClassDefSorter__compare(val* self, val* p0, val* p1);
#define COLOR_model__MClassDefSorter__init 38
#define COLOR_model__MPropDefSorter___mmodule 0
#define COLOR_model__MPropDef___mclassdef 3
long model__MPropDefSorter__compare(val* self, val* p0, val* p1);
#define COLOR_model__MPropDefSorter__init 38
#define COLOR_model__MClass___intro_mmodule 2
#define COLOR_model__MClass___name 3
val* mmodule__MModule__full_name(val* self);
#define COLOR_model__MClass___arity 4
#define COLOR_model__MClass___mparameters 5
#define COLOR_model__MClass___kind 6
#define COLOR_model__MClass___visibility 7
void array__Array__add(val* self, val* p0);
void more_collections__MultiHashMap__add_one(val* self, val* p0, val* p1);
extern const struct type type_kernel__Int;
extern const struct type type_array__Arraymodel__MParameterType;
val* NEW_model__MParameterType(const struct type* type);
extern const struct type type_model__MParameterType;
val* array__Array___91d_93d(val* self, long p0);
void model__MParameterType__init(val* self, val* p0, long p1, val* p2);
long kernel__Int__successor(long self, long p0);
val* NEW_model__MGenericType(const struct type* type);
extern const struct type type_model__MGenericType;
void model__MGenericType__init(val* self, val* p0, val* p1);
#define COLOR_model__MClass___get_mtype_cache 11
val* NEW_model__MClassType(const struct type* type);
extern const struct type type_model__MClassType;
void model__MClassType__init(val* self, val* p0);
val* model__MClass__model(val* self);
val* model__MClass__to_s(val* self);
#define COLOR_model__MClass___intro 9
val* poset__POSet___91d_93d(val* self, val* p0);
val* model__MClass__in_hierarchy(val* self, val* p0);
#define COLOR_model__MClassType___arguments 5
val* model__MClass__get_mtype(val* self, val* p0);
#define COLOR_model__MClassDef___bound_mtype 4
#define COLOR_model__MClassDef___location 5
#define COLOR_model__MClassDef___to_s 6
val* model__MClassDef__name(val* self);
val* model__MClassDef__model(val* self);
void model__MClassDef__set_supertypes(val* self, val* p0);
val* model__MClassType__collect_mclassdefs(val* self, val* p0);
#define COLOR_poset__POSetElement___poset 0
void model__MClassDef__add_in_hierarchy(val* self);
short int model__MClassDef__is_intro(val* self);
#define COLOR_model__MClassDef___intro_mproperties 9
#define COLOR_model__MClassDef___mpropdefs 10
val* model__MType__name(val* self);
#define COLOR_model__MType__need_anchor 39
#define COLOR_model__MType__can_resolve_for 42
extern const struct type type_model__MVirtualType;
#define COLOR_model__MType__resolve_for 41
extern const struct type type_model__MNullableType;
#define COLOR_model__MNullableType___mtype 4
extern const struct type type_model__MNullType;
#define COLOR_model__MType__anchor_to 38
val* model__MClassType__anchor_to(val* self, val* p0, val* p1);
val* model__MClassType__collect_mclasses(val* self, val* p0);
val* model__MType__supertype_to(val* self, val* p0, val* p1, val* p2);
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
val* model__MType__anchor_to(val* self, val* p0, val* p1);
short int model__MType__need_anchor(val* self);
#define COLOR_model__MType__collect_mtypes 50
#define COLOR_model__MType___as_nullable_cache 2
val* NEW_model__MNullableType(const struct type* type);
void model__MNullableType__init(val* self, val* p0);
val* model__MType__as_nullable(val* self);
val* model__MType__as_notnullable(val* self);
long model__MType__length(val* self);
#define COLOR_model__MType__collect_mclassdefs 48
short int model__MType__has_mproperty(val* self, val* p0, val* p1);
val* model__MClassType__model(val* self);
val* model__MClassType__to_s(val* self);
short int model__MClassType__need_anchor(val* self);
#define COLOR_model__MClassType__anchor_to 68
val* model__MClassType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
short int model__MClassType__can_resolve_for(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MClassType___collect_mclassdefs_cache 6
void model__MClassType__collect_things(val* self, val* p0);
#define COLOR_model__MClassType___collect_mclasses_cache 7
#define COLOR_model__MClassType___collect_mtypes_cache 8
val* model__MClassType__collect_mtypes(val* self, val* p0);
val* NEW_hash_collection__HashSet(const struct type* type);
extern const struct type type_hash_collection__HashSetmodel__MClassDef;
extern const struct type type_hash_collection__HashSetmodel__MClass;
extern const struct type type_hash_collection__HashSetmodel__MClassType;
void hash_collection__HashSet__add(val* self, val* p0);
extern const struct type type_array__Arraymodel__MClass;
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
short int array__AbstractArrayRead__is_empty(val* self);
val* array__AbstractArray__pop(val* self);
short int poset__POSetElement___60d_61d(val* self, val* p0);
short int hash_collection__HashSet__has(val* self, val* p0);
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_model__MGenericType___need_anchor 10
val* string__Collection__join(val* self, val* p0);
#define COLOR_model__MGenericType___to_s 9
short int model__MGenericType__can_resolve_for(val* self, val* p0, val* p1, val* p2);
extern const struct type type_array__Arraymodel__MType;
val* model__MGenericType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_model__MType__length 47
long model__MGenericType__length(val* self);
#define COLOR_model__MVirtualType___mproperty 4
val* model__MVirtualType__model(val* self);
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1);
extern const struct type type_model__MVirtualTypeDef;
#define COLOR_model__MVirtualTypeDef___bound 8
val* NEW_array__ArraySet(const struct type* type);
extern const struct type type_array__ArraySetmodel__MType;
void array__ArraySet__add(val* self, val* p0);
long array__ArraySet__length(val* self);
val* array__ArraySet__first(val* self);
val* model__MVirtualType__lookup_bound(val* self, val* p0, val* p1);
#define COLOR_model__MVirtualTypeDef___is_fixed 9
short int model__MVirtualType__is_fixed(val* self, val* p0, val* p1);
short int model__MVirtualType__can_resolve_for(val* self, val* p0, val* p1, val* p2);
val* model__MVirtualType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
val* model__MProperty__to_s(val* self);
val* model__MVirtualType__to_s(val* self);
void model__MVirtualType__init(val* self, val* p0);
#define COLOR_model__MParameterType___mclass 4
val* model__MParameterType__model(val* self);
#define COLOR_model__MParameterType___rank 5
#define COLOR_model__MParameterType___name 6
val* model__MParameterType__to_s(val* self);
val* model__MParameterType__lookup_bound(val* self, val* p0, val* p1);
short int model__MParameterType__can_resolve_for(val* self, val* p0, val* p1, val* p2);
val* model__MParameterType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_model_base__MEntity__model 32
val* model__MNullableType__model(val* self);
#define COLOR_model__MNullableType___to_s 5
short int model__MNullableType__need_anchor(val* self);
val* model__MNullableType__as_nullable(val* self);
val* model__MNullableType__as_notnullable(val* self);
#define COLOR_model__MType__as_nullable 43
val* model__MNullableType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
short int model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2);
long model__MNullableType__length(val* self);
val* model__MNullableType__collect_mclassdefs(val* self, val* p0);
#define COLOR_model__MType__collect_mclasses 49
val* model__MNullableType__collect_mclasses(val* self, val* p0);
val* model__MNullableType__collect_mtypes(val* self, val* p0);
#define COLOR_model__MNullType___model 4
void model__MNullType__init(val* self, val* p0);
val* model__MNullType__to_s(val* self);
val* model__MNullType__as_nullable(val* self);
short int model__MNullType__need_anchor(val* self);
val* model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
short int model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2);
val* model__MNullType__collect_mclassdefs(val* self, val* p0);
val* model__MNullType__collect_mclasses(val* self, val* p0);
val* model__MNullType__collect_mtypes(val* self, val* p0);
#define COLOR_model__MSignature___mparameters 4
#define COLOR_model__MSignature___return_mtype 5
#define COLOR_model__MParameter___mtype 3
long model__MSignature__length(val* self);
#define COLOR_model__MParameter___is_vararg 4
#define COLOR_model__MSignature___vararg_rank 6
void model__MSignature__init(val* self, val* p0, val* p1);
long model__MSignature__arity(val* self);
val* NEW_string__FlatBuffer(const struct type* type);
extern const struct type type_string__FlatBuffer;
void string__FlatBuffer__append(val* self, val* p0);
#define COLOR_model__MParameter___name 2
val* string__FlatBuffer__to_s(val* self);
val* model__MSignature__to_s(val* self);
extern const struct type type_array__Arraymodel__MParameter;
val* model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
val* NEW_model__MSignature(const struct type* type);
extern const struct type type_model__MSignature;
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
void model__MParameter__init(val* self, val* p0, val* p1, short int p2);
val* model__MParameter__to_s(val* self);
val* NEW_model__MParameter(const struct type* type);
extern const struct type type_model__MParameter;
val* model__MParameter__model(val* self);
#define COLOR_model__MProperty___name 3
#define COLOR_model__MProperty___visibility 4
void model__MProperty__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MProperty___mpropdefs 5
#define COLOR_model__MProperty___intro 6
#define COLOR_model__MProperty_VTMPROPDEF 2
val* model__MPropDef__model(val* self);
val* model__MProperty__model(val* self);
#define COLOR_model__MType__as_notnullable 44
#define COLOR_model__MProperty___lookup_definitions_cache 7
val* more_collections__HashMap2___91d_93d(val* self, val* p0, val* p1);
#define COLOR_array__Arraymodel__MProperty_VTMPROPDEF 0
void more_collections__HashMap2___91d_93d_61d(val* self, val* p0, val* p1, val* p2);
val* model__MProperty__select_most_specific(val* self, val* p0, val* p1);
val* model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1);
short int poset__POSetElement___60d(val* self, val* p0);
val* model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1);
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1);
#define COLOR_model__MProperty___lookup_all_definitions_cache 8
val* array__AbstractArrayRead__reversed(val* self);
void model__MMethod__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MMethod___is_toplevel 10
#define COLOR_model__MMethod___is_init 11
#define COLOR_model__MMethod___is_root_init 12
#define COLOR_model__MMethod___is_new 13
short int model__MMethod__is_init_for(val* self, val* p0);
void model__MAttribute__init(val* self, val* p0, val* p1, val* p2);
void model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MVirtualTypeProp___mvirtualtype 10
#define COLOR_model__MPropDef___location 2
#define COLOR_model__MPropDef___mproperty 4
#define COLOR_model__MPropDef_VTMPROPERTY 0
#define COLOR_model__MPropDef___to_s 5
void model__MPropDef__init(val* self, val* p0, val* p1, val* p2);
val* model__MPropDef__name(val* self);
short int model__MPropDef__is_intro(val* self);
#define COLOR_model__MPropDef_VTMPROPDEF 2
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1);
void model__MMethodDef__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MMethodDef___msignature 8
#define COLOR_model__MMethodDef___new_msignature 9
#define COLOR_model__MMethodDef___initializers 10
#define COLOR_model__MMethodDef___is_abstract 11
#define COLOR_model__MMethodDef___is_intern 12
#define COLOR_model__MMethodDef___is_extern 13
#define COLOR_model__MMethodDef___constant_value 14
void model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MAttributeDef___static_mtype 8
void model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MClassKind___to_s 0
#define COLOR_model__MClassKind___need_init 1
void model__MClassKind__init(val* self, val* p0, short int p1);
val* model__Object__interface_kind(val* self);
val* model__Object__extern_kind(val* self);
short int model__MClassKind__can_specialize(val* self, val* p0);
val* NEW_model__MClassKind(const struct type* type);
extern const struct type type_model__MClassKind;
val* model__Object__abstract_kind(val* self);
val* model__Object__concrete_kind(val* self);
