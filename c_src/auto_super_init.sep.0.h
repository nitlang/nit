#include "nit.common.h"
#define COLOR_auto_super_init__ToolContext___auto_super_init_phase 41
extern const struct type type_parser_nodes__AMethPropdef;
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
void auto_super_init__AMethPropdef__do_auto_super_init(val* self, val* p0);
void auto_super_init__AutoSuperInitPhase__process_npropdef(val* self, val* p0);
#define COLOR_auto_super_init__ANode__accept_auto_super_init 44
#define COLOR_parser_nodes__ANode__visit_all 39
void auto_super_init__AutoSuperInitVisitor__visit(val* self, val* p0);
#define COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init 1
#define COLOR_auto_super_init__AutoSuperInitVisitor___is_broken 2
#define COLOR_auto_super_init__AMethPropdef___auto_super_inits 19
#define COLOR_auto_super_init__AMethPropdef___auto_super_call 20
#define COLOR_parser_nodes__ANode___parent 1
extern const struct type type_parser_nodes__AClassdef;
#define COLOR_modelize_class__AClassdef___mclassdef 6
#define COLOR_modelize_property__APropdef___mpropdef 9
#define COLOR_model__MPropDef___mclassdef 3
#define COLOR_model__MClassDef___mmodule 2
#define COLOR_model__MClassDef___bound_mtype 4
#define COLOR_model__MClassDef___mclass 3
#define COLOR_model__MClass___mclass_type 10
val* string__NativeString__to_s_with_length(char* self, long p0);
val* annotation__Prod__get_single_annotation(val* self, val* p0, val* p1);
#define COLOR_model__MPropDef___mproperty 4
#define COLOR_model__MMethod___is_init 11
#define COLOR_kernel__Object___61d_61d 2
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
short int model__MClassDef__is_intro(val* self);
#define COLOR_model__MClassDef___in_hierarchy 8
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 37
#define COLOR_abstract_collection__Iterator__is_ok 33
#define COLOR_abstract_collection__Iterator__item 31
#define COLOR_model__MClass___kind 6
#define COLOR_model__MClassKind___need_init 1
#define COLOR_abstract_collection__Iterator__next 32
#define COLOR_parser_nodes__AMethPropdef___n_block 16
val* NEW_auto_super_init__AutoSuperInitVisitor(const struct type* type);
extern const struct type type_auto_super_init__AutoSuperInitVisitor;
#define COLOR_kernel__Object__init 7
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
short int model__MPropDef__is_intro(val* self);
#define COLOR_modelize_property__MPropDef___has_supercall 6
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraytyping__CallSite;
#define COLOR_model__MClassDef___supertypes 7
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_model__MClassType___mclass 4
val* model__MClassType__anchor_to(val* self, val* p0, val* p1);
#define COLOR_model__MProperty___name 3
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 74
#define COLOR_string__Object__to_s 9
extern const struct type type_model__MMethod;
#define COLOR_model__MMethod___is_root_init 12
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1);
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_model__MMethodDef___new_msignature 9
#define COLOR_model__MMethodDef___msignature 8
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
val* NEW_typing__CallSite(const struct type* type);
extern const struct type type_typing__CallSite;
#define COLOR_typing__CallSite__node_61d 32
#define COLOR_typing__CallSite__recv_61d 34
#define COLOR_typing__CallSite__mmodule_61d 36
#define COLOR_typing__CallSite__anchor_61d 38
#define COLOR_typing__CallSite__recv_is_self_61d 39
#define COLOR_typing__CallSite__mproperty_61d 41
#define COLOR_typing__CallSite__mpropdef_61d 43
#define COLOR_typing__CallSite__msignature_61d 45
#define COLOR_typing__CallSite__erasure_cast_61d 47
void array__Array__add(val* self, val* p0);
void array__ArrayIterator__next(val* self);
#define COLOR_modelize_property__ModelBuilder___the_root_init_mmethod 11
short int array__AbstractArrayRead__is_empty(val* self);
#define COLOR_array__AbstractArrayRead___length 0
extern const struct type type_kernel__Int;
#define COLOR_model__MMethodDef___initializers 10
val* array__Array___91d_93d(val* self, long p0);
val* string__Collection__join(val* self, val* p0);
#define COLOR_typing__CallSite___mpropdef 6
#define COLOR_typing__CallSite___msignature 7
long model__MSignature__arity(val* self);
val* BOX_kernel__Int(long);
#define COLOR_model__MSignature___mparameters 4
#define COLOR_model__MParameter___mtype 3
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MParameter___name 2
#define COLOR_typing__ASendExpr___callsite 10
#define COLOR_typing__CallSite___mproperty 5
void auto_super_init__ASendExpr__accept_auto_super_init(val* self, val* p0);
void auto_super_init__ASuperExpr__accept_auto_super_init(val* self, val* p0);
