#include "nit.common.h"
#define COLOR_nitc__typing__ToolContext___typing_phase 49
extern const char FILE_nitc__typing[];
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
val* nitc__modelbuilder_base___ToolContext___modelbuilder(val* self);
#define COLOR_nitc__typing__APropdef__do_typing 47
#define COLOR_nitc__typing__TypeVisitor___modelbuilder 0
#define COLOR_nitc__typing__TypeVisitor___mmodule 1
#define COLOR_nitc__typing__TypeVisitor___anchor 2
#define COLOR_nitc__typing__TypeVisitor___mclassdef 3
#define COLOR_nitc__typing__TypeVisitor___mpropdef 4
#define COLOR_nitc__typing__TypeVisitor___selfvariable 5
#define COLOR_nitc__typing__TypeVisitor___is_toplevel_context 6
#define COLOR_nitc__typing___nitc__typing__TypeVisitor___core__kernel__Object__init 55
#define COLOR_core__kernel__Object___61d_61d 4
#define COLOR_nitc__model__MPropDef___mclassdef 7
extern const char FILE_nitc__model[];
#define COLOR_nitc__model__MClassDef___bound_mtype 9
#define COLOR_nitc__model__MClassDef___mclass 8
val* NEW_nitc__Variable(const struct type* type);
extern const struct type type_nitc__Variable;
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nitc__scope__Variable__name_61d 12
#define COLOR_core__kernel__Object__init 0
#define COLOR_nitc__model__MClass___mclass_type 20
#define COLOR_nitc__typing__Variable___declared_type 0
#define COLOR_nitc__model__MPropDef___mproperty 8
extern const struct type type_nitc__MMethod;
#define COLOR_nitc__model__MMethod___is_new 22
#define COLOR_nitc__model__MType__need_anchor 31
#define COLOR_nitc__model__MType__anchor_to 33
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__model__MType__resolve_for 29
short int nitc__typing___nitc__typing__TypeVisitor___is_subtype(val* self, val* p0, val* p1);
val* nitc__typing___nitc__typing__TypeVisitor___anchor_to(val* self, val* p0);
extern const struct type type_nitc__MErrorType;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
#define COLOR_core__abstract_text__Object__to_s 3
#define COLOR_core__abstract_text__NativeArray__native_to_s 12
void nitc___nitc__ModelBuilder___error(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__AExpr__accept_typing 59
#define COLOR_nitc__typing__AExpr__mtype 49
#define COLOR_nitc__typing__AExpr___is_typed 13
#define COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext 13
extern const char FILE_nitc__modelbuilder_base[];
#define COLOR_nitc__toolcontext__ToolContext___error_count 7
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
#define COLOR_nitc__toolcontext__ToolContext___verbose_level 32
void nitc___nitc__ANode___debug(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ANode___parent 2
#define COLOR_nitc__typing__ANode__bad_expr_message 33
#define COLOR_core__abstract_text__Text___43d 39
void nitc__typing___nitc__typing__TypeVisitor___error(val* self, val* p0, val* p1);
val* nitc__typing___nitc__typing__TypeVisitor___visit_expr(val* self, val* p0);
val* nitc__typing___nitc__typing__TypeVisitor___check_subtype(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_nitc__typing__AExpr___implicit_cast_to 14
val* nitc__typing___nitc__typing__TypeVisitor___type_bool(val* self, val* p0);
val* nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(val* self, val* p0, val* p1);
#define COLOR_nitc__modelbuilder_base__AType___mtype 3
void nitc___nitc__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2);
extern const struct type type_nitc__MNullableType;
extern const struct type type_nitc__MNullType;
extern const struct type type_nitc__MFormalType;
short int nitc__typing___nitc__typing__TypeVisitor___can_be_null(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ASendExpr___n_expr 3
extern const char FILE_nitc__parser_nodes[];
#define COLOR_nitc__parser_nodes__ABinopExpr___n_expr2 6
#define COLOR_nitc__model__MType__as_notnull 38
#define COLOR_nitc__typing__AExpr__its_variable 68
extern const struct type type_nitc__AEqExpr;
#define COLOR_nitc__flow__AExpr___after_flow_context 17
extern const char FILE_nitc__flow[];
#define COLOR_nitc__flow__FlowContext___when_true 9
void nitc__typing___FlowContext___set_var(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__flow__FlowContext___when_false 10
extern const struct type type_nitc__ANeExpr;
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3);
val* nitc___nitc__ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__ModelBuilder___try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__ModelBuilder___get_mclass_by_name(val* self, val* p0, val* p1, val* p2);
val* nitc__typing___nitc__typing__TypeVisitor___get_mclass(val* self, val* p0, val* p1);
val* nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2);
short int nitc___nitc__MMethod___is_null_safe(val* self);
void nitc___nitc__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__model__MMethod___is_toplevel 19
#define COLOR_nitc__model__MProperty___visibility 13
val* nitc__model_base___core__Sys___protected_visibility(val* self);
#define COLOR_nitc__model__MProperty___intro_mclassdef 6
#define COLOR_nitc__model__MClassDef___mmodule 7
val* nitc___nitc__MModule___visibility_for(val* self, val* p0);
val* nitc__model_base___core__Sys___intrude_visibility(val* self);
short int nitc___nitc__MVisibility___core__kernel__Comparable___60d(val* self, val* p0);
#define COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility 2
extern const char FILE_nitc__modelbuilder[];
#define COLOR_opts__Option___value 6
#define COLOR_nitc__mdoc__MEntity___deprecation 3
#define COLOR_nitc__mdoc__MDeprecationInfo___mdoc 0
#define COLOR_nitc__mdoc__MDoc___content 0
extern const char FILE_nitc__mdoc[];
val* core___core__SequenceRead___Collection__first(val* self);
val* nitc___nitc__MProperty___lookup_definitions(val* self, val* p0, val* p1);
#define COLOR_core__array__AbstractArrayRead___length 0
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MProperty___intro 16
#define COLOR_nitc__model__MMethodDef___new_msignature 16
#define COLOR_nitc__model__MMethodDef___msignature 15
val* nitc__typing___nitc__typing__TypeVisitor___resolve_for(val* self, val* p0, val* p1, short int p2);
extern const struct type type_nitc__MSignature;
#define COLOR_nitc__model__MSignature___return_mtype 10
#define COLOR_nitc__model__MType__undecorate 51
extern const struct type type_nitc__MParameterType;
val* NEW_nitc__CallSite(const struct type* type);
extern const struct type type_nitc__CallSite;
#define COLOR_nitc__parser_nodes__ANode__hot_location 16
#define COLOR_nitc__typing__CallSite__location_61d 27
#define COLOR_nitc__typing__CallSite__recv_61d 28
#define COLOR_nitc__typing__CallSite__mmodule_61d 29
#define COLOR_nitc__typing__CallSite__anchor_61d 30
#define COLOR_nitc__typing__CallSite__recv_is_self_61d 31
#define COLOR_nitc__typing__CallSite__mproperty_61d 32
#define COLOR_nitc__typing__CallSite__mpropdef_61d 33
#define COLOR_nitc__typing__CallSite__msignature_61d 34
#define COLOR_nitc__typing__CallSite__erasure_cast_61d 35
val* nitc__typing___nitc__typing__TypeVisitor___get_method(val* self, val* p0, val* p1, val* p2, short int p3);
#define COLOR_nitc__model__MSignature___vararg_rank 11
long nitc___nitc__MSignature___arity(val* self);
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
val* nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(val* self);
val* NEW_nitc__SignatureMap(const struct type* type);
extern const struct type type_nitc__SignatureMap;
#define COLOR_nitc__model__MProperty___name 7
#define COLOR_core__abstract_text__Text__chars 27
#define COLOR_core__abstract_collection__SequenceRead__last 38
val* core___core__SequenceRead___last(val* self);
extern const struct type type_nitc__ANamedargExpr;
#define COLOR_nitc__typing__SignatureMap___map 0
void core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MSignature___mparameters 9
#define COLOR_nitc__model__MParameter___mtype 7
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nitc__parser_nodes__ANamedargExpr___n_id 3
val* nitc__lexer_work___Token___text(val* self);
val* nitc___nitc__MSignature___mparameter_by_name(val* self, val* p0);
long core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of(val* self, val* p0);
val* core___core__MapRead___get_or_null(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ANamedargExpr___n_expr 5
#define COLOR_nitc__typing__AExpr___mtype 12
long core___core__Int___Discrete__successor(long self, long p0);
short int core___core__CoupleMap___MapRead__has_key(val* self, val* p0);
#define COLOR_nitc__model__MParameter___is_vararg 8
short int nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__AExpr___vararg_decl 16
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__nitc__MType;
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
val* nitc___nitc__MClass___get_mtype(val* self, val* p0);
extern const struct type type_nitc__AVarargExpr;
#define COLOR_nitc__parser_nodes__AVarargExpr___n_expr 3
#define COLOR_nitc__typing__Variable___is_adapted 1
#define COLOR_nitc__typing__FlowContext___vars 0
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
val* nitc__typing___FlowContext___collect_types(val* self, val* p0);
val* nitc__typing___nitc__typing__TypeVisitor___merge_types(val* self, val* p0, val* p1);
#define COLOR_nitc__typing__TypeVisitor___dirty 7
#define COLOR_nitc__typing__TypeVisitor___has_loop 8
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 12
#define COLOR_core__abstract_collection__Iterator__item 13
#define COLOR_nitc__model__MType__as_nullable 35
#define COLOR_core__abstract_collection__Iterator__next 14
#define COLOR_core__abstract_collection__Iterator__finish 15
#define COLOR_nitc__typing__CallSite___location 6
#define COLOR_nitc__typing__CallSite___recv 7
#define COLOR_nitc__typing__CallSite___mmodule 8
#define COLOR_nitc__typing__CallSite___anchor 9
#define COLOR_nitc__typing__CallSite___recv_is_self 10
#define COLOR_nitc__typing__CallSite___mproperty 11
#define COLOR_nitc__typing__CallSite___mpropdef 12
#define COLOR_nitc__typing__CallSite___msignature 13
#define COLOR_nitc__typing__CallSite___erasure_cast 14
#define COLOR_nitc__typing__CallSite___signaturemap 15
val* nitc__typing___nitc__typing__TypeVisitor___check_signature(val* self, val* p0, val* p1, val* p2, val* p3);
#define COLOR_nitc__model_base__MEntity___is_broken 0
#define COLOR_nitc___nitc__CallSite___core__kernel__Object__init 46
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
extern const struct type type_core__Array__nullable__nitc__MType;
void core___core__Array___core__kernel__Object__init(val* self);
extern const struct type type_core__Array__nitc__FlowContext;
val* NEW_core__HashSet(const struct type* type);
extern const struct type type_core__HashSet__nitc__FlowContext;
void core___core__HashSet___core__kernel__Object__init(val* self);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self);
val* core___core__AbstractArray___core__abstract_collection__Sequence__pop(val* self);
short int nitc___nitc__FlowContext___is_unreachable(val* self);
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__flow__FlowContext___previous 2
void core___core__Array___core__abstract_collection__SimpleCollection__add_all(val* self, val* p0);
#define COLOR_nitc__flow__FlowContext___loops 3
#define COLOR_nitc__typing__APropdef___selfvariable 5
#define COLOR_nitc__modelize_property__APropdef___mpropdef 3
val* NEW_nitc__typing__TypeVisitor(const struct type* type);
extern const struct type type_nitc__typing__TypeVisitor;
#define COLOR_nitc__typing__TypeVisitor__modelbuilder_61d 12
#define COLOR_nitc__typing__TypeVisitor__mmodule_61d 13
#define COLOR_nitc__typing__TypeVisitor__mpropdef_61d 14
#define COLOR_nitc__parser_nodes__AMethPropdef___n_signature 19
#define COLOR_nitc__parser_nodes__ASignature___n_params 11
val* nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
#define COLOR_nitc__scope__AParam___variable 7
#define COLOR_nitc__parser_nodes__AMethPropdef___n_block 21
void nitc__typing___nitc__typing__TypeVisitor___visit_stmt(val* self, val* p0);
val* NEW_nitc__typing__PostTypingVisitor(const struct type* type);
extern const struct type type_nitc__typing__PostTypingVisitor;
#define COLOR_nitc__typing__PostTypingVisitor__type_visitor_61d 15
void nitc___nitc__Visitor___enter_visit(val* self, val* p0);
#define COLOR_nitc__typing__PostTypingVisitor___type_visitor 1
#define COLOR_nitc__parser_nodes__ANode__visit_all 14
#define COLOR_nitc__typing__ANode__accept_post_typing 31
extern const struct type type_nitc__AExpr;
#define COLOR_nitc__modelbuilder_base__ANode___is_broken 0
#define COLOR_nitc__typing___nitc__typing__PostTypingVisitor___core__kernel__Object__init 17
#define COLOR_nitc__modelize_property__AAttrPropdef___has_value 18
#define COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef 20
#define COLOR_nitc__parser_nodes__AAttrPropdef___n_expr 26
#define COLOR_nitc__modelize_property__AAttrPropdef___mtype 14
#define COLOR_nitc__parser_nodes__AAttrPropdef___n_block 28
val* core__abstract_text___Object___class_name(val* self);
#define COLOR_nitc__typing__AExpr___comprehension 15
#define COLOR_nitc__parser_nodes__ABlockExpr___n_expr 3
val* nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(val* self);
short int nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(val* self);
#define COLOR_nitc__scope__AVardeclExpr___variable 8
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_type 5
val* nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_expr 7
#define COLOR_nitc__scope__Variable___name 2
extern const char FILE_nitc__scope[];
val* nitc___nitc__MType___as_nullable(val* self);
void nitc__typing___nitc__typing__TypeVisitor___set_variable(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__scope__AVarFormExpr___variable 4
val* nitc__typing___nitc__typing__TypeVisitor___get_variable(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AAssignFormExpr___n_value 6
#define COLOR_nitc__typing__AReassignFormExpr___reassign_callsite 7
#define COLOR_nitc__typing__AReassignFormExpr___read_type 8
#define COLOR_nitc__parser_nodes__AReassignFormExpr___n_assign_op 5
#define COLOR_nitc__parser_nodes__AAssignOp__operator 35
#define COLOR_nitc__parser_nodes__AReassignFormExpr___n_value 6
val* nitc__typing___AReassignFormExpr___resolve_reassignment(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__parser_nodes__AEscapeExpr___n_expr 4
extern const struct type type_nitc__MMethodDef;
extern const struct type type_nitc__MAttributeDef;
#define COLOR_nitc__model__MAttributeDef___static_mtype 15
#define COLOR_nitc__parser_nodes__AIfExpr___n_expr 4
val* nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AIfExpr___n_then 6
#define COLOR_nitc__parser_nodes__AIfExpr___n_else 8
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_expr 4
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_then 6
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_else 8
#define COLOR_nitc__parser_nodes__ADoExpr___n_block 5
#define COLOR_nitc__parser_nodes__ADoExpr___n_catch 7
#define COLOR_nitc__parser_nodes__AWhileExpr___n_expr 5
#define COLOR_nitc__parser_nodes__AWhileExpr___n_block 7
#define COLOR_nitc__parser_nodes__ALoopExpr___n_block 5
#define COLOR_nitc__parser_nodes__AForExpr___n_groups 5
#define COLOR_nitc__parser_nodes__AForGroup___n_expr 5
void nitc__typing___AForGroup___do_type_iterator(val* self, val* p0, val* p1);
#define COLOR_nitc__parser_nodes__AForExpr___n_block 7
#define COLOR_nitc__typing__AForGroup___coltype 6
#define COLOR_nitc__typing__AForGroup___method_iterator 7
#define COLOR_nitc__typing__AForGroup___method_is_ok 8
#define COLOR_nitc__typing__AForGroup___method_item 11
#define COLOR_nitc__typing__AForGroup___method_next 12
#define COLOR_nitc__typing__AForGroup___method_key 13
#define COLOR_nitc__typing__AForGroup___method_finish 14
#define COLOR_nitc__typing__AForGroup___method_lt 15
#define COLOR_nitc__typing__AForGroup___method_successor 16
extern const struct type type_nitc__ASelfExpr;
val* nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(val* self, val* p0, val* p1);
val* nitc___nitc__MType___supertype_to(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__scope__AForGroup___variables 17
extern const char FILE_core__array[];
#define COLOR_nitc__model__MClassType__arguments 61
extern const struct type type_nitc__MClassType;
val* nitc__typing___nitc__typing__TypeVisitor___try_get_method(val* self, val* p0, val* p1, val* p2, short int p3);
extern const struct type type_nitc__ARangeExpr;
extern const struct type type_nitc__AOrangeExpr;
#define COLOR_nitc__typing__AWithExpr___method_start 8
#define COLOR_nitc__typing__AWithExpr___method_finish 18
#define COLOR_nitc__parser_nodes__AWithExpr___n_expr 5
#define COLOR_nitc__parser_nodes__AWithExpr___n_block 7
#define COLOR_nitc__parser_nodes__AAssertExpr___n_expr 5
#define COLOR_nitc__parser_nodes__AAssertExpr___n_else 7
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr 3
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2 5
#define COLOR_nitc__parser_nodes__ANotExpr___n_expr 4
short int nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(val* self, val* p0, val* p1);
#define COLOR_nitc__literal__AIntegerExpr___value 4
extern const struct type type_core__Byte;
extern const struct type type_core__Int8;
extern const struct type type_core__Int16;
extern const struct type type_core__UInt16;
extern const struct type type_core__Int32;
extern const struct type type_core__UInt32;
short int nitc__literal___ACharExpr___is_ascii(val* self);
short int nitc__literal___ACharExpr___is_code_point(val* self);
#define COLOR_nitc__typing__AugmentedStringFormExpr___to_re 20
#define COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case 21
#define COLOR_nitc__typing__AugmentedStringFormExpr___newline 22
#define COLOR_nitc__typing__AugmentedStringFormExpr___extended 23
#define COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy 24
short int nitc___nitc__AugmentedStringFormExpr___is_bytestring(val* self);
val* nitc__model___MModule___c_string_type(val* self);
short int nitc___nitc__AugmentedStringFormExpr___is_re(val* self);
#define COLOR_nitc__literal__AAugmentedLiteral__suffix 38
#define COLOR_core__abstract_collection__Collection__iterator 24
val* core__abstract_text___Char___Object__to_s(uint32_t self);
#define COLOR_nitc__typing___ASuperstringExpr___AExpr__accept_typing 92
#define COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs 25
#define COLOR_nitc__typing__AArrayExpr___with_capacity_callsite 8
#define COLOR_nitc__typing__AArrayExpr___push_callsite 18
#define COLOR_nitc__typing__AArrayExpr___element_mtype 19
extern const struct type type_nitc__AForExpr;
void nitc__typing___AArrayExpr___set_comprehension(val* self, val* p0);
extern const struct type type_nitc__AIfExpr;
#define COLOR_nitc__parser_nodes__AArrayExpr___n_type 5
#define COLOR_nitc__parser_nodes__AArrayExpr___n_exprs 4
#define COLOR_nitc__typing__ARangeExpr___init_callsite 6
#define COLOR_nitc__model__MClass___intro 19
#define COLOR_nitc__parser_nodes__ARangeExpr___n_expr 3
#define COLOR_nitc__parser_nodes__ARangeExpr___n_expr2 5
extern const struct type type_nitc__ACrangeExpr;
#define COLOR_nitc__mmodule__MModule___model 41
extern const char FILE_nitc__mmodule[];
#define COLOR_nitc__model__Model___null_type 13
#define COLOR_nitc__typing__AIsaExpr___cast_type 6
#define COLOR_nitc__parser_nodes__AIsaExpr___n_expr 3
#define COLOR_nitc__parser_nodes__AIsaExpr___n_type 5
val* nitc__typing___nitc__typing__TypeVisitor___check_expr_cast(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__parser_nodes__AAsCastForm___n_expr 3
#define COLOR_nitc__parser_nodes__AAsCastExpr___n_type 7
#define COLOR_nitc__parser_nodes__AParExpr___n_expr 4
#define COLOR_nitc__parser_nodes__AOnceExpr___n_expr 4
#define COLOR_nitc__typing__ASelfExpr___its_variable 4
extern const struct type type_nitc__AImplicitSelfExpr;
#define COLOR_nitc__typing__AImplicitSelfExpr___is_sys 6
#define COLOR_nitc__typing__ASendExpr___callsite 4
#define COLOR_nitc__typing__ASendExpr__property_name 38
#define COLOR_nitc__typing__ASendExpr__property_node 39
#define COLOR_nitc__typing__ASendExpr__compute_raw_arguments 37
short int nitc___nitc__CallSite___check_signature(val* self, val* p0, val* p1, val* p2);
#define COLOR_nitc__model__MMethod___is_init 20
#define COLOR_nitc__model__MMethod___is_root_init 21
extern const struct type type_core__Array__nitc__AExpr;
#define COLOR_nitc__parser_nodes__ABinopExpr__operator 77
#define COLOR_nitc__parser_nodes__ABinopExpr___n_op 5
#define COLOR_nitc__typing___AEqFormExpr___AExpr__accept_typing 79
void nitc__typing___nitc__typing__TypeVisitor___null_test(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AUnaryopExpr__operator 75
#define COLOR_nitc__parser_nodes__ACallFormExpr___n_qid 18
#define COLOR_nitc__parser_nodes__AQid___n_id 4
#define COLOR_nitc__parser_nodes__ACallFormExpr___n_args 19
val* nitc__typing___AExprs___to_a(val* self);
#define COLOR_nitc__parser_nodes__ABraFormExpr___n_args 18
#define COLOR_nitc__typing__ASendReassignFormExpr___write_callsite 20
val* core__array___Collection___to_a(val* self);
#define COLOR_nitc__parser_nodes__AInitExpr___n_kwinit 5
#define COLOR_nitc__parser_nodes__AInitExpr___n_args 6
#define COLOR_nitc__parser_nodes__AExprs___n_exprs 3
#define COLOR_nitc__typing__ASuperExpr___callsite 6
#define COLOR_nitc__typing__ASuperExpr___mpropdef 7
val* nitc___nitc__MProperty___lookup_super_definitions(val* self, val* p0, val* p1);
short int nitc___nitc__MPropDef___is_intro(val* self);
void nitc__typing___ASuperExpr___process_superinit(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ASuperExpr___n_args 5
#define COLOR_nitc__typing__ASuperExpr___signaturemap 8
extern const char FILE_nitc__modelize_property[];
#define COLOR_nitc__modelize_property__MPropDef___has_supercall 6
#define COLOR_nitc__model__MClassDef___supertypes 16
val* nitc___nitc__MClassType___MType__anchor_to(val* self, val* p0, val* p1);
extern const struct type type_nullable__nitc__MMethod;
val* nitc___nitc__ANode___hot_location(val* self);
#define COLOR_nitc__model__MParameter___name 6
#define COLOR_nitc__typing__ANewExpr___callsite 7
#define COLOR_nitc__typing__ANewExpr___recvtype 8
#define COLOR_nitc__parser_nodes__ANewExpr___n_type 4
#define COLOR_nitc__model__MClassType___mclass 9
#define COLOR_nitc__model__MClass___kind 16
#define COLOR_nitc__parser_nodes__ANewExpr___n_qid 5
#define COLOR_nitc__parser_nodes__ANewExpr___n_kwnew 3
val* nitc__model___core__Sys___concrete_kind(val* self);
#define COLOR_nitc__parser_nodes__ANewExpr___n_args 6
short int core___core__Collection___not_empty(val* self);
short int nitc___nitc__MMethod___is_init_for(val* self, val* p0);
#define COLOR_nitc__typing__AAttrFormExpr___mproperty 18
#define COLOR_nitc__typing__AAttrFormExpr___attr_type 19
#define COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr 3
#define COLOR_nitc__parser_nodes__AAttrFormExpr___n_id 4
extern const struct type type_nitc__MAttribute;
void nitc__typing___AAttrFormExpr___resolve_property(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ADebugTypeExpr___n_expr 5
#define COLOR_nitc__parser_nodes__ADebugTypeExpr___n_type 6
