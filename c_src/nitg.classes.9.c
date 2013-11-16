#include "nitg.classes.0.h"
/* runtime class parser_nodes__AGgExpr */
const struct class class_parser_nodes__AGgExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGgExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AGgExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGgExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGgExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AGgExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AGgExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGgExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGgExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGgExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGgExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGgExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGgExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGgExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGgExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGgExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AGgExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AGgExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AGgExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AGgExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AGgExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AGgExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGgExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGgExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGgExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AGgExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AGgExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGgExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGgExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AGgExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AGgExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AGgExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AGgExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AGgExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AGgExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AGgExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AGgExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__replace_child, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__visit_all, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AGgExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AGgExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AGgExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AGgExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGgExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:AGgExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGgExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGgExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AGgExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AGgExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AGgExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGgExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGgExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AGgExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AGgExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AGgExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AGgExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AGgExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AGgExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AGgExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AGgExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AGgExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AGgExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AGgExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__n_expr_61d, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:AGgExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AGgExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AGgExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:AGgExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:AGgExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGgExpr__property_name, /* pointer to parser_nodes:AGgExpr:typing#AGgExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGgExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AGgExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__n_expr2_61d, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AGgExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AGgExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AGgExpr__init, /* pointer to parser_nodes:AGgExpr:parser_nodes#AGgExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__empty_init, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__init_aggexpr, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#init_aggexpr */
}
};
/* allocate AGgExpr */
val* NEW_parser_nodes__AGgExpr(const struct type* type) {
val* self /* : AGgExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGgExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGgExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AGgExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGgExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AGgExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AGgExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AGgExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AGgExpr exact> */
return self;
}
/* allocate AGgExpr */
void CHECK_NEW_parser_nodes__AGgExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AGgExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AGgExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AGgExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AGgExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:AGgExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AGgExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AGgExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AGgExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__AIsaExpr */
const struct class class_parser_nodes__AIsaExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIsaExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIsaExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIsaExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIsaExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIsaExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIsaExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIsaExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIsaExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIsaExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIsaExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIsaExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIsaExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIsaExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIsaExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIsaExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIsaExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIsaExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIsaExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIsaExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIsaExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIsaExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIsaExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIsaExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIsaExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIsaExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIsaExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIsaExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIsaExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIsaExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIsaExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIsaExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__replace_child, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__visit_all, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIsaExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIsaExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIsaExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AIsaExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIsaExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIsaExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AIsaExpr__accept_flow_visitor, /* pointer to parser_nodes:AIsaExpr:flow#AIsaExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIsaExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIsaExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AIsaExpr:rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIsaExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIsaExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIsaExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AIsaExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AIsaExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AIsaExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIsaExpr__accept_typing, /* pointer to parser_nodes:AIsaExpr:typing#AIsaExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIsaExpr__expr, /* pointer to parser_nodes:AIsaExpr:abstract_compiler#AIsaExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AIsaExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIsaExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AIsaExpr__n_expr, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__n_expr_61d, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AIsaExpr__n_type, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__n_type_61d, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__AIsaExpr__init, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__empty_init, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__init_aisaexpr, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#init_aisaexpr */
(nitmethod_t)VIRTUAL_typing__AIsaExpr__cast_type, /* pointer to parser_nodes:AIsaExpr:typing#AIsaExpr#cast_type */
(nitmethod_t)VIRTUAL_typing__AIsaExpr__cast_type_61d, /* pointer to parser_nodes:AIsaExpr:typing#AIsaExpr#cast_type= */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIsaExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AIsaExpr */
val* NEW_parser_nodes__AIsaExpr(const struct type* type) {
val* self /* : AIsaExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIsaExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIsaExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIsaExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIsaExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AIsaExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AIsaExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AIsaExpr exact> */
return self;
}
/* allocate AIsaExpr */
void CHECK_NEW_parser_nodes__AIsaExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AType */;
val* var5 /* : nullable MType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIsaExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AIsaExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AIsaExpr> */
var3 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1285);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AIsaExpr___n_type].val; /* _n_type on <self:AIsaExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_nodes.nit", 1286);
exit(1);
}
var5 = self->attrs[COLOR_typing__AIsaExpr___64dcast_type].val; /* @cast_type on <self:AIsaExpr> */
}
/* runtime class parser_nodes__APlusExpr */
const struct class class_parser_nodes__APlusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APlusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APlusExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APlusExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APlusExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APlusExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APlusExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APlusExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APlusExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APlusExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APlusExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APlusExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APlusExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APlusExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APlusExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APlusExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APlusExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APlusExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APlusExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APlusExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APlusExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APlusExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APlusExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APlusExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APlusExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APlusExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APlusExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APlusExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APlusExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APlusExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APlusExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APlusExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APlusExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APlusExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APlusExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APlusExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APlusExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__replace_child, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__visit_all, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APlusExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APlusExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APlusExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APlusExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APlusExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:APlusExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APlusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APlusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:APlusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:APlusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:APlusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APlusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APlusExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:APlusExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:APlusExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:APlusExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:APlusExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:APlusExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:APlusExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:APlusExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:APlusExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:APlusExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APlusExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:APlusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__n_expr_61d, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:APlusExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:APlusExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:APlusExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:APlusExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:APlusExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__APlusExpr__property_name, /* pointer to parser_nodes:APlusExpr:typing#APlusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APlusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:APlusExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__n_expr2_61d, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:APlusExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:APlusExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__APlusExpr__init, /* pointer to parser_nodes:APlusExpr:parser_nodes#APlusExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__empty_init, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__init_aplusexpr, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#init_aplusexpr */
}
};
/* allocate APlusExpr */
val* NEW_parser_nodes__APlusExpr(const struct type* type) {
val* self /* : APlusExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APlusExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APlusExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APlusExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlusExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:APlusExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:APlusExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:APlusExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:APlusExpr exact> */
return self;
}
/* allocate APlusExpr */
void CHECK_NEW_parser_nodes__APlusExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APlusExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:APlusExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:APlusExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APlusExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:APlusExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:APlusExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:APlusExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APlusExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__AMinusExpr */
const struct class class_parser_nodes__AMinusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMinusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AMinusExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMinusExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMinusExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AMinusExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AMinusExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMinusExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMinusExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMinusExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMinusExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMinusExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMinusExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMinusExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMinusExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMinusExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AMinusExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AMinusExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AMinusExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AMinusExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AMinusExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AMinusExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMinusExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMinusExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMinusExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AMinusExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AMinusExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMinusExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMinusExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AMinusExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AMinusExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AMinusExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__replace_child, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__visit_all, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AMinusExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AMinusExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AMinusExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AMinusExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMinusExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:AMinusExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMinusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMinusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AMinusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AMinusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMinusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMinusExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AMinusExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AMinusExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AMinusExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AMinusExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AMinusExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMinusExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__n_expr_61d, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AMinusExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AMinusExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:AMinusExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:AMinusExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AMinusExpr__property_name, /* pointer to parser_nodes:AMinusExpr:typing#AMinusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMinusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__n_expr2_61d, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AMinusExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AMinusExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AMinusExpr__init, /* pointer to parser_nodes:AMinusExpr:parser_nodes#AMinusExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__empty_init, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__init_aminusexpr, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#init_aminusexpr */
}
};
/* allocate AMinusExpr */
val* NEW_parser_nodes__AMinusExpr(const struct type* type) {
val* self /* : AMinusExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMinusExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AMinusExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AMinusExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMinusExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AMinusExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AMinusExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AMinusExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AMinusExpr exact> */
return self;
}
/* allocate AMinusExpr */
void CHECK_NEW_parser_nodes__AMinusExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AMinusExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AMinusExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AMinusExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AMinusExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:AMinusExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AMinusExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AMinusExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AMinusExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__AStarshipExpr */
const struct class class_parser_nodes__AStarshipExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStarshipExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStarshipExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStarshipExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStarshipExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStarshipExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStarshipExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStarshipExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStarshipExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStarshipExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStarshipExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStarshipExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStarshipExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStarshipExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStarshipExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStarshipExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStarshipExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStarshipExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStarshipExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStarshipExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStarshipExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStarshipExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStarshipExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__replace_child, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__visit_all, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStarshipExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStarshipExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStarshipExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStarshipExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStarshipExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:AStarshipExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStarshipExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStarshipExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AStarshipExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarshipExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStarshipExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStarshipExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStarshipExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AStarshipExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AStarshipExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AStarshipExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AStarshipExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AStarshipExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStarshipExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__n_expr_61d, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AStarshipExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AStarshipExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:AStarshipExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:AStarshipExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AStarshipExpr__property_name, /* pointer to parser_nodes:AStarshipExpr:typing#AStarshipExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarshipExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__n_expr2_61d, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AStarshipExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AStarshipExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AStarshipExpr__init, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#AStarshipExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__empty_init, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__init_astarshipexpr, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#init_astarshipexpr */
}
};
/* allocate AStarshipExpr */
val* NEW_parser_nodes__AStarshipExpr(const struct type* type) {
val* self /* : AStarshipExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStarshipExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStarshipExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStarshipExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStarshipExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AStarshipExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AStarshipExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AStarshipExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AStarshipExpr exact> */
return self;
}
/* allocate AStarshipExpr */
void CHECK_NEW_parser_nodes__AStarshipExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStarshipExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AStarshipExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AStarshipExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarshipExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:AStarshipExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AStarshipExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AStarshipExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarshipExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__AStarExpr */
const struct class class_parser_nodes__AStarExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStarExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStarExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStarExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStarExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStarExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStarExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStarExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStarExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStarExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStarExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStarExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStarExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStarExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStarExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStarExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStarExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStarExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStarExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStarExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStarExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStarExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStarExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStarExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStarExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStarExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStarExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStarExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStarExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStarExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStarExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStarExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStarExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStarExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStarExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStarExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__replace_child, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__visit_all, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStarExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStarExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStarExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStarExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStarExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:AStarExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStarExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AStarExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStarExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AStarExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AStarExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AStarExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AStarExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AStarExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AStarExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AStarExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AStarExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AStarExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStarExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AStarExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__n_expr_61d, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:AStarExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AStarExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AStarExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:AStarExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:AStarExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AStarExpr__property_name, /* pointer to parser_nodes:AStarExpr:typing#AStarExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AStarExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__n_expr2_61d, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:AStarExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:AStarExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AStarExpr__init, /* pointer to parser_nodes:AStarExpr:parser_nodes#AStarExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__empty_init, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__init_astarexpr, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#init_astarexpr */
}
};
/* allocate AStarExpr */
val* NEW_parser_nodes__AStarExpr(const struct type* type) {
val* self /* : AStarExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStarExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStarExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStarExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStarExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AStarExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AStarExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AStarExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AStarExpr exact> */
return self;
}
/* allocate AStarExpr */
void CHECK_NEW_parser_nodes__AStarExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStarExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AStarExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AStarExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AStarExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:AStarExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AStarExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AStarExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:AStarExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__ASlashExpr */
const struct class class_parser_nodes__ASlashExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASlashExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASlashExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASlashExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASlashExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASlashExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASlashExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASlashExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASlashExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASlashExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASlashExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASlashExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASlashExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASlashExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASlashExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASlashExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASlashExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASlashExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASlashExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASlashExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASlashExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASlashExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASlashExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASlashExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASlashExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASlashExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASlashExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASlashExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASlashExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASlashExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASlashExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASlashExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__replace_child, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__visit_all, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASlashExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASlashExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASlashExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASlashExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASlashExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ASlashExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASlashExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASlashExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ASlashExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ASlashExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASlashExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASlashExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASlashExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ASlashExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASlashExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASlashExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ASlashExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ASlashExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASlashExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__n_expr_61d, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ASlashExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ASlashExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ASlashExpr__property_name, /* pointer to parser_nodes:ASlashExpr:typing#ASlashExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASlashExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__n_expr2_61d, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:ASlashExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:ASlashExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__ASlashExpr__init, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASlashExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__empty_init, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__init_aslashexpr, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#init_aslashexpr */
}
};
/* allocate ASlashExpr */
val* NEW_parser_nodes__ASlashExpr(const struct type* type) {
val* self /* : ASlashExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASlashExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASlashExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASlashExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASlashExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ASlashExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ASlashExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ASlashExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ASlashExpr exact> */
return self;
}
/* allocate ASlashExpr */
void CHECK_NEW_parser_nodes__ASlashExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASlashExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ASlashExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ASlashExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASlashExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ASlashExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ASlashExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ASlashExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:ASlashExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__APercentExpr */
const struct class class_parser_nodes__APercentExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APercentExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APercentExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APercentExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APercentExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APercentExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APercentExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APercentExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APercentExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APercentExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APercentExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APercentExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APercentExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APercentExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APercentExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APercentExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APercentExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APercentExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APercentExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APercentExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APercentExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APercentExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APercentExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APercentExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APercentExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APercentExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APercentExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APercentExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APercentExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APercentExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APercentExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APercentExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APercentExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APercentExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APercentExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APercentExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APercentExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__replace_child, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__visit_all, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APercentExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APercentExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APercentExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APercentExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APercentExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:APercentExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APercentExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APercentExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:APercentExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:APercentExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:APercentExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APercentExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APercentExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:APercentExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:APercentExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:APercentExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:APercentExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:APercentExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:APercentExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:APercentExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:APercentExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:APercentExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APercentExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:APercentExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__n_expr_61d, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:APercentExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:APercentExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:APercentExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:APercentExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:APercentExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__APercentExpr__property_name, /* pointer to parser_nodes:APercentExpr:typing#APercentExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APercentExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:APercentExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__n_expr2_61d, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#ABinopExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__empty_init, /* pointer to parser_nodes:APercentExpr:parser_prod#ABinopExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABinopExpr__init_abinopexpr, /* pointer to parser_nodes:APercentExpr:parser_prod#ABinopExpr#init_abinopexpr */
(nitmethod_t)VIRTUAL_parser_nodes__APercentExpr__init, /* pointer to parser_nodes:APercentExpr:parser_nodes#APercentExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__empty_init, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__init_apercentexpr, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#init_apercentexpr */
}
};
/* allocate APercentExpr */
val* NEW_parser_nodes__APercentExpr(const struct type* type) {
val* self /* : APercentExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APercentExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APercentExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APercentExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APercentExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:APercentExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:APercentExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:APercentExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:APercentExpr exact> */
return self;
}
/* allocate APercentExpr */
void CHECK_NEW_parser_nodes__APercentExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APercentExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:APercentExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:APercentExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:APercentExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:APercentExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:APercentExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:APercentExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <self:APercentExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1190);
exit(1);
}
}
/* runtime class parser_nodes__AUminusExpr */
const struct class class_parser_nodes__AUminusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AUminusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AUminusExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AUminusExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AUminusExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AUminusExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AUminusExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AUminusExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AUminusExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AUminusExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AUminusExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AUminusExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AUminusExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AUminusExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AUminusExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AUminusExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AUminusExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AUminusExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AUminusExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AUminusExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AUminusExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AUminusExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AUminusExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AUminusExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AUminusExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AUminusExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AUminusExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AUminusExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AUminusExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AUminusExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AUminusExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AUminusExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__replace_child, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__visit_all, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AUminusExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AUminusExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AUminusExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AUminusExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AUminusExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:AUminusExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AUminusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AUminusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AUminusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AUminusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AUminusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AUminusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AUminusExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AUminusExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AUminusExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AUminusExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AUminusExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AUminusExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AUminusExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AUminusExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__n_expr_61d, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AUminusExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AUminusExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:AUminusExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:AUminusExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AUminusExpr__property_name, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__AUminusExpr__compute_raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AUminusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__AUminusExpr__n_minus, /* pointer to parser_nodes:AUminusExpr:parser_nodes#AUminusExpr#n_minus */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__n_minus_61d, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#n_minus= */
(nitmethod_t)VIRTUAL_parser_nodes__AUminusExpr__init, /* pointer to parser_nodes:AUminusExpr:parser_nodes#AUminusExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__empty_init, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__init_auminusexpr, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#init_auminusexpr */
}
};
/* allocate AUminusExpr */
val* NEW_parser_nodes__AUminusExpr(const struct type* type) {
val* self /* : AUminusExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AUminusExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AUminusExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AUminusExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AUminusExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AUminusExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AUminusExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AUminusExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AUminusExpr exact> */
return self;
}
/* allocate AUminusExpr */
void CHECK_NEW_parser_nodes__AUminusExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : TMinus */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AUminusExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AUminusExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AUminusExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AUminusExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:AUminusExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AUminusExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AUminusExpr> */
var7 = self->attrs[COLOR_parser_nodes__AUminusExpr___n_minus].val; /* _n_minus on <self:AUminusExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_minus", "src/parser/parser_nodes.nit", 1322);
exit(1);
}
}
/* runtime class parser_nodes__ANewExpr */
const struct class class_parser_nodes__ANewExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANewExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANewExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ANewExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ANewExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANewExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANewExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANewExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANewExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANewExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANewExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANewExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANewExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANewExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ANewExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ANewExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ANewExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ANewExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ANewExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ANewExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANewExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANewExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANewExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ANewExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ANewExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANewExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANewExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ANewExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ANewExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ANewExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANewExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANewExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANewExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANewExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANewExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__replace_child, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__visit_all, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ANewExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ANewExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ANewExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ANewExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANewExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANewExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANewExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANewExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANewExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANewExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ANewExpr:rapid_type_analysis#ANewExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANewExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANewExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANewExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ANewExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ANewExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ANewExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ANewExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ANewExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ANewExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ANewExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ANewExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ANewExpr__accept_typing, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ANewExpr__expr, /* pointer to parser_nodes:ANewExpr:abstract_compiler#ANewExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ANewExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ANewExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_kwnew, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_kwnew */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_kwnew_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_kwnew= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_type, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_type_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_id, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_id_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_args, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_args_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__init, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__empty_init, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__init_anewexpr, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#init_anewexpr */
(nitmethod_t)VIRTUAL_typing__ANewExpr__mproperty, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ANewExpr__callsite, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ANewExpr__callsite_61d, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#callsite= */
(nitmethod_t)VIRTUAL_astbuilder__ANewExpr__make, /* pointer to parser_nodes:ANewExpr:astbuilder#ANewExpr#make */
}
};
/* allocate ANewExpr */
val* NEW_parser_nodes__ANewExpr(const struct type* type) {
val* self /* : ANewExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANewExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANewExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ANewExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANewExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ANewExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ANewExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ANewExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var6; /* _n_id on <self:ANewExpr exact> */
return self;
}
/* allocate ANewExpr */
void CHECK_NEW_parser_nodes__ANewExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwnew */;
val* var4 /* : AType */;
val* var5 /* : AExprs */;
val* var6 /* : nullable CallSite */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ANewExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ANewExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ANewExpr> */
var3 = self->attrs[COLOR_parser_nodes__ANewExpr___n_kwnew].val; /* _n_kwnew on <self:ANewExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnew", "src/parser/parser_nodes.nit", 1328);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ANewExpr___n_type].val; /* _n_type on <self:ANewExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_nodes.nit", 1329);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1333);
exit(1);
}
var6 = self->attrs[COLOR_typing__ANewExpr___64dcallsite].val; /* @callsite on <self:ANewExpr> */
}
/* runtime class parser_nodes__AAttrExpr */
const struct class class_parser_nodes__AAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAttrExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAttrExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAttrExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAttrExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAttrExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAttrExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAttrExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAttrExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAttrExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAttrExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAttrExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAttrExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAttrExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAttrExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAttrExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAttrExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAttrExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAttrExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAttrExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAttrExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAttrExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAttrExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAttrExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAttrExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAttrExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__replace_child, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__visit_all, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAttrExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAttrExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAttrExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAttrExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAttrExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAttrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAttrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAttrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAttrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAttrExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAttrExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAttrExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAttrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAttrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAttrExpr__accept_typing, /* pointer to parser_nodes:AAttrExpr:typing#AAttrExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AAttrExpr__expr, /* pointer to parser_nodes:AAttrExpr:abstract_compiler#AAttrExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AAttrExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAttrExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__n_expr_61d, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__n_id_61d, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__init, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrExpr__init, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__empty_init, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__init_aattrexpr, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#init_aattrexpr */
(nitmethod_t)VIRTUAL_astbuilder__AAttrExpr__make, /* pointer to parser_nodes:AAttrExpr:astbuilder#AAttrExpr#make */
}
};
/* allocate AAttrExpr */
val* NEW_parser_nodes__AAttrExpr(const struct type* type) {
val* self /* : AAttrExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAttrExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAttrExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAttrExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAttrExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAttrExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAttrExpr exact> */
return self;
}
/* allocate AAttrExpr */
void CHECK_NEW_parser_nodes__AAttrExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : TAttrid */;
val* var5 /* : nullable MAttribute */;
val* var6 /* : nullable MType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAttrExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAttrExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAttrExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1340);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1343);
exit(1);
}
var5 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AAttrExpr> */
var6 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AAttrExpr> */
}
/* runtime class parser_nodes__AAttrAssignExpr */
const struct class class_parser_nodes__AAttrAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAttrAssignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAttrAssignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAttrAssignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAttrAssignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAttrAssignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAttrAssignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAttrAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__replace_child, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__visit_all, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAttrAssignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAttrAssignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAttrAssignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAttrAssignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAttrAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAttrAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAttrAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAttrAssignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrAssignExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAttrAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAttrAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAttrAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAttrAssignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAttrAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAttrAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAttrAssignExpr__accept_typing, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrAssignExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AAttrAssignExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AAttrAssignExpr__stmt, /* pointer to parser_nodes:AAttrAssignExpr:abstract_compiler#AAttrAssignExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAttrAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_assign_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_value_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__init, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_expr_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_id_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__init, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrAssignExpr__init, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrAssignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__empty_init, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__init_aattrassignexpr, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#init_aattrassignexpr */
(nitmethod_t)VIRTUAL_astbuilder__AAttrAssignExpr__make, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AAttrAssignExpr#make */
}
};
/* allocate AAttrAssignExpr */
val* NEW_parser_nodes__AAttrAssignExpr(const struct type* type) {
val* self /* : AAttrAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAttrAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAttrAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAttrAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAttrAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAttrAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAttrAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAttrAssignExpr exact> */
return self;
}
/* allocate AAttrAssignExpr */
void CHECK_NEW_parser_nodes__AAttrAssignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : TAttrid */;
val* var7 /* : nullable MAttribute */;
val* var8 /* : nullable MType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAttrAssignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAttrAssignExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AAttrAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_nodes.nit", 1161);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1162);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1340);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrAssignExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1343);
exit(1);
}
var7 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AAttrAssignExpr> */
var8 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AAttrAssignExpr> */
}
/* runtime class parser_nodes__AAttrReassignExpr */
const struct class class_parser_nodes__AAttrReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAttrReassignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAttrReassignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAttrReassignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAttrReassignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAttrReassignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAttrReassignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAttrReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__replace_child, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__visit_all, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAttrReassignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAttrReassignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAttrReassignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAttrReassignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAttrReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAttrReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:AAttrReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAttrReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAttrReassignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrReassignExpr:rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAttrReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AAttrReassignExpr__accept_transform_visitor, /* pointer to parser_nodes:AAttrReassignExpr:transform#AAttrReassignExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAttrReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAttrReassignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAttrReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAttrReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAttrReassignExpr__accept_typing, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrReassignExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AAttrReassignExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AAttrReassignExpr__stmt, /* pointer to parser_nodes:AAttrReassignExpr:abstract_compiler#AAttrReassignExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAttrReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_value_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__init, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_property, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_property */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_expr_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_id_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__init, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrReassignExpr__init, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrReassignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__empty_init, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__init_aattrreassignexpr, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#init_aattrreassignexpr */
}
};
/* allocate AAttrReassignExpr */
val* NEW_parser_nodes__AAttrReassignExpr(const struct type* type) {
val* self /* : AAttrReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAttrReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAttrReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAttrReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAttrReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAttrReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAttrReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAttrReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___64dread_type].val = var6; /* @read_type on <self:AAttrReassignExpr exact> */
return self;
}
/* allocate AAttrReassignExpr */
void CHECK_NEW_parser_nodes__AAttrReassignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
val* var5 /* : nullable CallSite */;
val* var6 /* : AExpr */;
val* var7 /* : TAttrid */;
val* var8 /* : nullable MAttribute */;
val* var9 /* : nullable MType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAttrReassignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAttrReassignExpr> */
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AAttrReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_nodes.nit", 1168);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1169);
exit(1);
}
var5 = self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val; /* @reassign_callsite on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1340);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AAttrReassignExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1343);
exit(1);
}
var8 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AAttrReassignExpr> */
var9 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AAttrReassignExpr> */
}
/* runtime class parser_nodes__ACallExpr */
const struct class class_parser_nodes__ACallExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACallExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ACallExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACallExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACallExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ACallExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ACallExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACallExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACallExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACallExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACallExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACallExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACallExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ACallExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ACallExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ACallExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ACallExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ACallExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ACallExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACallExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACallExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACallExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ACallExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ACallExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACallExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACallExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ACallExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ACallExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ACallExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACallExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACallExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACallExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACallExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACallExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__replace_child, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__visit_all, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ACallExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ACallExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ACallExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ACallExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACallExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ACallFormExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACallExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ACallExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACallExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ACallExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACallExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ACallExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACallExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACallExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ACallExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ACallExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ACallExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ACallExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ACallExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ACallExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ACallExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ACallExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_expr_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ACallExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ACallExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ACallExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ACallExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ACallExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallExpr__property_name, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ACallExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_id_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_args_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#init */
(nitmethod_t)VIRTUAL_scope__ACallExpr__variable_create, /* pointer to parser_nodes:ACallExpr:scope#ACallExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ACallExpr__init, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__empty_init, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__init_acallexpr, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#init_acallexpr */
(nitmethod_t)VIRTUAL_astbuilder__ACallExpr__make, /* pointer to parser_nodes:ACallExpr:astbuilder#ACallExpr#make */
}
};
/* allocate ACallExpr */
val* NEW_parser_nodes__ACallExpr(const struct type* type) {
val* self /* : ACallExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACallExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ACallExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACallExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ACallExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ACallExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ACallExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ACallExpr exact> */
return self;
}
/* allocate ACallExpr */
void CHECK_NEW_parser_nodes__ACallExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : TId */;
val* var8 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ACallExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ACallExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ACallExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ACallExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ACallExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ACallExpr> */
var7 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1362);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1365);
exit(1);
}
}
/* runtime class parser_nodes__ACallAssignExpr */
const struct class class_parser_nodes__ACallAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACallAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACallAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACallAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACallAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACallAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACallAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ACallAssignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ACallAssignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ACallAssignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ACallAssignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ACallAssignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ACallAssignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACallAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACallAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACallAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ACallAssignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ACallAssignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACallAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACallAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ACallAssignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ACallAssignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ACallAssignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__replace_child, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__visit_all, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ACallAssignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ACallAssignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ACallAssignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ACallAssignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACallAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ACallFormExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACallAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ACallAssignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallAssignExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACallAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ACallAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACallAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ACallAssignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACallAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACallAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ACallAssignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ACallAssignExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ACallAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_assign_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_value_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_expr_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ACallAssignExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ACallAssignExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallAssignExpr__property_name, /* pointer to parser_nodes:ACallAssignExpr:typing#ACallAssignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ACallAssignExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallAssignExpr:typing#ACallAssignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_id_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_args_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#init */
(nitmethod_t)VIRTUAL_scope__ACallAssignExpr__variable_create, /* pointer to parser_nodes:ACallAssignExpr:scope#ACallAssignExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ACallAssignExpr__init, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallAssignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__empty_init, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__init_acallassignexpr, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#init_acallassignexpr */
}
};
/* allocate ACallAssignExpr */
val* NEW_parser_nodes__ACallAssignExpr(const struct type* type) {
val* self /* : ACallAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACallAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ACallAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACallAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ACallAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ACallAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ACallAssignExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ACallAssignExpr exact> */
return self;
}
/* allocate ACallAssignExpr */
void CHECK_NEW_parser_nodes__ACallAssignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : TAssign */;
val* var8 /* : AExpr */;
val* var9 /* : TId */;
val* var10 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ACallAssignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ACallAssignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ACallAssignExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ACallAssignExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ACallAssignExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ACallAssignExpr> */
var7 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ACallAssignExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_nodes.nit", 1161);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ACallAssignExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1162);
exit(1);
}
var9 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallAssignExpr> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1362);
exit(1);
}
var10 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallAssignExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1365);
exit(1);
}
}
/* runtime class parser_nodes__ACallReassignExpr */
const struct class class_parser_nodes__ACallReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACallReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACallReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACallReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACallReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACallReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACallReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ACallReassignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ACallReassignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ACallReassignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ACallReassignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ACallReassignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ACallReassignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACallReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACallReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACallReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ACallReassignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ACallReassignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACallReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACallReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ACallReassignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ACallReassignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ACallReassignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__replace_child, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__visit_all, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ACallReassignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ACallReassignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ACallReassignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ACallReassignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACallReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ACallFormExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:ACallReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACallReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ACallReassignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallReassignExpr:rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACallReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor, /* pointer to parser_nodes:ACallReassignExpr:transform#ASendReassignFormExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACallReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ACallReassignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACallReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACallReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__accept_typing, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ACallReassignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendReassignFormExpr__stmt, /* pointer to parser_nodes:ACallReassignExpr:abstract_compiler#ASendReassignFormExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ACallReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_value_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_property, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_property */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_expr_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ACallReassignExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ACallReassignExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallReassignExpr__property_name, /* pointer to parser_nodes:ACallReassignExpr:typing#ACallReassignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ACallReassignExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallReassignExpr:typing#ACallReassignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_id_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_args_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#init */
(nitmethod_t)VIRTUAL_scope__ACallReassignExpr__variable_create, /* pointer to parser_nodes:ACallReassignExpr:scope#ACallReassignExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ASendReassignFormExpr__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ASendReassignFormExpr#init */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_mproperty, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_mproperty */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_callsite */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_callsite= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallReassignExpr__init, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallReassignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__empty_init, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__init_acallreassignexpr, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#init_acallreassignexpr */
}
};
/* allocate ACallReassignExpr */
val* NEW_parser_nodes__ACallReassignExpr(const struct type* type) {
val* self /* : ACallReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 21*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACallReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ACallReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACallReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ACallReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ACallReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ACallReassignExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ACallReassignExpr exact> */
var7 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___64dread_type].val = var7; /* @read_type on <self:ACallReassignExpr exact> */
return self;
}
/* allocate ACallReassignExpr */
void CHECK_NEW_parser_nodes__ACallReassignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AAssignOp */;
val* var8 /* : AExpr */;
val* var9 /* : nullable CallSite */;
val* var10 /* : TId */;
val* var11 /* : AExprs */;
val* var12 /* : nullable CallSite */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ACallReassignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ACallReassignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ACallReassignExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ACallReassignExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ACallReassignExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ACallReassignExpr> */
var7 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ACallReassignExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_nodes.nit", 1168);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ACallReassignExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1169);
exit(1);
}
var9 = self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val; /* @reassign_callsite on <self:ACallReassignExpr> */
var10 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:ACallReassignExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1362);
exit(1);
}
var11 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:ACallReassignExpr> */
if (var11 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1365);
exit(1);
}
var12 = self->attrs[COLOR_typing__ASendReassignFormExpr___64dwrite_callsite].val; /* @write_callsite on <self:ACallReassignExpr> */
}
/* runtime class parser_nodes__ASuperExpr */
const struct class class_parser_nodes__ASuperExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASuperExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASuperExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASuperExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASuperExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASuperExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASuperExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASuperExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASuperExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASuperExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASuperExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASuperExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASuperExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASuperExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASuperExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASuperExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASuperExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASuperExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASuperExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASuperExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASuperExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASuperExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASuperExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASuperExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASuperExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASuperExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASuperExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASuperExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASuperExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__replace_child, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__visit_all, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASuperExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASuperExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASuperExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASuperExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASuperExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASuperExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASuperExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASuperExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASuperExpr__accept_auto_super_init, /* pointer to parser_nodes:ASuperExpr:auto_super_init#ASuperExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperExpr:rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASuperExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASuperExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASuperExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ASuperExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ASuperExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASuperExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASuperExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__accept_typing, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASuperExpr__expr, /* pointer to parser_nodes:ASuperExpr:abstract_compiler#ASuperExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ASuperExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASuperExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperExpr__n_qualified, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ASuperExpr#n_qualified */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__n_qualified_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_qualified= */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperExpr__n_kwsuper, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ASuperExpr#n_kwsuper */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__n_kwsuper_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_kwsuper= */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperExpr__n_args, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ASuperExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__n_args_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperExpr__init, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ASuperExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__empty_init, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__init_asuperexpr, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#init_asuperexpr */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__mproperty, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__mproperty_61d, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__process_superinit, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#process_superinit */
}
};
/* allocate ASuperExpr */
val* NEW_parser_nodes__ASuperExpr(const struct type* type) {
val* self /* : ASuperExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASuperExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASuperExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASuperExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASuperExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ASuperExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ASuperExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ASuperExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var6; /* _n_qualified on <self:ASuperExpr exact> */
return self;
}
/* allocate ASuperExpr */
void CHECK_NEW_parser_nodes__ASuperExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwsuper */;
val* var4 /* : AExprs */;
val* var5 /* : nullable MMethod */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASuperExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ASuperExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ASuperExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_kwsuper].val; /* _n_kwsuper on <self:ASuperExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwsuper", "src/parser/parser_nodes.nit", 1408);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1409);
exit(1);
}
var5 = self->attrs[COLOR_typing__ASuperExpr___64dmproperty].val; /* @mproperty on <self:ASuperExpr> */
}
/* runtime class parser_nodes__AInitExpr */
const struct class class_parser_nodes__AInitExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AInitExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AInitExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AInitExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AInitExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AInitExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AInitExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInitExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInitExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInitExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AInitExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AInitExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AInitExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AInitExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AInitExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AInitExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AInitExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AInitExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AInitExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AInitExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AInitExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AInitExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AInitExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AInitExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AInitExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AInitExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AInitExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AInitExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AInitExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AInitExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AInitExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AInitExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AInitExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AInitExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AInitExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AInitExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AInitExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__replace_child, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__visit_all, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AInitExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AInitExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AInitExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AInitExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AInitExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:AInitExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AInitExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AInitExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AInitExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AInitExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AInitExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AInitExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AInitExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AInitExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AInitExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AInitExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AInitExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AInitExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AInitExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AInitExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AInitExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AInitExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AInitExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AInitExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AInitExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__n_expr_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:AInitExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:AInitExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:AInitExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:AInitExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:AInitExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:AInitExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AInitExpr__property_name, /* pointer to parser_nodes:AInitExpr:typing#AInitExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__AInitExpr__compute_raw_arguments, /* pointer to parser_nodes:AInitExpr:typing#AInitExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AInitExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__AInitExpr__n_kwinit, /* pointer to parser_nodes:AInitExpr:parser_nodes#AInitExpr#n_kwinit */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__n_kwinit_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_kwinit= */
(nitmethod_t)VIRTUAL_parser_nodes__AInitExpr__n_args, /* pointer to parser_nodes:AInitExpr:parser_nodes#AInitExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__n_args_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__AInitExpr__init, /* pointer to parser_nodes:AInitExpr:parser_nodes#AInitExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__empty_init, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__init_ainitexpr, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#init_ainitexpr */
}
};
/* allocate AInitExpr */
val* NEW_parser_nodes__AInitExpr(const struct type* type) {
val* self /* : AInitExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AInitExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AInitExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AInitExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AInitExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AInitExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AInitExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AInitExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AInitExpr exact> */
return self;
}
/* allocate AInitExpr */
void CHECK_NEW_parser_nodes__AInitExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : TKwinit */;
val* var8 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AInitExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AInitExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AInitExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AInitExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:AInitExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:AInitExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:AInitExpr> */
var7 = self->attrs[COLOR_parser_nodes__AInitExpr___n_kwinit].val; /* _n_kwinit on <self:AInitExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwinit", "src/parser/parser_nodes.nit", 1416);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AInitExpr___n_args].val; /* _n_args on <self:AInitExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1417);
exit(1);
}
}
/* runtime class parser_nodes__ABraExpr */
const struct class class_parser_nodes__ABraExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABraExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABraExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABraExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABraExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABraExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABraExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABraExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABraExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABraExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABraExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABraExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABraExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABraExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABraExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__replace_child, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__visit_all, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABraExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABraExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABraExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABraExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ABraExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ABraExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABraExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ABraExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ABraExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABraExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABraExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ABraExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ABraExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ABraExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ABraExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ABraExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ABraExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ABraExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__n_expr_61d, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ABraExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ABraExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ABraExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ABraExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ABraExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ABraExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ABraExpr__property_name, /* pointer to parser_nodes:ABraExpr:typing#ABraExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABraExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraExpr:typing#ABraExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraExpr:scope#ANode#accept_scope_visitor */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__n_args, /* pointer to parser_nodes:ABraExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__n_args_61d, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__init, /* pointer to parser_nodes:ABraExpr:parser_nodes#ABraFormExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABraExpr__init, /* pointer to parser_nodes:ABraExpr:parser_nodes#ABraExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__empty_init, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__init_abraexpr, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#init_abraexpr */
}
};
/* allocate ABraExpr */
val* NEW_parser_nodes__ABraExpr(const struct type* type) {
val* self /* : ABraExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 22*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABraExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ABraExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ABraExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ABraExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ABraExpr exact> */
return self;
}
/* allocate ABraExpr */
void CHECK_NEW_parser_nodes__ABraExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABraExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ABraExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ABraExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ABraExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ABraExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ABraExpr> */
var7 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1423);
exit(1);
}
}
/* runtime class parser_nodes__ABraAssignExpr */
const struct class class_parser_nodes__ABraAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABraAssignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABraAssignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABraAssignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABraAssignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABraAssignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABraAssignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABraAssignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABraAssignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABraAssignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABraAssignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABraAssignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__replace_child, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__visit_all, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABraAssignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABraAssignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABraAssignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABraAssignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ABraAssignExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ABraAssignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraAssignExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABraAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ABraAssignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABraAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABraAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ABraAssignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ABraAssignExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_assign_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_value_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_expr_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ABraAssignExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ABraAssignExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ABraAssignExpr__property_name, /* pointer to parser_nodes:ABraAssignExpr:typing#ABraAssignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABraAssignExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraAssignExpr:typing#ABraAssignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraAssignExpr:scope#ANode#accept_scope_visitor */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__n_args, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_args_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ABraFormExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABraAssignExpr__init, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ABraAssignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__empty_init, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__init_abraassignexpr, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#init_abraassignexpr */
}
};
/* allocate ABraAssignExpr */
val* NEW_parser_nodes__ABraAssignExpr(const struct type* type) {
val* self /* : ABraAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 22*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABraAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ABraAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ABraAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ABraAssignExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ABraAssignExpr exact> */
return self;
}
/* allocate ABraAssignExpr */
void CHECK_NEW_parser_nodes__ABraAssignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : TAssign */;
val* var8 /* : AExpr */;
val* var9 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABraAssignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ABraAssignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ABraAssignExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ABraAssignExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ABraAssignExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ABraAssignExpr> */
var7 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:ABraAssignExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_nodes.nit", 1161);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:ABraAssignExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1162);
exit(1);
}
var9 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraAssignExpr> */
if (var9 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1423);
exit(1);
}
}
/* runtime class parser_nodes__ABraReassignExpr */
const struct class class_parser_nodes__ABraReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABraReassignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABraReassignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABraReassignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABraReassignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABraReassignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABraReassignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABraReassignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABraReassignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABraReassignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABraReassignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABraReassignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__replace_child, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__visit_all, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABraReassignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABraReassignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABraReassignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABraReassignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASendExpr__accept_scope_visitor, /* pointer to parser_nodes:ABraReassignExpr:scope#ASendExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:ABraReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ABraReassignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraReassignExpr:rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABraReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor, /* pointer to parser_nodes:ABraReassignExpr:transform#ASendReassignFormExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ABraReassignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABraReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABraReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__accept_typing, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ABraReassignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendReassignFormExpr__stmt, /* pointer to parser_nodes:ABraReassignExpr:abstract_compiler#ASendReassignFormExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_value_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_property, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_property */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_expr_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_closure_defs, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ASendExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ASendExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__empty_init, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ASendExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASendExpr__init_asendexpr, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ASendExpr#init_asendexpr */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark, /* pointer to parser_nodes:ABraReassignExpr:scope#ASendExpr#escapemark */
(nitmethod_t)VIRTUAL_scope__ASendExpr__escapemark_61d, /* pointer to parser_nodes:ABraReassignExpr:scope#ASendExpr#escapemark= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__mproperty, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ABraReassignExpr__property_name, /* pointer to parser_nodes:ABraReassignExpr:typing#ABraReassignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#raw_arguments= */
(nitmethod_t)VIRTUAL_typing__ABraReassignExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraReassignExpr:typing#ABraReassignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraReassignExpr:scope#ANode#accept_scope_visitor */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ASendReassignFormExpr__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ASendReassignFormExpr#init */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_mproperty, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_mproperty */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_callsite */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_callsite= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__n_args, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_args_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ABraFormExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABraReassignExpr__init, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ABraReassignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__empty_init, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__init_abrareassignexpr, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#init_abrareassignexpr */
}
};
/* allocate ABraReassignExpr */
val* NEW_parser_nodes__ABraReassignExpr(const struct type* type) {
val* self /* : ABraReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 22*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABraReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ABraReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ABraReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ABraReassignExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASendExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:ABraReassignExpr exact> */
var7 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___64dread_type].val = var7; /* @read_type on <self:ABraReassignExpr exact> */
return self;
}
/* allocate ABraReassignExpr */
void CHECK_NEW_parser_nodes__ABraReassignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[AExpr] */;
val* var7 /* : AAssignOp */;
val* var8 /* : AExpr */;
val* var9 /* : nullable CallSite */;
val* var10 /* : AExprs */;
val* var11 /* : nullable CallSite */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABraReassignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ABraReassignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ABraReassignExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ABraReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1182);
exit(1);
}
var4 = self->attrs[COLOR_scope__ASendExpr___64descapemark].val; /* @escapemark on <self:ABraReassignExpr> */
var5 = self->attrs[COLOR_typing__ASendExpr___64dcallsite].val; /* @callsite on <self:ABraReassignExpr> */
var6 = self->attrs[COLOR_typing__ASendExpr___64draw_arguments].val; /* @raw_arguments on <self:ABraReassignExpr> */
var7 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:ABraReassignExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_nodes.nit", 1168);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ABraReassignExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1169);
exit(1);
}
var9 = self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val; /* @reassign_callsite on <self:ABraReassignExpr> */
var10 = self->attrs[COLOR_parser_nodes__ABraFormExpr___n_args].val; /* _n_args on <self:ABraReassignExpr> */
if (var10 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1423);
exit(1);
}
var11 = self->attrs[COLOR_typing__ASendReassignFormExpr___64dwrite_callsite].val; /* @write_callsite on <self:ABraReassignExpr> */
}
/* runtime class parser_nodes__AClosureCallExpr */
const struct class class_parser_nodes__AClosureCallExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AClosureCallExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AClosureCallExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AClosureCallExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AClosureCallExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AClosureCallExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AClosureCallExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AClosureCallExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AClosureCallExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AClosureCallExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AClosureCallExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AClosureCallExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AClosureCallExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AClosureCallExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AClosureCallExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AClosureCallExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AClosureCallExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AClosureCallExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AClosureCallExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AClosureCallExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AClosureCallExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AClosureCallExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AClosureCallExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AClosureCallExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AClosureCallExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AClosureCallExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AClosureCallExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AClosureCallExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AClosureCallExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AClosureCallExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AClosureCallExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AClosureCallExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AClosureCallExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AClosureCallExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AClosureCallExpr__replace_child, /* pointer to parser_nodes:AClosureCallExpr:parser_prod#AClosureCallExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AClosureCallExpr__visit_all, /* pointer to parser_nodes:AClosureCallExpr:parser_prod#AClosureCallExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AClosureCallExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AClosureCallExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AClosureCallExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AClosureCallExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AClosureCallExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AClosureCallExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AClosureCallExpr__accept_flow_visitor, /* pointer to parser_nodes:AClosureCallExpr:flow#AClosureCallExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AClosureCallExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AClosureCallExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AClosureCallExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AClosureCallExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AClosureCallExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AClosureCallExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AClosureCallExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AClosureCallExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AClosureCallExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AClosureCallExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AClosureCallExpr__accept_typing, /* pointer to parser_nodes:AClosureCallExpr:typing#AClosureCallExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AClosureCallExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AClosureCallExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AClosureCallExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AClosureCallExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AClosureCallExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AClosureCallExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AClosureCallExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AClosureCallExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureCallExpr__n_id, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#AClosureCallExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AClosureCallExpr__n_id_61d, /* pointer to parser_nodes:AClosureCallExpr:parser_prod#AClosureCallExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureCallExpr__n_args, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#AClosureCallExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__AClosureCallExpr__n_args_61d, /* pointer to parser_nodes:AClosureCallExpr:parser_prod#AClosureCallExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureCallExpr__n_closure_defs, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#AClosureCallExpr#n_closure_defs */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureCallExpr__init, /* pointer to parser_nodes:AClosureCallExpr:parser_nodes#AClosureCallExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AClosureCallExpr__empty_init, /* pointer to parser_nodes:AClosureCallExpr:parser_prod#AClosureCallExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AClosureCallExpr__init_aclosurecallexpr, /* pointer to parser_nodes:AClosureCallExpr:parser_prod#AClosureCallExpr#init_aclosurecallexpr */
(nitmethod_t)VIRTUAL_scope__AClosureCallExpr__variable, /* pointer to parser_nodes:AClosureCallExpr:scope#AClosureCallExpr#variable */
(nitmethod_t)VIRTUAL_scope__AClosureCallExpr__variable_61d, /* pointer to parser_nodes:AClosureCallExpr:scope#AClosureCallExpr#variable= */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AClosureCallExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AClosureCallExpr */
val* NEW_parser_nodes__AClosureCallExpr(const struct type* type) {
val* self /* : AClosureCallExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AClosureDef] */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AClosureCallExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AClosureCallExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AClosureCallExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AClosureCallExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AClosureCallExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AClosureCallExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AClosureCallExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AClosureDef);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AClosureDef]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_closure_defs].val = var6; /* _n_closure_defs on <self:AClosureCallExpr exact> */
return self;
}
/* allocate AClosureCallExpr */
void CHECK_NEW_parser_nodes__AClosureCallExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TId */;
val* var4 /* : AExprs */;
val* var5 /* : nullable ClosureVariable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AClosureCallExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AClosureCallExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AClosureCallExpr> */
var3 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_id].val; /* _n_id on <self:AClosureCallExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1451);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AClosureCallExpr___n_args].val; /* _n_args on <self:AClosureCallExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_args", "src/parser/parser_nodes.nit", 1452);
exit(1);
}
var5 = self->attrs[COLOR_scope__AClosureCallExpr___64dvariable].val; /* @variable on <self:AClosureCallExpr> */
}
/* runtime class parser_nodes__AVarExpr */
const struct class class_parser_nodes__AVarExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AVarExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AVarExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AVarExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AVarExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AVarExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AVarExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AVarExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AVarExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AVarExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AVarExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AVarExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AVarExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AVarExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AVarExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__replace_child, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__visit_all, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AVarExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AVarExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AVarExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AVarExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVarExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVarExpr:local_var_init#AVarExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AVarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AVarExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AVarExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AVarExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AVarExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AVarExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AVarExpr__its_variable, /* pointer to parser_nodes:AVarExpr:typing#AVarExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AVarExpr__accept_typing, /* pointer to parser_nodes:AVarExpr:typing#AVarExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AVarExpr__expr, /* pointer to parser_nodes:AVarExpr:abstract_compiler#AVarExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AVarExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AVarExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AVarFormExpr__n_id, /* pointer to parser_nodes:AVarExpr:parser_nodes#AVarFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__n_id_61d, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AVarFormExpr__init, /* pointer to parser_nodes:AVarExpr:parser_nodes#AVarFormExpr#init */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable, /* pointer to parser_nodes:AVarExpr:scope#AVarFormExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable_61d, /* pointer to parser_nodes:AVarExpr:scope#AVarFormExpr#variable= */
(nitmethod_t)VIRTUAL_parser_nodes__AVarExpr__init, /* pointer to parser_nodes:AVarExpr:parser_nodes#AVarExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__empty_init, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__init_avarexpr, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#init_avarexpr */
(nitmethod_t)VIRTUAL_astbuilder__AVarExpr__make, /* pointer to parser_nodes:AVarExpr:astbuilder#AVarExpr#make */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVarExpr */
val* NEW_parser_nodes__AVarExpr(const struct type* type) {
val* self /* : AVarExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVarExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AVarExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AVarExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AVarExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AVarExpr exact> */
return self;
}
/* allocate AVarExpr */
void CHECK_NEW_parser_nodes__AVarExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TId */;
val* var4 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AVarExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AVarExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AVarExpr> */
var3 = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1440);
exit(1);
}
var4 = self->attrs[COLOR_scope__AVarFormExpr___64dvariable].val; /* @variable on <self:AVarExpr> */
}
/* runtime class parser_nodes__AVarAssignExpr */
const struct class class_parser_nodes__AVarAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AVarAssignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AVarAssignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AVarAssignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AVarAssignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AVarAssignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AVarAssignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AVarAssignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AVarAssignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AVarAssignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AVarAssignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AVarAssignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__replace_child, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__visit_all, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AVarAssignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AVarAssignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AVarAssignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AVarAssignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AVarAssignExpr__accept_flow_visitor, /* pointer to parser_nodes:AVarAssignExpr:flow#AVarAssignExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVarAssignExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVarAssignExpr:local_var_init#AVarAssignExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarAssignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarAssignExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AVarAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AVarAssignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AVarAssignExpr__accept_typing, /* pointer to parser_nodes:AVarAssignExpr:typing#AVarAssignExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AVarAssignExpr__expr, /* pointer to parser_nodes:AVarAssignExpr:abstract_compiler#AVarAssignExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AVarAssignExpr__stmt, /* pointer to parser_nodes:AVarAssignExpr:abstract_compiler#AVarAssignExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AVarAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__n_assign_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__n_value_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__init, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AVarFormExpr__n_id, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AVarFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__n_id_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AVarFormExpr__init, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AVarFormExpr#init */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable, /* pointer to parser_nodes:AVarAssignExpr:scope#AVarFormExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable_61d, /* pointer to parser_nodes:AVarAssignExpr:scope#AVarFormExpr#variable= */
(nitmethod_t)VIRTUAL_parser_nodes__AVarAssignExpr__init, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AVarAssignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__empty_init, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__init_avarassignexpr, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#init_avarassignexpr */
(nitmethod_t)VIRTUAL_astbuilder__AVarAssignExpr__make, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AVarAssignExpr#make */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarAssignExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVarAssignExpr */
val* NEW_parser_nodes__AVarAssignExpr(const struct type* type) {
val* self /* : AVarAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVarAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AVarAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AVarAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AVarAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AVarAssignExpr exact> */
return self;
}
/* allocate AVarAssignExpr */
void CHECK_NEW_parser_nodes__AVarAssignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TAssign */;
val* var4 /* : AExpr */;
val* var5 /* : TId */;
val* var6 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AVarAssignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AVarAssignExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_assign].val; /* _n_assign on <self:AVarAssignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign", "src/parser/parser_nodes.nit", 1161);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1162);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarAssignExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1440);
exit(1);
}
var6 = self->attrs[COLOR_scope__AVarFormExpr___64dvariable].val; /* @variable on <self:AVarAssignExpr> */
}
/* runtime class parser_nodes__AVarReassignExpr */
const struct class class_parser_nodes__AVarReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AVarReassignExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AVarReassignExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AVarReassignExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AVarReassignExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AVarReassignExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AVarReassignExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AVarReassignExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AVarReassignExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AVarReassignExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AVarReassignExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AVarReassignExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__replace_child, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__visit_all, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AVarReassignExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AVarReassignExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AVarReassignExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AVarReassignExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:AVarReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVarReassignExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVarReassignExpr:local_var_init#AVarReassignExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarReassignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarReassignExpr:rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AVarReassignExpr__accept_transform_visitor, /* pointer to parser_nodes:AVarReassignExpr:transform#AVarReassignExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AVarReassignExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AVarReassignExpr__accept_typing, /* pointer to parser_nodes:AVarReassignExpr:typing#AVarReassignExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AVarReassignExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AVarReassignExpr__stmt, /* pointer to parser_nodes:AVarReassignExpr:abstract_compiler#AVarReassignExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AVarReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__n_value_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__init, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_property, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_property */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__AVarFormExpr__n_id, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AVarFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__n_id_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AVarFormExpr__init, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AVarFormExpr#init */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable, /* pointer to parser_nodes:AVarReassignExpr:scope#AVarFormExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable_61d, /* pointer to parser_nodes:AVarReassignExpr:scope#AVarFormExpr#variable= */
(nitmethod_t)VIRTUAL_parser_nodes__AVarReassignExpr__init, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AVarReassignExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__empty_init, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__init_avarreassignexpr, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#init_avarreassignexpr */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarReassignExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVarReassignExpr */
val* NEW_parser_nodes__AVarReassignExpr(const struct type* type) {
val* self /* : AVarReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVarReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AVarReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AVarReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AVarReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AVarReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___64dread_type].val = var6; /* @read_type on <self:AVarReassignExpr exact> */
return self;
}
/* allocate AVarReassignExpr */
void CHECK_NEW_parser_nodes__AVarReassignExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AAssignOp */;
val* var4 /* : AExpr */;
val* var5 /* : nullable CallSite */;
val* var6 /* : TId */;
val* var7 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AVarReassignExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AVarReassignExpr> */
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AVarReassignExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_assign_op", "src/parser/parser_nodes.nit", 1168);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_value", "src/parser/parser_nodes.nit", 1169);
exit(1);
}
var5 = self->attrs[COLOR_typing__AReassignFormExpr___64dreassign_callsite].val; /* @reassign_callsite on <self:AVarReassignExpr> */
var6 = self->attrs[COLOR_parser_nodes__AVarFormExpr___n_id].val; /* _n_id on <self:AVarReassignExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1440);
exit(1);
}
var7 = self->attrs[COLOR_scope__AVarFormExpr___64dvariable].val; /* @variable on <self:AVarReassignExpr> */
}
/* runtime class parser_nodes__ACrangeExpr */
const struct class class_parser_nodes__ACrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACrangeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACrangeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACrangeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACrangeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACrangeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACrangeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ACrangeExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ACrangeExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ACrangeExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ACrangeExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ACrangeExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ACrangeExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACrangeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACrangeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACrangeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ACrangeExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ACrangeExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACrangeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACrangeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ACrangeExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ACrangeExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ACrangeExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__replace_child, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__visit_all, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ACrangeExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ACrangeExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ACrangeExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ACrangeExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACrangeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACrangeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACrangeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACrangeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ACrangeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACrangeExpr:rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACrangeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ACrangeExpr__accept_transform_visitor, /* pointer to parser_nodes:ACrangeExpr:transform#ACrangeExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_annotations_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACrangeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ACrangeExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACrangeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACrangeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ARangeExpr__accept_typing, /* pointer to parser_nodes:ACrangeExpr:typing#ARangeExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ACrangeExpr__expr, /* pointer to parser_nodes:ACrangeExpr:abstract_compiler#ACrangeExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ACrangeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ACrangeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ARangeExpr__n_expr, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ARangeExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_expr_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ARangeExpr__n_expr2, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ARangeExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_expr2_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ARangeExpr__init, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ARangeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ARangeExpr__empty_init, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ARangeExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ARangeExpr__init_arangeexpr, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ARangeExpr#init_arangeexpr */
(nitmethod_t)VIRTUAL_parser_nodes__ACrangeExpr__n_obra, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ACrangeExpr#n_obra */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_obra_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_obra= */
(nitmethod_t)VIRTUAL_parser_nodes__ACrangeExpr__n_cbra, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ACrangeExpr#n_cbra */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_cbra_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_cbra= */
(nitmethod_t)VIRTUAL_parser_nodes__ACrangeExpr__init, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ACrangeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__empty_init, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__init_acrangeexpr, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#init_acrangeexpr */
}
};
/* allocate ACrangeExpr */
val* NEW_parser_nodes__ACrangeExpr(const struct type* type) {
val* self /* : ACrangeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACrangeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ACrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACrangeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ACrangeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ACrangeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ACrangeExpr exact> */
return self;
}
/* allocate ACrangeExpr */
void CHECK_NEW_parser_nodes__ACrangeExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AExpr */;
val* var5 /* : TObra */;
val* var6 /* : TCbra */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ACrangeExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ACrangeExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ACrangeExpr> */
var3 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1479);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1480);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_obra].val; /* _n_obra on <self:ACrangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_nodes.nit", 1486);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__ACrangeExpr___n_cbra].val; /* _n_cbra on <self:ACrangeExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_nodes.nit", 1487);
exit(1);
}
}
/* runtime class parser_nodes__AOrangeExpr */
const struct class class_parser_nodes__AOrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AOrangeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AOrangeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AOrangeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AOrangeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AOrangeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AOrangeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AOrangeExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AOrangeExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AOrangeExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AOrangeExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AOrangeExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AOrangeExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AOrangeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AOrangeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AOrangeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AOrangeExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AOrangeExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AOrangeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AOrangeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AOrangeExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AOrangeExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AOrangeExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__replace_child, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__visit_all, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AOrangeExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AOrangeExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AOrangeExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AOrangeExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AOrangeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AOrangeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AOrangeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AOrangeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AOrangeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AOrangeExpr:rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AOrangeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AOrangeExpr__accept_transform_visitor, /* pointer to parser_nodes:AOrangeExpr:transform#AOrangeExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_annotations_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AOrangeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AOrangeExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AOrangeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AOrangeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ARangeExpr__accept_typing, /* pointer to parser_nodes:AOrangeExpr:typing#ARangeExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AOrangeExpr__expr, /* pointer to parser_nodes:AOrangeExpr:abstract_compiler#AOrangeExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AOrangeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AOrangeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ARangeExpr__n_expr, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ARangeExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_expr_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ARangeExpr__n_expr2, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ARangeExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_expr2_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_nodes__ARangeExpr__init, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ARangeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ARangeExpr__empty_init, /* pointer to parser_nodes:AOrangeExpr:parser_prod#ARangeExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ARangeExpr__init_arangeexpr, /* pointer to parser_nodes:AOrangeExpr:parser_prod#ARangeExpr#init_arangeexpr */
(nitmethod_t)VIRTUAL_parser_nodes__AOrangeExpr__n_obra, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#AOrangeExpr#n_obra */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_obra_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_obra= */
(nitmethod_t)VIRTUAL_parser_nodes__AOrangeExpr__n_cbra, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#AOrangeExpr#n_cbra */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_cbra_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_cbra= */
(nitmethod_t)VIRTUAL_parser_nodes__AOrangeExpr__init, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#AOrangeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__empty_init, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__init_aorangeexpr, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#init_aorangeexpr */
}
};
/* allocate AOrangeExpr */
val* NEW_parser_nodes__AOrangeExpr(const struct type* type) {
val* self /* : AOrangeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AOrangeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AOrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AOrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AOrangeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AOrangeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AOrangeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AOrangeExpr exact> */
return self;
}
/* allocate AOrangeExpr */
void CHECK_NEW_parser_nodes__AOrangeExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : AExpr */;
val* var5 /* : TObra */;
val* var6 /* : TObra */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AOrangeExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AOrangeExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AOrangeExpr> */
var3 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1479);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr2", "src/parser/parser_nodes.nit", 1480);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_obra].val; /* _n_obra on <self:AOrangeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_nodes.nit", 1493);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AOrangeExpr___n_cbra].val; /* _n_cbra on <self:AOrangeExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_nodes.nit", 1494);
exit(1);
}
}
/* runtime class parser_nodes__AArrayExpr */
const struct class class_parser_nodes__AArrayExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AArrayExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AArrayExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AArrayExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AArrayExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AArrayExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AArrayExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AArrayExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AArrayExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AArrayExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AArrayExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AArrayExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AArrayExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AArrayExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AArrayExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AArrayExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AArrayExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AArrayExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AArrayExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AArrayExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AArrayExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AArrayExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AArrayExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AArrayExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AArrayExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AArrayExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AArrayExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AArrayExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AArrayExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AArrayExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AArrayExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AArrayExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__replace_child, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__visit_all, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AArrayExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AArrayExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AArrayExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AArrayExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AArrayExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AArrayExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AArrayExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AArrayExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AArrayExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AArrayExpr:rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AArrayExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AArrayExpr__accept_transform_visitor, /* pointer to parser_nodes:AArrayExpr:transform#AArrayExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_annotations_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AArrayExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AArrayExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AArrayExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AArrayExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AArrayExpr__accept_typing, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AArrayExpr__expr, /* pointer to parser_nodes:AArrayExpr:abstract_compiler#AArrayExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AArrayExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AArrayExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AArrayExpr__n_exprs, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AArrayExpr#n_exprs */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_exprs_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_exprs= */
(nitmethod_t)VIRTUAL_parser_nodes__AArrayExpr__init, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AArrayExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__empty_init, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__init_aarrayexpr, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#init_aarrayexpr */
}
};
/* allocate AArrayExpr */
val* NEW_parser_nodes__AArrayExpr(const struct type* type) {
val* self /* : AArrayExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AArrayExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AArrayExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AArrayExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AArrayExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AArrayExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AArrayExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AArrayExpr exact> */
return self;
}
/* allocate AArrayExpr */
void CHECK_NEW_parser_nodes__AArrayExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExprs */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AArrayExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AArrayExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AArrayExpr> */
var3 = self->attrs[COLOR_parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_exprs", "src/parser/parser_nodes.nit", 1500);
exit(1);
}
}
/* runtime class parser_nodes__ASelfExpr */
const struct class class_parser_nodes__ASelfExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASelfExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASelfExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASelfExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASelfExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASelfExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASelfExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASelfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASelfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASelfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASelfExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASelfExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASelfExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASelfExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASelfExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASelfExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASelfExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASelfExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASelfExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASelfExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASelfExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASelfExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASelfExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASelfExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASelfExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASelfExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASelfExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASelfExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASelfExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASelfExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASelfExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASelfExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__replace_child, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__visit_all, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASelfExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASelfExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASelfExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASelfExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASelfExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__accept_scope_visitor, /* pointer to parser_nodes:ASelfExpr:scope#ASelfExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASelfExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASelfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASelfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASelfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASelfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASelfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASelfExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ASelfExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ASelfExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASelfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASelfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__its_variable, /* pointer to parser_nodes:ASelfExpr:typing#ASelfExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__accept_typing, /* pointer to parser_nodes:ASelfExpr:typing#ASelfExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASelfExpr__expr, /* pointer to parser_nodes:ASelfExpr:abstract_compiler#ASelfExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ASelfExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASelfExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASelfExpr__n_kwself, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ASelfExpr#n_kwself */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_kwself_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_kwself= */
(nitmethod_t)VIRTUAL_parser_nodes__ASelfExpr__init, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ASelfExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__empty_init, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__init_aselfexpr, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#init_aselfexpr */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__variable, /* pointer to parser_nodes:ASelfExpr:scope#ASelfExpr#variable */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__variable_61d, /* pointer to parser_nodes:ASelfExpr:scope#ASelfExpr#variable= */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__its_variable_61d, /* pointer to parser_nodes:ASelfExpr:typing#ASelfExpr#its_variable= */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASelfExpr:scope#ANode#accept_scope_visitor */
}
};
/* allocate ASelfExpr */
val* NEW_parser_nodes__ASelfExpr(const struct type* type) {
val* self /* : ASelfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASelfExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASelfExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASelfExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ASelfExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ASelfExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ASelfExpr exact> */
return self;
}
/* allocate ASelfExpr */
void CHECK_NEW_parser_nodes__ASelfExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : nullable TKwself */;
val* var4 /* : nullable Variable */;
val* var5 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASelfExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ASelfExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ASelfExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:ASelfExpr> */
var4 = self->attrs[COLOR_scope__ASelfExpr___64dvariable].val; /* @variable on <self:ASelfExpr> */
var5 = self->attrs[COLOR_typing__ASelfExpr___64dits_variable].val; /* @its_variable on <self:ASelfExpr> */
}
/* runtime class parser_nodes__AImplicitSelfExpr */
const struct class class_parser_nodes__AImplicitSelfExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AImplicitSelfExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AImplicitSelfExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AImplicitSelfExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AImplicitSelfExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AImplicitSelfExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AImplicitSelfExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AImplicitSelfExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AImplicitSelfExpr__replace_child, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AImplicitSelfExpr__visit_all, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AImplicitSelfExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AImplicitSelfExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AImplicitSelfExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AImplicitSelfExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AImplicitSelfExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__accept_scope_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AImplicitSelfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AImplicitSelfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AImplicitSelfExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AImplicitSelfExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AImplicitSelfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AImplicitSelfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__its_variable, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__accept_typing, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASelfExpr__expr, /* pointer to parser_nodes:AImplicitSelfExpr:abstract_compiler#ASelfExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AImplicitSelfExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AImplicitSelfExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASelfExpr__n_kwself, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ASelfExpr#n_kwself */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_kwself_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_kwself= */
(nitmethod_t)VIRTUAL_parser_nodes__ASelfExpr__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ASelfExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__empty_init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__init_aselfexpr, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#init_aselfexpr */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__variable, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#variable */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__variable_61d, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#variable= */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__its_variable_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#its_variable= */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__AImplicitSelfExpr__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#AImplicitSelfExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AImplicitSelfExpr__empty_init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AImplicitSelfExpr__init_aimplicitselfexpr, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr */
}
};
/* allocate AImplicitSelfExpr */
val* NEW_parser_nodes__AImplicitSelfExpr(const struct type* type) {
val* self /* : AImplicitSelfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AImplicitSelfExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AImplicitSelfExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AImplicitSelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AImplicitSelfExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AImplicitSelfExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AImplicitSelfExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AImplicitSelfExpr exact> */
return self;
}
/* allocate AImplicitSelfExpr */
void CHECK_NEW_parser_nodes__AImplicitSelfExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : nullable TKwself */;
val* var4 /* : nullable Variable */;
val* var5 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AImplicitSelfExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AImplicitSelfExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AImplicitSelfExpr> */
var3 = self->attrs[COLOR_parser_nodes__ASelfExpr___n_kwself].val; /* _n_kwself on <self:AImplicitSelfExpr> */
var4 = self->attrs[COLOR_scope__ASelfExpr___64dvariable].val; /* @variable on <self:AImplicitSelfExpr> */
var5 = self->attrs[COLOR_typing__ASelfExpr___64dits_variable].val; /* @its_variable on <self:AImplicitSelfExpr> */
}
/* runtime class parser_nodes__ATrueExpr */
const struct class class_parser_nodes__ATrueExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATrueExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ATrueExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATrueExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATrueExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ATrueExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ATrueExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATrueExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATrueExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATrueExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATrueExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATrueExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATrueExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATrueExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATrueExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATrueExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ATrueExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ATrueExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ATrueExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ATrueExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ATrueExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ATrueExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATrueExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATrueExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATrueExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ATrueExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ATrueExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATrueExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATrueExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ATrueExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ATrueExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ATrueExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__replace_child, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__visit_all, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ATrueExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ATrueExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ATrueExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ATrueExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATrueExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATrueExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATrueExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATrueExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATrueExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ATrueExpr:rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ATrueExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATrueExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__n_annotations_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ATrueExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ATrueExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ATrueExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ATrueExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ATrueExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ATrueExpr__accept_typing, /* pointer to parser_nodes:ATrueExpr:typing#ATrueExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ATrueExpr__expr, /* pointer to parser_nodes:ATrueExpr:abstract_compiler#ATrueExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ATrueExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ATrueExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__ATrueExpr__n_kwtrue, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ATrueExpr#n_kwtrue */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__n_kwtrue_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_kwtrue= */
(nitmethod_t)VIRTUAL_parser_nodes__ATrueExpr__init, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ATrueExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__empty_init, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__init_atrueexpr, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#init_atrueexpr */
}
};
/* allocate ATrueExpr */
val* NEW_parser_nodes__ATrueExpr(const struct type* type) {
val* self /* : ATrueExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ATrueExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ATrueExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ATrueExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ATrueExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ATrueExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ATrueExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ATrueExpr exact> */
return self;
}
/* allocate ATrueExpr */
void CHECK_NEW_parser_nodes__ATrueExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwtrue */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ATrueExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ATrueExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ATrueExpr> */
var3 = self->attrs[COLOR_parser_nodes__ATrueExpr___n_kwtrue].val; /* _n_kwtrue on <self:ATrueExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwtrue", "src/parser/parser_nodes.nit", 1517);
exit(1);
}
}
/* runtime class parser_nodes__AFalseExpr */
const struct class class_parser_nodes__AFalseExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AFalseExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AFalseExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AFalseExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AFalseExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AFalseExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AFalseExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFalseExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFalseExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFalseExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AFalseExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AFalseExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AFalseExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AFalseExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AFalseExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AFalseExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AFalseExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AFalseExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AFalseExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AFalseExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AFalseExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AFalseExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AFalseExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AFalseExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AFalseExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AFalseExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AFalseExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AFalseExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AFalseExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AFalseExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AFalseExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AFalseExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__replace_child, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__visit_all, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AFalseExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AFalseExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AFalseExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AFalseExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AFalseExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AFalseExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AFalseExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AFalseExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AFalseExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AFalseExpr:rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AFalseExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AFalseExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__n_annotations_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AFalseExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AFalseExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AFalseExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AFalseExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AFalseExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AFalseExpr__accept_typing, /* pointer to parser_nodes:AFalseExpr:typing#AFalseExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AFalseExpr__expr, /* pointer to parser_nodes:AFalseExpr:abstract_compiler#AFalseExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AFalseExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AFalseExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ABoolExpr__init, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ABoolExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AFalseExpr__n_kwfalse, /* pointer to parser_nodes:AFalseExpr:parser_nodes#AFalseExpr#n_kwfalse */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__n_kwfalse_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_kwfalse= */
(nitmethod_t)VIRTUAL_parser_nodes__AFalseExpr__init, /* pointer to parser_nodes:AFalseExpr:parser_nodes#AFalseExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__empty_init, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__init_afalseexpr, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#init_afalseexpr */
}
};
/* allocate AFalseExpr */
val* NEW_parser_nodes__AFalseExpr(const struct type* type) {
val* self /* : AFalseExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AFalseExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AFalseExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AFalseExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AFalseExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AFalseExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AFalseExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AFalseExpr exact> */
return self;
}
/* allocate AFalseExpr */
void CHECK_NEW_parser_nodes__AFalseExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwfalse */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AFalseExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AFalseExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AFalseExpr> */
var3 = self->attrs[COLOR_parser_nodes__AFalseExpr___n_kwfalse].val; /* _n_kwfalse on <self:AFalseExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwfalse", "src/parser/parser_nodes.nit", 1522);
exit(1);
}
}
/* runtime class parser_nodes__ANullExpr */
const struct class class_parser_nodes__ANullExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANullExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ANullExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANullExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANullExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ANullExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ANullExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANullExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANullExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANullExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANullExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANullExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANullExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANullExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANullExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANullExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ANullExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ANullExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ANullExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ANullExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ANullExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ANullExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANullExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANullExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANullExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ANullExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ANullExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANullExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANullExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ANullExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ANullExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ANullExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANullExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANullExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANullExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANullExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANullExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__replace_child, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__visit_all, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ANullExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ANullExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ANullExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ANullExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANullExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANullExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANullExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANullExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANullExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANullExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANullExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANullExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__n_annotations_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANullExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ANullExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ANullExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ANullExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ANullExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ANullExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ANullExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ANullExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ANullExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ANullExpr__accept_typing, /* pointer to parser_nodes:ANullExpr:typing#ANullExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ANullExpr__expr, /* pointer to parser_nodes:ANullExpr:abstract_compiler#ANullExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ANullExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ANullExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ANullExpr__n_kwnull, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANullExpr#n_kwnull */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__n_kwnull_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_kwnull= */
(nitmethod_t)VIRTUAL_parser_nodes__ANullExpr__init, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANullExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__empty_init, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__init_anullexpr, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#init_anullexpr */
}
};
/* allocate ANullExpr */
val* NEW_parser_nodes__ANullExpr(const struct type* type) {
val* self /* : ANullExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANullExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANullExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ANullExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANullExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ANullExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ANullExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ANullExpr exact> */
return self;
}
/* allocate ANullExpr */
void CHECK_NEW_parser_nodes__ANullExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwnull */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ANullExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ANullExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ANullExpr> */
var3 = self->attrs[COLOR_parser_nodes__ANullExpr___n_kwnull].val; /* _n_kwnull on <self:ANullExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnull", "src/parser/parser_nodes.nit", 1527);
exit(1);
}
}
/* runtime class parser_nodes__AIntExpr */
const struct class class_parser_nodes__AIntExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIntExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIntExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIntExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIntExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIntExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIntExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIntExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIntExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIntExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIntExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIntExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIntExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIntExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIntExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIntExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIntExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIntExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIntExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIntExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIntExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIntExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIntExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIntExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIntExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIntExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIntExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIntExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIntExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIntExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIntExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIntExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIntExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIntExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIntExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIntExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIntExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIntExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIntExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIntExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIntExpr__replace_child, /* pointer to parser_nodes:AIntExpr:parser_prod#AIntExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIntExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIntExpr__visit_all, /* pointer to parser_nodes:AIntExpr:parser_prod#AIntExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIntExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIntExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIntExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AIntExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__AIntExpr__accept_literal, /* pointer to parser_nodes:AIntExpr:literal#AIntExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIntExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIntExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIntExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIntExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AIntExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AIntExpr:rapid_type_analysis#AIntExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIntExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIntExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIntExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AIntExpr__n_annotations_61d, /* pointer to parser_nodes:AIntExpr:parser_prod#AIntExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIntExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIntExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AIntExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AIntExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AIntExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AIntExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AIntExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AIntExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AIntExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AIntExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AIntExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIntExpr__accept_typing, /* pointer to parser_nodes:AIntExpr:typing#AIntExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AIntExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AIntExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AIntExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AIntExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AIntExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIntExpr__expr, /* pointer to parser_nodes:AIntExpr:abstract_compiler#AIntExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AIntExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIntExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AIntExpr__n_number, /* pointer to parser_nodes:AIntExpr:parser_nodes#AIntExpr#n_number */
(nitmethod_t)VIRTUAL_parser_prod__AIntExpr__n_number_61d, /* pointer to parser_nodes:AIntExpr:parser_prod#AIntExpr#n_number= */
(nitmethod_t)VIRTUAL_parser_nodes__AIntExpr__init, /* pointer to parser_nodes:AIntExpr:parser_nodes#AIntExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AIntExpr__empty_init, /* pointer to parser_nodes:AIntExpr:parser_prod#AIntExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIntExpr__init_aintexpr, /* pointer to parser_nodes:AIntExpr:parser_prod#AIntExpr#init_aintexpr */
(nitmethod_t)VIRTUAL_literal__AIntExpr__value, /* pointer to parser_nodes:AIntExpr:literal#AIntExpr#value */
(nitmethod_t)VIRTUAL_literal__AIntExpr__value_61d, /* pointer to parser_nodes:AIntExpr:literal#AIntExpr#value= */
(nitmethod_t)VIRTUAL_astbuilder__AIntExpr__make, /* pointer to parser_nodes:AIntExpr:astbuilder#AIntExpr#make */
}
};
/* allocate AIntExpr */
val* NEW_parser_nodes__AIntExpr(const struct type* type) {
val* self /* : AIntExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIntExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIntExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AIntExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AIntExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AIntExpr exact> */
return self;
}
/* allocate AIntExpr */
void CHECK_NEW_parser_nodes__AIntExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TNumber */;
val* var4 /* : nullable Int */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIntExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AIntExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AIntExpr> */
var3 = self->attrs[COLOR_parser_nodes__AIntExpr___n_number].val; /* _n_number on <self:AIntExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_number", "src/parser/parser_nodes.nit", 1532);
exit(1);
}
var4 = self->attrs[COLOR_literal__AIntExpr___64dvalue].val; /* @value on <self:AIntExpr> */
}
/* runtime class parser_nodes__AFloatExpr */
const struct class class_parser_nodes__AFloatExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AFloatExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AFloatExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AFloatExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AFloatExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AFloatExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AFloatExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFloatExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFloatExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFloatExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AFloatExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AFloatExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AFloatExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AFloatExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AFloatExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AFloatExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AFloatExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AFloatExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AFloatExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AFloatExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AFloatExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AFloatExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AFloatExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AFloatExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AFloatExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AFloatExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AFloatExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AFloatExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AFloatExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AFloatExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AFloatExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AFloatExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__replace_child, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__visit_all, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AFloatExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AFloatExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AFloatExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AFloatExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__AFloatExpr__accept_literal, /* pointer to parser_nodes:AFloatExpr:literal#AFloatExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AFloatExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AFloatExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AFloatExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AFloatExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AFloatExpr:rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AFloatExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AFloatExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__n_annotations_61d, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AFloatExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AFloatExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AFloatExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AFloatExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AFloatExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AFloatExpr__accept_typing, /* pointer to parser_nodes:AFloatExpr:typing#AFloatExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AFloatExpr__expr, /* pointer to parser_nodes:AFloatExpr:abstract_compiler#AFloatExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AFloatExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AFloatExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AFloatExpr__n_float, /* pointer to parser_nodes:AFloatExpr:parser_nodes#AFloatExpr#n_float */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__n_float_61d, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#n_float= */
(nitmethod_t)VIRTUAL_parser_nodes__AFloatExpr__init, /* pointer to parser_nodes:AFloatExpr:parser_nodes#AFloatExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__empty_init, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__init_afloatexpr, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#init_afloatexpr */
(nitmethod_t)VIRTUAL_literal__AFloatExpr__value, /* pointer to parser_nodes:AFloatExpr:literal#AFloatExpr#value */
(nitmethod_t)VIRTUAL_literal__AFloatExpr__value_61d, /* pointer to parser_nodes:AFloatExpr:literal#AFloatExpr#value= */
}
};
/* allocate AFloatExpr */
val* NEW_parser_nodes__AFloatExpr(const struct type* type) {
val* self /* : AFloatExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AFloatExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AFloatExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AFloatExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AFloatExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AFloatExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AFloatExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AFloatExpr exact> */
return self;
}
/* allocate AFloatExpr */
void CHECK_NEW_parser_nodes__AFloatExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TFloat */;
val* var4 /* : nullable Float */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AFloatExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AFloatExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AFloatExpr> */
var3 = self->attrs[COLOR_parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_float", "src/parser/parser_nodes.nit", 1537);
exit(1);
}
var4 = self->attrs[COLOR_literal__AFloatExpr___64dvalue].val; /* @value on <self:AFloatExpr> */
}
/* runtime class parser_nodes__ACharExpr */
const struct class class_parser_nodes__ACharExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACharExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ACharExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACharExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACharExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ACharExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ACharExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACharExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACharExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACharExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACharExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACharExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACharExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACharExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACharExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACharExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ACharExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ACharExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ACharExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ACharExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ACharExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ACharExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACharExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACharExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACharExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ACharExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ACharExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACharExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACharExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ACharExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ACharExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ACharExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACharExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACharExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACharExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACharExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACharExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__replace_child, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__visit_all, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ACharExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ACharExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ACharExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ACharExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ACharExpr__accept_literal, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACharExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACharExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACharExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ACharExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ACharExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACharExpr:rapid_type_analysis#ACharExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACharExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ACharExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__n_annotations_61d, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACharExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ACharExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ACharExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACharExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACharExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ACharExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ACharExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ACharExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ACharExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ACharExpr__accept_typing, /* pointer to parser_nodes:ACharExpr:typing#ACharExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ACharExpr__expr, /* pointer to parser_nodes:ACharExpr:abstract_compiler#ACharExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ACharExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ACharExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ACharExpr__n_char, /* pointer to parser_nodes:ACharExpr:parser_nodes#ACharExpr#n_char */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__n_char_61d, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#n_char= */
(nitmethod_t)VIRTUAL_parser_nodes__ACharExpr__init, /* pointer to parser_nodes:ACharExpr:parser_nodes#ACharExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__empty_init, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__init_acharexpr, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#init_acharexpr */
(nitmethod_t)VIRTUAL_literal__ACharExpr__value, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#value */
(nitmethod_t)VIRTUAL_literal__ACharExpr__value_61d, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#value= */
}
};
/* allocate ACharExpr */
val* NEW_parser_nodes__ACharExpr(const struct type* type) {
val* self /* : ACharExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACharExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACharExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ACharExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACharExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ACharExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ACharExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ACharExpr exact> */
return self;
}
/* allocate ACharExpr */
void CHECK_NEW_parser_nodes__ACharExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TChar */;
val* var4 /* : nullable Char */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ACharExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ACharExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ACharExpr> */
var3 = self->attrs[COLOR_parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_char", "src/parser/parser_nodes.nit", 1542);
exit(1);
}
var4 = self->attrs[COLOR_literal__ACharExpr___64dvalue].val; /* @value on <self:ACharExpr> */
}
/* runtime class parser_nodes__AStringExpr */
const struct class class_parser_nodes__AStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStringExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStringExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStringExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStringExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStringExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStringExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStringExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStringExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStringExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStringExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStringExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStringExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStringExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStringExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__replace_child, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__visit_all, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStringExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStringExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStringExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStringExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__n_annotations_61d, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AStringExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AStringExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AStringExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AStringExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AStringExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AStringFormExpr__accept_typing, /* pointer to parser_nodes:AStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AStringFormExpr__expr, /* pointer to parser_nodes:AStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__n_string, /* pointer to parser_nodes:AStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__n_string_61d, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#n_string= */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__init, /* pointer to parser_nodes:AStringExpr:parser_nodes#AStringFormExpr#init */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)VIRTUAL_parser_nodes__AStringExpr__init, /* pointer to parser_nodes:AStringExpr:parser_nodes#AStringExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__empty_init, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__init_astringexpr, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#init_astringexpr */
}
};
/* allocate AStringExpr */
val* NEW_parser_nodes__AStringExpr(const struct type* type) {
val* self /* : AStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AStringExpr exact> */
return self;
}
/* allocate AStringExpr */
void CHECK_NEW_parser_nodes__AStringExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : Token */;
val* var4 /* : nullable String */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStringExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AStringExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AStringExpr> */
var3 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_nodes.nit", 1547);
exit(1);
}
var4 = self->attrs[COLOR_literal__AStringFormExpr___64dvalue].val; /* @value on <self:AStringExpr> */
}
/* runtime class parser_nodes__AStartStringExpr */
const struct class class_parser_nodes__AStartStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStartStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStartStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStartStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStartStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStartStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStartStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AStartStringExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AStartStringExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AStartStringExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AStartStringExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AStartStringExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AStartStringExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStartStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStartStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStartStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AStartStringExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AStartStringExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStartStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStartStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AStartStringExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AStartStringExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AStartStringExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AStartStringExpr__replace_child, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStartStringExpr__visit_all, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AStartStringExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AStartStringExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AStartStringExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AStartStringExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStartStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStartStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStartStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStartStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStartStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStartStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStartStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStartStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AStartStringExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AStartStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AStartStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AStringFormExpr__accept_typing, /* pointer to parser_nodes:AStartStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AStringFormExpr__expr, /* pointer to parser_nodes:AStartStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AStartStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AStartStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__n_string, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)VIRTUAL_parser_prod__AStartStringExpr__n_string_61d, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#n_string= */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__init, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#AStringFormExpr#init */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)VIRTUAL_parser_nodes__AStartStringExpr__init, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#AStartStringExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AStartStringExpr__empty_init, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AStartStringExpr__init_astartstringexpr, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#init_astartstringexpr */
}
};
/* allocate AStartStringExpr */
val* NEW_parser_nodes__AStartStringExpr(const struct type* type) {
val* self /* : AStartStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStartStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStartStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AStartStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStartStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AStartStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AStartStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AStartStringExpr exact> */
return self;
}
/* allocate AStartStringExpr */
void CHECK_NEW_parser_nodes__AStartStringExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : Token */;
val* var4 /* : nullable String */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AStartStringExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AStartStringExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AStartStringExpr> */
var3 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_nodes.nit", 1547);
exit(1);
}
var4 = self->attrs[COLOR_literal__AStringFormExpr___64dvalue].val; /* @value on <self:AStartStringExpr> */
}
/* runtime class parser_nodes__AMidStringExpr */
const struct class class_parser_nodes__AMidStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMidStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMidStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMidStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMidStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMidStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMidStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AMidStringExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AMidStringExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AMidStringExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AMidStringExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AMidStringExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AMidStringExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMidStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMidStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMidStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AMidStringExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AMidStringExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMidStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMidStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AMidStringExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AMidStringExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AMidStringExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AMidStringExpr__replace_child, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMidStringExpr__visit_all, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AMidStringExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AMidStringExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AMidStringExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AMidStringExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMidStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMidStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMidStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMidStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AMidStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AMidStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMidStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMidStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AMidStringExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AMidStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AMidStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AStringFormExpr__accept_typing, /* pointer to parser_nodes:AMidStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AStringFormExpr__expr, /* pointer to parser_nodes:AMidStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AMidStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMidStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__n_string, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)VIRTUAL_parser_prod__AMidStringExpr__n_string_61d, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#n_string= */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__init, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#AStringFormExpr#init */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)VIRTUAL_parser_nodes__AMidStringExpr__init, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#AMidStringExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AMidStringExpr__empty_init, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AMidStringExpr__init_amidstringexpr, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#init_amidstringexpr */
}
};
/* allocate AMidStringExpr */
val* NEW_parser_nodes__AMidStringExpr(const struct type* type) {
val* self /* : AMidStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMidStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AMidStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AMidStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMidStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AMidStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AMidStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AMidStringExpr exact> */
return self;
}
/* allocate AMidStringExpr */
void CHECK_NEW_parser_nodes__AMidStringExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : Token */;
val* var4 /* : nullable String */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AMidStringExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AMidStringExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AMidStringExpr> */
var3 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AMidStringExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_nodes.nit", 1547);
exit(1);
}
var4 = self->attrs[COLOR_literal__AStringFormExpr___64dvalue].val; /* @value on <self:AMidStringExpr> */
}
/* runtime class parser_nodes__AEndStringExpr */
const struct class class_parser_nodes__AEndStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AEndStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AEndStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AEndStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AEndStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AEndStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AEndStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AEndStringExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AEndStringExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AEndStringExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AEndStringExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AEndStringExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AEndStringExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AEndStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AEndStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AEndStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AEndStringExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AEndStringExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AEndStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AEndStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AEndStringExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AEndStringExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AEndStringExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AEndStringExpr__replace_child, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AEndStringExpr__visit_all, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AEndStringExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AEndStringExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AEndStringExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AEndStringExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AEndStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AEndStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AEndStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AEndStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AEndStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AEndStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AEndStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AEndStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AEndStringExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AEndStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AEndStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AStringFormExpr__accept_typing, /* pointer to parser_nodes:AEndStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AStringFormExpr__expr, /* pointer to parser_nodes:AEndStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AEndStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AEndStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__n_string, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)VIRTUAL_parser_prod__AEndStringExpr__n_string_61d, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#n_string= */
(nitmethod_t)VIRTUAL_parser_nodes__AStringFormExpr__init, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#AStringFormExpr#init */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)VIRTUAL_parser_nodes__AEndStringExpr__init, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#AEndStringExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AEndStringExpr__empty_init, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AEndStringExpr__init_aendstringexpr, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#init_aendstringexpr */
}
};
/* allocate AEndStringExpr */
val* NEW_parser_nodes__AEndStringExpr(const struct type* type) {
val* self /* : AEndStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AEndStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AEndStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AEndStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AEndStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AEndStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AEndStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AEndStringExpr exact> */
return self;
}
/* allocate AEndStringExpr */
void CHECK_NEW_parser_nodes__AEndStringExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : Token */;
val* var4 /* : nullable String */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AEndStringExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AEndStringExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AEndStringExpr> */
var3 = self->attrs[COLOR_parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AEndStringExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_nodes.nit", 1547);
exit(1);
}
var4 = self->attrs[COLOR_literal__AStringFormExpr___64dvalue].val; /* @value on <self:AEndStringExpr> */
}
/* runtime class parser_nodes__ASuperstringExpr */
const struct class class_parser_nodes__ASuperstringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASuperstringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASuperstringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASuperstringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASuperstringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASuperstringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASuperstringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASuperstringExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASuperstringExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASuperstringExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASuperstringExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASuperstringExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASuperstringExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASuperstringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASuperstringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASuperstringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASuperstringExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASuperstringExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASuperstringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASuperstringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASuperstringExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASuperstringExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASuperstringExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__replace_child, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__visit_all, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASuperstringExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASuperstringExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASuperstringExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASuperstringExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASuperstringExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASuperstringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASuperstringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASuperstringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASuperstringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperstringExpr:rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASuperstringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ASuperstringExpr__accept_transform_visitor, /* pointer to parser_nodes:ASuperstringExpr:transform#ASuperstringExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__n_annotations_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASuperstringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ASuperstringExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASuperstringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASuperstringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASuperstringExpr__accept_typing, /* pointer to parser_nodes:ASuperstringExpr:typing#ASuperstringExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASuperstringExpr__expr, /* pointer to parser_nodes:ASuperstringExpr:abstract_compiler#ASuperstringExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ASuperstringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASuperstringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperstringExpr__n_exprs, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ASuperstringExpr#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperstringExpr__init, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ASuperstringExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__empty_init, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__init_asuperstringexpr, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#init_asuperstringexpr */
}
};
/* allocate ASuperstringExpr */
val* NEW_parser_nodes__ASuperstringExpr(const struct type* type) {
val* self /* : ASuperstringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASuperstringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASuperstringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASuperstringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASuperstringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ASuperstringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ASuperstringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ASuperstringExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
((void (*)(val*, val*))(var6->class->vft[COLOR_parser_nodes__ANodes__init]))(var6, self) /* init on <var6:ANodes[AExpr]>*/;
CHECK_NEW_parser_nodes__ANodes(var6);
self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val = var6; /* _n_exprs on <self:ASuperstringExpr exact> */
return self;
}
/* allocate ASuperstringExpr */
void CHECK_NEW_parser_nodes__ASuperstringExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASuperstringExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ASuperstringExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ASuperstringExpr> */
}
/* runtime class parser_nodes__AParExpr */
const struct class class_parser_nodes__AParExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AParExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AParExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AParExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AParExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AParExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AParExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AParExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AParExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AParExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AParExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AParExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AParExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AParExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AParExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AParExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AParExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AParExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AParExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AParExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AParExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AParExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AParExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AParExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AParExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AParExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AParExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AParExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AParExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AParExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AParExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AParExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AParExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AParExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__replace_child, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__visit_all, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AParExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AParExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AParExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AParExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AProxyExpr__accept_flow_visitor, /* pointer to parser_nodes:AParExpr:flow#AProxyExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__AParExpr__accept_transform_visitor, /* pointer to parser_nodes:AParExpr:transform#AParExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_annotations_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AParExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AParExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AParExpr__warn_parentheses, /* pointer to parser_nodes:AParExpr:simple_misc_analysis#AParExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AParExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AParExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AParExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AParExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AParExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AParExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AProxyExpr__accept_typing, /* pointer to parser_nodes:AParExpr:typing#AProxyExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AParExpr__expr, /* pointer to parser_nodes:AParExpr:abstract_compiler#AParExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AParExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AProxyExpr__n_expr, /* pointer to parser_nodes:AParExpr:parser_nodes#AProxyExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_expr_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AProxyExpr__init, /* pointer to parser_nodes:AParExpr:parser_nodes#AProxyExpr#init */
(nitmethod_t)VIRTUAL_parser_nodes__AParExpr__n_opar, /* pointer to parser_nodes:AParExpr:parser_nodes#AParExpr#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_opar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AParExpr__n_cpar, /* pointer to parser_nodes:AParExpr:parser_nodes#AParExpr#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_cpar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__AParExpr__init, /* pointer to parser_nodes:AParExpr:parser_nodes#AParExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__empty_init, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__init_aparexpr, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#init_aparexpr */
}
};
/* allocate AParExpr */
val* NEW_parser_nodes__AParExpr(const struct type* type) {
val* self /* : AParExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AParExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AParExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AParExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AParExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AParExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AParExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AParExpr exact> */
return self;
}
/* allocate AParExpr */
void CHECK_NEW_parser_nodes__AParExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : TOpar */;
val* var5 /* : TCpar */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AParExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AParExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AParExpr> */
var3 = self->attrs[COLOR_parser_nodes__AProxyExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1587);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AParExpr___n_opar].val; /* _n_opar on <self:AParExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_nodes.nit", 1580);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AParExpr___n_cpar].val; /* _n_cpar on <self:AParExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_nodes.nit", 1581);
exit(1);
}
}
/* runtime class parser_nodes__AAsCastExpr */
const struct class class_parser_nodes__AAsCastExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAsCastExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAsCastExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAsCastExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAsCastExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAsCastExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAsCastExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAsCastExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAsCastExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAsCastExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAsCastExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAsCastExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAsCastExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAsCastExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAsCastExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAsCastExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAsCastExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAsCastExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAsCastExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAsCastExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAsCastExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAsCastExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAsCastExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__replace_child, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__visit_all, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAsCastExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAsCastExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAsCastExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAsCastExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAsCastExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAsCastExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAsCastExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAsCastExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAsCastExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AAsCastExpr:rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAsCastExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAsCastExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAsCastExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAsCastExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAsCastExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAsCastExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAsCastExpr__accept_typing, /* pointer to parser_nodes:AAsCastExpr:typing#AAsCastExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AAsCastExpr__expr, /* pointer to parser_nodes:AAsCastExpr:abstract_compiler#AAsCastExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AAsCastExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAsCastExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__n_expr, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_expr_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__n_kwas, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_kwas */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_kwas_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_kwas= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__n_opar, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_opar_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__n_type, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_type_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__n_cpar, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_cpar_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__init, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__empty_init, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__init_aascastexpr, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#init_aascastexpr */
}
};
/* allocate AAsCastExpr */
val* NEW_parser_nodes__AAsCastExpr(const struct type* type) {
val* self /* : AAsCastExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAsCastExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAsCastExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAsCastExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAsCastExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAsCastExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAsCastExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAsCastExpr exact> */
return self;
}
/* allocate AAsCastExpr */
void CHECK_NEW_parser_nodes__AAsCastExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : TKwas */;
val* var5 /* : TOpar */;
val* var6 /* : AType */;
val* var7 /* : TCpar */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAsCastExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1593);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_kwas].val; /* _n_kwas on <self:AAsCastExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwas", "src/parser/parser_nodes.nit", 1594);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val; /* _n_opar on <self:AAsCastExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_nodes.nit", 1595);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <self:AAsCastExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_nodes.nit", 1596);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val; /* _n_cpar on <self:AAsCastExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_nodes.nit", 1597);
exit(1);
}
}
/* runtime class parser_nodes__AAsNotnullExpr */
const struct class class_parser_nodes__AAsNotnullExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAsNotnullExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAsNotnullExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAsNotnullExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAsNotnullExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAsNotnullExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAsNotnullExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAsNotnullExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__replace_child, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__visit_all, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAsNotnullExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAsNotnullExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAsNotnullExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAsNotnullExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAsNotnullExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAsNotnullExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAsNotnullExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAsNotnullExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAsNotnullExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAsNotnullExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAsNotnullExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAsNotnullExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAsNotnullExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AAsNotnullExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAsNotnullExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAsNotnullExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AAsNotnullExpr__accept_typing, /* pointer to parser_nodes:AAsNotnullExpr:typing#AAsNotnullExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AAsNotnullExpr__expr, /* pointer to parser_nodes:AAsNotnullExpr:abstract_compiler#AAsNotnullExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AAsNotnullExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAsNotnullExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__n_expr, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_expr_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwas, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#n_kwas */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_kwas_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwas= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__n_opar, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_opar_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwnot, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#n_kwnot */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnot_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwnot= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__n_kwnull, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#n_kwnull */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnull_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwnull= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__n_cpar, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_cpar_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsNotnullExpr__init, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsNotnullExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__empty_init, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__init_aasnotnullexpr, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#init_aasnotnullexpr */
}
};
/* allocate AAsNotnullExpr */
val* NEW_parser_nodes__AAsNotnullExpr(const struct type* type) {
val* self /* : AAsNotnullExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAsNotnullExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAsNotnullExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAsNotnullExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAsNotnullExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AAsNotnullExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AAsNotnullExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AAsNotnullExpr exact> */
return self;
}
/* allocate AAsNotnullExpr */
void CHECK_NEW_parser_nodes__AAsNotnullExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : TKwas */;
val* var5 /* : TOpar */;
val* var6 /* : TKwnot */;
val* var7 /* : TKwnull */;
val* var8 /* : TCpar */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAsNotnullExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AAsNotnullExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1603);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwas].val; /* _n_kwas on <self:AAsNotnullExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwas", "src/parser/parser_nodes.nit", 1604);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val; /* _n_opar on <self:AAsNotnullExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_nodes.nit", 1605);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnot].val; /* _n_kwnot on <self:AAsNotnullExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnot", "src/parser/parser_nodes.nit", 1606);
exit(1);
}
var7 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_kwnull].val; /* _n_kwnull on <self:AAsNotnullExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwnull", "src/parser/parser_nodes.nit", 1607);
exit(1);
}
var8 = self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val; /* _n_cpar on <self:AAsNotnullExpr> */
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_nodes.nit", 1608);
exit(1);
}
}
/* runtime class parser_nodes__AIssetAttrExpr */
const struct class class_parser_nodes__AIssetAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AIssetAttrExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AIssetAttrExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AIssetAttrExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AIssetAttrExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AIssetAttrExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AIssetAttrExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIssetAttrExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__replace_child, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__visit_all, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AIssetAttrExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AIssetAttrExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AIssetAttrExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AIssetAttrExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIssetAttrExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIssetAttrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIssetAttrExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIssetAttrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIssetAttrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIssetAttrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIssetAttrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIssetAttrExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIssetAttrExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:AIssetAttrExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AIssetAttrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AIssetAttrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIssetAttrExpr__accept_typing, /* pointer to parser_nodes:AIssetAttrExpr:typing#AIssetAttrExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIssetAttrExpr__expr, /* pointer to parser_nodes:AIssetAttrExpr:abstract_compiler#AIssetAttrExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AIssetAttrExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIssetAttrExpr:astvalidation#ANode#accept_ast_validation */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__n_expr_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__n_id_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__init, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#init */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)VIRTUAL_parser_nodes__AIssetAttrExpr__n_kwisset, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AIssetAttrExpr#n_kwisset */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__n_kwisset_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_kwisset= */
(nitmethod_t)VIRTUAL_parser_nodes__AIssetAttrExpr__init, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AIssetAttrExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__empty_init, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__init_aissetattrexpr, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#init_aissetattrexpr */
}
};
/* allocate AIssetAttrExpr */
val* NEW_parser_nodes__AIssetAttrExpr(const struct type* type) {
val* self /* : AIssetAttrExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIssetAttrExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIssetAttrExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AIssetAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIssetAttrExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:AIssetAttrExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:AIssetAttrExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:AIssetAttrExpr exact> */
return self;
}
/* allocate AIssetAttrExpr */
void CHECK_NEW_parser_nodes__AIssetAttrExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : AExpr */;
val* var4 /* : TAttrid */;
val* var5 /* : nullable MAttribute */;
val* var6 /* : nullable MType */;
val* var7 /* : TKwisset */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AIssetAttrExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:AIssetAttrExpr> */
var3 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1340);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__AAttrFormExpr___n_id].val; /* _n_id on <self:AIssetAttrExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1343);
exit(1);
}
var5 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AIssetAttrExpr> */
var6 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AIssetAttrExpr> */
var7 = self->attrs[COLOR_parser_nodes__AIssetAttrExpr___n_kwisset].val; /* _n_kwisset on <self:AIssetAttrExpr> */
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwisset", "src/parser/parser_nodes.nit", 1614);
exit(1);
}
}
/* runtime class parser_nodes__ADebugTypeExpr */
const struct class class_parser_nodes__ADebugTypeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ADebugTypeExpr:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ADebugTypeExpr:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ADebugTypeExpr:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ADebugTypeExpr:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ADebugTypeExpr:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ADebugTypeExpr:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ADebugTypeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__replace_child, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__visit_all, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ADebugTypeExpr:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ADebugTypeExpr:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ADebugTypeExpr:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ADebugTypeExpr:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ADebugTypeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ADebugTypeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ADebugTypeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ADebugTypeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ADebugTypeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ADebugTypeExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ADebugTypeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ADebugTypeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ADebugTypeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExpr__init, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#AExpr#init */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AExpr__warn_parentheses, /* pointer to parser_nodes:ADebugTypeExpr:simple_misc_analysis#AExpr#warn_parentheses */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ADebugTypeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ADebugTypeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ADebugTypeExpr__accept_typing, /* pointer to parser_nodes:ADebugTypeExpr:typing#ADebugTypeExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:ADebugTypeExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__ADebugTypeExpr__stmt, /* pointer to parser_nodes:ADebugTypeExpr:abstract_compiler#ADebugTypeExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ADebugTypeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__n_kwdebug, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_kwdebug */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_kwdebug_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_kwdebug= */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__n_kwtype, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_kwtype */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_kwtype_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_kwtype= */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__n_expr, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_expr_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__n_type, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_type_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__init, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#init */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__empty_init, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__init_adebugtypeexpr, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#init_adebugtypeexpr */
}
};
/* allocate ADebugTypeExpr */
val* NEW_parser_nodes__ADebugTypeExpr(const struct type* type) {
val* self /* : ADebugTypeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADebugTypeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ADebugTypeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ADebugTypeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ADebugTypeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___64dmtype].val = var3; /* @mtype on <self:ADebugTypeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___64dis_typed].s = var4; /* @is_typed on <self:ADebugTypeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___64dimplicit_cast_to].val = var5; /* @implicit_cast_to on <self:ADebugTypeExpr exact> */
return self;
}
/* allocate ADebugTypeExpr */
void CHECK_NEW_parser_nodes__ADebugTypeExpr(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable FlowContext */;
val* var2 /* : nullable Variable */;
val* var3 /* : TKwdebug */;
val* var4 /* : TKwtype */;
val* var5 /* : AExpr */;
val* var6 /* : AType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ADebugTypeExpr> */
var1 = self->attrs[COLOR_flow__AExpr___64dafter_flow_context].val; /* @after_flow_context on <self:ADebugTypeExpr> */
var2 = self->attrs[COLOR_astbuilder__AExpr___64dvariable_cache].val; /* @variable_cache on <self:ADebugTypeExpr> */
var3 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwdebug].val; /* _n_kwdebug on <self:ADebugTypeExpr> */
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwdebug", "src/parser/parser_nodes.nit", 1625);
exit(1);
}
var4 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_kwtype].val; /* _n_kwtype on <self:ADebugTypeExpr> */
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwtype", "src/parser/parser_nodes.nit", 1626);
exit(1);
}
var5 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_expr].val; /* _n_expr on <self:ADebugTypeExpr> */
if (var5 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1627);
exit(1);
}
var6 = self->attrs[COLOR_parser_nodes__ADebugTypeExpr___n_type].val; /* _n_type on <self:ADebugTypeExpr> */
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_nodes.nit", 1628);
exit(1);
}
}
/* runtime class parser_nodes__AListExprs */
const struct class class_parser_nodes__AListExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AListExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AListExprs:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AListExprs:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AListExprs:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AListExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AListExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AListExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AListExprs:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AListExprs:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AListExprs:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AListExprs:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AListExprs:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AListExprs:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AListExprs:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AListExprs:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AListExprs:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AListExprs:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AListExprs:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AListExprs:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AListExprs:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AListExprs:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AListExprs:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AListExprs:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AListExprs:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AListExprs:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AListExprs:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AListExprs:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AListExprs:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AListExprs:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AListExprs:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AListExprs:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AListExprs:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AListExprs:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AListExprs:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AListExprs__replace_child, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AListExprs__visit_all, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AListExprs:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AListExprs:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AListExprs:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AListExprs:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AListExprs:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AListExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AListExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AListExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AListExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AListExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AListExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AListExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AListExprs:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:AListExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__init, /* pointer to parser_nodes:AListExprs:parser_nodes#AExprs#init */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:AListExprs:typing#AExprs#to_a */
(nitmethod_t)VIRTUAL_parser_nodes__AListExprs__init, /* pointer to parser_nodes:AListExprs:parser_nodes#AListExprs#init */
(nitmethod_t)VIRTUAL_parser_prod__AListExprs__empty_init, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AListExprs__init_alistexprs, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#init_alistexprs */
}
};
/* allocate AListExprs */
val* NEW_parser_nodes__AListExprs(const struct type* type) {
val* self /* : AListExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AListExprs;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AListExprs exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AListExprs exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AListExprs exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[AExpr]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var3; /* _n_exprs on <self:AListExprs exact> */
return self;
}
/* allocate AListExprs */
void CHECK_NEW_parser_nodes__AListExprs(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AListExprs> */
}
/* runtime class parser_nodes__AParExprs */
const struct class class_parser_nodes__AParExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AParExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AParExprs:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AParExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AParExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AParExprs:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AParExprs:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AParExprs:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AParExprs:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AParExprs:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AParExprs:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AParExprs:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AParExprs:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AParExprs:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AParExprs:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AParExprs:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AParExprs:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AParExprs:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AParExprs:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AParExprs:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AParExprs:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AParExprs:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AParExprs:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AParExprs:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AParExprs:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AParExprs:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AParExprs:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AParExprs:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AParExprs:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AParExprs:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AParExprs:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AParExprs:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AParExprs:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AParExprs:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__replace_child, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__visit_all, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AParExprs:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AParExprs:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AParExprs:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__AParExprs__after_simple_misc, /* pointer to parser_nodes:AParExprs:simple_misc_analysis#AParExprs#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParExprs:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AParExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AParExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AParExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AParExprs:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:AParExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__init, /* pointer to parser_nodes:AParExprs:parser_nodes#AExprs#init */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:AParExprs:typing#AExprs#to_a */
(nitmethod_t)VIRTUAL_parser_nodes__AParExprs__n_opar, /* pointer to parser_nodes:AParExprs:parser_nodes#AParExprs#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__n_opar_61d, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AParExprs__n_cpar, /* pointer to parser_nodes:AParExprs:parser_nodes#AParExprs#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__n_cpar_61d, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__AParExprs__init, /* pointer to parser_nodes:AParExprs:parser_nodes#AParExprs#init */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__empty_init, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__init_aparexprs, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#init_aparexprs */
}
};
/* allocate AParExprs */
val* NEW_parser_nodes__AParExprs(const struct type* type) {
val* self /* : AParExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AParExprs;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AParExprs exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AParExprs exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AParExprs exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[AExpr]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var3; /* _n_exprs on <self:AParExprs exact> */
return self;
}
/* allocate AParExprs */
void CHECK_NEW_parser_nodes__AParExprs(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TOpar */;
val* var2 /* : TCpar */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AParExprs> */
var1 = self->attrs[COLOR_parser_nodes__AParExprs___n_opar].val; /* _n_opar on <self:AParExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_opar", "src/parser/parser_nodes.nit", 1639);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AParExprs___n_cpar].val; /* _n_cpar on <self:AParExprs> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cpar", "src/parser/parser_nodes.nit", 1640);
exit(1);
}
}
/* runtime class parser_nodes__ABraExprs */
const struct class class_parser_nodes__ABraExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABraExprs:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABraExprs:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABraExprs:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraExprs:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraExprs:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraExprs:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraExprs:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraExprs:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraExprs:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABraExprs:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABraExprs:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABraExprs:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABraExprs:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABraExprs:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABraExprs:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraExprs:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraExprs:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraExprs:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABraExprs:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABraExprs:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraExprs:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraExprs:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABraExprs:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABraExprs:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABraExprs:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraExprs:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraExprs:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraExprs:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraExprs:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraExprs:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__replace_child, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__visit_all, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABraExprs:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABraExprs:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABraExprs:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABraExprs:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraExprs:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraExprs:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:ABraExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__init, /* pointer to parser_nodes:ABraExprs:parser_nodes#AExprs#init */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:ABraExprs:typing#AExprs#to_a */
(nitmethod_t)VIRTUAL_parser_nodes__ABraExprs__n_obra, /* pointer to parser_nodes:ABraExprs:parser_nodes#ABraExprs#n_obra */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__n_obra_61d, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#n_obra= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraExprs__n_cbra, /* pointer to parser_nodes:ABraExprs:parser_nodes#ABraExprs#n_cbra */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__n_cbra_61d, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#n_cbra= */
(nitmethod_t)VIRTUAL_parser_nodes__ABraExprs__init, /* pointer to parser_nodes:ABraExprs:parser_nodes#ABraExprs#init */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__empty_init, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__init_abraexprs, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#init_abraexprs */
}
};
/* allocate ABraExprs */
val* NEW_parser_nodes__ABraExprs(const struct type* type) {
val* self /* : ABraExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraExprs;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraExprs exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABraExprs exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraExprs exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[AExpr]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var3; /* _n_exprs on <self:ABraExprs exact> */
return self;
}
/* allocate ABraExprs */
void CHECK_NEW_parser_nodes__ABraExprs(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TObra */;
val* var2 /* : TCbra */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABraExprs> */
var1 = self->attrs[COLOR_parser_nodes__ABraExprs___n_obra].val; /* _n_obra on <self:ABraExprs> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_obra", "src/parser/parser_nodes.nit", 1646);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__ABraExprs___n_cbra].val; /* _n_cbra on <self:ABraExprs> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_cbra", "src/parser/parser_nodes.nit", 1647);
exit(1);
}
}
/* runtime class parser_nodes__APlusAssignOp */
const struct class class_parser_nodes__APlusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APlusAssignOp:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APlusAssignOp:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APlusAssignOp:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APlusAssignOp:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APlusAssignOp:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APlusAssignOp:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:APlusAssignOp:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:APlusAssignOp:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:APlusAssignOp:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:APlusAssignOp:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:APlusAssignOp:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:APlusAssignOp:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APlusAssignOp:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APlusAssignOp:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APlusAssignOp:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:APlusAssignOp:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:APlusAssignOp:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APlusAssignOp:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APlusAssignOp:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:APlusAssignOp:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:APlusAssignOp:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:APlusAssignOp:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__replace_child, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__visit_all, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:APlusAssignOp:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:APlusAssignOp:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:APlusAssignOp:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:APlusAssignOp:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APlusAssignOp:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APlusAssignOp:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APlusAssignOp:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APlusAssignOp:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:APlusAssignOp:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APlusAssignOp:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APlusAssignOp:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APlusAssignOp:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APlusAssignOp:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignOp__init, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#AAssignOp#init */
(nitmethod_t)VIRTUAL_parser_nodes__APlusAssignOp__n_pluseq, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#APlusAssignOp#n_pluseq */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__n_pluseq_61d, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#n_pluseq= */
(nitmethod_t)VIRTUAL_parser_nodes__APlusAssignOp__init, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#APlusAssignOp#init */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__empty_init, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__init_aplusassignop, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#init_aplusassignop */
}
};
/* allocate APlusAssignOp */
val* NEW_parser_nodes__APlusAssignOp(const struct type* type) {
val* self /* : APlusAssignOp */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APlusAssignOp;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APlusAssignOp exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:APlusAssignOp exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlusAssignOp exact> */
return self;
}
/* allocate APlusAssignOp */
void CHECK_NEW_parser_nodes__APlusAssignOp(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TPluseq */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:APlusAssignOp> */
var1 = self->attrs[COLOR_parser_nodes__APlusAssignOp___n_pluseq].val; /* _n_pluseq on <self:APlusAssignOp> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_pluseq", "src/parser/parser_nodes.nit", 1656);
exit(1);
}
}
/* runtime class parser_nodes__AMinusAssignOp */
const struct class class_parser_nodes__AMinusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMinusAssignOp:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMinusAssignOp:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMinusAssignOp:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMinusAssignOp:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMinusAssignOp:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMinusAssignOp:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AMinusAssignOp:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AMinusAssignOp:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AMinusAssignOp:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AMinusAssignOp:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AMinusAssignOp:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AMinusAssignOp:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMinusAssignOp:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMinusAssignOp:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMinusAssignOp:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AMinusAssignOp:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AMinusAssignOp:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMinusAssignOp:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMinusAssignOp:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AMinusAssignOp:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AMinusAssignOp:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AMinusAssignOp:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__replace_child, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__visit_all, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AMinusAssignOp:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AMinusAssignOp:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AMinusAssignOp:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AMinusAssignOp:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMinusAssignOp:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMinusAssignOp:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMinusAssignOp:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMinusAssignOp:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMinusAssignOp:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusAssignOp:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMinusAssignOp:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMinusAssignOp:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMinusAssignOp:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignOp__init, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#AAssignOp#init */
(nitmethod_t)VIRTUAL_parser_nodes__AMinusAssignOp__n_minuseq, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#AMinusAssignOp#n_minuseq */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__n_minuseq_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#n_minuseq= */
(nitmethod_t)VIRTUAL_parser_nodes__AMinusAssignOp__init, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#AMinusAssignOp#init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__empty_init, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__init_aminusassignop, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#init_aminusassignop */
}
};
/* allocate AMinusAssignOp */
val* NEW_parser_nodes__AMinusAssignOp(const struct type* type) {
val* self /* : AMinusAssignOp */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMinusAssignOp;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AMinusAssignOp exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AMinusAssignOp exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMinusAssignOp exact> */
return self;
}
/* allocate AMinusAssignOp */
void CHECK_NEW_parser_nodes__AMinusAssignOp(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TMinuseq */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AMinusAssignOp> */
var1 = self->attrs[COLOR_parser_nodes__AMinusAssignOp___n_minuseq].val; /* _n_minuseq on <self:AMinusAssignOp> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_minuseq", "src/parser/parser_nodes.nit", 1660);
exit(1);
}
}
/* runtime class parser_nodes__AClosureDef */
const struct class class_parser_nodes__AClosureDef = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AClosureDef:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AClosureDef:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AClosureDef:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AClosureDef:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AClosureDef:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AClosureDef:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AClosureDef:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AClosureDef:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AClosureDef:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AClosureDef:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AClosureDef:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AClosureDef:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AClosureDef:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AClosureDef:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AClosureDef:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AClosureDef:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AClosureDef:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AClosureDef:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AClosureDef:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AClosureDef:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AClosureDef:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AClosureDef:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AClosureDef:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AClosureDef:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AClosureDef:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AClosureDef:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AClosureDef:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AClosureDef:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AClosureDef:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AClosureDef:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AClosureDef:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AClosureDef:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AClosureDef:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AClosureDef:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AClosureDef:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AClosureDef:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AClosureDef:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AClosureDef:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AClosureDef:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AClosureDef:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AClosureDef:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__hot_location, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__replace_child, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AClosureDef:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__visit_all, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AClosureDef:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AClosureDef:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AClosureDef:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AClosureDef:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AClosureDef:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__AClosureDef__accept_scope_visitor, /* pointer to parser_nodes:AClosureDef:scope#AClosureDef#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AClosureDef__accept_flow_visitor, /* pointer to parser_nodes:AClosureDef:flow#AClosureDef#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AClosureDef:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AClosureDef:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AClosureDef:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AClosureDef:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AClosureDef:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AClosureDef:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AClosureDef:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AClosureDef:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AClosureDef:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AClosureDef:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AClosureDef:parser_nodes#ANode#replace_with */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__n_label, /* pointer to parser_nodes:AClosureDef:parser_nodes#ALabelable#n_label */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__n_label_61d, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#n_label= */
(nitmethod_t)VIRTUAL_parser_nodes__ALabelable__init, /* pointer to parser_nodes:AClosureDef:parser_nodes#ALabelable#init */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__n_bang, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#n_bang */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__n_bang_61d, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#n_bang= */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__n_id, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__n_id_61d, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__n_ids, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#n_ids */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__n_kwdo, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#n_kwdo */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__n_kwdo_61d, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#n_kwdo= */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__n_expr, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__n_expr_61d, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureDef__init, /* pointer to parser_nodes:AClosureDef:parser_nodes#AClosureDef#init */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__empty_init, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AClosureDef__init_aclosuredef, /* pointer to parser_nodes:AClosureDef:parser_prod#AClosureDef#init_aclosuredef */
(nitmethod_t)VIRTUAL_scope__AClosureDef__variables, /* pointer to parser_nodes:AClosureDef:scope#AClosureDef#variables */
(nitmethod_t)VIRTUAL_scope__AClosureDef__variables_61d, /* pointer to parser_nodes:AClosureDef:scope#AClosureDef#variables= */
(nitmethod_t)VIRTUAL_scope__AClosureDef__escapemark, /* pointer to parser_nodes:AClosureDef:scope#AClosureDef#escapemark */
(nitmethod_t)VIRTUAL_scope__AClosureDef__escapemark_61d, /* pointer to parser_nodes:AClosureDef:scope#AClosureDef#escapemark= */
(nitmethod_t)VIRTUAL_typing__AClosureDef__mclosure, /* pointer to parser_nodes:AClosureDef:typing#AClosureDef#mclosure */
(nitmethod_t)VIRTUAL_typing__AClosureDef__mclosure_61d, /* pointer to parser_nodes:AClosureDef:typing#AClosureDef#mclosure= */
(nitmethod_t)VIRTUAL_typing__AClosureDef__accept_typing, /* pointer to parser_nodes:AClosureDef:typing#AClosureDef#accept_typing */
}
};
/* allocate AClosureDef */
val* NEW_parser_nodes__AClosureDef(const struct type* type) {
val* self /* : AClosureDef */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[TId] */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AClosureDef;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AClosureDef exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AClosureDef exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AClosureDef exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__ALabelable___n_label].val = var3; /* _n_label on <self:AClosureDef exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[TId]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__AClosureDef___n_ids].val = var4; /* _n_ids on <self:AClosureDef exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AClosureDef___n_kwdo].val = var5; /* _n_kwdo on <self:AClosureDef exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AClosureDef___n_expr].val = var6; /* _n_expr on <self:AClosureDef exact> */
return self;
}
/* allocate AClosureDef */
void CHECK_NEW_parser_nodes__AClosureDef(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TBang */;
val* var2 /* : AClosureId */;
val* var3 /* : nullable Array[Variable] */;
val* var4 /* : nullable EscapeMark */;
val* var5 /* : nullable MParameter */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AClosureDef> */
var1 = self->attrs[COLOR_parser_nodes__AClosureDef___n_bang].val; /* _n_bang on <self:AClosureDef> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_bang", "src/parser/parser_nodes.nit", 1665);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AClosureDef___n_id].val; /* _n_id on <self:AClosureDef> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1666);
exit(1);
}
var3 = self->attrs[COLOR_scope__AClosureDef___64dvariables].val; /* @variables on <self:AClosureDef> */
var4 = self->attrs[COLOR_scope__AClosureDef___64descapemark].val; /* @escapemark on <self:AClosureDef> */
var5 = self->attrs[COLOR_typing__AClosureDef___64dmclosure].val; /* @mclosure on <self:AClosureDef> */
}
/* runtime class parser_nodes__ASimpleClosureId */
const struct class class_parser_nodes__ASimpleClosureId = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASimpleClosureId:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASimpleClosureId:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASimpleClosureId:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASimpleClosureId:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASimpleClosureId:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASimpleClosureId:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASimpleClosureId:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ASimpleClosureId:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ASimpleClosureId:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ASimpleClosureId:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ASimpleClosureId:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ASimpleClosureId:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ASimpleClosureId:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASimpleClosureId:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASimpleClosureId:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASimpleClosureId:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ASimpleClosureId:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ASimpleClosureId:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASimpleClosureId:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASimpleClosureId:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ASimpleClosureId:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ASimpleClosureId:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ASimpleClosureId:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASimpleClosureId:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASimpleClosureId:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASimpleClosureId:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASimpleClosureId:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASimpleClosureId:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASimpleClosureId:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASimpleClosureId:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASimpleClosureId:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASimpleClosureId:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASimpleClosureId:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ASimpleClosureId__replace_child, /* pointer to parser_nodes:ASimpleClosureId:parser_prod#ASimpleClosureId#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASimpleClosureId__visit_all, /* pointer to parser_nodes:ASimpleClosureId:parser_prod#ASimpleClosureId#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ASimpleClosureId:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ASimpleClosureId:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ASimpleClosureId:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ASimpleClosureId:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASimpleClosureId:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASimpleClosureId:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASimpleClosureId:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASimpleClosureId:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASimpleClosureId:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASimpleClosureId:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ASimpleClosureId:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASimpleClosureId:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASimpleClosureId:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureId__init, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#AClosureId#init */
(nitmethod_t)VIRTUAL_parser_nodes__ASimpleClosureId__n_id, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ASimpleClosureId#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ASimpleClosureId__n_id_61d, /* pointer to parser_nodes:ASimpleClosureId:parser_prod#ASimpleClosureId#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ASimpleClosureId__init, /* pointer to parser_nodes:ASimpleClosureId:parser_nodes#ASimpleClosureId#init */
(nitmethod_t)VIRTUAL_parser_prod__ASimpleClosureId__empty_init, /* pointer to parser_nodes:ASimpleClosureId:parser_prod#ASimpleClosureId#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ASimpleClosureId__init_asimpleclosureid, /* pointer to parser_nodes:ASimpleClosureId:parser_prod#ASimpleClosureId#init_asimpleclosureid */
}
};
/* allocate ASimpleClosureId */
val* NEW_parser_nodes__ASimpleClosureId(const struct type* type) {
val* self /* : ASimpleClosureId */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASimpleClosureId;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASimpleClosureId exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ASimpleClosureId exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASimpleClosureId exact> */
return self;
}
/* allocate ASimpleClosureId */
void CHECK_NEW_parser_nodes__ASimpleClosureId(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TId */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ASimpleClosureId> */
var1 = self->attrs[COLOR_parser_nodes__ASimpleClosureId___n_id].val; /* _n_id on <self:ASimpleClosureId> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1677);
exit(1);
}
}
/* runtime class parser_nodes__ABreakClosureId */
const struct class class_parser_nodes__ABreakClosureId = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABreakClosureId:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABreakClosureId:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABreakClosureId:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABreakClosureId:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABreakClosureId:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABreakClosureId:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABreakClosureId:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ABreakClosureId:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ABreakClosureId:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ABreakClosureId:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ABreakClosureId:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ABreakClosureId:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ABreakClosureId:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABreakClosureId:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABreakClosureId:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABreakClosureId:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ABreakClosureId:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ABreakClosureId:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABreakClosureId:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABreakClosureId:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ABreakClosureId:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ABreakClosureId:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ABreakClosureId:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABreakClosureId:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABreakClosureId:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABreakClosureId:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABreakClosureId:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABreakClosureId:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABreakClosureId:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABreakClosureId:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABreakClosureId:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABreakClosureId:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABreakClosureId:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ABreakClosureId__replace_child, /* pointer to parser_nodes:ABreakClosureId:parser_prod#ABreakClosureId#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABreakClosureId__visit_all, /* pointer to parser_nodes:ABreakClosureId:parser_prod#ABreakClosureId#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ABreakClosureId:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ABreakClosureId:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ABreakClosureId:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ABreakClosureId:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABreakClosureId:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABreakClosureId:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABreakClosureId:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABreakClosureId:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABreakClosureId:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABreakClosureId:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABreakClosureId:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABreakClosureId:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABreakClosureId:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AClosureId__init, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#AClosureId#init */
(nitmethod_t)VIRTUAL_parser_nodes__ABreakClosureId__n_kwbreak, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ABreakClosureId#n_kwbreak */
(nitmethod_t)VIRTUAL_parser_prod__ABreakClosureId__n_kwbreak_61d, /* pointer to parser_nodes:ABreakClosureId:parser_prod#ABreakClosureId#n_kwbreak= */
(nitmethod_t)VIRTUAL_parser_nodes__ABreakClosureId__init, /* pointer to parser_nodes:ABreakClosureId:parser_nodes#ABreakClosureId#init */
(nitmethod_t)VIRTUAL_parser_prod__ABreakClosureId__empty_init, /* pointer to parser_nodes:ABreakClosureId:parser_prod#ABreakClosureId#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ABreakClosureId__init_abreakclosureid, /* pointer to parser_nodes:ABreakClosureId:parser_prod#ABreakClosureId#init_abreakclosureid */
}
};
/* allocate ABreakClosureId */
val* NEW_parser_nodes__ABreakClosureId(const struct type* type) {
val* self /* : ABreakClosureId */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABreakClosureId;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABreakClosureId exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ABreakClosureId exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABreakClosureId exact> */
return self;
}
/* allocate ABreakClosureId */
void CHECK_NEW_parser_nodes__ABreakClosureId(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwbreak */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ABreakClosureId> */
var1 = self->attrs[COLOR_parser_nodes__ABreakClosureId___n_kwbreak].val; /* _n_kwbreak on <self:ABreakClosureId> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwbreak", "src/parser/parser_nodes.nit", 1681);
exit(1);
}
}
/* runtime class parser_nodes__AModuleName */
const struct class class_parser_nodes__AModuleName = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AModuleName:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AModuleName:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AModuleName:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AModuleName:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AModuleName:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AModuleName:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AModuleName:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AModuleName:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AModuleName:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AModuleName:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AModuleName:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AModuleName:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AModuleName:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AModuleName:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AModuleName:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AModuleName:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AModuleName:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AModuleName:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AModuleName:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AModuleName:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AModuleName:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AModuleName:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AModuleName:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AModuleName:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AModuleName:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AModuleName:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AModuleName:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AModuleName:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AModuleName:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AModuleName:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AModuleName:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AModuleName:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AModuleName:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AModuleName:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AModuleName:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AModuleName:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__replace_child, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__visit_all, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AModuleName:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AModuleName:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AModuleName:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AModuleName:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AModuleName:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AModuleName:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AModuleName:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AModuleName:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AModuleName:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AModuleName:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AModuleName:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AModuleName:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AModuleName:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__n_quad, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_quad */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__n_quad_61d, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#n_quad= */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__n_path, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_path */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__n_id, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__n_id_61d, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__init, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#init */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__empty_init, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__init_amodulename, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#init_amodulename */
}
};
/* allocate AModuleName */
val* NEW_parser_nodes__AModuleName(const struct type* type) {
val* self /* : AModuleName */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[TId] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AModuleName;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AModuleName exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AModuleName exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AModuleName exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var3; /* _n_quad on <self:AModuleName exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[TId]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__AModuleName___n_path].val = var4; /* _n_path on <self:AModuleName exact> */
return self;
}
/* allocate AModuleName */
void CHECK_NEW_parser_nodes__AModuleName(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TId */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AModuleName> */
var1 = self->attrs[COLOR_parser_nodes__AModuleName___n_id].val; /* _n_id on <self:AModuleName> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_id", "src/parser/parser_nodes.nit", 1687);
exit(1);
}
}
/* runtime class parser_nodes__AInLanguage */
const struct class class_parser_nodes__AInLanguage = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AInLanguage:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AInLanguage:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AInLanguage:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AInLanguage:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AInLanguage:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AInLanguage:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AInLanguage:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AInLanguage:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AInLanguage:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AInLanguage:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AInLanguage:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AInLanguage:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AInLanguage:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AInLanguage:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AInLanguage:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AInLanguage:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AInLanguage:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AInLanguage:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AInLanguage:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AInLanguage:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AInLanguage:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AInLanguage:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AInLanguage:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AInLanguage:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AInLanguage:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AInLanguage:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AInLanguage:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AInLanguage:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AInLanguage:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AInLanguage:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AInLanguage:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AInLanguage:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AInLanguage:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__replace_child, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__visit_all, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AInLanguage:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AInLanguage:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AInLanguage:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AInLanguage:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AInLanguage:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AInLanguage:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AInLanguage:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AInLanguage:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AInLanguage:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AInLanguage:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AInLanguage:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AInLanguage:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AInLanguage:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AInLanguage__n_kwin, /* pointer to parser_nodes:AInLanguage:parser_nodes#AInLanguage#n_kwin */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__n_kwin_61d, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#n_kwin= */
(nitmethod_t)VIRTUAL_parser_nodes__AInLanguage__n_string, /* pointer to parser_nodes:AInLanguage:parser_nodes#AInLanguage#n_string */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__n_string_61d, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#n_string= */
(nitmethod_t)VIRTUAL_parser_nodes__AInLanguage__init, /* pointer to parser_nodes:AInLanguage:parser_nodes#AInLanguage#init */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__empty_init, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__init_ainlanguage, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#init_ainlanguage */
}
};
/* allocate AInLanguage */
val* NEW_parser_nodes__AInLanguage(const struct type* type) {
val* self /* : AInLanguage */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AInLanguage;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AInLanguage exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AInLanguage exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AInLanguage exact> */
return self;
}
/* allocate AInLanguage */
void CHECK_NEW_parser_nodes__AInLanguage(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TKwin */;
val* var2 /* : TString */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AInLanguage> */
var1 = self->attrs[COLOR_parser_nodes__AInLanguage___n_kwin].val; /* _n_kwin on <self:AInLanguage> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_kwin", "src/parser/parser_nodes.nit", 1691);
exit(1);
}
var2 = self->attrs[COLOR_parser_nodes__AInLanguage___n_string].val; /* _n_string on <self:AInLanguage> */
if (var2 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_string", "src/parser/parser_nodes.nit", 1692);
exit(1);
}
}
/* runtime class parser_nodes__AExternCodeBlock */
const struct class class_parser_nodes__AExternCodeBlock = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AExternCodeBlock:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AExternCodeBlock:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AExternCodeBlock:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AExternCodeBlock:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AExternCodeBlock:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AExternCodeBlock:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AExternCodeBlock:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AExternCodeBlock:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AExternCodeBlock:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AExternCodeBlock:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AExternCodeBlock:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AExternCodeBlock:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AExternCodeBlock:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AExternCodeBlock:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AExternCodeBlock:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AExternCodeBlock:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AExternCodeBlock:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AExternCodeBlock:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AExternCodeBlock:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AExternCodeBlock:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AExternCodeBlock:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AExternCodeBlock:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__replace_child, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__visit_all, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AExternCodeBlock:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AExternCodeBlock:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AExternCodeBlock:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AExternCodeBlock:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AExternCodeBlock:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AExternCodeBlock:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AExternCodeBlock:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AExternCodeBlock:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AExternCodeBlock:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AExternCodeBlock:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AExternCodeBlock:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AExternCodeBlock:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AExternCodeBlock:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExternCodeBlock__n_in_language, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#AExternCodeBlock#n_in_language */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__n_in_language_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#n_in_language= */
(nitmethod_t)VIRTUAL_parser_nodes__AExternCodeBlock__n_extern_code_segment, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#AExternCodeBlock#n_extern_code_segment */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__n_extern_code_segment_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#n_extern_code_segment= */
(nitmethod_t)VIRTUAL_parser_nodes__AExternCodeBlock__init, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#AExternCodeBlock#init */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__empty_init, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__init_aexterncodeblock, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#init_aexterncodeblock */
}
};
/* allocate AExternCodeBlock */
val* NEW_parser_nodes__AExternCodeBlock(const struct type* type) {
val* self /* : AExternCodeBlock */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AExternCodeBlock;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AExternCodeBlock exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AExternCodeBlock exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AExternCodeBlock exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var3; /* _n_in_language on <self:AExternCodeBlock exact> */
return self;
}
/* allocate AExternCodeBlock */
void CHECK_NEW_parser_nodes__AExternCodeBlock(val* self) {
val* var /* : nullable Location */;
val* var1 /* : TExternCodeSegment */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AExternCodeBlock> */
var1 = self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_extern_code_segment].val; /* _n_extern_code_segment on <self:AExternCodeBlock> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_extern_code_segment", "src/parser/parser_nodes.nit", 1697);
exit(1);
}
}
/* runtime class parser_nodes__AQualified */
const struct class class_parser_nodes__AQualified = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AQualified:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AQualified:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AQualified:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AQualified:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AQualified:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AQualified:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AQualified:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AQualified:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AQualified:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AQualified:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AQualified:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AQualified:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AQualified:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AQualified:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AQualified:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AQualified:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AQualified:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AQualified:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AQualified:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AQualified:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AQualified:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AQualified:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AQualified:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AQualified:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AQualified:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AQualified:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AQualified:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AQualified:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AQualified:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AQualified:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AQualified:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AQualified:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AQualified:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AQualified:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AQualified:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AQualified:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__replace_child, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__visit_all, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AQualified:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AQualified:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AQualified:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AQualified:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AQualified:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AQualified:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AQualified:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AQualified:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AQualified:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AQualified:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AQualified:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AQualified:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AQualified:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AQualified__n_quad, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#n_quad */
(nitmethod_t)VIRTUAL_parser_nodes__AQualified__n_quad_61d, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#n_quad= */
(nitmethod_t)VIRTUAL_parser_nodes__AQualified__n_id, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#n_id */
(nitmethod_t)VIRTUAL_parser_nodes__AQualified__n_classid, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#n_classid */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__n_classid_61d, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#n_classid= */
(nitmethod_t)VIRTUAL_parser_nodes__AQualified__init, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#init */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__empty_init, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__init_aqualified, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#init_aqualified */
}
};
/* allocate AQualified */
val* NEW_parser_nodes__AQualified(const struct type* type) {
val* self /* : AQualified */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[TId] */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AQualified;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AQualified exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AQualified exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AQualified exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_quad].val = var3; /* _n_quad on <self:AQualified exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[TId]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__AQualified___n_id].val = var4; /* _n_id on <self:AQualified exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var5; /* _n_classid on <self:AQualified exact> */
return self;
}
/* allocate AQualified */
void CHECK_NEW_parser_nodes__AQualified(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AQualified> */
}
/* runtime class parser_nodes__ADoc */
const struct class class_parser_nodes__ADoc = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ADoc:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ADoc:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ADoc:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ADoc:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ADoc:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ADoc:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADoc:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADoc:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADoc:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ADoc:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ADoc:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ADoc:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ADoc:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ADoc:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ADoc:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ADoc:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ADoc:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ADoc:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ADoc:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ADoc:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ADoc:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ADoc:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ADoc:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ADoc:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ADoc:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ADoc:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ADoc:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ADoc:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ADoc:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ADoc:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ADoc:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADoc:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADoc:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADoc:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADoc:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADoc:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ADoc__replace_child, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ADoc__visit_all, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ADoc:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ADoc:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ADoc:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ADoc:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ADoc:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ADoc:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ADoc:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ADoc:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ADoc:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ADoc:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ADoc:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ADoc:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ADoc:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ADoc__n_comment, /* pointer to parser_nodes:ADoc:parser_nodes#ADoc#n_comment */
(nitmethod_t)VIRTUAL_parser_nodes__ADoc__init, /* pointer to parser_nodes:ADoc:parser_nodes#ADoc#init */
(nitmethod_t)VIRTUAL_parser_prod__ADoc__empty_init, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ADoc__init_adoc, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#init_adoc */
}
};
/* allocate ADoc */
val* NEW_parser_nodes__ADoc(const struct type* type) {
val* self /* : ADoc */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[TComment] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADoc;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ADoc exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ADoc exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ADoc exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TComment);
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__init]))(var3, self) /* init on <var3:ANodes[TComment]>*/;
CHECK_NEW_parser_nodes__ANodes(var3);
self->attrs[COLOR_parser_nodes__ADoc___n_comment].val = var3; /* _n_comment on <self:ADoc exact> */
return self;
}
/* allocate ADoc */
void CHECK_NEW_parser_nodes__ADoc(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ADoc> */
}
/* runtime class parser_nodes__AAnnotations */
const struct class class_parser_nodes__AAnnotations = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAnnotations:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAnnotations:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAnnotations:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAnnotations:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAnnotations:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAnnotations:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAnnotations:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAnnotations:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAnnotations:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAnnotations:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAnnotations:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAnnotations:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAnnotations:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAnnotations:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAnnotations:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAnnotations:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAnnotations:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAnnotations:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAnnotations:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAnnotations:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAnnotations:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAnnotations:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAnnotations:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAnnotations:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAnnotations:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAnnotations:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAnnotations:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAnnotations:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAnnotations:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAnnotations:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAnnotations:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAnnotations:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAnnotations:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAnnotations:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAnnotations:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAnnotations:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__replace_child, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__visit_all, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAnnotations:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAnnotations:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAnnotations:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAnnotations:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAnnotations:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAnnotations:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAnnotations:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAnnotations:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAnnotations:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAnnotations:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__AAnnotations__accept_ast_validation, /* pointer to parser_nodes:AAnnotations:astvalidation#AAnnotations#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAnnotations:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAnnotations:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotations__n_at, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#n_at */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__n_at_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_at= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotations__n_opar, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__n_opar_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotations__n_items, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#n_items */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotations__n_cpar, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__n_cpar_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotations__init, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#init */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__empty_init, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__init_aannotations, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#init_aannotations */
}
};
/* allocate AAnnotations */
val* NEW_parser_nodes__AAnnotations(const struct type* type) {
val* self /* : AAnnotations */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : ANodes[AAnnotation] */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAnnotations;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAnnotations exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAnnotations exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAnnotations exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var3; /* _n_at on <self:AAnnotations exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var4; /* _n_opar on <self:AAnnotations exact> */
var5 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AAnnotation);
((void (*)(val*, val*))(var5->class->vft[COLOR_parser_nodes__ANodes__init]))(var5, self) /* init on <var5:ANodes[AAnnotation]>*/;
CHECK_NEW_parser_nodes__ANodes(var5);
self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val = var5; /* _n_items on <self:AAnnotations exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var6; /* _n_cpar on <self:AAnnotations exact> */
return self;
}
/* allocate AAnnotations */
void CHECK_NEW_parser_nodes__AAnnotations(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAnnotations> */
}
/* runtime class parser_nodes__AAnnotation */
const struct class class_parser_nodes__AAnnotation = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAnnotation:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAnnotation:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAnnotation:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAnnotation:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAnnotation:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAnnotation:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAnnotation:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAnnotation:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAnnotation:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAnnotation:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAnnotation:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAnnotation:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAnnotation:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAnnotation:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAnnotation:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAnnotation:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAnnotation:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAnnotation:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAnnotation:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAnnotation:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAnnotation:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAnnotation:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAnnotation:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAnnotation:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAnnotation:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAnnotation:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAnnotation:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAnnotation:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAnnotation:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAnnotation:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAnnotation:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAnnotation:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAnnotation:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAnnotation:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAnnotation:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAnnotation:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__replace_child, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__visit_all, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAnnotation:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAnnotation:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAnnotation:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAnnotation:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAnnotation:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAnnotation:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAnnotation:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAnnotation:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAnnotation:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAnnotation:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAnnotation:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAnnotation:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_annotations_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAnnotation:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_atid, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_atid */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_atid_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_atid= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_opar, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_opar */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_opar_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_args, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_args */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_cpar, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_cpar */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_cpar_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_cpar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__init, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#init */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__empty_init, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__init_aannotation, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#init_aannotation */
}
};
/* allocate AAnnotation */
val* NEW_parser_nodes__AAnnotation(const struct type* type) {
val* self /* : AAnnotation */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[AAtArg] */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAnnotation;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAnnotation exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAnnotation exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAnnotation exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var3; /* _n_opar on <self:AAnnotation exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AAtArg);
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__init]))(var4, self) /* init on <var4:ANodes[AAtArg]>*/;
CHECK_NEW_parser_nodes__ANodes(var4);
self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val = var4; /* _n_args on <self:AAnnotation exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var5; /* _n_cpar on <self:AAnnotation exact> */
return self;
}
/* allocate AAnnotation */
void CHECK_NEW_parser_nodes__AAnnotation(val* self) {
val* var /* : nullable Location */;
val* var1 /* : AAtid */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAnnotation> */
var1 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_atid", "src/parser/parser_nodes.nit", 1722);
exit(1);
}
}
/* runtime class parser_nodes__ATypeAtArg */
const struct class class_parser_nodes__ATypeAtArg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATypeAtArg:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATypeAtArg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATypeAtArg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATypeAtArg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATypeAtArg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATypeAtArg:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:ATypeAtArg:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:ATypeAtArg:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:ATypeAtArg:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:ATypeAtArg:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:ATypeAtArg:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:ATypeAtArg:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATypeAtArg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATypeAtArg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATypeAtArg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:ATypeAtArg:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:ATypeAtArg:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATypeAtArg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATypeAtArg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:ATypeAtArg:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:ATypeAtArg:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:ATypeAtArg:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ATypeAtArg:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ATypeAtArg:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ATypeAtArg:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ATypeAtArg:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ATypeAtArg:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ATypeAtArg:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ATypeAtArg:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ATypeAtArg:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ATypeAtArg:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ATypeAtArg:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__replace_child, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__visit_all, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:ATypeAtArg:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:ATypeAtArg:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:ATypeAtArg:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:ATypeAtArg:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATypeAtArg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATypeAtArg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATypeAtArg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATypeAtArg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATypeAtArg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ATypeAtArg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ATypeAtArg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATypeAtArg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ATypeAtArg:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtArg__init, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#AAtArg#init */
(nitmethod_t)VIRTUAL_parser_nodes__ATypeAtArg__n_type, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ATypeAtArg#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__n_type_61d, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ATypeAtArg__init, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ATypeAtArg#init */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__empty_init, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__init_atypeatarg, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#init_atypeatarg */
}
};
/* allocate ATypeAtArg */
val* NEW_parser_nodes__ATypeAtArg(const struct type* type) {
val* self /* : ATypeAtArg */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ATypeAtArg;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ATypeAtArg exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:ATypeAtArg exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ATypeAtArg exact> */
return self;
}
/* allocate ATypeAtArg */
void CHECK_NEW_parser_nodes__ATypeAtArg(val* self) {
val* var /* : nullable Location */;
val* var1 /* : AType */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:ATypeAtArg> */
var1 = self->attrs[COLOR_parser_nodes__ATypeAtArg___n_type].val; /* _n_type on <self:ATypeAtArg> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_type", "src/parser/parser_nodes.nit", 1732);
exit(1);
}
}
/* runtime class parser_nodes__AExprAtArg */
const struct class class_parser_nodes__AExprAtArg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AExprAtArg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AExprAtArg:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AExprAtArg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AExprAtArg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AExprAtArg:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AExprAtArg:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AExprAtArg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AExprAtArg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AExprAtArg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AExprAtArg:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AExprAtArg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AExprAtArg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AExprAtArg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AExprAtArg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AExprAtArg:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AExprAtArg:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AExprAtArg:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AExprAtArg:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AExprAtArg:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AExprAtArg:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AExprAtArg:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AExprAtArg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AExprAtArg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AExprAtArg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AExprAtArg:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AExprAtArg:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AExprAtArg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AExprAtArg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AExprAtArg:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AExprAtArg:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AExprAtArg:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AExprAtArg:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AExprAtArg:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AExprAtArg:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AExprAtArg:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AExprAtArg:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AExprAtArg:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AExprAtArg:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AExprAtArg:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AExprAtArg:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AExprAtArg:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__replace_child, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__visit_all, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AExprAtArg:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AExprAtArg:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AExprAtArg:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AExprAtArg:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AExprAtArg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AExprAtArg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AExprAtArg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AExprAtArg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AExprAtArg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AExprAtArg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AExprAtArg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AExprAtArg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AExprAtArg:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtArg__init, /* pointer to parser_nodes:AExprAtArg:parser_nodes#AAtArg#init */
(nitmethod_t)VIRTUAL_parser_nodes__AExprAtArg__n_expr, /* pointer to parser_nodes:AExprAtArg:parser_nodes#AExprAtArg#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__n_expr_61d, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AExprAtArg__init, /* pointer to parser_nodes:AExprAtArg:parser_nodes#AExprAtArg#init */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__empty_init, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__init_aexpratarg, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#init_aexpratarg */
}
};
/* allocate AExprAtArg */
val* NEW_parser_nodes__AExprAtArg(const struct type* type) {
val* self /* : AExprAtArg */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AExprAtArg;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AExprAtArg exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AExprAtArg exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AExprAtArg exact> */
return self;
}
/* allocate AExprAtArg */
void CHECK_NEW_parser_nodes__AExprAtArg(val* self) {
val* var /* : nullable Location */;
val* var1 /* : AExpr */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AExprAtArg> */
var1 = self->attrs[COLOR_parser_nodes__AExprAtArg___n_expr].val; /* _n_expr on <self:AExprAtArg> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s (%s:%d)\n", "Uninitialized attribute _n_expr", "src/parser/parser_nodes.nit", 1736);
exit(1);
}
}
/* runtime class parser_nodes__AAtAtArg */
const struct class class_parser_nodes__AAtAtArg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAtAtArg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_type, /* pointer to parser_nodes:AAtAtArg:kernel#Object#is_same_type */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAtAtArg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAtAtArg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__output, /* pointer to parser_nodes:AAtAtArg:kernel#Object#output */
(nitmethod_t)VIRTUAL_kernel__Object__output_class_name, /* pointer to parser_nodes:AAtAtArg:kernel#Object#output_class_name */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAtAtArg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAtAtArg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAtAtArg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAtAtArg:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAtAtArg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAtAtArg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAtAtArg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAtAtArg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAtAtArg:string#Object#args */
(nitmethod_t)VIRTUAL_math__Object__atan2, /* pointer to parser_nodes:AAtAtArg:math#Object#atan2 */
(nitmethod_t)VIRTUAL_math__Object__pi, /* pointer to parser_nodes:AAtAtArg:math#Object#pi */
(nitmethod_t)VIRTUAL_math__Object__srand_from, /* pointer to parser_nodes:AAtAtArg:math#Object#srand_from */
(nitmethod_t)VIRTUAL_math__Object__srand, /* pointer to parser_nodes:AAtAtArg:math#Object#srand */
(nitmethod_t)VIRTUAL_stream__Object__poll, /* pointer to parser_nodes:AAtAtArg:stream#Object#poll */
(nitmethod_t)VIRTUAL_stream__Object__intern_poll, /* pointer to parser_nodes:AAtAtArg:stream#Object#intern_poll */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAtAtArg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAtAtArg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAtAtArg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getc, /* pointer to parser_nodes:AAtAtArg:file#Object#getc */
(nitmethod_t)VIRTUAL_file__Object__gets, /* pointer to parser_nodes:AAtAtArg:file#Object#gets */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAtAtArg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAtAtArg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_file__Object__stdin, /* pointer to parser_nodes:AAtAtArg:file#Object#stdin */
(nitmethod_t)VIRTUAL_file__Object__stdout, /* pointer to parser_nodes:AAtAtArg:file#Object#stdout */
(nitmethod_t)VIRTUAL_file__Object__stderr, /* pointer to parser_nodes:AAtAtArg:file#Object#stderr */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAtAtArg:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAtAtArg:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAtAtArg:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAtAtArg:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAtAtArg:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAtAtArg:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAtAtArg:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAtAtArg:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAtAtArg:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAtAtArg:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__replace_child, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__detach, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#detach */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__visit_all, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#visit_all */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_tokens_by_text, /* pointer to parser_nodes:AAtAtArg:parser_util#ANode#collect_tokens_by_text */
(nitmethod_t)VIRTUAL_parser_util__ANode__collect_annotations_by_name, /* pointer to parser_nodes:AAtAtArg:parser_util#ANode#collect_annotations_by_name */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__accept_simple_misc, /* pointer to parser_nodes:AAtAtArg:simple_misc_analysis#ANode#accept_simple_misc */
(nitmethod_t)VIRTUAL_simple_misc_analysis__ANode__after_simple_misc, /* pointer to parser_nodes:AAtAtArg:simple_misc_analysis#ANode#after_simple_misc */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAtAtArg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAtAtArg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAtAtArg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAtAtArg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAtAtArg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAtAtArg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAtAtArg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAtAtArg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__n_annotations_61d, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#n_annotations= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__init, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#init */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAtAtArg:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtArg__init, /* pointer to parser_nodes:AAtAtArg:parser_nodes#AAtArg#init */
(nitmethod_t)VIRTUAL_parser_nodes__AAtAtArg__init, /* pointer to parser_nodes:AAtAtArg:parser_nodes#AAtAtArg#init */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__empty_init, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#empty_init */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__init_aatatarg, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#init_aatatarg */
}
};
/* allocate AAtAtArg */
val* NEW_parser_nodes__AAtAtArg(const struct type* type) {
val* self /* : AAtAtArg */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAtAtArg;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAtAtArg exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___64dparent].val = var1; /* @parent on <self:AAtAtArg exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAtAtArg exact> */
return self;
}
/* allocate AAtAtArg */
void CHECK_NEW_parser_nodes__AAtAtArg(val* self) {
val* var /* : nullable Location */;
var = self->attrs[COLOR_parser__Prod___first_location].val; /* _first_location on <self:AAtAtArg> */
}
