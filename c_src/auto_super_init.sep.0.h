#include "nit.common.h"
#define COLOR_auto_super_init__ToolContext___auto_super_init_phase 36
extern const struct type type_parser_nodes__AMethPropdef;
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
void auto_super_init__AMethPropdef__do_auto_super_init(val* self, val* p0);
void auto_super_init__AutoSuperInitPhase__process_npropdef(val* self, val* p0);
void auto_super_init__AutoSuperInitVisitor__init(val* self);
#define COLOR_auto_super_init__ANode__accept_auto_super_init 42
#define COLOR_parser_nodes__ANode__visit_all 37
void auto_super_init__AutoSuperInitVisitor__visit(val* self, val* p0);
#define COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init 1
#define COLOR_auto_super_init__AMethPropdef___auto_super_inits 20
#define COLOR_parser_nodes__ANode___parent 1
extern const struct type type_parser_nodes__AClassdef;
#define COLOR_modelize_class__AClassdef___mclassdef 6
#define COLOR_modelize_property__APropdef___mpropdef 9
#define COLOR_model__MPropDef___mclassdef 2
#define COLOR_model__MClassDef___mmodule 1
#define COLOR_model__MClassDef___bound_mtype 3
#define COLOR_model__MClassDef___mclass 2
#define COLOR_model__MClass___mclass_type 7
#define COLOR_model__MPropDef___mproperty 3
#define COLOR_model__MMethod___is_init 9
short int model__MClassDef__is_intro(val* self);
#define COLOR_model__MClassDef___in_hierarchy 8
val* poset__POSetElement__direct_greaters(val* self);
#define COLOR_abstract_collection__Collection__iterator 29
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_model__MClass___kind 4
#define COLOR_model__MClassKind___need_init 1
#define COLOR_abstract_collection__Iterator__next 30
val* parser_nodes__AMethPropdef__n_block(val* self);
#define COLOR_kernel__Object___61d_61d 2
val* NEW_auto_super_init__AutoSuperInitVisitor(const struct type* type);
extern const struct type type_auto_super_init__AutoSuperInitVisitor;
void parser_nodes__Visitor__enter_visit(val* self, val* p0);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraytyping__CallSite;
void array__Array__init(val* self);
#define COLOR_model__MClassDef___supertypes 7
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
#define COLOR_model__MClassType___mclass 3
val* model__MClassType__anchor_to(val* self, val* p0, val* p1);
#define COLOR_model__MProperty___name 2
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
val* string__NativeString__to_s_with_length(char* self, long p0);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
extern const struct type type_model__MMethod;
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1);
val* abstract_collection__SequenceRead__first(val* self);
#define COLOR_model__MMethodDef___msignature 7
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3);
val* NEW_typing__CallSite(const struct type* type);
extern const struct type type_typing__CallSite;
#define COLOR_typing__CallSite___node 0
#define COLOR_typing__CallSite___recv 1
#define COLOR_typing__CallSite___mmodule 2
#define COLOR_typing__CallSite___anchor 3
#define COLOR_typing__CallSite___recv_is_self 4
#define COLOR_typing__CallSite___mproperty 5
#define COLOR_typing__CallSite___mpropdef 6
#define COLOR_typing__CallSite___msignature 7
#define COLOR_typing__CallSite___erasure_cast 8
void array__Array__add(val* self, val* p0);
void array__ArrayIterator__next(val* self);
short int array__AbstractArrayRead__is_empty(val* self);
long model__MSignature__arity(val* self);
extern const struct type type_kernel__Int;
val* BOX_kernel__Int(long);
#define COLOR_model__MSignature___mparameters 3
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_model__MParameter___mtype 2
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MParameter___name 1
#define COLOR_typing__ASendExpr___callsite 10
void auto_super_init__ASendExpr__accept_auto_super_init(val* self, val* p0);
void auto_super_init__ASuperExpr__accept_auto_super_init(val* self, val* p0);
