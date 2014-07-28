#include "nit.common.h"
#define COLOR_typing__ToolContext___typing_phase 35
#define COLOR_phase__Phase___toolcontext 0
val* modelbuilder__ToolContext__modelbuilder(val* self);
#define COLOR_typing__APropdef__do_typing 73
void typing__TypingPhase__process_npropdef(val* self, val* p0);
#define COLOR_typing__TypeVisitor___modelbuilder 0
#define COLOR_typing__TypeVisitor___mmodule 1
#define COLOR_typing__TypeVisitor___anchor 2
#define COLOR_typing__TypeVisitor___mclassdef 3
#define COLOR_typing__TypeVisitor___mpropdef 4
#define COLOR_typing__TypeVisitor___selfvariable 5
#define COLOR_typing__TypeVisitor___is_toplevel_context 6
#define COLOR_kernel__Object___61d_61d 2
#define COLOR_model__MPropDef___mclassdef 2
#define COLOR_model__MClassDef___bound_mtype 3
#define COLOR_model__MClassDef___mclass 2
val* NEW_scope__Variable(const struct type* type);
extern const struct type type_scope__Variable;
val* string__NativeString__to_s_with_length(char* self, long p0);
#define COLOR_scope__Variable___name 0
#define COLOR_model__MClass___mclass_type 7
#define COLOR_typing__Variable___declared_type 1
#define COLOR_model__MPropDef___mproperty 3
extern const struct type type_model__MMethod;
#define COLOR_model__MMethod___is_toplevel 8
void typing__TypeVisitor__init(val* self, val* p0, val* p1, val* p2);
#define COLOR_model__MType__need_anchor 36
#define COLOR_model__MType__anchor_to 35
val* typing__TypeVisitor__anchor_to(val* self, val* p0);
short int model__MType__is_subtype(val* self, val* p0, val* p1, val* p2);
short int typing__TypeVisitor__is_subtype(val* self, val* p0, val* p1);
#define COLOR_model__MType__resolve_for 38
val* typing__TypeVisitor__resolve_for(val* self, val* p0, val* p1, short int p2);
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
#define COLOR_array__Array__with_native 65
#define COLOR_string__Object__to_s 7
void modelbuilder__ModelBuilder__error(val* self, val* p0, val* p1);
val* typing__TypeVisitor__check_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_typing__AExpr__accept_typing 62
void typing__TypeVisitor__visit_stmt(val* self, val* p0);
#define COLOR_typing__AExpr__mtype 55
#define COLOR_typing__AExpr___is_typed 6
#define COLOR_modelbuilder__ModelBuilder___toolcontext 1
#define COLOR_toolcontext__ToolContext___error_count 0
extern const struct type type_kernel__Int;
#define COLOR_toolcontext__ToolContext___verbose_level 17
void parser_nodes__ANode__debug(val* self, val* p0);
void typing__TypeVisitor__error(val* self, val* p0, val* p1);
val* typing__TypeVisitor__visit_expr(val* self, val* p0);
#define COLOR_typing__AExpr___implicit_cast_to 7
val* typing__TypeVisitor__visit_expr_subtype(val* self, val* p0, val* p1);
val* typing__TypeVisitor__type_bool(val* self, val* p0);
val* typing__TypeVisitor__visit_expr_bool(val* self, val* p0);
val* typing__TypeVisitor__resolve_mtype(val* self, val* p0);
void modelbuilder__ModelBuilder__warning(val* self, val* p0, val* p1);
val* typing__TypeVisitor__visit_expr_cast(val* self, val* p0, val* p1, val* p2);
val* modelbuilder__ModelBuilder__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
val* typing__TypeVisitor__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2);
val* modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1, val* p2);
val* modelbuilder__ModelBuilder__try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
val* typing__TypeVisitor__try_get_mclass(val* self, val* p0, val* p1);
val* typing__TypeVisitor__get_mclass(val* self, val* p0, val* p1);
extern const struct type type_model__MNullType;
#define COLOR_model__MProperty___visibility 3
val* model_base__Object__protected_visibility(val* self);
#define COLOR_model__MProperty___intro_mclassdef 1
#define COLOR_model__MClassDef___mmodule 1
val* mmodule__MModule__visibility_for(val* self, val* p0);
val* model_base__Object__intrude_visibility(val* self);
short int model_base__MVisibility___60d(val* self, val* p0);
#define COLOR_modelbuilder__ToolContext___opt_ignore_visibility 30
#define COLOR_opts__Option___value 6
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1);
long array__AbstractArrayRead__length(val* self);
val* abstract_collection__SequenceRead__first(val* self);
val* string__Collection__join(val* self, val* p0);
val* model__MProperty__intro(val* self);
#define COLOR_model__MMethodDef___msignature 7
extern const struct type type_model__MSignature;
#define COLOR_model__MSignature___return_mtype 4
#define COLOR_model__MType__as_notnullable 41
extern const struct type type_model__MParameterType;
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
val* typing__TypeVisitor__get_method(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_model__MSignature___vararg_rank 5
long model__MSignature__arity(val* self);
val* BOX_kernel__Int(long);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
void range__Range__without_last(val* self, val* p0, val* p1);
val* range__Range__iterator(val* self);
#define COLOR_abstract_collection__Iterator__is_ok 31
#define COLOR_abstract_collection__Iterator__item 29
#define COLOR_model__MSignature___mparameters 3
val* array__Array___91d_93d(val* self, long p0);
#define COLOR_model__MParameter___mtype 2
#define COLOR_abstract_collection__Iterator__next 30
extern const struct type type_array__Arrayparser_nodes__AExpr;
void array__Array__init(val* self);
void range__Range__init(val* self, val* p0, val* p1);
void array__Array__add(val* self, val* p0);
short int typing__TypeVisitor__check_signature(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_parser_nodes__ANode__hot_location 30
void toolcontext__ToolContext__error(val* self, val* p0, val* p1);
#define COLOR_flow__AExpr___after_flow_context 4
#define COLOR_typing__FlowContext___vars 10
short int abstract_collection__MapRead__has_key(val* self, val* p0);
val* hash_collection__HashMap___91d_93d(val* self, val* p0);
val* typing__FlowContext__collect_types(val* self, val* p0);
short int abstract_collection__SequenceRead___61d_61d(val* self, val* p0);
val* typing__TypeVisitor__merge_types(val* self, val* p0, val* p1);
val* typing__TypeVisitor__get_variable(val* self, val* p0, val* p1);
void typing__FlowContext__set_var(val* self, val* p0, val* p1);
void typing__TypeVisitor__set_variable(val* self, val* p0, val* p1, val* p2);
extern const struct type type_array__Arraynullable_model__MType;
val* array__AbstractArrayRead__iterator(val* self);
short int array__ArrayIterator__is_ok(val* self);
val* array__ArrayIterator__item(val* self);
extern const struct type type_model__MNullableType;
#define COLOR_model__MType__as_nullable 40
void array__ArrayIterator__next(val* self);
#define COLOR_model__MProperty___name 2
short int typing__CallSite__check_signature(val* self, val* p0, val* p1);
#define COLOR_typing__FlowContext___cache 11
void hash_collection__HashMap___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_hash_collection__HashMap___keys 7
#define COLOR_abstract_collection__RemovableCollection__remove 47
void array__Array__with_capacity(val* self, long p0);
void array__AbstractArray__push(val* self, val* p0);
#define COLOR_flow__FlowContext___previous 0
short int array__AbstractArrayRead__is_empty(val* self);
short int flow__FlowContext__is_unreachable(val* self);
val* array__Collection__to_a(val* self);
short int array__AbstractArrayRead__has(val* self, val* p0);
#define COLOR_typing__APropdef___selfvariable 10
val* parser_nodes__AMethPropdef__n_block(val* self);
#define COLOR_modelize_property__APropdef___mpropdef 9
val* NEW_typing__TypeVisitor(const struct type* type);
extern const struct type type_typing__TypeVisitor;
val* parser_nodes__AMethPropdef__n_signature(val* self);
#define COLOR_parser_nodes__ASignature___n_params 5
val* parser_nodes__ANodes___91d_93d(val* self, long p0);
extern const struct type type_array__Arraymodel__MType;
val* model__MClass__get_mtype(val* self, val* p0);
#define COLOR_scope__AParam___variable 7
void typing__AMethPropdef__do_typing(val* self, val* p0);
val* parser_nodes__AAttrPropdef__n_expr(val* self);
#define COLOR_model__MAttributeDef___static_mtype 7
void typing__AAttrPropdef__do_typing(val* self, val* p0);
#define COLOR_typing__AExpr___mtype 5
val* typing__AExpr__its_variable(val* self);
val* string__Object__class_name(val* self);
void typing__AExpr__accept_typing(val* self, val* p0);
#define COLOR_parser_nodes__ABlockExpr___n_expr 9
val* parser_nodes__ANodes__iterator(val* self);
void typing__ABlockExpr__accept_typing(val* self, val* p0);
short int parser_nodes__ANodes__is_empty(val* self);
val* abstract_collection__SequenceRead__last(val* self);
val* typing__ABlockExpr__mtype(val* self);
#define COLOR_scope__AVardeclExpr___variable 14
val* parser_nodes__AVardeclExpr__n_type(val* self);
val* parser_nodes__AVardeclExpr__n_expr(val* self);
val* model__MType__as_nullable(val* self);
void typing__AVardeclExpr__accept_typing(val* self, val* p0);
#define COLOR_scope__AVarFormExpr___variable 10
val* typing__AVarExpr__its_variable(val* self);
void typing__AVarExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AAssignFormExpr__n_value(val* self);
void typing__AVarAssignExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__AReassignFormExpr___reassign_callsite 13
#define COLOR_typing__AReassignFormExpr___read_type 14
val* parser_nodes__AReassignFormExpr__n_assign_op(val* self);
extern const struct type type_parser_nodes__APlusAssignOp;
extern const struct type type_parser_nodes__AMinusAssignOp;
val* parser_nodes__AReassignFormExpr__n_value(val* self);
val* typing__AReassignFormExpr__resolve_reassignment(val* self, val* p0, val* p1, val* p2);
void typing__AVarReassignExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AContinueExpr__n_expr(val* self);
void typing__AContinueExpr__accept_typing(val* self, val* p0);
val* parser_nodes__ABreakExpr__n_expr(val* self);
void typing__ABreakExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AReturnExpr__n_expr(val* self);
extern const struct type type_model__MMethodDef;
void typing__AReturnExpr__accept_typing(val* self, val* p0);
void typing__AAbortExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AIfExpr__n_expr(val* self);
val* parser_nodes__AIfExpr__n_then(val* self);
val* parser_nodes__AIfExpr__n_else(val* self);
void typing__AIfExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AIfexprExpr__n_expr(val* self);
val* parser_nodes__AIfexprExpr__n_then(val* self);
val* parser_nodes__AIfexprExpr__n_else(val* self);
void typing__AIfexprExpr__accept_typing(val* self, val* p0);
val* parser_nodes__ADoExpr__n_block(val* self);
void typing__ADoExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AWhileExpr__n_expr(val* self);
val* parser_nodes__AWhileExpr__n_block(val* self);
void typing__AWhileExpr__accept_typing(val* self, val* p0);
val* parser_nodes__ALoopExpr__n_block(val* self);
void typing__ALoopExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__AForExpr___coltype 17
#define COLOR_typing__AForExpr___method_iterator 18
#define COLOR_typing__AForExpr___method_is_ok 19
#define COLOR_typing__AForExpr___method_item 20
#define COLOR_typing__AForExpr___method_next 21
#define COLOR_typing__AForExpr___method_key 22
val* parser_nodes__AForExpr__n_expr(val* self);
extern const struct type type_parser_nodes__ASelfExpr;
val* model__MType__supertype_to(val* self, val* p0, val* p1, val* p2);
#define COLOR_scope__AForExpr___variables 15
#define COLOR_model__MClassType___arguments 4
extern const struct type type_model__MClassType;
void typing__AForExpr__do_type_iterator(val* self, val* p0, val* p1);
val* parser_nodes__AForExpr__n_block(val* self);
void typing__AForExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AAssertExpr__n_expr(val* self);
val* parser_nodes__AAssertExpr__n_else(val* self);
void typing__AAssertExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AOrExpr__n_expr(val* self);
val* parser_nodes__AOrExpr__n_expr2(val* self);
void typing__AOrExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AImpliesExpr__n_expr(val* self);
val* parser_nodes__AImpliesExpr__n_expr2(val* self);
void typing__AImpliesExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AAndExpr__n_expr(val* self);
val* parser_nodes__AAndExpr__n_expr2(val* self);
void typing__AAndExpr__accept_typing(val* self, val* p0);
val* parser_nodes__ANotExpr__n_expr(val* self);
void typing__ANotExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AOrElseExpr__n_expr(val* self);
val* parser_nodes__AOrElseExpr__n_expr2(val* self);
val* model__MModule__object_type(val* self);
void typing__AOrElseExpr__accept_typing(val* self, val* p0);
void typing__ATrueExpr__accept_typing(val* self, val* p0);
void typing__AFalseExpr__accept_typing(val* self, val* p0);
void typing__AIntExpr__accept_typing(val* self, val* p0);
void typing__AFloatExpr__accept_typing(val* self, val* p0);
void typing__ACharExpr__accept_typing(val* self, val* p0);
void typing__AStringFormExpr__accept_typing(val* self, val* p0);
#define COLOR_parser_nodes__ASuperstringExpr___n_exprs 9
void typing__ASuperstringExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__AArrayExpr___with_capacity_callsite 10
#define COLOR_typing__AArrayExpr___push_callsite 11
val* parser_nodes__AArrayExpr__n_exprs(val* self);
#define COLOR_parser_nodes__AExprs___n_exprs 4
void typing__AArrayExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__ARangeExpr___init_callsite 11
val* model__MClass__intro(val* self);
val* parser_nodes__ARangeExpr__n_expr(val* self);
val* parser_nodes__ARangeExpr__n_expr2(val* self);
extern const struct type type_parser_nodes__ACrangeExpr;
extern const struct type type_parser_nodes__AOrangeExpr;
void typing__ARangeExpr__accept_typing(val* self, val* p0);
#define COLOR_mmodule__MModule___model 1
#define COLOR_model__Model___null_type 13
void typing__ANullExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__AIsaExpr___cast_type 11
val* parser_nodes__AIsaExpr__n_expr(val* self);
val* parser_nodes__AIsaExpr__n_type(val* self);
#define COLOR_typing__AExpr__its_variable 61
#define COLOR_flow__FlowContext___when_true 7
void typing__AIsaExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AAsCastExpr__n_expr(val* self);
val* parser_nodes__AAsCastExpr__n_type(val* self);
void typing__AAsCastExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AAsNotnullExpr__n_expr(val* self);
#define COLOR_model__MNullableType___mtype 3
void typing__AAsNotnullExpr__accept_typing(val* self, val* p0);
val* parser_nodes__AProxyExpr__n_expr(val* self);
void typing__AProxyExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__ASelfExpr___its_variable 11
extern const struct type type_parser_nodes__AImplicitSelfExpr;
void typing__ASelfExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__ASendExpr___callsite 10
val* parser_nodes__ASendExpr__n_expr(val* self);
#define COLOR_typing__ASendExpr__property_name 75
#define COLOR_typing__ASendExpr__compute_raw_arguments 77
#define COLOR_model__MMethod___is_init 9
void typing__ASendExpr__accept_typing(val* self, val* p0);
val* typing__ASendExpr__raw_arguments(val* self);
val* parser_nodes__ABinopExpr__n_expr2(val* self);
val* typing__ABinopExpr__compute_raw_arguments(val* self);
val* typing__AEqExpr__property_name(val* self);
#define COLOR_typing__AEqExpr__accept_typing 82
#define COLOR_flow__FlowContext___when_false 8
void typing__AEqExpr__accept_typing(val* self, val* p0);
val* typing__ANeExpr__property_name(val* self);
#define COLOR_typing__ANeExpr__accept_typing 82
void typing__ANeExpr__accept_typing(val* self, val* p0);
val* typing__ALtExpr__property_name(val* self);
val* typing__ALeExpr__property_name(val* self);
val* typing__ALlExpr__property_name(val* self);
val* typing__AGtExpr__property_name(val* self);
val* typing__AGeExpr__property_name(val* self);
val* typing__AGgExpr__property_name(val* self);
val* typing__APlusExpr__property_name(val* self);
val* typing__AMinusExpr__property_name(val* self);
val* typing__AStarshipExpr__property_name(val* self);
val* typing__AStarExpr__property_name(val* self);
val* typing__ASlashExpr__property_name(val* self);
val* typing__APercentExpr__property_name(val* self);
val* typing__AUminusExpr__property_name(val* self);
val* typing__AUminusExpr__compute_raw_arguments(val* self);
val* parser_nodes__ACallFormExpr__n_id(val* self);
val* lexer_work__Token__text(val* self);
val* typing__ACallExpr__property_name(val* self);
val* parser_nodes__ACallFormExpr__n_args(val* self);
val* typing__AExprs__to_a(val* self);
val* typing__ACallExpr__compute_raw_arguments(val* self);
val* string__FlatString___43d(val* self, val* p0);
val* typing__ACallAssignExpr__property_name(val* self);
val* typing__ACallAssignExpr__compute_raw_arguments(val* self);
val* typing__ABraExpr__property_name(val* self);
val* parser_nodes__ABraFormExpr__n_args(val* self);
val* typing__ABraExpr__compute_raw_arguments(val* self);
val* typing__ABraAssignExpr__property_name(val* self);
val* typing__ABraAssignExpr__compute_raw_arguments(val* self);
#define COLOR_typing__ASendReassignFormExpr___write_callsite 17
void typing__ASendReassignFormExpr__accept_typing(val* self, val* p0);
val* typing__ACallReassignExpr__property_name(val* self);
val* typing__ACallReassignExpr__compute_raw_arguments(val* self);
val* typing__ABraReassignExpr__property_name(val* self);
val* typing__ABraReassignExpr__compute_raw_arguments(val* self);
val* typing__AInitExpr__property_name(val* self);
val* parser_nodes__AInitExpr__n_args(val* self);
val* typing__AInitExpr__compute_raw_arguments(val* self);
#define COLOR_typing__ASuperExpr___callsite 12
#define COLOR_typing__ASuperExpr___mpropdef 13
val* model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1);
short int model__MPropDef__is_intro(val* self);
void typing__ASuperExpr__process_superinit(val* self, val* p0);
val* parser_nodes__ASuperExpr__n_args(val* self);
#define COLOR_modelize_property__MPropDef___has_supercall 5
void typing__ASuperExpr__accept_typing(val* self, val* p0);
#define COLOR_model__MClassDef___supertypes 7
val* model__MClassType__anchor_to(val* self, val* p0, val* p1);
extern const struct type type_nullable_model__MMethod;
val* model__MProperty__full_name(val* self);
#define COLOR_model__MParameter___name 1
#define COLOR_typing__ANewExpr___callsite 13
val* parser_nodes__ANewExpr__n_type(val* self);
#define COLOR_model__MClassType___mclass 3
#define COLOR_model__MClass___kind 4
val* model__Object__abstract_kind(val* self);
val* model__Object__interface_kind(val* self);
val* parser_nodes__ANewExpr__n_id(val* self);
short int model__MMethod__is_init_for(val* self, val* p0);
val* parser_nodes__ANewExpr__n_args(val* self);
void typing__ANewExpr__accept_typing(val* self, val* p0);
#define COLOR_typing__AAttrFormExpr___mproperty 15
#define COLOR_typing__AAttrFormExpr___attr_type 16
val* parser_nodes__AAttrFormExpr__n_expr(val* self);
val* parser_nodes__AAttrFormExpr__n_id(val* self);
extern const struct type type_model__MAttribute;
void typing__AAttrFormExpr__resolve_property(val* self, val* p0);
void typing__AAttrExpr__accept_typing(val* self, val* p0);
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0);
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0);
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0);
val* parser_nodes__ADebugTypeExpr__n_expr(val* self);
val* parser_nodes__ADebugTypeExpr__n_type(val* self);
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0);
