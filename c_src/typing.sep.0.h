#include "nit.common.h"
extern const int COLOR_typing__ToolContext___64dtyping_phase;
val* typing__ToolContext__typing_phase(val* self);
void typing__ToolContext__typing_phase_61d(val* self, val* p0);
extern const int COLOR_phase__Phase__toolcontext;
extern const int COLOR_modelbuilder__ToolContext__modelbuilder;
extern const int COLOR_typing__APropdef__do_typing;
void typing__TypingPhase__process_npropdef(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor___64dmodelbuilder;
val* typing__TypeVisitor__modelbuilder(val* self);
void typing__TypeVisitor__modelbuilder_61d(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor___64dnclassdef;
val* typing__TypeVisitor__nclassdef(val* self);
void typing__TypeVisitor__nclassdef_61d(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor___64dmpropdef;
val* typing__TypeVisitor__mpropdef(val* self);
void typing__TypeVisitor__mpropdef_61d(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor___64dselfvariable;
val* typing__TypeVisitor__selfvariable(val* self);
void typing__TypeVisitor__selfvariable_61d(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor__modelbuilder_61d;
extern const int COLOR_typing__TypeVisitor__nclassdef_61d;
extern const int COLOR_typing__TypeVisitor__mpropdef_61d;
extern const int COLOR_modelize_class__AClassdef__mclassdef;
extern const int COLOR_model__MClassDef__mclass;
val* NEW_scope__Variable(const struct type* type);
extern const struct type type_scope__Variable;
val* string__NativeString__to_s_with_length(char* self, long p0);
extern const int COLOR_scope__Variable__init;
extern const int COLOR_typing__TypeVisitor__selfvariable_61d;
extern const int COLOR_model__MClass__mclass_type;
extern const int COLOR_typing__Variable__declared_type_61d;
void typing__TypeVisitor__init(val* self, val* p0, val* p1, val* p2);
extern const int COLOR_typing__TypeVisitor__nclassdef;
extern const int COLOR_model__MClassDef__mmodule;
val* typing__TypeVisitor__mmodule(val* self);
extern const int COLOR_model__MClassDef__bound_mtype;
val* typing__TypeVisitor__anchor(val* self);
extern const int COLOR_model__MType__anchor_to;
val* typing__TypeVisitor__anchor_to(val* self, val* p0);
extern const int COLOR_model__MType__is_subtype;
short int typing__TypeVisitor__is_subtype(val* self, val* p0, val* p1);
extern const int COLOR_model__MType__resolve_for;
val* typing__TypeVisitor__resolve_for(val* self, val* p0, val* p1, short int p2);
extern const int COLOR_model__MMethodDef__msignature;
extern const int COLOR_typing__TypeVisitor__resolve_for;
extern const struct type type_model__MSignature;
val* typing__TypeVisitor__resolve_signature_for(val* self, val* p0, val* p1, short int p2);
extern const int COLOR_typing__TypeVisitor__is_subtype;
extern const int COLOR_typing__TypeVisitor__anchor_to;
extern const int COLOR_typing__TypeVisitor__modelbuilder;
val* NEW_array__Array(const struct type* type);
extern const struct type type_array__Arraykernel__Object;
val* NEW_array__NativeArray(int length, const struct type* type);
extern const struct type type_array__NativeArraykernel__Object;
extern const int COLOR_array__Array__with_native;
extern const int COLOR_string__Object__to_s;
extern const int COLOR_modelbuilder__ModelBuilder__error;
val* typing__TypeVisitor__check_subtype(val* self, val* p0, val* p1, val* p2);
extern const int COLOR_typing__AExpr__accept_typing;
void typing__TypeVisitor__visit_stmt(val* self, val* p0);
extern const int COLOR_typing__AExpr__mtype;
extern const int COLOR_typing__AExpr__is_typed;
extern const int COLOR_modelbuilder__ModelBuilder__toolcontext;
extern const int COLOR_toolcontext__ToolContext__error_count;
extern const struct type type_kernel__Int;
extern const int COLOR_toolcontext__ToolContext__verbose_level;
extern const int COLOR_parser_nodes__ANode__debug;
extern const int COLOR_typing__TypeVisitor__error;
val* typing__TypeVisitor__visit_expr(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor__visit_expr;
extern const int COLOR_typing__TypeVisitor__check_subtype;
extern const int COLOR_kernel__Object___33d_61d;
extern const int COLOR_typing__AExpr__implicit_cast_to_61d;
val* typing__TypeVisitor__visit_expr_subtype(val* self, val* p0, val* p1);
extern const int COLOR_typing__TypeVisitor__type_bool;
extern const int COLOR_typing__TypeVisitor__visit_expr_subtype;
val* typing__TypeVisitor__visit_expr_bool(val* self, val* p0);
extern const int COLOR_typing__TypeVisitor__resolve_mtype;
extern const int COLOR_kernel__Object___61d_61d;
extern const int COLOR_modelbuilder__ModelBuilder__warning;
extern const int COLOR_model__MType__need_anchor;
val* typing__TypeVisitor__visit_expr_cast(val* self, val* p0, val* p1, val* p2);
extern const int COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name2;
val* typing__TypeVisitor__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2);
extern const int COLOR_modelize_class__ModelBuilder__resolve_mtype;
val* typing__TypeVisitor__resolve_mtype(val* self, val* p0);
extern const int COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name;
val* typing__TypeVisitor__try_get_mclass(val* self, val* p0, val* p1);
val* typing__TypeVisitor__get_mclass(val* self, val* p0, val* p1);
extern const int COLOR_typing__TypeVisitor__get_mclass;
val* typing__TypeVisitor__type_bool(val* self, val* p0);
extern const struct type type_model__MNullType;
extern const int COLOR_typing__TypeVisitor__try_get_mproperty_by_name2;
extern const struct type type_model__MMethod;
extern const int COLOR_model__MProperty__visibility;
extern const int COLOR_model_base__Object__protected_visibility;
extern const int COLOR_typing__TypeVisitor__mmodule;
extern const int COLOR_model__MProperty__intro_mclassdef;
extern const int COLOR_mmodule__MModule__visibility_for;
extern const int COLOR_model_base__Object__intrude_visibility;
extern const int COLOR_kernel__Comparable___60d;
extern const int COLOR_model__MProperty__lookup_definitions;
extern const int COLOR_abstract_collection__Collection__length;
extern const int COLOR_abstract_collection__Collection__first;
extern const int COLOR_string__Collection__join;
extern const int COLOR_model__MProperty__intro;
extern const int COLOR_typing__TypeVisitor__resolve_signature_for;
extern const int COLOR_model__MSignature__return_mtype;
extern const struct type type_model__MNullableType;
extern const int COLOR_model__MNullableType__mtype;
extern const struct type type_model__MParameterType;
val* NEW_typing__CallSite(const struct type* type);
extern const struct type type_typing__CallSite;
extern const int COLOR_typing__CallSite__init;
val* typing__TypeVisitor__get_method(val* self, val* p0, val* p1, val* p2, short int p3);
extern const int COLOR_model__MSignature__vararg_rank;
extern const int COLOR_model__MSignature__arity;
val* BOX_kernel__Int(long);
val* NEW_range__Range(const struct type* type);
extern const struct type type_range__Rangekernel__Int;
extern const int COLOR_range__Range__without_last;
extern const int COLOR_abstract_collection__Collection__iterator;
extern const int COLOR_abstract_collection__Iterator__is_ok;
extern const int COLOR_abstract_collection__Iterator__item;
extern const int COLOR_model__MSignature__mparameters;
extern const int COLOR_abstract_collection__SequenceRead___91d_93d;
extern const int COLOR_model__MParameter__mtype;
extern const int COLOR_abstract_collection__Iterator__next;
extern const struct type type_array__Arrayparser_nodes__AExpr;
extern const int COLOR_array__Array__init;
extern const int COLOR_range__Range__init;
extern const int COLOR_abstract_collection__SimpleCollection__add;
short int typing__TypeVisitor__check_signature(val* self, val* p0, val* p1, val* p2, val* p3);
extern const int COLOR_parser_nodes__ANode__hot_location;
extern const int COLOR_toolcontext__ToolContext__error;
void typing__TypeVisitor__error(val* self, val* p0, val* p1);
extern const int COLOR_flow__AExpr__after_flow_context;
extern const int COLOR_typing__FlowContext__vars;
extern const int COLOR_abstract_collection__MapRead__has_key;
extern const int COLOR_abstract_collection__MapRead___91d_93d;
extern const int COLOR_typing__FlowContext__collect_types;
extern const int COLOR_typing__Variable__declared_type;
extern const int COLOR_typing__TypeVisitor__merge_types;
val* typing__TypeVisitor__get_variable(val* self, val* p0, val* p1);
extern const int COLOR_typing__FlowContext__set_var;
void typing__TypeVisitor__set_variable(val* self, val* p0, val* p1, val* p2);
extern const struct type type_array__Arraynullable_model__MType;
extern const int COLOR_model__MType__as_nullable;
val* typing__TypeVisitor__merge_types(val* self, val* p0, val* p1);
extern const int COLOR_typing__CallSite___64dnode;
val* typing__CallSite__node(val* self);
void typing__CallSite__node_61d(val* self, val* p0);
extern const int COLOR_typing__CallSite___64drecv;
val* typing__CallSite__recv(val* self);
void typing__CallSite__recv_61d(val* self, val* p0);
extern const int COLOR_typing__CallSite___64drecv_is_self;
short int typing__CallSite__recv_is_self(val* self);
void typing__CallSite__recv_is_self_61d(val* self, short int p0);
extern const int COLOR_typing__CallSite___64dmproperty;
val* typing__CallSite__mproperty(val* self);
void typing__CallSite__mproperty_61d(val* self, val* p0);
extern const int COLOR_typing__CallSite___64dmpropdef;
val* typing__CallSite__mpropdef(val* self);
void typing__CallSite__mpropdef_61d(val* self, val* p0);
extern const int COLOR_typing__CallSite___64dmsignature;
val* typing__CallSite__msignature(val* self);
void typing__CallSite__msignature_61d(val* self, val* p0);
extern const int COLOR_typing__CallSite___64derasure_cast;
short int typing__CallSite__erasure_cast(val* self);
void typing__CallSite__erasure_cast_61d(val* self, short int p0);
extern const int COLOR_typing__CallSite__node;
extern const int COLOR_typing__CallSite__mproperty;
extern const int COLOR_model__MProperty__name;
extern const int COLOR_typing__CallSite__msignature;
extern const int COLOR_typing__TypeVisitor__check_signature;
short int typing__CallSite__check_signature(val* self, val* p0, val* p1);
void typing__CallSite__init(val* self, val* p0, val* p1, short int p2, val* p3, val* p4, val* p5, short int p6);
extern const int COLOR_typing__Variable___64ddeclared_type;
val* typing__Variable__declared_type(val* self);
void typing__Variable__declared_type_61d(val* self, val* p0);
extern const int COLOR_typing__FlowContext___64dvars;
val* typing__FlowContext__vars(val* self);
void typing__FlowContext__vars_61d(val* self, val* p0);
extern const int COLOR_typing__FlowContext___64dcache;
val* typing__FlowContext__cache(val* self);
void typing__FlowContext__cache_61d(val* self, val* p0);
extern const int COLOR_abstract_collection__Map___91d_93d_61d;
extern const int COLOR_typing__FlowContext__cache;
extern const int COLOR_abstract_collection__MapRead__keys;
extern const int COLOR_abstract_collection__RemovableCollection__remove;
void typing__FlowContext__set_var(val* self, val* p0, val* p1);
extern const int COLOR_array__Array__with_capacity;
extern const int COLOR_abstract_collection__Sequence__push;
extern const int COLOR_flow__FlowContext__previous;
extern const int COLOR_abstract_collection__Collection__is_empty;
extern const int COLOR_flow__FlowContext__is_unreachable;
extern const int COLOR_array__Collection__to_a;
extern const int COLOR_abstract_collection__Collection__has;
val* typing__FlowContext__collect_types(val* self, val* p0);
void typing__APropdef__do_typing(val* self, val* p0);
extern const int COLOR_typing__APropdef___64dselfvariable;
val* typing__APropdef__selfvariable(val* self);
void typing__APropdef__selfvariable_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__ANode__parent;
extern const struct type type_parser_nodes__AClassdef;
extern const int COLOR_modelize_property__APropdef__mpropdef;
val* NEW_typing__TypeVisitor(const struct type* type);
extern const struct type type_typing__TypeVisitor;
extern const int COLOR_typing__TypeVisitor__init;
extern const int COLOR_typing__TypeVisitor__selfvariable;
extern const int COLOR_typing__APropdef__selfvariable_61d;
extern const int COLOR_parser_nodes__AConcreteMethPropdef__n_block;
extern const int COLOR_parser_nodes__AMethPropdef__n_signature;
extern const int COLOR_parser_nodes__ASignature__n_params;
extern const struct type type_array__Arraymodel__MType;
extern const struct type type_array__NativeArraymodel__MType;
extern const int COLOR_model__MClass__get_mtype;
extern const int COLOR_scope__AParam__variable;
extern const int COLOR_typing__TypeVisitor__visit_stmt;
void typing__AConcreteMethPropdef__do_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AAttrPropdef__n_expr;
extern const int COLOR_model__MAttributeDef__static_mtype;
void typing__AAttrPropdef__do_typing(val* self, val* p0);
extern const int COLOR_typing__AExpr___64dmtype;
val* typing__AExpr__mtype(val* self);
void typing__AExpr__mtype_61d(val* self, val* p0);
extern const int COLOR_typing__AExpr___64dis_typed;
short int typing__AExpr__is_typed(val* self);
void typing__AExpr__is_typed_61d(val* self, short int p0);
extern const int COLOR_typing__AExpr___64dimplicit_cast_to;
val* typing__AExpr__implicit_cast_to(val* self);
void typing__AExpr__implicit_cast_to_61d(val* self, val* p0);
val* typing__AExpr__its_variable(val* self);
extern const int COLOR_string__Object__class_name;
void typing__AExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ABlockExpr__n_expr;
extern const int COLOR_typing__AExpr__is_typed_61d;
void typing__ABlockExpr__accept_typing(val* self, val* p0);
extern const int COLOR_abstract_collection__SequenceRead__last;
val* typing__ABlockExpr__mtype(val* self);
extern const int COLOR_scope__AVardeclExpr__variable;
extern const int COLOR_parser_nodes__AVardeclExpr__n_type;
extern const int COLOR_parser_nodes__AVardeclExpr__n_expr;
extern const int COLOR_typing__TypeVisitor__set_variable;
void typing__AVardeclExpr__accept_typing(val* self, val* p0);
extern const int COLOR_scope__AVarFormExpr__variable;
val* typing__AVarExpr__its_variable(val* self);
extern const int COLOR_typing__TypeVisitor__get_variable;
extern const int COLOR_typing__AExpr__mtype_61d;
void typing__AVarExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AAssignFormExpr__n_value;
void typing__AVarAssignExpr__accept_typing(val* self, val* p0);
extern const int COLOR_typing__AReassignFormExpr___64dreassign_callsite;
val* typing__AReassignFormExpr__reassign_callsite(val* self);
void typing__AReassignFormExpr__reassign_callsite_61d(val* self, val* p0);
extern const int COLOR_typing__AReassignFormExpr___64dread_type;
val* typing__AReassignFormExpr__read_type(val* self);
void typing__AReassignFormExpr__read_type_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__AReassignFormExpr__n_assign_op;
extern const struct type type_parser_nodes__APlusAssignOp;
extern const struct type type_parser_nodes__AMinusAssignOp;
extern const int COLOR_typing__AReassignFormExpr__read_type_61d;
extern const int COLOR_typing__TypeVisitor__get_method;
extern const int COLOR_typing__AReassignFormExpr__reassign_callsite_61d;
extern const int COLOR_parser_nodes__AReassignFormExpr__n_value;
val* typing__AReassignFormExpr__resolve_reassignment(val* self, val* p0, val* p1, val* p2);
extern const int COLOR_typing__AReassignFormExpr__resolve_reassignment;
void typing__AVarReassignExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AContinueExpr__n_expr;
void typing__AContinueExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ABreakExpr__n_expr;
void typing__ABreakExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AReturnExpr__n_expr;
extern const int COLOR_typing__TypeVisitor__mpropdef;
extern const struct type type_model__MMethodDef;
void typing__AReturnExpr__accept_typing(val* self, val* p0);
void typing__AAbortExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AIfExpr__n_expr;
extern const int COLOR_typing__TypeVisitor__visit_expr_bool;
extern const int COLOR_parser_nodes__AIfExpr__n_then;
extern const int COLOR_parser_nodes__AIfExpr__n_else;
void typing__AIfExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AIfexprExpr__n_expr;
extern const int COLOR_parser_nodes__AIfexprExpr__n_then;
extern const int COLOR_parser_nodes__AIfexprExpr__n_else;
void typing__AIfexprExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ADoExpr__n_block;
void typing__ADoExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AWhileExpr__n_expr;
extern const int COLOR_parser_nodes__AWhileExpr__n_block;
void typing__AWhileExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ALoopExpr__n_block;
void typing__ALoopExpr__accept_typing(val* self, val* p0);
extern const int COLOR_typing__AForExpr___64dcoltype;
val* typing__AForExpr__coltype(val* self);
void typing__AForExpr__coltype_61d(val* self, val* p0);
extern const int COLOR_typing__AForExpr___64dmethod_iterator;
val* typing__AForExpr__method_iterator(val* self);
void typing__AForExpr__method_iterator_61d(val* self, val* p0);
extern const int COLOR_typing__AForExpr___64dmethod_is_ok;
val* typing__AForExpr__method_is_ok(val* self);
void typing__AForExpr__method_is_ok_61d(val* self, val* p0);
extern const int COLOR_typing__AForExpr___64dmethod_item;
val* typing__AForExpr__method_item(val* self);
void typing__AForExpr__method_item_61d(val* self, val* p0);
extern const int COLOR_typing__AForExpr___64dmethod_next;
val* typing__AForExpr__method_next(val* self);
void typing__AForExpr__method_next_61d(val* self, val* p0);
extern const int COLOR_typing__AForExpr___64dmethod_key;
val* typing__AForExpr__method_key(val* self);
void typing__AForExpr__method_key_61d(val* self, val* p0);
extern const int COLOR_typing__AForExpr__method_iterator_61d;
extern const int COLOR_typing__TypeVisitor__try_get_mclass;
extern const int COLOR_typing__TypeVisitor__anchor;
extern const int COLOR_model__MType__supertype_to;
extern const int COLOR_scope__AForExpr__variables;
extern const int COLOR_model__MClassType__arguments;
extern const struct type type_model__MClassType;
extern const int COLOR_typing__AForExpr__coltype_61d;
extern const int COLOR_typing__AForExpr__method_is_ok_61d;
extern const int COLOR_typing__AForExpr__method_item_61d;
extern const int COLOR_typing__AForExpr__method_next_61d;
extern const int COLOR_typing__AForExpr__method_key_61d;
void typing__AForExpr__do_type_iterator(val* self, val* p0, val* p1);
extern const int COLOR_parser_nodes__AForExpr__n_expr;
extern const int COLOR_typing__AForExpr__do_type_iterator;
extern const int COLOR_parser_nodes__AForExpr__n_block;
void typing__AForExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AAssertExpr__n_expr;
extern const int COLOR_parser_nodes__AAssertExpr__n_else;
void typing__AAssertExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AOrExpr__n_expr;
extern const int COLOR_parser_nodes__AOrExpr__n_expr2;
void typing__AOrExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AImpliesExpr__n_expr;
extern const int COLOR_parser_nodes__AImpliesExpr__n_expr2;
void typing__AImpliesExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AAndExpr__n_expr;
extern const int COLOR_parser_nodes__AAndExpr__n_expr2;
void typing__AAndExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ANotExpr__n_expr;
void typing__ANotExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AOrElseExpr__n_expr;
extern const int COLOR_parser_nodes__AOrElseExpr__n_expr2;
extern const int COLOR_model__MModule__object_type;
void typing__AOrElseExpr__accept_typing(val* self, val* p0);
void typing__ATrueExpr__accept_typing(val* self, val* p0);
void typing__AFalseExpr__accept_typing(val* self, val* p0);
void typing__AIntExpr__accept_typing(val* self, val* p0);
void typing__AFloatExpr__accept_typing(val* self, val* p0);
void typing__ACharExpr__accept_typing(val* self, val* p0);
void typing__AStringFormExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ASuperstringExpr__n_exprs;
void typing__ASuperstringExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AArrayExpr__n_exprs;
extern const int COLOR_parser_nodes__AExprs__n_exprs;
void typing__AArrayExpr__accept_typing(val* self, val* p0);
extern const int COLOR_model__MClass__intro;
extern const int COLOR_parser_nodes__ARangeExpr__n_expr;
extern const int COLOR_parser_nodes__ARangeExpr__n_expr2;
void typing__ARangeExpr__accept_typing(val* self, val* p0);
extern const int COLOR_mmodule__MModule__model;
extern const int COLOR_model__Model__null_type;
void typing__ANullExpr__accept_typing(val* self, val* p0);
extern const int COLOR_typing__AIsaExpr___64dcast_type;
val* typing__AIsaExpr__cast_type(val* self);
void typing__AIsaExpr__cast_type_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__AIsaExpr__n_expr;
extern const int COLOR_parser_nodes__AIsaExpr__n_type;
extern const int COLOR_typing__TypeVisitor__visit_expr_cast;
extern const int COLOR_typing__AIsaExpr__cast_type_61d;
extern const int COLOR_typing__AExpr__its_variable;
extern const int COLOR_flow__FlowContext__when_true;
void typing__AIsaExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AAsCastExpr__n_expr;
extern const int COLOR_parser_nodes__AAsCastExpr__n_type;
void typing__AAsCastExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AAsNotnullExpr__n_expr;
void typing__AAsNotnullExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__AProxyExpr__n_expr;
void typing__AProxyExpr__accept_typing(val* self, val* p0);
extern const int COLOR_typing__ASelfExpr___64dits_variable;
val* typing__ASelfExpr__its_variable(val* self);
void typing__ASelfExpr__its_variable_61d(val* self, val* p0);
extern const int COLOR_typing__ASelfExpr__its_variable_61d;
void typing__ASelfExpr__accept_typing(val* self, val* p0);
extern const int COLOR_typing__ASendExpr___64dcallsite;
val* typing__ASendExpr__callsite(val* self);
void typing__ASendExpr__callsite_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__ASendExpr__n_expr;
extern const int COLOR_typing__ASendExpr__property_name;
extern const struct type type_parser_nodes__ASelfExpr;
extern const int COLOR_typing__ASendExpr__callsite_61d;
extern const int COLOR_typing__ASendExpr__compute_raw_arguments;
extern const int COLOR_typing__ASendExpr__raw_arguments_61d;
extern const int COLOR_typing__CallSite__check_signature;
extern const int COLOR_model__MMethod__is_init;
extern const int COLOR_model__MPropDef__mproperty;
void typing__ASendExpr__accept_typing(val* self, val* p0);
val* typing__ASendExpr__property_name(val* self);
extern const int COLOR_typing__ASendExpr___64draw_arguments;
val* typing__ASendExpr__raw_arguments(val* self);
void typing__ASendExpr__raw_arguments_61d(val* self, val* p0);
val* typing__ASendExpr__compute_raw_arguments(val* self);
extern const int COLOR_parser_nodes__ABinopExpr__n_expr2;
val* typing__ABinopExpr__compute_raw_arguments(val* self);
val* typing__AEqExpr__property_name(val* self);
extern const int COLOR_typing__AEqExpr__accept_typing;
extern const int COLOR_flow__FlowContext__when_false;
void typing__AEqExpr__accept_typing(val* self, val* p0);
val* typing__ANeExpr__property_name(val* self);
extern const int COLOR_typing__ANeExpr__accept_typing;
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
extern const int COLOR_parser_nodes__ACallFormExpr__n_id;
extern const int COLOR_parser_nodes__Token__text;
val* typing__ACallExpr__property_name(val* self);
extern const int COLOR_parser_nodes__ACallFormExpr__n_args;
extern const int COLOR_typing__AExprs__to_a;
val* typing__ACallExpr__compute_raw_arguments(val* self);
extern const int COLOR_string__String___43d;
val* typing__ACallAssignExpr__property_name(val* self);
val* typing__ACallAssignExpr__compute_raw_arguments(val* self);
val* typing__ABraExpr__property_name(val* self);
extern const int COLOR_parser_nodes__ABraFormExpr__n_args;
val* typing__ABraExpr__compute_raw_arguments(val* self);
val* typing__ABraAssignExpr__property_name(val* self);
val* typing__ABraAssignExpr__compute_raw_arguments(val* self);
extern const int COLOR_typing__ASendReassignFormExpr___64dwrite_callsite;
val* typing__ASendReassignFormExpr__write_callsite(val* self);
void typing__ASendReassignFormExpr__write_callsite_61d(val* self, val* p0);
extern const int COLOR_typing__ASendReassignFormExpr__write_callsite_61d;
void typing__ASendReassignFormExpr__accept_typing(val* self, val* p0);
val* typing__ACallReassignExpr__property_name(val* self);
val* typing__ACallReassignExpr__compute_raw_arguments(val* self);
val* typing__ABraReassignExpr__property_name(val* self);
val* typing__ABraReassignExpr__compute_raw_arguments(val* self);
val* typing__AInitExpr__property_name(val* self);
extern const int COLOR_parser_nodes__AInitExpr__n_args;
val* typing__AInitExpr__compute_raw_arguments(val* self);
val* typing__AExprs__to_a(val* self);
extern const int COLOR_typing__ASuperExpr___64dcallsite;
val* typing__ASuperExpr__callsite(val* self);
void typing__ASuperExpr__callsite_61d(val* self, val* p0);
extern const int COLOR_typing__ASuperExpr___64dmpropdef;
val* typing__ASuperExpr__mpropdef(val* self);
void typing__ASuperExpr__mpropdef_61d(val* self, val* p0);
extern const int COLOR_model__MProperty__lookup_super_definitions;
extern const int COLOR_model__MPropDef__is_intro;
extern const int COLOR_typing__ASuperExpr__process_superinit;
extern const int COLOR_parser_nodes__ASuperExpr__n_args;
extern const int COLOR_modelize_property__MPropDef__has_supercall_61d;
extern const int COLOR_typing__ASuperExpr__mpropdef_61d;
void typing__ASuperExpr__accept_typing(val* self, val* p0);
extern const int COLOR_model__MClassDef__supertypes;
extern const struct type type_nullable_model__MMethod;
extern const int COLOR_model__MProperty__full_name;
extern const int COLOR_typing__ASuperExpr__callsite_61d;
extern const int COLOR_model__MParameter__name;
void typing__ASuperExpr__process_superinit(val* self, val* p0);
extern const int COLOR_typing__ANewExpr___64dcallsite;
val* typing__ANewExpr__callsite(val* self);
void typing__ANewExpr__callsite_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__ANewExpr__n_type;
extern const int COLOR_model__MClassType__mclass;
extern const int COLOR_model__MClass__kind;
extern const int COLOR_model__Object__abstract_kind;
extern const int COLOR_model__Object__interface_kind;
extern const int COLOR_parser_nodes__ANewExpr__n_id;
extern const int COLOR_typing__ANewExpr__callsite_61d;
extern const int COLOR_model__MMethod__is_init_for;
extern const int COLOR_parser_nodes__ANewExpr__n_args;
void typing__ANewExpr__accept_typing(val* self, val* p0);
extern const int COLOR_typing__AAttrFormExpr___64dmproperty;
val* typing__AAttrFormExpr__mproperty(val* self);
void typing__AAttrFormExpr__mproperty_61d(val* self, val* p0);
extern const int COLOR_typing__AAttrFormExpr___64dattr_type;
val* typing__AAttrFormExpr__attr_type(val* self);
void typing__AAttrFormExpr__attr_type_61d(val* self, val* p0);
extern const int COLOR_parser_nodes__AAttrFormExpr__n_expr;
extern const int COLOR_parser_nodes__AAttrFormExpr__n_id;
extern const struct type type_model__MAttribute;
extern const int COLOR_typing__AAttrFormExpr__mproperty_61d;
extern const int COLOR_typing__AAttrFormExpr__attr_type_61d;
void typing__AAttrFormExpr__resolve_property(val* self, val* p0);
extern const int COLOR_typing__AAttrFormExpr__resolve_property;
extern const int COLOR_typing__AAttrFormExpr__attr_type;
void typing__AAttrExpr__accept_typing(val* self, val* p0);
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0);
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0);
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0);
extern const int COLOR_parser_nodes__ADebugTypeExpr__n_expr;
extern const int COLOR_parser_nodes__ADebugTypeExpr__n_type;
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0);
