#include "nit.common.h"
#define COLOR_nit__typing__ToolContext___typing_phase 47
extern const char FILE_nit__typing[];
#define COLOR_nit__phase__Phase___toolcontext 0
extern const char FILE_nit__phase[];
val* nit__modelbuilder_base___ToolContext___modelbuilder(val* self);
#define COLOR_nit__typing__APropdef__do_typing 90
#define COLOR_nit__typing__TypeVisitor___modelbuilder 0
#define COLOR_nit__typing__TypeVisitor___mmodule 1
#define COLOR_nit__typing__TypeVisitor___anchor 2
#define COLOR_nit__typing__TypeVisitor___mclassdef 3
#define COLOR_nit__typing__TypeVisitor___mpropdef 4
#define COLOR_nit__typing__TypeVisitor___selfvariable 5
#define COLOR_nit__typing__TypeVisitor___is_toplevel_context 6
#define COLOR_standard__kernel__Object___61d_61d 2
#define COLOR_nit__model__MPropDef___mclassdef 4
extern const char FILE_nit__model[];
#define COLOR_nit__model__MClassDef___bound_mtype 6
#define COLOR_nit__model__MClassDef___mclass 5
val* NEW_nit__Variable(const struct type* type);
extern const struct type type_nit__Variable;
val* standard___standard__NativeString___to_s_with_length(char* self, long p0);
#define COLOR_nit__scope__Variable__name_61d 33
#define COLOR_standard__kernel__Object__init 7
#define COLOR_nit__model__MClass___mclass_type 16
#define COLOR_nit__typing__Variable___declared_type 3
#define COLOR_nit__model__MPropDef___mproperty 5
extern const struct type type_nit__MMethod;
#define COLOR_nit__model__MMethod___is_toplevel 15
#define COLOR_nit__model__MMethod___is_new 18
#define COLOR_nit__model__MType__need_anchor 43
#define COLOR_nit__model__MType__anchor_to 42
short int nit___nit__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__model__MType__resolve_for 45
short int nit__typing___nit__typing__TypeVisitor___is_subtype(val* self, val* p0, val* p1);
val* nit__typing___nit__typing__TypeVisitor___anchor_to(val* self, val* p0);
val* NEW_standard__Array(const struct type* type);
extern const struct type type_standard__Array__standard__Object;
val* NEW_standard__NativeArray(int length, const struct type* type);
extern const struct type type_standard__NativeArray__standard__Object;
#define COLOR_standard__array__Array__with_native 73
#define COLOR_standard__string__Object__to_s 9
void nit___nit__ModelBuilder___error(val* self, val* p0, val* p1);
#define COLOR_nit__typing__AExpr__accept_typing 67
#define COLOR_nit__typing__AExpr__mtype 60
#define COLOR_nit__typing__AExpr___is_typed 6
#define COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext 1
extern const char FILE_nit__modelbuilder_base[];
#define COLOR_nit__toolcontext__ToolContext___error_count 0
extern const struct type type_standard__Int;
extern const char FILE_standard__kernel[];
#define COLOR_nit__toolcontext__ToolContext___verbose_level 22
void nit___nit__ANode___debug(val* self, val* p0);
void nit__typing___nit__typing__TypeVisitor___error(val* self, val* p0, val* p1);
val* nit__typing___nit__typing__TypeVisitor___visit_expr(val* self, val* p0);
val* nit__typing___nit__typing__TypeVisitor___check_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__typing__AExpr___implicit_cast_to 7
val* nit__typing___nit__typing__TypeVisitor___type_bool(val* self, val* p0);
val* nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(val* self, val* p0, val* p1);
val* nit__typing___nit__typing__TypeVisitor___resolve_mtype(val* self, val* p0);
void nit___nit__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__parser_nodes__ASendExpr___n_expr 10
extern const char FILE_nit__parser_nodes[];
#define COLOR_nit__parser_nodes__ABinopExpr___n_expr2 12
extern const struct type type_nit__MNullType;
extern const struct type type_nit__MNullableType;
#define COLOR_nit__typing__AExpr__its_variable 66
extern const struct type type_nit__AEqExpr;
#define COLOR_nit__flow__AExpr___after_flow_context 4
extern const char FILE_nit__flow[];
#define COLOR_nit__flow__FlowContext___when_true 7
void nit__typing___FlowContext___set_var(val* self, val* p0, val* p1);
#define COLOR_nit__flow__FlowContext___when_false 8
#define COLOR_nit__model__MNullableType___mtype 5
extern const struct type type_nit__ANeExpr;
val* nit___nit__ModelBuilder___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
val* nit__modelize_class___ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2);
val* nit___nit__ModelBuilder___try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
val* nit__typing___nit__typing__TypeVisitor___get_mclass(val* self, val* p0, val* p1);
val* nit__model___MModule___object_type(val* self);
val* nit___nit__MType___as_nullable(val* self);
val* nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__model__MProperty___visibility 10
val* nit__model_base___standard__Object___protected_visibility(val* self);
#define COLOR_nit__model__MProperty___intro_mclassdef 4
#define COLOR_nit__model__MClassDef___mmodule 4
val* nit___nit__MModule___visibility_for(val* self, val* p0);
val* nit__model_base___standard__Object___intrude_visibility(val* self);
short int nit___nit__MVisibility___standard__kernel__Comparable___60d(val* self, val* p0);
#define COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility 41
extern const char FILE_nit__modelbuilder[];
#define COLOR_opts__Option___value 6
#define COLOR_nit__mdoc__MEntity___deprecation 1
#define COLOR_nit__mdoc__MDeprecationInfo___mdoc 0
#define COLOR_nit__mdoc__MDoc___content 0
extern const char FILE_nit__mdoc[];
val* standard___standard__SequenceRead___Collection__first(val* self);
val* nit___nit__MProperty___lookup_definitions(val* self, val* p0, val* p1);
#define COLOR_standard__array__AbstractArrayRead___length 0
val* standard__string___Collection___join(val* self, val* p0);
#define COLOR_nit__model__MProperty___intro 12
#define COLOR_nit__model__MMethodDef___new_msignature 14
#define COLOR_nit__model__MMethodDef___msignature 13
val* nit__typing___nit__typing__TypeVisitor___resolve_for(val* self, val* p0, val* p1, short int p2);
extern const struct type type_nit__MSignature;
#define COLOR_nit__model__MSignature___return_mtype 6
#define COLOR_nit__model__MType__as_notnullable 50
extern const struct type type_nit__MParameterType;
val* NEW_nit__CallSite(const struct type* type);
extern const struct type type_nit__CallSite;
#define COLOR_nit__typing__CallSite__node_61d 33
#define COLOR_nit__typing__CallSite__recv_61d 35
#define COLOR_nit__typing__CallSite__mmodule_61d 37
#define COLOR_nit__typing__CallSite__anchor_61d 39
#define COLOR_nit__typing__CallSite__recv_is_self_61d 40
#define COLOR_nit__typing__CallSite__mproperty_61d 42
#define COLOR_nit__typing__CallSite__mpropdef_61d 44
#define COLOR_nit__typing__CallSite__msignature_61d 46
#define COLOR_nit__typing__CallSite__erasure_cast_61d 48
val* nit__typing___nit__typing__TypeVisitor___get_method(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_nit__model__MSignature___vararg_rank 7
long nit___nit__MSignature___arity(val* self);
val* BOX_standard__Int(long);
#define COLOR_nit__model__MSignature___mparameters 5
val* standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nit__model__MParameter___mtype 5
long standard___standard__Int___Discrete__successor(long self, long p0);
extern const struct type type_nit__AVarargExpr;
extern const struct type type_standard__Array__nit__MType;
void standard___standard__Array___with_capacity(val* self, long p0);
void standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(val* self, val* p0);
val* nit___nit__MClass___get_mtype(val* self, val* p0);
#define COLOR_nit__parser_nodes__AVarargExpr___n_expr 10
#define COLOR_nit__typing__AExpr___mtype 5
#define COLOR_nit__parser_nodes__ANode__hot_location 34
void nit___nit__ToolContext___error(val* self, val* p0, val* p1);
#define COLOR_nit__typing__FlowContext___vars 10
short int standard___standard__MapRead___has_key(val* self, val* p0);
val* standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(val* self, val* p0);
val* nit__typing___FlowContext___collect_types(val* self, val* p0);
short int standard___standard__Array___standard__kernel__Object___61d_61d(val* self, val* p0);
val* nit__typing___nit__typing__TypeVisitor___merge_types(val* self, val* p0, val* p1);
val* standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(val* self);
short int standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(val* self);
val* standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(val* self);
#define COLOR_nit__model__MType__as_nullable 49
void standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(val* self);
#define COLOR_nit__typing__CallSite___node 0
#define COLOR_nit__typing__CallSite___recv 1
#define COLOR_nit__typing__CallSite___mmodule 2
#define COLOR_nit__typing__CallSite___anchor 3
#define COLOR_nit__typing__CallSite___recv_is_self 4
#define COLOR_nit__typing__CallSite___mproperty 5
#define COLOR_nit__typing__CallSite___mpropdef 6
#define COLOR_nit__typing__CallSite___msignature 7
#define COLOR_nit__typing__CallSite___erasure_cast 8
#define COLOR_nit__model__MProperty___name 5
short int nit__typing___nit__typing__TypeVisitor___check_signature(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nit___nit__CallSite___standard__kernel__Object__init 50
#define COLOR_nit__typing__FlowContext___cache 11
void standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_standard__hash_collection__HashMap___keys 7
extern const char FILE_standard__hash_collection[];
#define COLOR_standard__abstract_collection__RemovableCollection__remove 53
extern const struct type type_standard__Array__nullable__nit__MType;
#define COLOR_nit__flow__FlowContext___previous 0
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(val* self);
short int nit___nit__FlowContext___is_unreachable(val* self);
val* standard__array___Collection___to_a(val* self);
short int standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(val* self, val* p0);
void standard___standard__Array___standard__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nit__typing__APropdef___selfvariable 17
#define COLOR_nit__parser_nodes__AMethPropdef___n_block 23
#define COLOR_nit__modelize_property__APropdef___mpropdef 16
val* NEW_nit__typing__TypeVisitor(const struct type* type);
extern const struct type type_nit__typing__TypeVisitor;
#define COLOR_nit__typing__TypeVisitor__modelbuilder_61d 33
#define COLOR_nit__typing__TypeVisitor__mmodule_61d 35
#define COLOR_nit__typing__TypeVisitor__mpropdef_61d 41
#define COLOR_nit__parser_nodes__AMethPropdef___n_signature 22
#define COLOR_nit__parser_nodes__ASignature___n_params 5
val* nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nit__scope__AParam___variable 7
void nit__typing___nit__typing__TypeVisitor___visit_stmt(val* self, val* p0);
#define COLOR_nit__parser_nodes__AAttrPropdef___n_expr 21
#define COLOR_nit__model__MAttributeDef___static_mtype 13
#define COLOR_nit__parser_nodes__AAttrPropdef___n_block 22
val* standard__string___Object___class_name(val* self);
#define COLOR_nit__typing__AExpr___comprehension 8
#define COLOR_nit__parser_nodes__ABlockExpr___n_expr 10
val* nit___nit__ANodes___standard__abstract_collection__Collection__iterator(val* self);
#define COLOR_standard__abstract_collection__Iterator__is_ok 34
#define COLOR_standard__abstract_collection__Iterator__item 32
#define COLOR_standard__abstract_collection__Iterator__next 33
short int nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(val* self);
val* standard___standard__SequenceRead___last(val* self);
#define COLOR_nit__scope__AVardeclExpr___variable 15
#define COLOR_nit__parser_nodes__AVardeclExpr___n_type 12
#define COLOR_nit__parser_nodes__AVardeclExpr___n_expr 14
#define COLOR_nit__scope__Variable___name 0
extern const char FILE_nit__scope[];
void nit___nit__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2);
void nit__typing___nit__typing__TypeVisitor___set_variable(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__scope__AVarFormExpr___variable 11
val* nit__typing___nit__typing__TypeVisitor___get_variable(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AAssignFormExpr___n_value 13
#define COLOR_nit__typing__AReassignFormExpr___reassign_callsite 14
#define COLOR_nit__typing__AReassignFormExpr___read_type 15
#define COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op 12
extern const struct type type_nit__APlusAssignOp;
extern const struct type type_nit__AMinusAssignOp;
#define COLOR_nit__parser_nodes__AReassignFormExpr___n_value 13
val* nit__typing___AReassignFormExpr___resolve_reassignment(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__parser_nodes__AEscapeExpr___n_expr 11
#define COLOR_nit__parser_nodes__AReturnExpr___n_expr 11
extern const struct type type_nit__MMethodDef;
extern const struct type type_nit__MAttributeDef;
#define COLOR_nit__parser_nodes__AIfExpr___n_expr 11
val* nit__typing___nit__typing__TypeVisitor___visit_expr_bool(val* self, val* p0);
#define COLOR_nit__parser_nodes__AIfExpr___n_then 12
#define COLOR_nit__parser_nodes__AIfExpr___n_else 13
#define COLOR_nit__parser_nodes__AIfexprExpr___n_expr 11
#define COLOR_nit__parser_nodes__AIfexprExpr___n_then 13
#define COLOR_nit__parser_nodes__AIfexprExpr___n_else 15
#define COLOR_nit__parser_nodes__ADoExpr___n_block 12
#define COLOR_nit__parser_nodes__AWhileExpr___n_expr 12
#define COLOR_nit__parser_nodes__AWhileExpr___n_block 14
#define COLOR_nit__parser_nodes__ALoopExpr___n_block 12
#define COLOR_nit__typing__AForExpr___coltype 19
#define COLOR_nit__typing__AForExpr___method_iterator 20
#define COLOR_nit__typing__AForExpr___method_is_ok 21
#define COLOR_nit__typing__AForExpr___method_item 22
#define COLOR_nit__typing__AForExpr___method_next 23
#define COLOR_nit__typing__AForExpr___method_key 24
#define COLOR_nit__typing__AForExpr___method_finish 25
#define COLOR_nit__typing__AForExpr___method_lt 26
#define COLOR_nit__typing__AForExpr___method_successor 27
#define COLOR_nit__parser_nodes__AForExpr___n_expr 13
extern const struct type type_nit__ASelfExpr;
val* nit__typing___nit__typing__TypeVisitor___try_get_mclass(val* self, val* p0, val* p1);
val* nit___nit__MType___supertype_to(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__scope__AForExpr___variables 16
extern const char FILE_standard__array[];
#define COLOR_nit__model__MClassType__arguments 63
extern const struct type type_nit__MClassType;
val* nit__typing___nit__typing__TypeVisitor___try_get_method(val* self, val* p0, val* p1, val* p2, short int p3);
extern const struct type type_nit__ARangeExpr;
extern const struct type type_nit__AOrangeExpr;
void nit__typing___AForExpr___do_type_iterator(val* self, val* p0, val* p1);
#define COLOR_nit__parser_nodes__AForExpr___n_block 15
#define COLOR_nit__parser_nodes__AAssertExpr___n_expr 12
#define COLOR_nit__parser_nodes__AAssertExpr___n_else 13
#define COLOR_nit__parser_nodes__ABinBoolExpr___n_expr 10
#define COLOR_nit__parser_nodes__ABinBoolExpr___n_expr2 11
#define COLOR_nit__parser_nodes__ANotExpr___n_expr 11
#define COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs 10
#define COLOR_nit__typing__AArrayExpr___with_capacity_callsite 14
#define COLOR_nit__typing__AArrayExpr___push_callsite 15
#define COLOR_nit__typing__AArrayExpr___element_mtype 16
extern const struct type type_nit__AForExpr;
void nit__typing___AArrayExpr___set_comprehension(val* self, val* p0);
extern const struct type type_nit__AIfExpr;
#define COLOR_nit__parser_nodes__AArrayExpr___n_type 12
void standard___standard__Array___standard__kernel__Object__init(val* self);
#define COLOR_nit__parser_nodes__AArrayExpr___n_exprs 11
#define COLOR_nit__typing__ARangeExpr___init_callsite 12
#define COLOR_nit__model__MClass___intro 15
#define COLOR_nit__parser_nodes__ARangeExpr___n_expr 10
#define COLOR_nit__parser_nodes__ARangeExpr___n_expr2 11
extern const struct type type_nit__ACrangeExpr;
#define COLOR_nit__mmodule__MModule___model 4
extern const char FILE_nit__mmodule[];
#define COLOR_nit__model__Model___null_type 12
#define COLOR_nit__typing__AIsaExpr___cast_type 12
#define COLOR_nit__parser_nodes__AIsaExpr___n_expr 10
#define COLOR_nit__parser_nodes__AIsaExpr___n_type 11
val* nit__typing___nit__typing__TypeVisitor___visit_expr_cast(val* self, val* p0, val* p1, val* p2);
#define COLOR_nit__parser_nodes__AAsCastForm___n_expr 10
#define COLOR_nit__parser_nodes__AAsCastExpr___n_type 14
#define COLOR_nit__parser_nodes__AParExpr___n_expr 11
#define COLOR_nit__parser_nodes__AOnceExpr___n_expr 11
#define COLOR_nit__typing__ASelfExpr___its_variable 12
extern const struct type type_nit__AImplicitSelfExpr;
#define COLOR_nit__typing__ASendExpr___callsite 11
#define COLOR_nit__typing__ASendExpr__property_name 83
#define COLOR_nit__typing__ASendExpr__compute_raw_arguments 85
short int nit___nit__CallSite___check_signature(val* self, val* p0, val* p1);
#define COLOR_nit__model__MMethod___is_init 16
#define COLOR_nit__model__MMethod___is_root_init 17
extern const struct type type_standard__Array__nit__AExpr;
#define COLOR_nit__typing___AEqExpr___AExpr__accept_typing 90
void nit__typing___nit__typing__TypeVisitor___null_test(val* self, val* p0);
#define COLOR_nit__typing___ANeExpr___AExpr__accept_typing 90
#define COLOR_nit__parser_nodes__ACallFormExpr___n_id 16
val* nit__lexer_work___Token___text(val* self);
#define COLOR_nit__parser_nodes__ACallFormExpr___n_args 17
val* nit__typing___AExprs___to_a(val* self);
#define COLOR_standard__string__String___43d 82
#define COLOR_nit__parser_nodes__ABraFormExpr___n_args 16
#define COLOR_nit__typing__ASendReassignFormExpr___write_callsite 18
#define COLOR_nit__parser_nodes__AInitExpr___n_args 13
#define COLOR_nit__parser_nodes__AExprs___n_exprs 4
#define COLOR_nit__typing__ASuperExpr___callsite 13
#define COLOR_nit__typing__ASuperExpr___mpropdef 14
val* nit___nit__MProperty___lookup_super_definitions(val* self, val* p0, val* p1);
short int nit___nit__MPropDef___is_intro(val* self);
void nit__typing___ASuperExpr___process_superinit(val* self, val* p0);
#define COLOR_nit__parser_nodes__ASuperExpr___n_args 12
extern const char FILE_nit__modelize_property[];
#define COLOR_nit__modelize_property__MPropDef___has_supercall 12
#define COLOR_nit__model__MClassDef___supertypes 13
val* nit___nit__MClassType___MType__anchor_to(val* self, val* p0, val* p1);
extern const struct type type_nullable__nit__MMethod;
val* nit___nit__MProperty___nit__model_base__MEntity__full_name(val* self);
#define COLOR_nit__model__MParameter___name 4
#define COLOR_nit__typing__ANewExpr___callsite 14
#define COLOR_nit__typing__ANewExpr___recvtype 15
#define COLOR_nit__parser_nodes__ANewExpr___n_type 11
#define COLOR_nit__parser_nodes__ANewExpr___n_id 12
#define COLOR_nit__model__MClassType___mclass 5
#define COLOR_nit__model__MClass___kind 12
val* nit__model___standard__Object___concrete_kind(val* self);
short int nit___nit__MMethod___is_init_for(val* self, val* p0);
#define COLOR_nit__parser_nodes__ANewExpr___n_args 13
#define COLOR_nit__typing__AAttrFormExpr___mproperty 16
#define COLOR_nit__typing__AAttrFormExpr___attr_type 17
#define COLOR_nit__parser_nodes__AAttrFormExpr___n_expr 10
#define COLOR_nit__parser_nodes__AAttrFormExpr___n_id 11
extern const struct type type_nit__MAttribute;
void nit__typing___AAttrFormExpr___resolve_property(val* self, val* p0);
#define COLOR_nit__parser_nodes__ADebugTypeExpr___n_expr 12
#define COLOR_nit__parser_nodes__ADebugTypeExpr___n_type 13
