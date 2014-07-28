#include "nith.classes.0.h"
/* runtime class parser_nodes__ANotExpr */
const struct class class_parser_nodes__ANotExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANotExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANotExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANotExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANotExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANotExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANotExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANotExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANotExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANotExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANotExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANotExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANotExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANotExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANotExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANotExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANotExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANotExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANotExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ANotExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANotExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANotExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANotExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANotExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANotExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANotExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__replace_child, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__visit_all, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANotExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANotExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANotExpr__accept_flow_visitor, /* pointer to parser_nodes:ANotExpr:flow#ANotExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANotExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANotExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANotExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANotExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANotExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANotExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ANotExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ANotExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANotExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ANotExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ANotExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ANotExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ANotExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ANotExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ANotExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ANotExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ANotExpr__accept_typing, /* pointer to parser_nodes:ANotExpr:typing#ANotExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ANotExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ANotExpr__expr, /* pointer to parser_nodes:ANotExpr:abstract_compiler#ANotExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ANotExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ANotExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__n_kwnot_61d, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#n_kwnot= */
(nitmethod_t)VIRTUAL_parser_nodes__ANotExpr__n_expr, /* pointer to parser_nodes:ANotExpr:parser_nodes#ANotExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__n_expr_61d, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_prod__ANotExpr__init_anotexpr, /* pointer to parser_nodes:ANotExpr:parser_prod#ANotExpr#init_anotexpr */
}
};
/* allocate ANotExpr */
val* NEW_parser_nodes__ANotExpr(const struct type* type) {
val* self /* : ANotExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANotExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANotExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ANotExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANotExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ANotExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ANotExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ANotExpr exact> */
return self;
}
/* runtime class parser_nodes__AEqExpr */
const struct class class_parser_nodes__AEqExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AEqExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AEqExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AEqExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AEqExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEqExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEqExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEqExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AEqExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AEqExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AEqExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AEqExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AEqExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AEqExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AEqExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AEqExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AEqExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AEqExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AEqExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AEqExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AEqExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AEqExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AEqExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AEqExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AEqExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AEqExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__replace_child, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__visit_all, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AEqExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AEqExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AEqExpr__accept_flow_visitor, /* pointer to parser_nodes:AEqExpr:flow#AEqExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AEqExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AEqExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AEqExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AEqExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AEqExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEqExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AEqExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AEqExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AEqExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEqExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AEqExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AEqExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AEqExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AEqExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AEqExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AEqExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AEqExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AEqExpr__accept_typing, /* pointer to parser_nodes:AEqExpr:typing#AEqExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AEqExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AEqExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AEqExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AEqExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AEqExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__n_expr_61d, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AEqExpr__property_name, /* pointer to parser_nodes:AEqExpr:typing#AEqExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AEqExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AEqExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__n_expr2_61d, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__AEqExpr__init_aeqexpr, /* pointer to parser_nodes:AEqExpr:parser_prod#AEqExpr#init_aeqexpr */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AEqExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AEqExpr:typing#ASendExpr#accept_typing */
}
};
/* allocate AEqExpr */
val* NEW_parser_nodes__AEqExpr(const struct type* type) {
val* self /* : AEqExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AEqExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AEqExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AEqExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AEqExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AEqExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AEqExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AEqExpr exact> */
return self;
}
/* runtime class parser_nodes__ANeExpr */
const struct class class_parser_nodes__ANeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ANeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__replace_child, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__visit_all, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANeExpr__accept_flow_visitor, /* pointer to parser_nodes:ANeExpr:flow#ANeExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ANeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ANeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ANeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ANeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ANeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ANeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ANeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ANeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ANeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ANeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ANeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ANeExpr__accept_typing, /* pointer to parser_nodes:ANeExpr:typing#ANeExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ANeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ANeExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ANeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ANeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ANeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__n_expr_61d, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ANeExpr__property_name, /* pointer to parser_nodes:ANeExpr:typing#ANeExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ANeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ANeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__n_expr2_61d, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__ANeExpr__init_aneexpr, /* pointer to parser_nodes:ANeExpr:parser_prod#ANeExpr#init_aneexpr */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ANeExpr:typing#ASendExpr#accept_typing */
}
};
/* allocate ANeExpr */
val* NEW_parser_nodes__ANeExpr(const struct type* type) {
val* self /* : ANeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ANeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ANeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ANeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ANeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ANeExpr exact> */
return self;
}
/* runtime class parser_nodes__ALtExpr */
const struct class class_parser_nodes__ALtExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALtExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALtExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALtExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALtExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALtExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALtExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALtExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALtExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALtExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALtExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALtExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALtExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALtExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALtExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALtExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALtExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALtExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALtExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ALtExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALtExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALtExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALtExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALtExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALtExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__replace_child, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__visit_all, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALtExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ALtExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ALtExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ALtExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ALtExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALtExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ALtExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ALtExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ALtExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ALtExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ALtExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ALtExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ALtExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ALtExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALtExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ALtExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__n_expr_61d, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ALtExpr__property_name, /* pointer to parser_nodes:ALtExpr:typing#ALtExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ALtExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ALtExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__n_expr2_61d, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__ALtExpr__init_altexpr, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#init_altexpr */
}
};
/* allocate ALtExpr */
val* NEW_parser_nodes__ALtExpr(const struct type* type) {
val* self /* : ALtExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALtExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALtExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ALtExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALtExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ALtExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ALtExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ALtExpr exact> */
return self;
}
/* runtime class parser_nodes__ALeExpr */
const struct class class_parser_nodes__ALeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ALeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__replace_child, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__visit_all, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ALeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ALeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ALeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ALeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ALeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ALeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ALeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ALeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ALeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ALeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ALeExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ALeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ALeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__n_expr_61d, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ALeExpr__property_name, /* pointer to parser_nodes:ALeExpr:typing#ALeExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ALeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ALeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__n_expr2_61d, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__ALeExpr__init_aleexpr, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#init_aleexpr */
}
};
/* allocate ALeExpr */
val* NEW_parser_nodes__ALeExpr(const struct type* type) {
val* self /* : ALeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ALeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ALeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ALeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ALeExpr exact> */
return self;
}
/* runtime class parser_nodes__ALlExpr */
const struct class class_parser_nodes__ALlExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ALlExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ALlExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ALlExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ALlExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ALlExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ALlExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ALlExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ALlExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ALlExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ALlExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ALlExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ALlExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ALlExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ALlExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ALlExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ALlExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ALlExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ALlExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ALlExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ALlExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ALlExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ALlExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ALlExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ALlExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__replace_child, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__visit_all, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ALlExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ALlExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ALlExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ALlExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ALlExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ALlExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ALlExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ALlExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ALlExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ALlExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ALlExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ALlExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ALlExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ALlExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ALlExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ALlExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ALlExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:ALlExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ALlExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ALlExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ALlExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__n_expr_61d, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ALlExpr__property_name, /* pointer to parser_nodes:ALlExpr:typing#ALlExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ALlExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ALlExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__n_expr2_61d, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__ALlExpr__init_allexpr, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#init_allexpr */
}
};
/* allocate ALlExpr */
val* NEW_parser_nodes__ALlExpr(const struct type* type) {
val* self /* : ALlExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ALlExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ALlExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ALlExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ALlExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ALlExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ALlExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ALlExpr exact> */
return self;
}
/* runtime class parser_nodes__AGtExpr */
const struct class class_parser_nodes__AGtExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGtExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGtExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGtExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGtExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGtExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGtExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGtExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGtExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGtExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGtExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGtExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGtExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGtExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGtExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGtExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGtExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGtExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGtExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AGtExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AGtExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AGtExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AGtExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AGtExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AGtExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__replace_child, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__visit_all, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGtExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AGtExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AGtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AGtExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AGtExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AGtExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGtExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AGtExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AGtExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AGtExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AGtExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AGtExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AGtExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AGtExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AGtExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AGtExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AGtExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__n_expr_61d, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGtExpr__property_name, /* pointer to parser_nodes:AGtExpr:typing#AGtExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGtExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AGtExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__n_expr2_61d, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__AGtExpr__init_agtexpr, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#init_agtexpr */
}
};
/* allocate AGtExpr */
val* NEW_parser_nodes__AGtExpr(const struct type* type) {
val* self /* : AGtExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGtExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGtExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AGtExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGtExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AGtExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AGtExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AGtExpr exact> */
return self;
}
/* runtime class parser_nodes__AGeExpr */
const struct class class_parser_nodes__AGeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AGeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AGeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AGeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AGeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AGeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AGeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__replace_child, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__visit_all, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AGeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AGeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AGeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AGeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AGeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AGeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AGeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AGeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AGeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AGeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AGeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__ASendExpr__accept_typing, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__ASendExpr__expr, /* pointer to parser_nodes:AGeExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AGeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AGeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AGeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__n_expr_61d, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGeExpr__property_name, /* pointer to parser_nodes:AGeExpr:typing#AGeExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AGeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__n_expr2_61d, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#n_expr2= */
(nitmethod_t)VIRTUAL_parser_prod__AGeExpr__init_ageexpr, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#init_ageexpr */
}
};
/* allocate AGeExpr */
val* NEW_parser_nodes__AGeExpr(const struct type* type) {
val* self /* : AGeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AGeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AGeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AGeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AGeExpr exact> */
return self;
}
/* runtime class parser_nodes__AGgExpr */
const struct class class_parser_nodes__AGgExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AGgExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AGgExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AGgExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AGgExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AGgExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AGgExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AGgExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AGgExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AGgExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AGgExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AGgExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AGgExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AGgExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AGgExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AGgExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AGgExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AGgExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AGgExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AGgExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__visit_all, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AGgExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AGgExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AGgExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AGgExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AGgExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AGgExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AGgExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AGgExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AGgExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AGgExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AGgExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AGgExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__n_expr_61d, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AGgExpr__property_name, /* pointer to parser_nodes:AGgExpr:typing#AGgExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AGgExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AGgExpr__n_expr2_61d, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AGgExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AGgExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AGgExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AGgExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AGgExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AGgExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AGgExpr exact> */
return self;
}
/* runtime class parser_nodes__AIsaExpr */
const struct class class_parser_nodes__AIsaExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIsaExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIsaExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIsaExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIsaExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIsaExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIsaExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIsaExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIsaExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIsaExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIsaExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIsaExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIsaExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIsaExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIsaExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIsaExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIsaExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIsaExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIsaExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AIsaExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__visit_all, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIsaExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIsaExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AIsaExpr__accept_flow_visitor, /* pointer to parser_nodes:AIsaExpr:flow#AIsaExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIsaExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIsaExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIsaExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AIsaExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AIsaExpr:rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIsaExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AIsaExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AIsaExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIsaExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__AIsaExpr__n_expr, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__n_expr_61d, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AIsaExpr__n_type, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AIsaExpr__n_type_61d, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#n_type= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AIsaExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIsaExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AIsaExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AIsaExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AIsaExpr exact> */
return self;
}
/* runtime class parser_nodes__APlusExpr */
const struct class class_parser_nodes__APlusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APlusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APlusExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APlusExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APlusExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APlusExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APlusExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APlusExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APlusExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APlusExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APlusExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APlusExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APlusExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APlusExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APlusExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APlusExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APlusExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APlusExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APlusExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:APlusExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__visit_all, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APlusExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APlusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APlusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APlusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:APlusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:APlusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:APlusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APlusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:APlusExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:APlusExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APlusExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:APlusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__n_expr_61d, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__APlusExpr__property_name, /* pointer to parser_nodes:APlusExpr:typing#APlusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:APlusExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__APlusExpr__n_expr2_61d, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APlusExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APlusExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:APlusExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlusExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:APlusExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:APlusExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:APlusExpr exact> */
return self;
}
/* runtime class parser_nodes__AMinusExpr */
const struct class class_parser_nodes__AMinusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMinusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AMinusExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMinusExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMinusExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMinusExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMinusExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMinusExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMinusExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMinusExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMinusExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMinusExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMinusExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMinusExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMinusExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMinusExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMinusExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMinusExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMinusExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AMinusExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__visit_all, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMinusExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMinusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMinusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMinusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AMinusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AMinusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMinusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AMinusExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AMinusExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMinusExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__n_expr_61d, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AMinusExpr__property_name, /* pointer to parser_nodes:AMinusExpr:typing#AMinusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AMinusExpr__n_expr2_61d, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMinusExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AMinusExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AMinusExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMinusExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AMinusExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AMinusExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AMinusExpr exact> */
return self;
}
/* runtime class parser_nodes__AStarshipExpr */
const struct class class_parser_nodes__AStarshipExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStarshipExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStarshipExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStarshipExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStarshipExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStarshipExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStarshipExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStarshipExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStarshipExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStarshipExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStarshipExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStarshipExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AStarshipExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__visit_all, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStarshipExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarshipExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStarshipExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStarshipExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AStarshipExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStarshipExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarshipExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStarshipExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AStarshipExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AStarshipExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStarshipExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__n_expr_61d, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AStarshipExpr__property_name, /* pointer to parser_nodes:AStarshipExpr:typing#AStarshipExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AStarshipExpr__n_expr2_61d, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStarshipExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStarshipExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AStarshipExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStarshipExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AStarshipExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AStarshipExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AStarshipExpr exact> */
return self;
}
/* runtime class parser_nodes__AStarExpr */
const struct class class_parser_nodes__AStarExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStarExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStarExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStarExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStarExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStarExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStarExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStarExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStarExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStarExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStarExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStarExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStarExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStarExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStarExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStarExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStarExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStarExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStarExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AStarExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__visit_all, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AStarExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStarExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AStarExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AStarExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AStarExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStarExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AStarExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__n_expr_61d, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AStarExpr__property_name, /* pointer to parser_nodes:AStarExpr:typing#AStarExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:AStarExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__AStarExpr__n_expr2_61d, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStarExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AStarExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AStarExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStarExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AStarExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AStarExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AStarExpr exact> */
return self;
}
/* runtime class parser_nodes__ASlashExpr */
const struct class class_parser_nodes__ASlashExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASlashExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASlashExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASlashExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASlashExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASlashExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASlashExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASlashExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASlashExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASlashExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASlashExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASlashExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASlashExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASlashExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASlashExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASlashExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASlashExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASlashExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASlashExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASlashExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__visit_all, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASlashExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASlashExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASlashExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASlashExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ASlashExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASlashExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ASlashExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASlashExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASlashExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASlashExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASlashExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__n_expr_61d, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ASlashExpr__property_name, /* pointer to parser_nodes:ASlashExpr:typing#ASlashExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__ASlashExpr__n_expr2_61d, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASlashExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASlashExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ASlashExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASlashExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ASlashExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ASlashExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ASlashExpr exact> */
return self;
}
/* runtime class parser_nodes__APercentExpr */
const struct class class_parser_nodes__APercentExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APercentExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APercentExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APercentExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APercentExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APercentExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APercentExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APercentExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APercentExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APercentExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APercentExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APercentExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APercentExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APercentExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APercentExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APercentExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APercentExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APercentExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APercentExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:APercentExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__visit_all, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APercentExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APercentExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APercentExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APercentExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:APercentExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:APercentExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:APercentExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APercentExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:APercentExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:APercentExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APercentExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:APercentExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__n_expr_61d, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__APercentExpr__property_name, /* pointer to parser_nodes:APercentExpr:typing#APercentExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABinopExpr__compute_raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__ABinopExpr__n_expr2, /* pointer to parser_nodes:APercentExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)VIRTUAL_parser_prod__APercentExpr__n_expr2_61d, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#n_expr2= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APercentExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:APercentExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:APercentExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APercentExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:APercentExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:APercentExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:APercentExpr exact> */
return self;
}
/* runtime class parser_nodes__AUminusExpr */
const struct class class_parser_nodes__AUminusExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AUminusExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AUminusExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AUminusExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AUminusExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AUminusExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AUminusExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AUminusExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AUminusExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AUminusExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AUminusExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AUminusExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AUminusExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AUminusExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AUminusExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AUminusExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AUminusExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AUminusExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AUminusExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AUminusExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__visit_all, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AUminusExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AUminusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AUminusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AUminusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AUminusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AUminusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AUminusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AUminusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AUminusExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AUminusExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AUminusExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__n_expr_61d, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AUminusExpr__property_name, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__AUminusExpr__compute_raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_prod__AUminusExpr__n_minus_61d, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#n_minus= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AUminusExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AUminusExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AUminusExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AUminusExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AUminusExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AUminusExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AUminusExpr exact> */
return self;
}
/* runtime class parser_nodes__ANewExpr */
const struct class class_parser_nodes__ANewExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANewExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANewExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANewExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANewExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANewExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANewExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANewExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANewExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANewExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANewExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANewExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANewExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANewExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANewExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANewExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANewExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ANewExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__visit_all, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANewExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANewExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANewExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANewExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANewExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANewExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANewExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ANewExpr:rapid_type_analysis#ANewExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANewExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ANewExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ANewExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANewExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_kwnew_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_kwnew= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_type, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_type_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_id, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_id_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ANewExpr__n_args, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__n_args_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_prod__ANewExpr__init_anewexpr, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#init_anewexpr */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ANewExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANewExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ANewExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ANewExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ANewExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var6; /* _n_id on <self:ANewExpr exact> */
return self;
}
/* runtime class parser_nodes__AAttrExpr */
const struct class class_parser_nodes__AAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAttrExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAttrExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAttrExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAttrExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAttrExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAttrExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAttrExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAttrExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAttrExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAttrExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAttrExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAttrExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__visit_all, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAttrExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAttrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAttrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAttrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAttrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAttrExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAttrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAttrExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAttrExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__n_expr_61d, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAttrExpr__n_id_61d, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#n_id= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#attr_type */
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
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#resolve_property */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAttrExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AAttrExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AAttrExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AAttrExpr exact> */
return self;
}
/* runtime class parser_nodes__AAttrAssignExpr */
const struct class class_parser_nodes__AAttrAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAttrAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAttrAssignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__visit_all, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAttrAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAttrAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAttrAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAttrAssignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAttrAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrAssignExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAttrAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAttrAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAttrAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAttrAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_expr_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_id_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_id= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_assign_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AAttrAssignExpr__n_value_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_value= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#resolve_property */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAttrAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAttrAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AAttrAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AAttrAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AAttrAssignExpr exact> */
return self;
}
/* runtime class parser_nodes__AAttrReassignExpr */
const struct class class_parser_nodes__AAttrReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAttrReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAttrReassignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__visit_all, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAttrReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAttrReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:AAttrReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAttrReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAttrReassignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAttrReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AAttrReassignExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrReassignExpr:rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__AAttrReassignExpr__accept_transform_visitor, /* pointer to parser_nodes:AAttrReassignExpr:transform#AAttrReassignExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAttrReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAttrReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAttrReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_expr_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_id_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_id= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AAttrReassignExpr__n_value_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#resolve_property */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAttrReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAttrReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AAttrReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AAttrReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AAttrReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:AAttrReassignExpr exact> */
return self;
}
/* runtime class parser_nodes__ACallExpr */
const struct class class_parser_nodes__ACallExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACallExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACallExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACallExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACallExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACallExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACallExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACallExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACallExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACallExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACallExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACallExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACallExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACallExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACallExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACallExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACallExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__visit_all, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACallExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ACallFormExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACallExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ACallExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACallExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ACallExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACallExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACallExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACallExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ACallExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_expr_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallExpr__property_name, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ACallExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#compute_raw_arguments */
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
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_id_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallExpr__n_args_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_args= */
(nitmethod_t)VIRTUAL_scope__ACallExpr__variable_create, /* pointer to parser_nodes:ACallExpr:scope#ACallExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ANode#accept_scope_visitor */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACallExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ACallExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACallExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ACallExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ACallExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ACallExpr exact> */
return self;
}
/* runtime class parser_nodes__ACallAssignExpr */
const struct class class_parser_nodes__ACallAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACallAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACallAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACallAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACallAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACallAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACallAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACallAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACallAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACallAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACallAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACallAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACallAssignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__visit_all, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACallAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ACallFormExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACallAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ACallAssignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACallAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallAssignExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ACallAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACallAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACallAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACallAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_expr_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallAssignExpr__property_name, /* pointer to parser_nodes:ACallAssignExpr:typing#ACallAssignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ACallAssignExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallAssignExpr:typing#ACallAssignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_assign_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_value_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_value= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_id_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallAssignExpr__n_args_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_args= */
(nitmethod_t)VIRTUAL_scope__ACallAssignExpr__variable_create, /* pointer to parser_nodes:ACallAssignExpr:scope#ACallAssignExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ANode#accept_scope_visitor */
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
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACallAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ACallAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACallAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ACallAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ACallAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ACallAssignExpr exact> */
return self;
}
/* runtime class parser_nodes__ACallReassignExpr */
const struct class class_parser_nodes__ACallReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACallReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACallReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACallReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACallReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACallReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACallReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACallReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACallReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACallReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACallReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACallReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACallReassignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__visit_all, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACallReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ACallFormExpr__accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:ACallReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACallReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ACallReassignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACallReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallReassignExpr:rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor, /* pointer to parser_nodes:ACallReassignExpr:transform#ASendReassignFormExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACallReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACallReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACallReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_expr_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ACallReassignExpr__property_name, /* pointer to parser_nodes:ACallReassignExpr:typing#ACallReassignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ACallReassignExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallReassignExpr:typing#ACallReassignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_value_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_id, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_id_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_nodes__ACallFormExpr__n_args, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ACallReassignExpr__n_args_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_args= */
(nitmethod_t)VIRTUAL_scope__ACallReassignExpr__variable_create, /* pointer to parser_nodes:ACallReassignExpr:scope#ACallReassignExpr#variable_create */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_callsite */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_callsite= */
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
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACallReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ACallReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACallReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ACallReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ACallReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ACallReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:ACallReassignExpr exact> */
return self;
}
/* runtime class parser_nodes__ASuperExpr */
const struct class class_parser_nodes__ASuperExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASuperExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASuperExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASuperExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASuperExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASuperExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASuperExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASuperExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASuperExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASuperExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASuperExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASuperExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASuperExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASuperExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASuperExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASuperExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASuperExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__visit_all, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASuperExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASuperExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASuperExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASuperExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASuperExpr__accept_auto_super_init, /* pointer to parser_nodes:ASuperExpr:auto_super_init#ASuperExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASuperExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASuperExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperExpr:rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASuperExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASuperExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASuperExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASuperExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__n_qualified_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_qualified= */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__n_kwsuper_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_kwsuper= */
(nitmethod_t)VIRTUAL_parser_nodes__ASuperExpr__n_args, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ASuperExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__n_args_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_args= */
(nitmethod_t)VIRTUAL_parser_prod__ASuperExpr__init_asuperexpr, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#init_asuperexpr */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__callsite, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__callsite_61d, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__mpropdef, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#mpropdef */
(nitmethod_t)VIRTUAL_typing__ASuperExpr__mpropdef_61d, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#mpropdef= */
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
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASuperExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ASuperExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ASuperExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASuperExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ASuperExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ASuperExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ASuperExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var6; /* _n_qualified on <self:ASuperExpr exact> */
return self;
}
/* runtime class parser_nodes__AInitExpr */
const struct class class_parser_nodes__AInitExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AInitExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AInitExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AInitExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AInitExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInitExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInitExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInitExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AInitExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AInitExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AInitExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AInitExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AInitExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AInitExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AInitExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AInitExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AInitExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AInitExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AInitExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AInitExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__visit_all, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AInitExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AInitExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AInitExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AInitExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:AInitExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AInitExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AInitExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AInitExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AInitExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AInitExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AInitExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:AInitExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__n_expr_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__AInitExpr__property_name, /* pointer to parser_nodes:AInitExpr:typing#AInitExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__AInitExpr__compute_raw_arguments, /* pointer to parser_nodes:AInitExpr:typing#AInitExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__n_kwinit_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_kwinit= */
(nitmethod_t)VIRTUAL_parser_nodes__AInitExpr__n_args, /* pointer to parser_nodes:AInitExpr:parser_nodes#AInitExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__AInitExpr__n_args_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_args= */
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
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AInitExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AInitExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AInitExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AInitExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AInitExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AInitExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AInitExpr exact> */
return self;
}
/* runtime class parser_nodes__ABraExpr */
const struct class class_parser_nodes__ABraExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__visit_all, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ABraExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABraExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ABraExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABraExpr__n_expr_61d, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ABraExpr__property_name, /* pointer to parser_nodes:ABraExpr:typing#ABraExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABraExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraExpr:typing#ABraExpr#compute_raw_arguments */
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
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ABraExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ABraExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ABraExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ABraExpr exact> */
return self;
}
/* runtime class parser_nodes__ABraAssignExpr */
const struct class class_parser_nodes__ABraAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraAssignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__visit_all, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ABraAssignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABraAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraAssignExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_expr_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ABraAssignExpr__property_name, /* pointer to parser_nodes:ABraAssignExpr:typing#ABraAssignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABraAssignExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraAssignExpr:typing#ABraAssignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_assign_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_value_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_value= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__n_args, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ABraAssignExpr__n_args_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_args= */
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
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ABraAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ABraAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ABraAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ABraAssignExpr exact> */
return self;
}
/* runtime class parser_nodes__ABraReassignExpr */
const struct class class_parser_nodes__ABraReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraReassignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__visit_all, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:ABraReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ASendExpr__accept_auto_super_init, /* pointer to parser_nodes:ABraReassignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ABraReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASendReassignFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraReassignExpr:rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ASendReassignFormExpr__accept_transform_visitor, /* pointer to parser_nodes:ABraReassignExpr:transform#ASendReassignFormExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__ASendExpr__n_expr, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_expr_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_expr= */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#callsite */
(nitmethod_t)VIRTUAL_typing__ASendExpr__callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)VIRTUAL_typing__ABraReassignExpr__property_name, /* pointer to parser_nodes:ABraReassignExpr:typing#ABraReassignExpr#property_name */
(nitmethod_t)VIRTUAL_typing__ASendExpr__raw_arguments, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)VIRTUAL_typing__ABraReassignExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraReassignExpr:typing#ABraReassignExpr#compute_raw_arguments */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_value_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__ABraFormExpr__n_args, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)VIRTUAL_parser_prod__ABraReassignExpr__n_args_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_args= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_callsite */
(nitmethod_t)VIRTUAL_typing__ASendReassignFormExpr__write_callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_callsite= */
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
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ABraReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ABraReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ABraReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ABraReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ABraReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:ABraReassignExpr exact> */
return self;
}
/* runtime class parser_nodes__AVarExpr */
const struct class class_parser_nodes__AVarExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AVarExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__visit_all, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVarExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVarExpr:local_var_init#AVarExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AVarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AVarExpr__n_id_61d, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#n_id= */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable, /* pointer to parser_nodes:AVarExpr:scope#AVarFormExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable_61d, /* pointer to parser_nodes:AVarExpr:scope#AVarFormExpr#variable= */
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
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVarExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AVarExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AVarExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AVarExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AVarExpr exact> */
return self;
}
/* runtime class parser_nodes__AVarAssignExpr */
const struct class class_parser_nodes__AVarAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarAssignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarAssignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarAssignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarAssignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarAssignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarAssignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarAssignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarAssignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarAssignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarAssignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarAssignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarAssignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__visit_all, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AVarAssignExpr__accept_flow_visitor, /* pointer to parser_nodes:AVarAssignExpr:flow#AVarAssignExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVarAssignExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVarAssignExpr:local_var_init#AVarAssignExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarAssignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarAssignExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AVarAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarAssignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__n_id_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_id= */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable, /* pointer to parser_nodes:AVarAssignExpr:scope#AVarFormExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable_61d, /* pointer to parser_nodes:AVarAssignExpr:scope#AVarFormExpr#variable= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_assign, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__n_assign_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_assign= */
(nitmethod_t)VIRTUAL_parser_nodes__AAssignFormExpr__n_value, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AVarAssignExpr__n_value_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_value= */
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
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVarAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AVarAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarAssignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AVarAssignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AVarAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AVarAssignExpr exact> */
return self;
}
/* runtime class parser_nodes__AVarReassignExpr */
const struct class class_parser_nodes__AVarReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarReassignExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarReassignExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarReassignExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarReassignExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarReassignExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarReassignExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarReassignExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarReassignExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarReassignExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarReassignExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarReassignExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarReassignExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__visit_all, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AReassignFormExpr__accept_flow_visitor, /* pointer to parser_nodes:AVarReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__AVarReassignExpr__accept_local_var_visitor, /* pointer to parser_nodes:AVarReassignExpr:local_var_init#AVarReassignExpr#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarReassignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AVarReassignExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarReassignExpr:rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__AVarReassignExpr__accept_transform_visitor, /* pointer to parser_nodes:AVarReassignExpr:transform#AVarReassignExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarReassignExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__n_id_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_id= */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable, /* pointer to parser_nodes:AVarReassignExpr:scope#AVarFormExpr#variable */
(nitmethod_t)VIRTUAL_scope__AVarFormExpr__variable_61d, /* pointer to parser_nodes:AVarReassignExpr:scope#AVarFormExpr#variable= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_assign_op, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__n_assign_op_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_assign_op= */
(nitmethod_t)VIRTUAL_parser_nodes__AReassignFormExpr__n_value, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)VIRTUAL_parser_prod__AVarReassignExpr__n_value_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_value= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__read_type_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)VIRTUAL_typing__AReassignFormExpr__resolve_reassignment, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarReassignExpr:flow#ANode#accept_flow_visitor */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AVarReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarReassignExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AVarReassignExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AVarReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AVarReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:AVarReassignExpr exact> */
return self;
}
/* runtime class parser_nodes__ACrangeExpr */
const struct class class_parser_nodes__ACrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACrangeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACrangeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACrangeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACrangeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACrangeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACrangeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACrangeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACrangeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACrangeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACrangeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACrangeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACrangeExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__visit_all, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ACrangeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACrangeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACrangeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACrangeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ACrangeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACrangeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ACrangeExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACrangeExpr:rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ACrangeExpr__accept_transform_visitor, /* pointer to parser_nodes:ACrangeExpr:transform#ACrangeExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_annotations_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACrangeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACrangeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACrangeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_typing__ARangeExpr__init_callsite, /* pointer to parser_nodes:ACrangeExpr:typing#ARangeExpr#init_callsite */
(nitmethod_t)VIRTUAL_typing__ARangeExpr__init_callsite_61d, /* pointer to parser_nodes:ACrangeExpr:typing#ARangeExpr#init_callsite= */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_obra_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_obra= */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_cbra_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_cbra= */
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
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACrangeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ACrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ACrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACrangeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ACrangeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ACrangeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ACrangeExpr exact> */
return self;
}
/* runtime class parser_nodes__AOrangeExpr */
const struct class class_parser_nodes__AOrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AOrangeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AOrangeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AOrangeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AOrangeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AOrangeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AOrangeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AOrangeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AOrangeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AOrangeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AOrangeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AOrangeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AOrangeExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__visit_all, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AOrangeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AOrangeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AOrangeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AOrangeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AOrangeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AOrangeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AOrangeExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AOrangeExpr:rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__AOrangeExpr__accept_transform_visitor, /* pointer to parser_nodes:AOrangeExpr:transform#AOrangeExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_annotations_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AOrangeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AOrangeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AOrangeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_typing__ARangeExpr__init_callsite, /* pointer to parser_nodes:AOrangeExpr:typing#ARangeExpr#init_callsite */
(nitmethod_t)VIRTUAL_typing__ARangeExpr__init_callsite_61d, /* pointer to parser_nodes:AOrangeExpr:typing#ARangeExpr#init_callsite= */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_obra_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_obra= */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_cbra_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_cbra= */
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
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AOrangeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AOrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AOrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AOrangeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AOrangeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AOrangeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AOrangeExpr exact> */
return self;
}
/* runtime class parser_nodes__AArrayExpr */
const struct class class_parser_nodes__AArrayExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AArrayExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AArrayExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AArrayExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AArrayExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AArrayExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AArrayExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AArrayExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AArrayExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AArrayExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AArrayExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AArrayExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AArrayExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AArrayExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AArrayExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AArrayExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AArrayExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AArrayExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AArrayExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AArrayExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__visit_all, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AArrayExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AArrayExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AArrayExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AArrayExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AArrayExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AArrayExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AArrayExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AArrayExpr:rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__AArrayExpr__accept_transform_visitor, /* pointer to parser_nodes:AArrayExpr:transform#AArrayExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_annotations_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AArrayExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AArrayExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AArrayExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__init_aarrayexpr, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#init_aarrayexpr */
(nitmethod_t)VIRTUAL_typing__AArrayExpr__with_capacity_callsite, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#with_capacity_callsite */
(nitmethod_t)VIRTUAL_typing__AArrayExpr__with_capacity_callsite_61d, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#with_capacity_callsite= */
(nitmethod_t)VIRTUAL_typing__AArrayExpr__push_callsite, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#push_callsite */
(nitmethod_t)VIRTUAL_typing__AArrayExpr__push_callsite_61d, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#push_callsite= */
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
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AArrayExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AArrayExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AArrayExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AArrayExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AArrayExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AArrayExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AArrayExpr exact> */
return self;
}
/* runtime class parser_nodes__ASelfExpr */
const struct class class_parser_nodes__ASelfExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASelfExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASelfExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASelfExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASelfExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASelfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASelfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASelfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASelfExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASelfExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASelfExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASelfExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASelfExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASelfExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASelfExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASelfExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASelfExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASelfExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASelfExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASelfExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__visit_all, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASelfExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__accept_scope_visitor, /* pointer to parser_nodes:ASelfExpr:scope#ASelfExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASelfExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASelfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASelfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASelfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASelfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASelfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASelfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASelfExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASelfExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_kwself_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_kwself= */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__init_aselfexpr, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#init_aselfexpr */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ASelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASelfExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ASelfExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ASelfExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ASelfExpr exact> */
return self;
}
/* runtime class parser_nodes__AImplicitSelfExpr */
const struct class class_parser_nodes__AImplicitSelfExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AImplicitSelfExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AImplicitSelfExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AImplicitSelfExpr__visit_all, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AImplicitSelfExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__accept_scope_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AImplicitSelfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AImplicitSelfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AImplicitSelfExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_kwself_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_kwself= */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__init_aselfexpr, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#init_aselfexpr */
(nitmethod_t)VIRTUAL_scope__ASelfExpr__variable_61d, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#variable= */
(nitmethod_t)VIRTUAL_typing__ASelfExpr__its_variable_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#its_variable= */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ANode#accept_scope_visitor */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AImplicitSelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AImplicitSelfExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AImplicitSelfExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AImplicitSelfExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AImplicitSelfExpr exact> */
return self;
}
/* runtime class parser_nodes__ATrueExpr */
const struct class class_parser_nodes__ATrueExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATrueExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ATrueExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATrueExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATrueExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATrueExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATrueExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATrueExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATrueExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATrueExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATrueExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATrueExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATrueExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATrueExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATrueExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATrueExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATrueExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATrueExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATrueExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ATrueExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__visit_all, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATrueExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATrueExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATrueExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATrueExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATrueExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ATrueExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ATrueExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ATrueExpr:rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATrueExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__n_annotations_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ATrueExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ATrueExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ATrueExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__n_kwtrue_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_kwtrue= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ATrueExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ATrueExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ATrueExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ATrueExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ATrueExpr exact> */
return self;
}
/* runtime class parser_nodes__AFalseExpr */
const struct class class_parser_nodes__AFalseExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AFalseExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AFalseExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AFalseExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AFalseExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFalseExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFalseExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFalseExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AFalseExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AFalseExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AFalseExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AFalseExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AFalseExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AFalseExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AFalseExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AFalseExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AFalseExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AFalseExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AFalseExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AFalseExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__visit_all, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AFalseExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AFalseExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AFalseExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AFalseExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AFalseExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AFalseExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AFalseExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AFalseExpr:rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AFalseExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__n_annotations_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AFalseExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AFalseExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AFalseExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__n_kwfalse_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_kwfalse= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AFalseExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AFalseExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AFalseExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AFalseExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AFalseExpr exact> */
return self;
}
/* runtime class parser_nodes__ANullExpr */
const struct class class_parser_nodes__ANullExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANullExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANullExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANullExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANullExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANullExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANullExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANullExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ANullExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ANullExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ANullExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ANullExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ANullExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ANullExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ANullExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ANullExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ANullExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ANullExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ANullExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ANullExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__visit_all, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ANullExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ANullExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ANullExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ANullExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ANullExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ANullExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANullExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ANullExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__n_annotations_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ANullExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ANullExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ANullExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__n_kwnull_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_kwnull= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ANullExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ANullExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ANullExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ANullExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ANullExpr exact> */
return self;
}
/* runtime class parser_nodes__AIntExpr */
/* allocate AIntExpr */
val* NEW_parser_nodes__AIntExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AIntExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__ADecIntExpr */
const struct class class_parser_nodes__ADecIntExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ADecIntExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ADecIntExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ADecIntExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ADecIntExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ADecIntExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ADecIntExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ADecIntExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ADecIntExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ADecIntExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ADecIntExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ADecIntExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ADecIntExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__ADecIntExpr__replace_child, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ADecIntExpr__visit_all, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ADecIntExpr__accept_literal, /* pointer to parser_nodes:ADecIntExpr:literal#ADecIntExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ADecIntExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ADecIntExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ADecIntExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ADecIntExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ADecIntExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AIntExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ADecIntExpr:rapid_type_analysis#AIntExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ADecIntExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ADecIntExpr__n_annotations_61d, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ADecIntExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ADecIntExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ADecIntExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ADecIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ADecIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIntExpr__accept_typing, /* pointer to parser_nodes:ADecIntExpr:typing#AIntExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIntExpr__expr, /* pointer to parser_nodes:ADecIntExpr:abstract_compiler#AIntExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ADecIntExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ADecIntExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_literal__AIntExpr__value, /* pointer to parser_nodes:ADecIntExpr:literal#AIntExpr#value */
(nitmethod_t)VIRTUAL_literal__AIntExpr__value_61d, /* pointer to parser_nodes:ADecIntExpr:literal#AIntExpr#value= */
(nitmethod_t)VIRTUAL_parser_nodes__ADecIntExpr__n_number, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ADecIntExpr#n_number */
(nitmethod_t)VIRTUAL_parser_prod__ADecIntExpr__n_number_61d, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#n_number= */
(nitmethod_t)VIRTUAL_parser_prod__ADecIntExpr__init_adecintexpr, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#init_adecintexpr */
(nitmethod_t)VIRTUAL_astbuilder__ADecIntExpr__make, /* pointer to parser_nodes:ADecIntExpr:astbuilder#ADecIntExpr#make */
}
};
/* allocate ADecIntExpr */
val* NEW_parser_nodes__ADecIntExpr(const struct type* type) {
val* self /* : ADecIntExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADecIntExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ADecIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ADecIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ADecIntExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ADecIntExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ADecIntExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ADecIntExpr exact> */
return self;
}
/* runtime class parser_nodes__AHexIntExpr */
const struct class class_parser_nodes__AHexIntExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AHexIntExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AHexIntExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AHexIntExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AHexIntExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AHexIntExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AHexIntExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AHexIntExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AHexIntExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AHexIntExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AHexIntExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AHexIntExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AHexIntExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AHexIntExpr__replace_child, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AHexIntExpr__visit_all, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__AHexIntExpr__accept_literal, /* pointer to parser_nodes:AHexIntExpr:literal#AHexIntExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AHexIntExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AHexIntExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AHexIntExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AHexIntExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AHexIntExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AIntExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AHexIntExpr:rapid_type_analysis#AIntExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AHexIntExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AHexIntExpr__n_annotations_61d, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AHexIntExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AHexIntExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AHexIntExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AHexIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AHexIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AIntExpr__accept_typing, /* pointer to parser_nodes:AHexIntExpr:typing#AIntExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AIntExpr__expr, /* pointer to parser_nodes:AHexIntExpr:abstract_compiler#AIntExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AHexIntExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AHexIntExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_literal__AIntExpr__value, /* pointer to parser_nodes:AHexIntExpr:literal#AIntExpr#value */
(nitmethod_t)VIRTUAL_literal__AIntExpr__value_61d, /* pointer to parser_nodes:AHexIntExpr:literal#AIntExpr#value= */
(nitmethod_t)VIRTUAL_parser_nodes__AHexIntExpr__n_hex_number, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#AHexIntExpr#n_hex_number */
(nitmethod_t)VIRTUAL_parser_prod__AHexIntExpr__n_hex_number_61d, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#n_hex_number= */
(nitmethod_t)VIRTUAL_parser_prod__AHexIntExpr__init_ahexintexpr, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#init_ahexintexpr */
}
};
/* allocate AHexIntExpr */
val* NEW_parser_nodes__AHexIntExpr(const struct type* type) {
val* self /* : AHexIntExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AHexIntExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AHexIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AHexIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AHexIntExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AHexIntExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AHexIntExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AHexIntExpr exact> */
return self;
}
/* runtime class parser_nodes__AFloatExpr */
const struct class class_parser_nodes__AFloatExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AFloatExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AFloatExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AFloatExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AFloatExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFloatExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFloatExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFloatExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AFloatExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AFloatExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AFloatExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AFloatExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AFloatExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AFloatExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AFloatExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AFloatExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AFloatExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AFloatExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AFloatExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AFloatExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__visit_all, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__AFloatExpr__accept_literal, /* pointer to parser_nodes:AFloatExpr:literal#AFloatExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AFloatExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AFloatExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AFloatExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AFloatExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AFloatExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AFloatExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AFloatExpr:rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AFloatExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__n_annotations_61d, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AFloatExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AFloatExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AFloatExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__init_afloatexpr, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#init_afloatexpr */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AFloatExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AFloatExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AFloatExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AFloatExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AFloatExpr exact> */
return self;
}
/* runtime class parser_nodes__ACharExpr */
const struct class class_parser_nodes__ACharExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACharExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACharExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACharExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACharExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACharExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACharExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACharExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ACharExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ACharExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ACharExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ACharExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ACharExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ACharExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ACharExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ACharExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ACharExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ACharExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ACharExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACharExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__visit_all, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ACharExpr__accept_literal, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ACharExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ACharExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ACharExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ACharExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ACharExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ACharExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ACharExpr:rapid_type_analysis#ACharExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ACharExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__n_annotations_61d, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACharExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACharExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ACharExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#replace_with */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ACharExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ACharExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ACharExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ACharExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ACharExpr exact> */
return self;
}
/* runtime class parser_nodes__AStringExpr */
const struct class class_parser_nodes__AStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AStringExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__visit_all, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__n_annotations_61d, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#value= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AStringExpr exact> */
return self;
}
/* runtime class parser_nodes__AStartStringExpr */
const struct class class_parser_nodes__AStartStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AStartStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AStartStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AStartStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AStartStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AStartStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AStartStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AStartStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AStartStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AStartStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AStartStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AStartStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AStartStringExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AStartStringExpr__visit_all, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AStartStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AStartStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AStartStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AStartStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AStartStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AStartStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AStartStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AStartStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AStartStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AStartStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#value= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AStartStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AStartStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AStartStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AStartStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AStartStringExpr exact> */
return self;
}
/* runtime class parser_nodes__AMidStringExpr */
const struct class class_parser_nodes__AMidStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMidStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMidStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMidStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMidStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMidStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMidStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMidStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMidStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMidStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMidStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMidStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AMidStringExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMidStringExpr__visit_all, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMidStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMidStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMidStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMidStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AMidStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AMidStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMidStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AMidStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AMidStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMidStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#value= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AMidStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMidStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AMidStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AMidStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AMidStringExpr exact> */
return self;
}
/* runtime class parser_nodes__AEndStringExpr */
const struct class class_parser_nodes__AEndStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AEndStringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AEndStringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AEndStringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AEndStringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AEndStringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AEndStringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AEndStringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AEndStringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AEndStringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AEndStringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AEndStringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AEndStringExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AEndStringExpr__visit_all, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__accept_literal, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AEndStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AEndStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AEndStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AEndStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AEndStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AStringFormExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AEndStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AEndStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AEndStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AEndStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AEndStringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)VIRTUAL_literal__AStringFormExpr__value_61d, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#value= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AEndStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AEndStringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AEndStringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AEndStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AEndStringExpr exact> */
return self;
}
/* runtime class parser_nodes__ASuperstringExpr */
const struct class class_parser_nodes__ASuperstringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ASuperstringExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ASuperstringExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ASuperstringExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ASuperstringExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ASuperstringExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ASuperstringExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ASuperstringExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ASuperstringExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ASuperstringExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ASuperstringExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ASuperstringExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASuperstringExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__visit_all, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ASuperstringExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASuperstringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ASuperstringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ASuperstringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ASuperstringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ASuperstringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ASuperstringExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperstringExpr:rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ASuperstringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__n_annotations_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASuperstringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASuperstringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ASuperstringExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#replace_with */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ASuperstringExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ASuperstringExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ASuperstringExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ASuperstringExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ASuperstringExpr exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
{ /* Inline parser_nodes#ANodes#init (var6,self) on <var6:ANodes[AExpr]> */
var6->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var6:ANodes[AExpr]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val = var6; /* _n_exprs on <self:ASuperstringExpr exact> */
return self;
}
/* runtime class parser_nodes__AParExpr */
const struct class class_parser_nodes__AParExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AParExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AParExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AParExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AParExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AParExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AParExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AParExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AParExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AParExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AParExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AParExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AParExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AParExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AParExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AParExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AParExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__visit_all, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AProxyExpr__accept_flow_visitor, /* pointer to parser_nodes:AParExpr:flow#AProxyExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__AParExpr__accept_transform_visitor, /* pointer to parser_nodes:AParExpr:transform#AParExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_annotations_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AParExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AParExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AParExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_opar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_cpar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_cpar= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AParExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AParExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AParExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AParExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AParExpr exact> */
return self;
}
/* runtime class parser_nodes__AAsCastExpr */
const struct class class_parser_nodes__AAsCastExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAsCastExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAsCastExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAsCastExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAsCastExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAsCastExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAsCastExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAsCastExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAsCastExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAsCastExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAsCastExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAsCastExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAsCastExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__visit_all, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAsCastExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAsCastExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAsCastExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAsCastExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAsCastExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAsCastExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__AAsCastExpr__accept_rapid_type_visitor, /* pointer to parser_nodes:AAsCastExpr:rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAsCastExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAsCastExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAsCastExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAsCastExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_kwas_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_kwas= */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_opar_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAsCastExpr__n_type, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_type_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_prod__AAsCastExpr__n_cpar_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_cpar= */
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
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAsCastExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAsCastExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAsCastExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAsCastExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AAsCastExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AAsCastExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AAsCastExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var6; /* _n_opar on <self:AAsCastExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var7; /* _n_cpar on <self:AAsCastExpr exact> */
return self;
}
/* runtime class parser_nodes__AAsNotnullExpr */
const struct class class_parser_nodes__AAsNotnullExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAsNotnullExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAsNotnullExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__visit_all, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAsNotnullExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAsNotnullExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAsNotnullExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAsNotnullExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAsNotnullExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAsNotnullExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAsNotnullExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAsNotnullExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAsNotnullExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAsNotnullExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAsNotnullExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_kwas_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwas= */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_opar_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnot_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwnot= */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_kwnull_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwnull= */
(nitmethod_t)VIRTUAL_parser_prod__AAsNotnullExpr__n_cpar_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_cpar= */
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
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAsNotnullExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAsNotnullExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAsNotnullExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAsNotnullExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AAsNotnullExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AAsNotnullExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AAsNotnullExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var6; /* _n_opar on <self:AAsNotnullExpr exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var7; /* _n_cpar on <self:AAsNotnullExpr exact> */
return self;
}
/* runtime class parser_nodes__AIssetAttrExpr */
const struct class class_parser_nodes__AIssetAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIssetAttrExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AIssetAttrExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__visit_all, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIssetAttrExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIssetAttrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIssetAttrExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIssetAttrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIssetAttrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AIssetAttrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIssetAttrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIssetAttrExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AIssetAttrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AIssetAttrExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIssetAttrExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_expr, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__n_expr_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__AAttrFormExpr__n_id, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__n_id_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_id= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__mproperty_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#attr_type */
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
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__attr_type_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)VIRTUAL_typing__AAttrFormExpr__resolve_property, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)VIRTUAL_parser_prod__AIssetAttrExpr__n_kwisset_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_kwisset= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AIssetAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIssetAttrExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AIssetAttrExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AIssetAttrExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AIssetAttrExpr exact> */
return self;
}
/* runtime class parser_nodes__AVarargExpr */
const struct class class_parser_nodes__AVarargExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AVarargExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AVarargExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AVarargExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AVarargExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarargExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarargExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarargExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AVarargExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AVarargExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AVarargExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AVarargExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AVarargExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AVarargExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AVarargExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AVarargExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AVarargExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AVarargExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AVarargExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarargExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AVarargExpr__replace_child, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AVarargExpr__visit_all, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AVarargExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AVarargExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarargExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarargExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AVarargExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AVarargExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarargExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AVarargExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarargExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarargExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AVarargExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarargExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarargExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AVarargExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AVarargExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AVarargExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_prod__AVarargExpr__n_expr_61d, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_prod__AVarargExpr__n_dotdotdot_61d, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#n_dotdotdot= */
(nitmethod_t)VIRTUAL_parser_prod__AVarargExpr__init_avarargexpr, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#init_avarargexpr */
}
};
/* allocate AVarargExpr */
val* NEW_parser_nodes__AVarargExpr(const struct type* type) {
val* self /* : AVarargExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarargExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AVarargExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AVarargExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AVarargExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:AVarargExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AVarargExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:AVarargExpr exact> */
return self;
}
/* runtime class parser_nodes__ADebugTypeExpr */
const struct class class_parser_nodes__ADebugTypeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ADebugTypeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ADebugTypeExpr:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__visit_all, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ADebugTypeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ADebugTypeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ADebugTypeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ADebugTypeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ADebugTypeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ADebugTypeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ADebugTypeExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ADebugTypeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ADebugTypeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ADebugTypeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ADebugTypeExpr:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#replace_with */
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
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_kwdebug_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_kwdebug= */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_kwtype_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_kwtype= */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__n_expr, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_expr_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_nodes__ADebugTypeExpr__n_type, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__ADebugTypeExpr__n_type_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_type= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ADebugTypeExpr exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ADebugTypeExpr exact> */
var3 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var3; /* _mtype on <self:ADebugTypeExpr exact> */
var4 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:ADebugTypeExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var5; /* _implicit_cast_to on <self:ADebugTypeExpr exact> */
return self;
}
/* runtime class parser_nodes__AListExprs */
const struct class class_parser_nodes__AListExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AListExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AListExprs:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AListExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AListExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AListExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AListExprs:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AListExprs:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AListExprs:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AListExprs:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AListExprs:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AListExprs:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AListExprs:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AListExprs:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AListExprs:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AListExprs:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AListExprs:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AListExprs:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AListExprs__visit_all, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AListExprs:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AListExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AListExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AListExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AListExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AListExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AListExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AListExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AListExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AListExprs:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AListExprs:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:AListExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__init, /* pointer to parser_nodes:AListExprs:parser_nodes#AExprs#init */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:AListExprs:typing#AExprs#to_a */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AListExprs exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AListExprs exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
{ /* Inline parser_nodes#ANodes#init (var3,self) on <var3:ANodes[AExpr]> */
var3->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var3:ANodes[AExpr]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var3; /* _n_exprs on <self:AListExprs exact> */
return self;
}
/* runtime class parser_nodes__AParExprs */
const struct class class_parser_nodes__AParExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AParExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AParExprs:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AParExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AParExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AParExprs:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AParExprs:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AParExprs:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AParExprs:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AParExprs:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AParExprs:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AParExprs:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AParExprs:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AParExprs:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AParExprs:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AParExprs:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AParExprs:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__visit_all, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParExprs:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AParExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AParExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AParExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AParExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AParExprs:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AParExprs:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:AParExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__init, /* pointer to parser_nodes:AParExprs:parser_nodes#AExprs#init */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:AParExprs:typing#AExprs#to_a */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__n_opar_61d, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#n_opar= */
(nitmethod_t)VIRTUAL_parser_prod__AParExprs__n_cpar_61d, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#n_cpar= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AParExprs exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AParExprs exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
{ /* Inline parser_nodes#ANodes#init (var3,self) on <var3:ANodes[AExpr]> */
var3->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var3:ANodes[AExpr]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var3; /* _n_exprs on <self:AParExprs exact> */
return self;
}
/* runtime class parser_nodes__ABraExprs */
const struct class class_parser_nodes__ABraExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraExprs:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ABraExprs:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ABraExprs:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ABraExprs:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ABraExprs:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ABraExprs:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ABraExprs:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ABraExprs:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ABraExprs:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ABraExprs:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ABraExprs:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ABraExprs:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraExprs:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__visit_all, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ABraExprs:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ABraExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ABraExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ABraExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraExprs:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ABraExprs:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:ABraExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__init, /* pointer to parser_nodes:ABraExprs:parser_nodes#AExprs#init */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:ABraExprs:typing#AExprs#to_a */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__n_obra_61d, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#n_obra= */
(nitmethod_t)VIRTUAL_parser_prod__ABraExprs__n_cbra_61d, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#n_cbra= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ABraExprs exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ABraExprs exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
{ /* Inline parser_nodes#ANodes#init (var3,self) on <var3:ANodes[AExpr]> */
var3->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var3:ANodes[AExpr]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var3; /* _n_exprs on <self:ABraExprs exact> */
return self;
}
/* runtime class parser_nodes__APlusAssignOp */
const struct class class_parser_nodes__APlusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:APlusAssignOp:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:APlusAssignOp:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:APlusAssignOp:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:APlusAssignOp:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:APlusAssignOp:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:APlusAssignOp:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:APlusAssignOp:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:APlusAssignOp:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:APlusAssignOp:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:APlusAssignOp:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:APlusAssignOp:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:APlusAssignOp:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__visit_all, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:APlusAssignOp:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:APlusAssignOp:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:APlusAssignOp:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:APlusAssignOp:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:APlusAssignOp:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:APlusAssignOp:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APlusAssignOp:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:APlusAssignOp:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:APlusAssignOp:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:APlusAssignOp:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:APlusAssignOp:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__APlusAssignOp__n_pluseq_61d, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#n_pluseq= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:APlusAssignOp exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:APlusAssignOp exact> */
return self;
}
/* runtime class parser_nodes__AMinusAssignOp */
const struct class class_parser_nodes__AMinusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMinusAssignOp:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMinusAssignOp:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMinusAssignOp:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMinusAssignOp:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMinusAssignOp:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMinusAssignOp:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMinusAssignOp:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMinusAssignOp:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMinusAssignOp:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMinusAssignOp:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMinusAssignOp:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AMinusAssignOp:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__visit_all, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMinusAssignOp:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMinusAssignOp:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMinusAssignOp:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMinusAssignOp:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMinusAssignOp:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMinusAssignOp:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusAssignOp:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMinusAssignOp:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AMinusAssignOp:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AMinusAssignOp:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AMinusAssignOp:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMinusAssignOp__n_minuseq_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#n_minuseq= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AMinusAssignOp exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AMinusAssignOp exact> */
return self;
}
/* runtime class parser_nodes__AModuleName */
const struct class class_parser_nodes__AModuleName = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AModuleName:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AModuleName:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AModuleName:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AModuleName:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AModuleName:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AModuleName:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AModuleName:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AModuleName:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AModuleName:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AModuleName:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AModuleName:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AModuleName:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AModuleName:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AModuleName:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AModuleName:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AModuleName:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AModuleName:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AModuleName:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AModuleName:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__visit_all, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AModuleName:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AModuleName:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AModuleName:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AModuleName:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AModuleName:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AModuleName:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AModuleName:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AModuleName:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AModuleName:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AModuleName:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AModuleName:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__n_quad, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_quad */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__n_quad_61d, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#n_quad= */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__n_path, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_path */
(nitmethod_t)VIRTUAL_parser_nodes__AModuleName__n_id, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AModuleName__n_id_61d, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#n_id= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AModuleName exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AModuleName exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var3; /* _n_quad on <self:AModuleName exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
{
{ /* Inline parser_nodes#ANodes#init (var4,self) on <var4:ANodes[TId]> */
var4->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var4:ANodes[TId]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AModuleName___n_path].val = var4; /* _n_path on <self:AModuleName exact> */
return self;
}
/* runtime class parser_nodes__AInLanguage */
const struct class class_parser_nodes__AInLanguage = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AInLanguage:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AInLanguage:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AInLanguage:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AInLanguage:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AInLanguage:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AInLanguage:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AInLanguage:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AInLanguage:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AInLanguage:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AInLanguage:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AInLanguage:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AInLanguage:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AInLanguage:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AInLanguage:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AInLanguage:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AInLanguage:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__visit_all, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AInLanguage:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AInLanguage:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AInLanguage:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AInLanguage:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AInLanguage:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AInLanguage:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AInLanguage:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AInLanguage:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AInLanguage:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AInLanguage:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AInLanguage:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__n_kwin_61d, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#n_kwin= */
(nitmethod_t)VIRTUAL_parser_prod__AInLanguage__n_string_61d, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#n_string= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AInLanguage exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AInLanguage exact> */
return self;
}
/* runtime class parser_nodes__AExternCodeBlock */
const struct class class_parser_nodes__AExternCodeBlock = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AExternCodeBlock:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AExternCodeBlock:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AExternCodeBlock:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AExternCodeBlock:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AExternCodeBlock:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AExternCodeBlock:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AExternCodeBlock:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AExternCodeBlock:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AExternCodeBlock:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AExternCodeBlock:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AExternCodeBlock:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AExternCodeBlock:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__visit_all, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AExternCodeBlock:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AExternCodeBlock:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AExternCodeBlock:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AExternCodeBlock:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AExternCodeBlock:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AExternCodeBlock:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AExternCodeBlock:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AExternCodeBlock:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AExternCodeBlock:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AExternCodeBlock:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AExternCodeBlock:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__n_in_language_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#n_in_language= */
(nitmethod_t)VIRTUAL_parser_prod__AExternCodeBlock__n_extern_code_segment_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#n_extern_code_segment= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AExternCodeBlock exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AExternCodeBlock exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var3; /* _n_in_language on <self:AExternCodeBlock exact> */
return self;
}
/* runtime class parser_nodes__AQualified */
const struct class class_parser_nodes__AQualified = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AQualified:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AQualified:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AQualified:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AQualified:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AQualified:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AQualified:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AQualified:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AQualified:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AQualified:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AQualified:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AQualified:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AQualified:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AQualified:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AQualified:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AQualified:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AQualified:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AQualified:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AQualified:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AQualified:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__visit_all, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AQualified:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AQualified:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AQualified:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AQualified:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AQualified:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AQualified:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AQualified:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AQualified:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AQualified:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AQualified:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AQualified:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AQualified__n_id, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AQualified__n_classid_61d, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#n_classid= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AQualified exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AQualified exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_quad].val = var3; /* _n_quad on <self:AQualified exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
{
{ /* Inline parser_nodes#ANodes#init (var4,self) on <var4:ANodes[TId]> */
var4->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var4:ANodes[TId]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AQualified___n_id].val = var4; /* _n_id on <self:AQualified exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var5; /* _n_classid on <self:AQualified exact> */
return self;
}
/* runtime class parser_nodes__ADoc */
const struct class class_parser_nodes__ADoc = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ADoc:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ADoc:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ADoc:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ADoc:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADoc:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADoc:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADoc:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ADoc:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ADoc:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ADoc:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ADoc:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ADoc:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ADoc:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ADoc:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ADoc:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ADoc:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ADoc:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ADoc:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ADoc:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ADoc__visit_all, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ADoc:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ADoc:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ADoc:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ADoc:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ADoc:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ADoc:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ADoc:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ADoc:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ADoc:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ADoc:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ADoc:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ADoc__n_comment, /* pointer to parser_nodes:ADoc:parser_nodes#ADoc#n_comment */
(nitmethod_t)VIRTUAL_parser_prod__ADoc__init_adoc, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#init_adoc */
(nitmethod_t)VIRTUAL_modelbuilder__ADoc__mdoc_cache, /* pointer to parser_nodes:ADoc:modelbuilder#ADoc#mdoc_cache */
(nitmethod_t)VIRTUAL_modelbuilder__ADoc__mdoc_cache_61d, /* pointer to parser_nodes:ADoc:modelbuilder#ADoc#mdoc_cache= */
(nitmethod_t)VIRTUAL_modelbuilder__ADoc__to_mdoc, /* pointer to parser_nodes:ADoc:modelbuilder#ADoc#to_mdoc */
}
};
/* allocate ADoc */
val* NEW_parser_nodes__ADoc(const struct type* type) {
val* self /* : ADoc */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[TComment] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADoc;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:ADoc exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ADoc exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ADoc exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TComment);
{
{ /* Inline parser_nodes#ANodes#init (var3,self) on <var3:ANodes[TComment]> */
var3->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var3:ANodes[TComment]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__ADoc___n_comment].val = var3; /* _n_comment on <self:ADoc exact> */
return self;
}
/* runtime class parser_nodes__AAnnotations */
const struct class class_parser_nodes__AAnnotations = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAnnotations:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAnnotations:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAnnotations:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAnnotations:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAnnotations:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAnnotations:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAnnotations:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAnnotations:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAnnotations:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAnnotations:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAnnotations:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAnnotations:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAnnotations:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAnnotations:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAnnotations:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAnnotations:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAnnotations:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAnnotations:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAnnotations:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__visit_all, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAnnotations:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAnnotations:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAnnotations:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAnnotations:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAnnotations:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AAnnotations__accept_ast_validation, /* pointer to parser_nodes:AAnnotations:astvalidation#AAnnotations#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAnnotations:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAnnotations:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAnnotations:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAnnotations:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAnnotations:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__n_at_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_at= */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__n_opar_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotations__n_items, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#n_items */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotations__n_cpar_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_cpar= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAnnotations exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAnnotations exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var3; /* _n_at on <self:AAnnotations exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var4; /* _n_opar on <self:AAnnotations exact> */
var5 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AAnnotation);
{
{ /* Inline parser_nodes#ANodes#init (var5,self) on <var5:ANodes[AAnnotation]> */
var5->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var5:ANodes[AAnnotation]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val = var5; /* _n_items on <self:AAnnotations exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var6; /* _n_cpar on <self:AAnnotations exact> */
return self;
}
/* runtime class parser_nodes__AAnnotation */
const struct class class_parser_nodes__AAnnotation = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAnnotation:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAnnotation:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAnnotation:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAnnotation:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAnnotation:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAnnotation:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAnnotation:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAnnotation:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAnnotation:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAnnotation:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAnnotation:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAnnotation:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAnnotation:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAnnotation:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAnnotation:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAnnotation:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAnnotation:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAnnotation:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAnnotation:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__visit_all, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAnnotation:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAnnotation:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAnnotation:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAnnotation:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAnnotation:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAnnotation:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAnnotation:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAnnotation:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_annotations_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAnnotation:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAnnotation:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAnnotation:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_doc_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_doc= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_kwredef, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_kwredef */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_kwredef_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_kwredef= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_visibility, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_visibility */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_visibility_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_visibility= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_atid, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_atid */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_atid_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_atid= */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_opar_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_args, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_args */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_cpar_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_cpar= */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__init_aannotation, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#init_aannotation */
(nitmethod_t)VIRTUAL_annotation__AAnnotation__name, /* pointer to parser_nodes:AAnnotation:annotation#AAnnotation#name */
(nitmethod_t)VIRTUAL_annotation__AAnnotation__arg_as_id, /* pointer to parser_nodes:AAnnotation:annotation#AAnnotation#arg_as_id */
}
};
/* allocate AAnnotation */
val* NEW_parser_nodes__AAnnotation(const struct type* type) {
val* self /* : AAnnotation */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : ANodes[AAtArg] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAnnotation;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AAnnotation exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAnnotation exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAnnotation exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val = var3; /* _n_doc on <self:AAnnotation exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val = var4; /* _n_kwredef on <self:AAnnotation exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var5; /* _n_opar on <self:AAnnotation exact> */
var6 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AAtArg);
{
{ /* Inline parser_nodes#ANodes#init (var6,self) on <var6:ANodes[AAtArg]> */
var6->attrs[COLOR_parser_nodes__ANodes___parent].val = self; /* _parent on <var6:ANodes[AAtArg]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val = var6; /* _n_args on <self:AAnnotation exact> */
var7 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var7; /* _n_cpar on <self:AAnnotation exact> */
return self;
}
/* runtime class parser_nodes__ATypeAtArg */
const struct class class_parser_nodes__ATypeAtArg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATypeAtArg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATypeAtArg:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATypeAtArg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATypeAtArg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATypeAtArg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATypeAtArg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATypeAtArg:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATypeAtArg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATypeAtArg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATypeAtArg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATypeAtArg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATypeAtArg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ATypeAtArg:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__visit_all, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATypeAtArg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATypeAtArg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATypeAtArg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATypeAtArg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATypeAtArg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ATypeAtArg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ATypeAtArg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATypeAtArg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ATypeAtArg:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ATypeAtArg:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:ATypeAtArg:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATypeAtArg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_annotation__AAtArg__as_string, /* pointer to parser_nodes:ATypeAtArg:annotation#AAtArg#as_string */
(nitmethod_t)VIRTUAL_annotation__AAtArg__as_id, /* pointer to parser_nodes:ATypeAtArg:annotation#AAtArg#as_id */
(nitmethod_t)VIRTUAL_parser_prod__ATypeAtArg__n_type_61d, /* pointer to parser_nodes:ATypeAtArg:parser_prod#ATypeAtArg#n_type= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:ATypeAtArg exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:ATypeAtArg exact> */
return self;
}
/* runtime class parser_nodes__AExprAtArg */
const struct class class_parser_nodes__AExprAtArg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AExprAtArg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AExprAtArg:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AExprAtArg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AExprAtArg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AExprAtArg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AExprAtArg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AExprAtArg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AExprAtArg:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AExprAtArg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AExprAtArg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AExprAtArg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AExprAtArg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AExprAtArg:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AExprAtArg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AExprAtArg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AExprAtArg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AExprAtArg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AExprAtArg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AExprAtArg:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__visit_all, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AExprAtArg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AExprAtArg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AExprAtArg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AExprAtArg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AExprAtArg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AExprAtArg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AExprAtArg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AExprAtArg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AExprAtArg:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AExprAtArg:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AExprAtArg:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AExprAtArg:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AExprAtArg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_annotation__AAtArg__as_string, /* pointer to parser_nodes:AExprAtArg:annotation#AAtArg#as_string */
(nitmethod_t)VIRTUAL_annotation__AAtArg__as_id, /* pointer to parser_nodes:AExprAtArg:annotation#AAtArg#as_id */
(nitmethod_t)VIRTUAL_parser_nodes__AExprAtArg__n_expr, /* pointer to parser_nodes:AExprAtArg:parser_nodes#AExprAtArg#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AExprAtArg__n_expr_61d, /* pointer to parser_nodes:AExprAtArg:parser_prod#AExprAtArg#n_expr= */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AExprAtArg exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AExprAtArg exact> */
return self;
}
/* runtime class parser_nodes__AAtAtArg */
const struct class class_parser_nodes__AAtAtArg = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAtAtArg:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAtAtArg:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAtAtArg:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAtAtArg:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAtAtArg:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAtAtArg:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAtAtArg:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAtAtArg:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAtAtArg:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAtAtArg:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAtAtArg:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAtAtArg:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAtAtArg:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAtAtArg:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAtAtArg:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAtAtArg:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAtAtArg:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAtAtArg:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAtAtArg:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__visit_all, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAtAtArg:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAtAtArg:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAtAtArg:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAtAtArg:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAtAtArg:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAtAtArg:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAtAtArg:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAtAtArg:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAtAtArg:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AAtAtArg__n_annotations_61d, /* pointer to parser_nodes:AAtAtArg:parser_prod#AAtAtArg#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAtAtArg:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAtAtArg:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AAtAtArg:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAtAtArg:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_annotation__AAtArg__as_string, /* pointer to parser_nodes:AAtAtArg:annotation#AAtArg#as_string */
(nitmethod_t)VIRTUAL_annotation__AAtArg__as_id, /* pointer to parser_nodes:AAtAtArg:annotation#AAtArg#as_id */
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
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AAtAtArg exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AAtAtArg exact> */
return self;
}
/* runtime class parser_nodes__AIdAtid */
const struct class class_parser_nodes__AIdAtid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIdAtid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIdAtid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIdAtid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIdAtid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIdAtid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIdAtid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIdAtid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AIdAtid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AIdAtid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AIdAtid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AIdAtid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AIdAtid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AIdAtid:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AIdAtid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AIdAtid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AIdAtid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AIdAtid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AIdAtid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AIdAtid:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIdAtid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIdAtid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIdAtid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIdAtid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIdAtid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AIdAtid__replace_child, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AIdAtid__visit_all, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AIdAtid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AIdAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AIdAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AIdAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AIdAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AIdAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIdAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AIdAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AIdAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AIdAtid:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AIdAtid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtid__n_id, /* pointer to parser_nodes:AIdAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AIdAtid__n_id_61d, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#n_id= */
(nitmethod_t)VIRTUAL_parser_prod__AIdAtid__init_aidatid, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#init_aidatid */
}
};
/* allocate AIdAtid */
val* NEW_parser_nodes__AIdAtid(const struct type* type) {
val* self /* : AIdAtid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIdAtid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AIdAtid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AIdAtid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AIdAtid exact> */
return self;
}
/* runtime class parser_nodes__AKwexternAtid */
/* allocate AKwexternAtid */
val* NEW_parser_nodes__AKwexternAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AKwexternAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AKwinternAtid */
/* allocate AKwinternAtid */
val* NEW_parser_nodes__AKwinternAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AKwinternAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AKwreadableAtid */
const struct class class_parser_nodes__AKwreadableAtid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AKwreadableAtid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AKwreadableAtid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AKwreadableAtid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AKwreadableAtid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AKwreadableAtid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AKwreadableAtid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AKwreadableAtid:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AKwreadableAtid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AKwreadableAtid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AKwreadableAtid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AKwreadableAtid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AKwreadableAtid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AKwreadableAtid:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AKwreadableAtid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AKwreadableAtid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AKwreadableAtid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AKwreadableAtid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AKwreadableAtid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AKwreadableAtid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AKwreadableAtid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AKwreadableAtid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AKwreadableAtid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AKwreadableAtid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AKwreadableAtid__replace_child, /* pointer to parser_nodes:AKwreadableAtid:parser_prod#AKwreadableAtid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AKwreadableAtid__visit_all, /* pointer to parser_nodes:AKwreadableAtid:parser_prod#AKwreadableAtid#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AKwreadableAtid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AKwreadableAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AKwreadableAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AKwreadableAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AKwreadableAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AKwreadableAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AKwreadableAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AKwreadableAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AKwreadableAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AKwreadableAtid:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AKwreadableAtid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtid__n_id, /* pointer to parser_nodes:AKwreadableAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AKwreadableAtid__n_id_61d, /* pointer to parser_nodes:AKwreadableAtid:parser_prod#AKwreadableAtid#n_id= */
(nitmethod_t)VIRTUAL_parser_prod__AKwreadableAtid__init_akwreadableatid, /* pointer to parser_nodes:AKwreadableAtid:parser_prod#AKwreadableAtid#init_akwreadableatid */
}
};
/* allocate AKwreadableAtid */
val* NEW_parser_nodes__AKwreadableAtid(const struct type* type) {
val* self /* : AKwreadableAtid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AKwreadableAtid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AKwreadableAtid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AKwreadableAtid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AKwreadableAtid exact> */
return self;
}
/* runtime class parser_nodes__AKwwritableAtid */
const struct class class_parser_nodes__AKwwritableAtid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AKwwritableAtid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AKwwritableAtid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AKwwritableAtid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AKwwritableAtid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AKwwritableAtid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AKwwritableAtid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AKwwritableAtid:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AKwwritableAtid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AKwwritableAtid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AKwwritableAtid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AKwwritableAtid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AKwwritableAtid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AKwwritableAtid:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AKwwritableAtid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AKwwritableAtid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AKwwritableAtid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AKwwritableAtid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AKwwritableAtid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AKwwritableAtid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AKwwritableAtid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AKwwritableAtid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AKwwritableAtid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AKwwritableAtid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__AKwwritableAtid__replace_child, /* pointer to parser_nodes:AKwwritableAtid:parser_prod#AKwwritableAtid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AKwwritableAtid__visit_all, /* pointer to parser_nodes:AKwwritableAtid:parser_prod#AKwwritableAtid#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AKwwritableAtid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AKwwritableAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AKwwritableAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AKwwritableAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AKwwritableAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AKwwritableAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AKwwritableAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AKwwritableAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AKwwritableAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AKwwritableAtid:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:AKwwritableAtid:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtid__n_id, /* pointer to parser_nodes:AKwwritableAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AKwwritableAtid__n_id_61d, /* pointer to parser_nodes:AKwwritableAtid:parser_prod#AKwwritableAtid#n_id= */
(nitmethod_t)VIRTUAL_parser_prod__AKwwritableAtid__init_akwwritableatid, /* pointer to parser_nodes:AKwwritableAtid:parser_prod#AKwwritableAtid#init_akwwritableatid */
}
};
/* allocate AKwwritableAtid */
val* NEW_parser_nodes__AKwwritableAtid(const struct type* type) {
val* self /* : AKwwritableAtid */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AKwwritableAtid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:AKwwritableAtid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:AKwwritableAtid exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:AKwwritableAtid exact> */
return self;
}
/* runtime class parser_nodes__AKwimportAtid */
/* allocate AKwimportAtid */
val* NEW_parser_nodes__AKwimportAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AKwimportAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__Start */
const struct class class_parser_nodes__Start = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:Start:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:Start:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:Start:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:Start:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:Start:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:Start:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:Start:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:Start:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:Start:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:Start:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:Start:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:Start:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:Start:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:Start:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:Start:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:Start:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:Start:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:Start:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:Start:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:Start:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:Start:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:Start:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:Start:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:Start:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:Start:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:Start:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:Start:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:Start:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:Start:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:Start:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:Start:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:Start:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:Start:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:Start:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__init, /* pointer to parser_nodes:Start:parser_nodes#ANode#init */
(nitmethod_t)VIRTUAL_parser_prod__Start__replace_child, /* pointer to parser_nodes:Start:parser_prod#Start#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:Start:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__Start__visit_all, /* pointer to parser_nodes:Start:parser_prod#Start#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:Start:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:Start:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:Start:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:Start:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:Start:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:Start:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:Start:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:Start:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__location_61d, /* pointer to parser_nodes:Start:parser_nodes#Prod#location= */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:Start:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:Start:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:Start:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:Start:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_modelize_property__Prod__collect_text, /* pointer to parser_nodes:Start:modelize_property#Prod#collect_text */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:Start:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__Start__n_base, /* pointer to parser_nodes:Start:parser_nodes#Start#n_base */
(nitmethod_t)VIRTUAL_parser_nodes__Start__n_eof, /* pointer to parser_nodes:Start:parser_nodes#Start#n_eof */
(nitmethod_t)VIRTUAL_parser_nodes__Start__init, /* pointer to parser_nodes:Start:parser_nodes#Start#init */
}
};
/* allocate Start */
val* NEW_parser_nodes__Start(const struct type* type) {
val* self /* : Start */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__Start;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___location].val = var; /* _location on <self:Start exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var1; /* _parent on <self:Start exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var2; /* _n_annotations on <self:Start exact> */
return self;
}
/* runtime class lexer_work__Lexer */
const struct class class_lexer_work__Lexer = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to lexer_work:Lexer:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to lexer_work:Lexer:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to lexer_work:Lexer:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to lexer_work:Lexer:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to lexer_work:Lexer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to lexer_work:Lexer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to lexer_work:Lexer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to lexer_work:Lexer:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to lexer_work:Lexer:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to lexer_work:Lexer:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to lexer_work:Lexer:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to lexer_work:Lexer:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to lexer_work:Lexer:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to lexer_work:Lexer:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to lexer_work:Lexer:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to lexer_work:Lexer:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to lexer_work:Lexer:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to lexer_work:Lexer:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to lexer_work:Lexer:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to lexer_work:Lexer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to lexer_work:Lexer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to lexer_work:Lexer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to lexer_work:Lexer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to lexer_work:Lexer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to lexer_work:Lexer:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to lexer_work:Lexer:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to lexer_work:Lexer:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to lexer_work:Lexer:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to lexer_work:Lexer:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_tables__TablesCapable__lexer_goto, /* pointer to lexer_work:Lexer:tables#TablesCapable#lexer_goto */
(nitmethod_t)VIRTUAL_tables__TablesCapable__lexer_accept, /* pointer to lexer_work:Lexer:tables#TablesCapable#lexer_accept */
(nitmethod_t)VIRTUAL_tables__TablesCapable__parser_goto, /* pointer to lexer_work:Lexer:tables#TablesCapable#parser_goto */
(nitmethod_t)VIRTUAL_tables__TablesCapable__parser_action, /* pointer to lexer_work:Lexer:tables#TablesCapable#parser_action */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__file, /* pointer to lexer_work:Lexer:lexer_work#Lexer#file */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__file_61d, /* pointer to lexer_work:Lexer:lexer_work#Lexer#file= */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__init, /* pointer to lexer_work:Lexer:lexer_work#Lexer#init */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__last_token, /* pointer to lexer_work:Lexer:lexer_work#Lexer#last_token */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__last_token_61d, /* pointer to lexer_work:Lexer:lexer_work#Lexer#last_token= */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__peek, /* pointer to lexer_work:Lexer:lexer_work#Lexer#peek */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__next, /* pointer to lexer_work:Lexer:lexer_work#Lexer#next */
(nitmethod_t)VIRTUAL_lexer_work__Lexer__get_token, /* pointer to lexer_work:Lexer:lexer_work#Lexer#get_token */
(nitmethod_t)VIRTUAL_lexer__Lexer__make_token, /* pointer to lexer_work:Lexer:lexer#Lexer#make_token */
}
};
/* allocate Lexer */
val* NEW_lexer_work__Lexer(const struct type* type) {
val* self /* : Lexer */;
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_lexer_work__Lexer;
var = 0;
self->attrs[COLOR_lexer_work__Lexer___state].l = var; /* _state on <self:Lexer exact> */
var1 = 0;
self->attrs[COLOR_lexer_work__Lexer___stream_pos].l = var1; /* _stream_pos on <self:Lexer exact> */
var2 = 0;
self->attrs[COLOR_lexer_work__Lexer___line].l = var2; /* _line on <self:Lexer exact> */
var3 = 0;
self->attrs[COLOR_lexer_work__Lexer___pos].l = var3; /* _pos on <self:Lexer exact> */
var4 = 0;
self->attrs[COLOR_lexer_work__Lexer___cr].s = var4; /* _cr on <self:Lexer exact> */
var5 = NULL;
self->attrs[COLOR_lexer_work__Lexer___last_token].val = var5; /* _last_token on <self:Lexer exact> */
return self;
}
/* runtime class parser_work__State */
const struct class class_parser_work__State = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_work:State:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_work:State:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_work:State:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_work:State:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:State:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:State:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:State:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_work:State:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_work:State:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_work:State:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_work:State:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_work:State:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_work:State:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_work:State:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_work:State:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_work:State:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_work:State:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_work:State:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:State:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:State:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:State:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:State:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:State:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:State:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_work:State:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_work:State:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_work:State:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_work:State:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_work:State:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_work__State__init, /* pointer to parser_work:State:parser_work#State#init */
}
};
/* allocate State */
val* NEW_parser_work__State(const struct type* type) {
val* self /* : State */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_work__State;
return self;
}
/* runtime class parser_work__Parser */
const struct class class_parser_work__Parser = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_work:Parser:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_work:Parser:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_work:Parser:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_work:Parser:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:Parser:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:Parser:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:Parser:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_work:Parser:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_work:Parser:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_work:Parser:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_work:Parser:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_work:Parser:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_work:Parser:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_work:Parser:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_work:Parser:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_work:Parser:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_work:Parser:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_work:Parser:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:Parser:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:Parser:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:Parser:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:Parser:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:Parser:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:Parser:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_work:Parser:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_work:Parser:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_work:Parser:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_work:Parser:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_work:Parser:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_tables__TablesCapable__lexer_goto, /* pointer to parser_work:Parser:tables#TablesCapable#lexer_goto */
(nitmethod_t)VIRTUAL_tables__TablesCapable__lexer_accept, /* pointer to parser_work:Parser:tables#TablesCapable#lexer_accept */
(nitmethod_t)VIRTUAL_tables__TablesCapable__parser_goto, /* pointer to parser_work:Parser:tables#TablesCapable#parser_goto */
(nitmethod_t)VIRTUAL_tables__TablesCapable__parser_action, /* pointer to parser_work:Parser:tables#TablesCapable#parser_action */
(nitmethod_t)VIRTUAL_parser_work__Parser__init, /* pointer to parser_work:Parser:parser_work#Parser#init */
(nitmethod_t)VIRTUAL_parser_work__Parser__go_to, /* pointer to parser_work:Parser:parser_work#Parser#go_to */
(nitmethod_t)VIRTUAL_parser_work__Parser__push, /* pointer to parser_work:Parser:parser_work#Parser#push */
(nitmethod_t)VIRTUAL_parser_work__Parser__state, /* pointer to parser_work:Parser:parser_work#Parser#state */
(nitmethod_t)VIRTUAL_parser_work__Parser__pop, /* pointer to parser_work:Parser:parser_work#Parser#pop */
(nitmethod_t)VIRTUAL_parser_work__Parser__parse, /* pointer to parser_work:Parser:parser_work#Parser#parse */
(nitmethod_t)VIRTUAL_parser__Parser__build_reduce_table, /* pointer to parser_work:Parser:parser#Parser#build_reduce_table */
}
};
/* allocate Parser */
val* NEW_parser_work__Parser(const struct type* type) {
val* self /* : Parser */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_work__Parser;
return self;
}
/* runtime class parser_work__ComputeProdLocationVisitor */
const struct class class_parser_work__ComputeProdLocationVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_work:ComputeProdLocationVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:ComputeProdLocationVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_work__ComputeProdLocationVisitor__visit, /* pointer to parser_work:ComputeProdLocationVisitor:parser_work#ComputeProdLocationVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_parser_work__ComputeProdLocationVisitor__init, /* pointer to parser_work:ComputeProdLocationVisitor:parser_work#ComputeProdLocationVisitor#init */
}
};
/* allocate ComputeProdLocationVisitor */
val* NEW_parser_work__ComputeProdLocationVisitor(const struct type* type) {
val* self /* : ComputeProdLocationVisitor */;
val* var /* : null */;
val* var1 /* : Array[Prod] */;
val* var2 /* : Array[Prod] */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_work__ComputeProdLocationVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ComputeProdLocationVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__Prod);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[Prod]>*/
}
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods].val = var1; /* _need_first_prods on <self:ComputeProdLocationVisitor exact> */
var2 = NEW_array__Array(&type_array__Arrayparser_nodes__Prod);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[Prod]>*/
}
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val = var2; /* _need_after_epsilons on <self:ComputeProdLocationVisitor exact> */
var3 = NULL;
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___last_location].val = var3; /* _last_location on <self:ComputeProdLocationVisitor exact> */
return self;
}
/* runtime class poset__POSet */
const struct class class_poset__POSet = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to poset:POSet:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to poset:POSet:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to poset:POSet:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to poset:POSet:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to poset:POSet:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to poset:POSet:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to poset:POSet:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Collection__to_s, /* pointer to poset:POSet:string#Collection#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to poset:POSet:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to poset:POSet:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to poset:POSet:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to poset:POSet:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to poset:POSet:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to poset:POSet:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to poset:POSet:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to poset:POSet:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to poset:POSet:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to poset:POSet:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to poset:POSet:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to poset:POSet:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to poset:POSet:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to poset:POSet:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to poset:POSet:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to poset:POSet:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to poset:POSet:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to poset:POSet:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to poset:POSet:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to poset:POSet:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to poset:POSet:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_poset__POSet__iterator, /* pointer to poset:POSet:poset#POSet#iterator */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__is_empty, /* pointer to poset:POSet:abstract_collection#Collection#is_empty */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__length, /* pointer to poset:POSet:abstract_collection#Collection#length */
(nitmethod_t)VIRTUAL_poset__POSet__has, /* pointer to poset:POSet:poset#POSet#has */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__first, /* pointer to poset:POSet:abstract_collection#Collection#first */
(nitmethod_t)VIRTUAL_poset__POSet__compare, /* pointer to poset:POSet:poset#POSet#compare */
(nitmethod_t)VIRTUAL_abstract_collection__Collection__has_all, /* pointer to poset:POSet:abstract_collection#Collection#has_all */
(nitmethod_t)VIRTUAL_array__Collection__to_a, /* pointer to poset:POSet:array#Collection#to_a */
(nitmethod_t)VIRTUAL_string__Collection__join, /* pointer to poset:POSet:string#Collection#join */
(nitmethod_t)VIRTUAL_sorter__Comparator__sort, /* pointer to poset:POSet:sorter#Comparator#sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__sub_sort, /* pointer to poset:POSet:sorter#Comparator#sub_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__quick_sort, /* pointer to poset:POSet:sorter#Comparator#quick_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__bubble_sort, /* pointer to poset:POSet:sorter#Comparator#bubble_sort */
(nitmethod_t)VIRTUAL_poset__POSet__elements, /* pointer to poset:POSet:poset#POSet#elements */
(nitmethod_t)VIRTUAL_poset__POSet__add_node, /* pointer to poset:POSet:poset#POSet#add_node */
(nitmethod_t)VIRTUAL_poset__POSet___91d_93d, /* pointer to poset:POSet:poset#POSet#[] */
(nitmethod_t)VIRTUAL_poset__POSet__add_edge, /* pointer to poset:POSet:poset#POSet#add_edge */
(nitmethod_t)VIRTUAL_poset__POSet__linearize, /* pointer to poset:POSet:poset#POSet#linearize */
(nitmethod_t)VIRTUAL_poset__POSet__init, /* pointer to poset:POSet:poset#POSet#init */
}
};
/* allocate POSet[Object] */
val* NEW_poset__POSet(const struct type* type) {
val* self /* : POSet[Object] */;
val* var /* : HashMap[Object, POSetElement[Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSet;
var = NEW_hash_collection__HashMap(self->type->resolution_table->types[COLOR_hash_collection__HashMapposet__POSet_FT0poset__POSetElementposet__POSet_FT0]);
{
hash_collection__HashMap__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[Object, POSetElement[Object]]>*/
}
self->attrs[COLOR_poset__POSet___elements].val = var; /* _elements on <self:POSet[Object] exact> */
return self;
}
/* runtime class poset__POSetElement */
const struct class class_poset__POSetElement = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to poset:POSetElement:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to poset:POSetElement:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to poset:POSetElement:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to poset:POSetElement:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to poset:POSetElement:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to poset:POSetElement:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to poset:POSetElement:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to poset:POSetElement:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to poset:POSetElement:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to poset:POSetElement:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to poset:POSetElement:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to poset:POSetElement:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to poset:POSetElement:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to poset:POSetElement:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to poset:POSetElement:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to poset:POSetElement:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to poset:POSetElement:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to poset:POSetElement:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to poset:POSetElement:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to poset:POSetElement:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to poset:POSetElement:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to poset:POSetElement:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to poset:POSetElement:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to poset:POSetElement:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to poset:POSetElement:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to poset:POSetElement:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to poset:POSetElement:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to poset:POSetElement:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to poset:POSetElement:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_poset__POSetElement__poset, /* pointer to poset:POSetElement:poset#POSetElement#poset */
(nitmethod_t)VIRTUAL_poset__POSetElement__element, /* pointer to poset:POSetElement:poset#POSetElement#element */
(nitmethod_t)VIRTUAL_poset__POSetElement__tos, /* pointer to poset:POSetElement:poset#POSetElement#tos */
(nitmethod_t)VIRTUAL_poset__POSetElement__froms, /* pointer to poset:POSetElement:poset#POSetElement#froms */
(nitmethod_t)VIRTUAL_poset__POSetElement__dtos, /* pointer to poset:POSetElement:poset#POSetElement#dtos */
(nitmethod_t)VIRTUAL_poset__POSetElement__dfroms, /* pointer to poset:POSetElement:poset#POSetElement#dfroms */
(nitmethod_t)VIRTUAL_poset__POSetElement__count, /* pointer to poset:POSetElement:poset#POSetElement#count */
(nitmethod_t)VIRTUAL_poset__POSetElement__greaters, /* pointer to poset:POSetElement:poset#POSetElement#greaters */
(nitmethod_t)VIRTUAL_poset__POSetElement__direct_greaters, /* pointer to poset:POSetElement:poset#POSetElement#direct_greaters */
(nitmethod_t)VIRTUAL_poset__POSetElement__smallers, /* pointer to poset:POSetElement:poset#POSetElement#smallers */
(nitmethod_t)VIRTUAL_poset__POSetElement__direct_smallers, /* pointer to poset:POSetElement:poset#POSetElement#direct_smallers */
(nitmethod_t)VIRTUAL_poset__POSetElement___60d_61d, /* pointer to poset:POSetElement:poset#POSetElement#<= */
(nitmethod_t)VIRTUAL_poset__POSetElement___60d, /* pointer to poset:POSetElement:poset#POSetElement#< */
(nitmethod_t)VIRTUAL_poset__POSetElement__init, /* pointer to poset:POSetElement:poset#POSetElement#init */
}
};
/* allocate POSetElement[Object] */
val* NEW_poset__POSetElement(const struct type* type) {
val* self /* : POSetElement[Object] */;
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : HashSet[Object] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSetElement;
var = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
{
hash_collection__HashSet__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[Object]>*/
}
self->attrs[COLOR_poset__POSetElement___tos].val = var; /* _tos on <self:POSetElement[Object] exact> */
var1 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
{
hash_collection__HashSet__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[Object]>*/
}
self->attrs[COLOR_poset__POSetElement___froms].val = var1; /* _froms on <self:POSetElement[Object] exact> */
var2 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
{
hash_collection__HashSet__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dtos].val = var2; /* _dtos on <self:POSetElement[Object] exact> */
var3 = NEW_hash_collection__HashSet(self->type->resolution_table->types[COLOR_hash_collection__HashSetposet__POSetElement_FT0]);
{
hash_collection__HashSet__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dfroms].val = var3; /* _dfroms on <self:POSetElement[Object] exact> */
return self;
}
/* runtime class literal__LiteralPhase */
const struct class class_literal__LiteralPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to literal:LiteralPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to literal:LiteralPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to literal:LiteralPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to literal:LiteralPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to literal:LiteralPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to literal:LiteralPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to literal:LiteralPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to literal:LiteralPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to literal:LiteralPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to literal:LiteralPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_literal__LiteralPhase__process_nmodule, /* pointer to literal:LiteralPhase:literal#LiteralPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to literal:LiteralPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to literal:LiteralPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to literal:LiteralPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to literal:LiteralPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate LiteralPhase */
val* NEW_literal__LiteralPhase(const struct type* type) {
val* self /* : LiteralPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_literal__LiteralPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:LiteralPhase exact> */
return self;
}
/* runtime class literal__LiteralVisitor */
const struct class class_literal__LiteralVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to literal:LiteralVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to literal:LiteralVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to literal:LiteralVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to literal:LiteralVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to literal:LiteralVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to literal:LiteralVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to literal:LiteralVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to literal:LiteralVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to literal:LiteralVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to literal:LiteralVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to literal:LiteralVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to literal:LiteralVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__visit, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__toolcontext, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__toolcontext_61d, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__init, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#init */
}
};
/* allocate LiteralVisitor */
val* NEW_literal__LiteralVisitor(const struct type* type) {
val* self /* : LiteralVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_literal__LiteralVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LiteralVisitor exact> */
return self;
}
/* runtime class scope__ScopePhase */
const struct class class_scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopePhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:ScopePhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopePhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopePhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopePhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to scope:ScopePhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopePhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopePhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopePhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopePhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopePhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ScopePhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ScopePhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ScopePhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ScopePhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ScopePhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:ScopePhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopePhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopePhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopePhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopePhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopePhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopePhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopePhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopePhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopePhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopePhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to scope:ScopePhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to scope:ScopePhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to scope:ScopePhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to scope:ScopePhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to scope:ScopePhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to scope:ScopePhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to scope:ScopePhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_scope__ScopePhase__process_npropdef, /* pointer to scope:ScopePhase:scope#ScopePhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to scope:ScopePhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to scope:ScopePhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ScopePhase */
val* NEW_scope__ScopePhase(const struct type* type) {
val* self /* : ScopePhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ScopePhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:ScopePhase exact> */
return self;
}
/* runtime class scope__Variable */
const struct class class_scope__Variable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Variable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:Variable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Variable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Variable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Variable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_scope__Variable__to_s, /* pointer to scope:Variable:scope#Variable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Variable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Variable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Variable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Variable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Variable:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:Variable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:Variable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:Variable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:Variable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:Variable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:Variable:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Variable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Variable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Variable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Variable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Variable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Variable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Variable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Variable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Variable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Variable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__Variable__name, /* pointer to scope:Variable:scope#Variable#name */
(nitmethod_t)VIRTUAL_scope__Variable__init, /* pointer to scope:Variable:scope#Variable#init */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type, /* pointer to scope:Variable:typing#Variable#declared_type */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type_61d, /* pointer to scope:Variable:typing#Variable#declared_type= */
}
};
/* allocate Variable */
val* NEW_scope__Variable(const struct type* type) {
val* self /* : Variable */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Variable;
return self;
}
/* runtime class scope__EscapeMark */
const struct class class_scope__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:EscapeMark:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:EscapeMark:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:EscapeMark:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:EscapeMark:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:EscapeMark:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:EscapeMark:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:EscapeMark:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:EscapeMark:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:EscapeMark:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:EscapeMark:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:EscapeMark:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:EscapeMark:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:EscapeMark:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:EscapeMark:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:EscapeMark:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:EscapeMark:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:EscapeMark:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:EscapeMark:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:EscapeMark:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:EscapeMark:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:EscapeMark:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:EscapeMark:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:EscapeMark:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:EscapeMark:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:EscapeMark:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:EscapeMark:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:EscapeMark:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name, /* pointer to scope:EscapeMark:scope#EscapeMark#name */
(nitmethod_t)VIRTUAL_scope__EscapeMark__for_loop, /* pointer to scope:EscapeMark:scope#EscapeMark#for_loop */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continues, /* pointer to scope:EscapeMark:scope#EscapeMark#continues */
(nitmethod_t)VIRTUAL_scope__EscapeMark__breaks, /* pointer to scope:EscapeMark:scope#EscapeMark#breaks */
(nitmethod_t)VIRTUAL_scope__EscapeMark__init, /* pointer to scope:EscapeMark:scope#EscapeMark#init */
}
};
/* allocate EscapeMark */
val* NEW_scope__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : Array[AContinueExpr] */;
val* var1 /* : Array[ABreakExpr] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__EscapeMark;
var = NEW_array__Array(&type_array__Arrayparser_nodes__AContinueExpr);
{
array__Array__init(var); /* Direct call array#Array#init on <var:Array[AContinueExpr]>*/
}
self->attrs[COLOR_scope__EscapeMark___continues].val = var; /* _continues on <self:EscapeMark exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__ABreakExpr);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[ABreakExpr]>*/
}
self->attrs[COLOR_scope__EscapeMark___breaks].val = var1; /* _breaks on <self:EscapeMark exact> */
return self;
}
/* runtime class scope__ScopeVisitor */
const struct class class_scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:ScopeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:ScopeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:ScopeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:ScopeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:ScopeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:ScopeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:ScopeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:ScopeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:ScopeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:ScopeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:ScopeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:ScopeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:ScopeVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__visit, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__selfvariable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__init, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__scopes, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__register_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#register_variable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__search_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_variable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__enter_visit_block, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#enter_visit_block */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__search_label, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_label */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__make_escape_mark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#make_escape_mark */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__get_escapemark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#get_escapemark */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__error, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#error */
}
};
/* allocate ScopeVisitor */
val* NEW_scope__ScopeVisitor(const struct type* type) {
val* self /* : ScopeVisitor */;
val* var /* : null */;
val* var1 /* : Variable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : List[Scope] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__ScopeVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ScopeVisitor exact> */
var1 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var2 = varonce;
} else {
var3 = "self";
var4 = 4;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
{ /* Inline scope#Variable#init (var1,var2) on <var1:Variable> */
var1->attrs[COLOR_scope__Variable___name].val = var2; /* _name on <var1:Variable> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_scope__ScopeVisitor___selfvariable].val = var1; /* _selfvariable on <self:ScopeVisitor exact> */
var6 = NEW_list__List(&type_list__Listscope__Scope);
{
{ /* Inline list#List#init (var6) on <var6:List[Scope]> */
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_scope__ScopeVisitor___scopes].val = var6; /* _scopes on <self:ScopeVisitor exact> */
return self;
}
/* runtime class scope__Scope */
const struct class class_scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to scope:Scope:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to scope:Scope:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to scope:Scope:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to scope:Scope:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Scope:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to scope:Scope:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to scope:Scope:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to scope:Scope:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to scope:Scope:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to scope:Scope:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to scope:Scope:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to scope:Scope:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to scope:Scope:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to scope:Scope:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to scope:Scope:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to scope:Scope:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:Scope:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Scope:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Scope:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Scope:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Scope:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Scope:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Scope:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Scope:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Scope:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Scope:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Scope:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__Scope__variables, /* pointer to scope:Scope:scope#Scope#variables */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark, /* pointer to scope:Scope:scope#Scope#escapemark */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark_61d, /* pointer to scope:Scope:scope#Scope#escapemark= */
(nitmethod_t)VIRTUAL_scope__Scope__get_variable, /* pointer to scope:Scope:scope#Scope#get_variable */
(nitmethod_t)VIRTUAL_scope__Scope__init, /* pointer to scope:Scope:scope#Scope#init */
}
};
/* allocate Scope */
val* NEW_scope__Scope(const struct type* type) {
val* self /* : Scope */;
val* var /* : HashMap[String, Variable] */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Scope;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringscope__Variable);
{
hash_collection__HashMap__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[String, Variable]>*/
}
self->attrs[COLOR_scope__Scope___variables].val = var; /* _variables on <self:Scope exact> */
var1 = NULL;
self->attrs[COLOR_scope__Scope___escapemark].val = var1; /* _escapemark on <self:Scope exact> */
return self;
}
/* runtime class flow__FlowPhase */
const struct class class_flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to flow:FlowPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to flow:FlowPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to flow:FlowPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to flow:FlowPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to flow:FlowPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to flow:FlowPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to flow:FlowPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to flow:FlowPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to flow:FlowPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_flow__FlowPhase__process_npropdef, /* pointer to flow:FlowPhase:flow#FlowPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to flow:FlowPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to flow:FlowPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate FlowPhase */
val* NEW_flow__FlowPhase(const struct type* type) {
val* self /* : FlowPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:FlowPhase exact> */
return self;
}
/* runtime class flow__FlowVisitor */
const struct class class_flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to flow:FlowVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__current_flow_context, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__current_flow_context_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__toolcontext, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__toolcontext_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__init, /* pointer to flow:FlowVisitor:flow#FlowVisitor#init */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__first, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__first_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first= */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit_expr, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit_expr */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__flows, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_sub_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_merge_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_merge_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_true_false_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_sub_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_true_false_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__make_unreachable_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_unreachable_flow */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__merge_continues_to, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_continues_to */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__merge_breaks, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_breaks */
}
};
/* allocate FlowVisitor */
val* NEW_flow__FlowVisitor(const struct type* type) {
val* self /* : FlowVisitor */;
val* var /* : null */;
val* var1 /* : Array[FlowContext] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:FlowVisitor exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[FlowContext]>*/
}
self->attrs[COLOR_flow__FlowVisitor___flows].val = var1; /* _flows on <self:FlowVisitor exact> */
return self;
}
/* runtime class flow__FlowContext */
const struct class class_flow__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to flow:FlowContext:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to flow:FlowContext:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to flow:FlowContext:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to flow:FlowContext:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to flow:FlowContext:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to flow:FlowContext:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to flow:FlowContext:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to flow:FlowContext:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to flow:FlowContext:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to flow:FlowContext:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to flow:FlowContext:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to flow:FlowContext:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to flow:FlowContext:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to flow:FlowContext:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to flow:FlowContext:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to flow:FlowContext:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowContext:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowContext:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowContext:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowContext:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowContext:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_flow__FlowContext__previous, /* pointer to flow:FlowContext:flow#FlowContext#previous */
(nitmethod_t)VIRTUAL_flow__FlowContext__loops, /* pointer to flow:FlowContext:flow#FlowContext#loops */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_marked_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_marked_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_already_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_already_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable= */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_start, /* pointer to flow:FlowContext:flow#FlowContext#is_start */
(nitmethod_t)VIRTUAL_flow__FlowContext__is_start_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_start= */
(nitmethod_t)VIRTUAL_flow__FlowContext__node, /* pointer to flow:FlowContext:flow#FlowContext#node */
(nitmethod_t)VIRTUAL_flow__FlowContext__node_61d, /* pointer to flow:FlowContext:flow#FlowContext#node= */
(nitmethod_t)VIRTUAL_flow__FlowContext__name_61d, /* pointer to flow:FlowContext:flow#FlowContext#name= */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_true, /* pointer to flow:FlowContext:flow#FlowContext#when_true */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_true_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_true= */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_false, /* pointer to flow:FlowContext:flow#FlowContext#when_false */
(nitmethod_t)VIRTUAL_flow__FlowContext__when_false_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_false= */
(nitmethod_t)VIRTUAL_flow__FlowContext__add_previous, /* pointer to flow:FlowContext:flow#FlowContext#add_previous */
(nitmethod_t)VIRTUAL_flow__FlowContext__add_loop, /* pointer to flow:FlowContext:flow#FlowContext#add_loop */
(nitmethod_t)VIRTUAL_flow__FlowContext__init, /* pointer to flow:FlowContext:flow#FlowContext#init */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__set_vars, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars */
(nitmethod_t)VIRTUAL_local_var_init__FlowContext__is_variable_set, /* pointer to flow:FlowContext:local_var_init#FlowContext#is_variable_set */
(nitmethod_t)VIRTUAL_typing__FlowContext__vars, /* pointer to flow:FlowContext:typing#FlowContext#vars */
(nitmethod_t)VIRTUAL_typing__FlowContext__cache, /* pointer to flow:FlowContext:typing#FlowContext#cache */
(nitmethod_t)VIRTUAL_typing__FlowContext__set_var, /* pointer to flow:FlowContext:typing#FlowContext#set_var */
(nitmethod_t)VIRTUAL_typing__FlowContext__collect_types, /* pointer to flow:FlowContext:typing#FlowContext#collect_types */
}
};
/* allocate FlowContext */
val* NEW_flow__FlowContext(const struct type* type) {
val* self /* : FlowContext */;
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : null */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : HashSet[Variable] */;
val* var11 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : HashMap[Variable, nullable Array[nullable MType]] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_flow__FlowContext;
var = NEW_array__Array(&type_array__Arrayflow__FlowContext);
{
array__Array__init(var); /* Direct call array#Array#init on <var:Array[FlowContext]>*/
}
self->attrs[COLOR_flow__FlowContext___previous].val = var; /* _previous on <self:FlowContext exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[FlowContext]>*/
}
self->attrs[COLOR_flow__FlowContext___loops].val = var1; /* _loops on <self:FlowContext exact> */
var2 = 0;
self->attrs[COLOR_flow__FlowContext___is_marked_unreachable].s = var2; /* _is_marked_unreachable on <self:FlowContext exact> */
var3 = 0;
self->attrs[COLOR_flow__FlowContext___is_already_unreachable].s = var3; /* _is_already_unreachable on <self:FlowContext exact> */
var4 = 0;
self->attrs[COLOR_flow__FlowContext___is_start].s = var4; /* _is_start on <self:FlowContext exact> */
var5 = NULL;
self->attrs[COLOR_flow__FlowContext___node].val = var5; /* _node on <self:FlowContext exact> */
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
self->attrs[COLOR_flow__FlowContext___name].val = var6; /* _name on <self:FlowContext exact> */
self->attrs[COLOR_flow__FlowContext___when_true].val = self; /* _when_true on <self:FlowContext exact> */
self->attrs[COLOR_flow__FlowContext___when_false].val = self; /* _when_false on <self:FlowContext exact> */
var10 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetscope__Variable);
{
hash_collection__HashSet__init(var10); /* Direct call hash_collection#HashSet#init on <var10:HashSet[Variable]>*/
}
self->attrs[COLOR_local_var_init__FlowContext___set_vars].val = var10; /* _set_vars on <self:FlowContext exact> */
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_model__MType);
{
hash_collection__HashMap__init(var11); /* Direct call hash_collection#HashMap#init on <var11:HashMap[Variable, nullable MType]>*/
}
self->attrs[COLOR_typing__FlowContext___vars].val = var11; /* _vars on <self:FlowContext exact> */
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType);
{
hash_collection__HashMap__init(var12); /* Direct call hash_collection#HashMap#init on <var12:HashMap[Variable, nullable Array[nullable MType]]>*/
}
self->attrs[COLOR_typing__FlowContext___cache].val = var12; /* _cache on <self:FlowContext exact> */
return self;
}
/* runtime class local_var_init__LocalVarInitPhase */
const struct class class_local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to local_var_init:LocalVarInitPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to local_var_init:LocalVarInitPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to local_var_init:LocalVarInitPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to local_var_init:LocalVarInitPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitPhase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init#LocalVarInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate LocalVarInitPhase */
val* NEW_local_var_init__LocalVarInitPhase(const struct type* type) {
val* self /* : LocalVarInitPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_local_var_init__LocalVarInitPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:LocalVarInitPhase exact> */
return self;
}
/* runtime class local_var_init__LocalVarInitVisitor */
const struct class class_local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to local_var_init:LocalVarInitVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to local_var_init:LocalVarInitVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__toolcontext_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__init, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#init */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__maybe_unset_vars, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_unset, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_unset */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__mark_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_set */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__check_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#check_is_set */
}
};
/* allocate LocalVarInitVisitor */
val* NEW_local_var_init__LocalVarInitVisitor(const struct type* type) {
val* self /* : LocalVarInitVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[Variable] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_local_var_init__LocalVarInitVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LocalVarInitVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetscope__Variable);
{
hash_collection__HashSet__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[Variable]>*/
}
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val = var1; /* _maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* runtime class typing__TypingPhase */
const struct class class_typing__TypingPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypingPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:TypingPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypingPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypingPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypingPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to typing:TypingPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypingPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypingPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypingPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypingPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypingPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:TypingPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:TypingPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:TypingPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:TypingPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:TypingPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to typing:TypingPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:TypingPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:TypingPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:TypingPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:TypingPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:TypingPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:TypingPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:TypingPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:TypingPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:TypingPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:TypingPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to typing:TypingPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to typing:TypingPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to typing:TypingPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to typing:TypingPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to typing:TypingPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to typing:TypingPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to typing:TypingPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_typing__TypingPhase__process_npropdef, /* pointer to typing:TypingPhase:typing#TypingPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to typing:TypingPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to typing:TypingPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate TypingPhase */
val* NEW_typing__TypingPhase(const struct type* type) {
val* self /* : TypingPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__TypingPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:TypingPhase exact> */
return self;
}
/* runtime class typing__TypeVisitor */
const struct class class_typing__TypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:TypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:TypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:TypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:TypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:TypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:TypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:TypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:TypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:TypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:TypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:TypeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:TypeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:TypeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:TypeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:TypeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to typing:TypeVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:TypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:TypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:TypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:TypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:TypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:TypeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:TypeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:TypeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:TypeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:TypeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__modelbuilder, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__modelbuilder_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mmodule, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mmodule_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mclassdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mclassdef */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mclassdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mclassdef= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mpropdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__mpropdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__selfvariable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__selfvariable_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__is_toplevel_context, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_toplevel_context */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__is_toplevel_context_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_toplevel_context= */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__init, /* pointer to typing:TypeVisitor:typing#TypeVisitor#init */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__anchor_to, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor_to */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__is_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_for */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__check_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_stmt, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_stmt */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_subtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_bool */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__visit_expr_cast, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_cast */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_mproperty_by_name2, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mproperty_by_name2 */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_mtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_mtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mclass */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_mclass */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__type_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#type_bool */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_method */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__check_signature, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_signature */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__error, /* pointer to typing:TypeVisitor:typing#TypeVisitor#error */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_variable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__set_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#set_variable */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__merge_types, /* pointer to typing:TypeVisitor:typing#TypeVisitor#merge_types */
}
};
/* allocate TypeVisitor */
val* NEW_typing__TypeVisitor(const struct type* type) {
val* self /* : TypeVisitor */;
val* var /* : Variable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
short int var5 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__TypeVisitor;
var = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var1 = varonce;
} else {
var2 = "self";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
{ /* Inline scope#Variable#init (var,var1) on <var:Variable> */
var->attrs[COLOR_scope__Variable___name].val = var1; /* _name on <var:Variable> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_typing__TypeVisitor___selfvariable].val = var; /* _selfvariable on <self:TypeVisitor exact> */
var5 = 0;
self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s = var5; /* _is_toplevel_context on <self:TypeVisitor exact> */
return self;
}
/* runtime class typing__CallSite */
const struct class class_typing__CallSite = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to typing:CallSite:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to typing:CallSite:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to typing:CallSite:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to typing:CallSite:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:CallSite:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to typing:CallSite:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to typing:CallSite:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to typing:CallSite:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to typing:CallSite:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to typing:CallSite:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to typing:CallSite:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to typing:CallSite:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to typing:CallSite:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to typing:CallSite:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to typing:CallSite:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to typing:CallSite:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to typing:CallSite:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:CallSite:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:CallSite:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:CallSite:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:CallSite:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:CallSite:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:CallSite:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:CallSite:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:CallSite:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:CallSite:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:CallSite:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_typing__CallSite__node, /* pointer to typing:CallSite:typing#CallSite#node */
(nitmethod_t)VIRTUAL_typing__CallSite__recv, /* pointer to typing:CallSite:typing#CallSite#recv */
(nitmethod_t)VIRTUAL_typing__CallSite__mmodule, /* pointer to typing:CallSite:typing#CallSite#mmodule */
(nitmethod_t)VIRTUAL_typing__CallSite__anchor, /* pointer to typing:CallSite:typing#CallSite#anchor */
(nitmethod_t)VIRTUAL_typing__CallSite__mproperty, /* pointer to typing:CallSite:typing#CallSite#mproperty */
(nitmethod_t)VIRTUAL_typing__CallSite__mpropdef, /* pointer to typing:CallSite:typing#CallSite#mpropdef */
(nitmethod_t)VIRTUAL_typing__CallSite__msignature, /* pointer to typing:CallSite:typing#CallSite#msignature */
(nitmethod_t)VIRTUAL_typing__CallSite__erasure_cast, /* pointer to typing:CallSite:typing#CallSite#erasure_cast */
(nitmethod_t)VIRTUAL_typing__CallSite__check_signature, /* pointer to typing:CallSite:typing#CallSite#check_signature */
(nitmethod_t)VIRTUAL_typing__CallSite__init, /* pointer to typing:CallSite:typing#CallSite#init */
}
};
/* allocate CallSite */
val* NEW_typing__CallSite(const struct type* type) {
val* self /* : CallSite */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_typing__CallSite;
return self;
}
/* runtime class modelize_property__ModelizePropertyPhase */
const struct class class_modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:ModelizePropertyPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_property:ModelizePropertyPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_property:ModelizePropertyPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to modelize_property:ModelizePropertyPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelize_property:ModelizePropertyPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelize_property:ModelizePropertyPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_modelize_property__ModelizePropertyPhase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property#ModelizePropertyPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ModelizePropertyPhase */
val* NEW_modelize_property__ModelizePropertyPhase(const struct type* type) {
val* self /* : ModelizePropertyPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_property__ModelizePropertyPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:ModelizePropertyPhase exact> */
return self;
}
/* runtime class modelize_property__TextCollectorVisitor */
const struct class class_modelize_property__TextCollectorVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_property:TextCollectorVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelize_property:TextCollectorVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_property:TextCollectorVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_property:TextCollectorVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_property:TextCollectorVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_property:TextCollectorVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_property:TextCollectorVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_property:TextCollectorVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_property:TextCollectorVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_property:TextCollectorVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to modelize_property:TextCollectorVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelize_property:TextCollectorVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelize_property:TextCollectorVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__visit, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__init, /* pointer to modelize_property:TextCollectorVisitor:parser_nodes#Visitor#init */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__text, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#text */
(nitmethod_t)VIRTUAL_modelize_property__TextCollectorVisitor__text_61d, /* pointer to modelize_property:TextCollectorVisitor:modelize_property#TextCollectorVisitor#text= */
}
};
/* allocate TextCollectorVisitor */
val* NEW_modelize_property__TextCollectorVisitor(const struct type* type) {
val* self /* : TextCollectorVisitor */;
val* var /* : null */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_property__TextCollectorVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:TextCollectorVisitor exact> */
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
self->attrs[COLOR_modelize_property__TextCollectorVisitor___text].val = var1; /* _text on <self:TextCollectorVisitor exact> */
return self;
}
/* runtime class modelize_class__ModelizeClassPhase */
const struct class class_modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelize_class:ModelizeClassPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelize_class:ModelizeClassPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelize_class:ModelizeClassPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelize_class:ModelizeClassPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelize_class:ModelizeClassPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelize_class:ModelizeClassPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelize_class:ModelizeClassPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelize_class:ModelizeClassPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to modelize_class:ModelizeClassPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelize_class:ModelizeClassPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelize_class:ModelizeClassPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class#ModelizeClassPhase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ModelizeClassPhase */
val* NEW_modelize_class__ModelizeClassPhase(const struct type* type) {
val* self /* : ModelizeClassPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelize_class__ModelizeClassPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:ModelizeClassPhase exact> */
return self;
}
/* runtime class modelbuilder__ModelBuilder */
const struct class class_modelbuilder__ModelBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelbuilder:ModelBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelbuilder:ModelBuilder:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelbuilder:ModelBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelbuilder:ModelBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelbuilder:ModelBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelbuilder:ModelBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelbuilder:ModelBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to modelbuilder:ModelBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelbuilder:ModelBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelbuilder:ModelBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelbuilder:ModelBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelbuilder:ModelBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelbuilder:ModelBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelbuilder:ModelBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelbuilder:ModelBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelbuilder:ModelBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelbuilder:ModelBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelbuilder:ModelBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to modelbuilder:ModelBuilder:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelbuilder:ModelBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelbuilder:ModelBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelbuilder:ModelBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelbuilder:ModelBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelbuilder:ModelBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelbuilder:ModelBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelbuilder:ModelBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelbuilder:ModelBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelbuilder:ModelBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelbuilder:ModelBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__model, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#model */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__model_61d, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#model= */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__toolcontext, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#toolcontext */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__toolcontext_61d, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#toolcontext= */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__run_phases, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#run_phases */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__init, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#init */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__parse, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#parse */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__try_get_mclass_by_name, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#try_get_mclass_by_name */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name2, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#try_get_mproperty_by_name2 */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name2_cache, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#try_get_mproperty_by_name2_cache */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__try_get_mproperty_by_name, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#try_get_mproperty_by_name */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__paths, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#paths */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__search_mmodule_by_name, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#search_mmodule_by_name */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__get_mmodule_by_name, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#get_mmodule_by_name */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__search_module_in_paths, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#search_module_in_paths */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__identified_files, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#identified_files */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__identify_file, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#identify_file */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__mgroups, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#mgroups */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__get_mgroup, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#get_mgroup */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__module_absolute_path, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#module_absolute_path */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__load_module_ast, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#load_module_ast */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__load_module, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#load_module */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__build_a_mmodule, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#build_a_mmodule */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__build_module_importation, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#build_module_importation */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__nmodules, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#nmodules */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__mmodule2nmodule, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#mmodule2nmodule */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__error, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#error */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__warning, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#warning */
(nitmethod_t)VIRTUAL_modelbuilder__ModelBuilder__force_get_primitive_method, /* pointer to modelbuilder:ModelBuilder:modelbuilder#ModelBuilder#force_get_primitive_method */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__build_a_mclass, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#build_a_mclass */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__build_a_mclassdef, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#build_a_mclassdef */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__collect_a_mclassdef_inheritance, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#collect_a_mclassdef_inheritance */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__check_supertypes, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#check_supertypes */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__build_classes, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#build_classes */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__mclassdef2nclassdef, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#mclassdef2nclassdef */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__resolve_mtype_unchecked, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#resolve_mtype_unchecked */
(nitmethod_t)VIRTUAL_modelize_class__ModelBuilder__resolve_mtype, /* pointer to modelbuilder:ModelBuilder:modelize_class#ModelBuilder#resolve_mtype */
(nitmethod_t)VIRTUAL_modelize_property__ModelBuilder__mpropdef2npropdef, /* pointer to modelbuilder:ModelBuilder:modelize_property#ModelBuilder#mpropdef2npropdef */
(nitmethod_t)VIRTUAL_modelize_property__ModelBuilder__build_properties, /* pointer to modelbuilder:ModelBuilder:modelize_property#ModelBuilder#build_properties */
(nitmethod_t)VIRTUAL_modelize_property__ModelBuilder__process_default_constructors, /* pointer to modelbuilder:ModelBuilder:modelize_property#ModelBuilder#process_default_constructors */
(nitmethod_t)VIRTUAL_modelize_property__ModelBuilder__check_visibility, /* pointer to modelbuilder:ModelBuilder:modelize_property#ModelBuilder#check_visibility */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ModelBuilder__do_rapid_type_analysis, /* pointer to modelbuilder:ModelBuilder:rapid_type_analysis#ModelBuilder#do_rapid_type_analysis */
(nitmethod_t)VIRTUAL_abstract_compiler__ModelBuilder__compile_dir, /* pointer to modelbuilder:ModelBuilder:abstract_compiler#ModelBuilder#compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__ModelBuilder__compile_dir_61d, /* pointer to modelbuilder:ModelBuilder:abstract_compiler#ModelBuilder#compile_dir= */
(nitmethod_t)VIRTUAL_abstract_compiler__ModelBuilder__write_and_make, /* pointer to modelbuilder:ModelBuilder:abstract_compiler#ModelBuilder#write_and_make */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__run_separate_compiler, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#run_separate_compiler */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_tables, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_tables */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_tables_61d, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_direct, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_direct */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_direct_61d, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_direct= */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_inline, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_inline */
(nitmethod_t)VIRTUAL_separate_compiler__ModelBuilder__nb_invok_by_inline_61d, /* pointer to modelbuilder:ModelBuilder:separate_compiler#ModelBuilder#nb_invok_by_inline= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ModelBuilder__run_separate_erasure_compiler, /* pointer to modelbuilder:ModelBuilder:separate_erasure_compiler#ModelBuilder#run_separate_erasure_compiler */
}
};
/* allocate ModelBuilder */
val* NEW_modelbuilder__ModelBuilder(const struct type* type) {
val* self /* : ModelBuilder */;
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : Array[String] */;
val* var2 /* : HashMap[String, nullable ModulePath] */;
val* var3 /* : HashMap[String, nullable MGroup] */;
val* var4 /* : Array[AModule] */;
val* var5 /* : HashMap[MModule, AModule] */;
val* var6 /* : HashMap[MClassDef, AClassdef] */;
val* var7 /* : HashMap[MPropDef, APropdef] */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelbuilder__ModelBuilder;
var = NEW_more_collections__HashMap3(&type_more_collections__HashMap3mmodule__MModulemodel__MTypestring__Stringnullable_model__MProperty);
{
{ /* Inline more_collections#HashMap3#init (var) on <var:HashMap3[MModule, MType, String, nullable MProperty]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_modelbuilder__ModelBuilder___try_get_mproperty_by_name2_cache].val = var; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder exact> */
var1 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
self->attrs[COLOR_modelbuilder__ModelBuilder___paths].val = var1; /* _paths on <self:ModelBuilder exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringnullable_modelbuilder__ModulePath);
{
hash_collection__HashMap__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[String, nullable ModulePath]>*/
}
self->attrs[COLOR_modelbuilder__ModelBuilder___identified_files].val = var2; /* _identified_files on <self:ModelBuilder exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringnullable_mproject__MGroup);
{
hash_collection__HashMap__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[String, nullable MGroup]>*/
}
self->attrs[COLOR_modelbuilder__ModelBuilder___mgroups].val = var3; /* _mgroups on <self:ModelBuilder exact> */
var4 = NEW_array__Array(&type_array__Arrayparser_nodes__AModule);
{
array__Array__init(var4); /* Direct call array#Array#init on <var4:Array[AModule]>*/
}
self->attrs[COLOR_modelbuilder__ModelBuilder___nmodules].val = var4; /* _nmodules on <self:ModelBuilder exact> */
var5 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmmodule__MModuleparser_nodes__AModule);
{
hash_collection__HashMap__init(var5); /* Direct call hash_collection#HashMap#init on <var5:HashMap[MModule, AModule]>*/
}
self->attrs[COLOR_modelbuilder__ModelBuilder___mmodule2nmodule].val = var5; /* _mmodule2nmodule on <self:ModelBuilder exact> */
var6 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefparser_nodes__AClassdef);
{
hash_collection__HashMap__init(var6); /* Direct call hash_collection#HashMap#init on <var6:HashMap[MClassDef, AClassdef]>*/
}
self->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val = var6; /* _mclassdef2nclassdef on <self:ModelBuilder exact> */
var7 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MPropDefparser_nodes__APropdef);
{
hash_collection__HashMap__init(var7); /* Direct call hash_collection#HashMap#init on <var7:HashMap[MPropDef, APropdef]>*/
}
self->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val = var7; /* _mpropdef2npropdef on <self:ModelBuilder exact> */
var8 = 0;
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_tables].l = var8; /* _nb_invok_by_tables on <self:ModelBuilder exact> */
var9 = 0;
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_direct].l = var9; /* _nb_invok_by_direct on <self:ModelBuilder exact> */
var10 = 0;
self->attrs[COLOR_separate_compiler__ModelBuilder___nb_invok_by_inline].l = var10; /* _nb_invok_by_inline on <self:ModelBuilder exact> */
return self;
}
/* runtime class modelbuilder__ModulePath */
const struct class class_modelbuilder__ModulePath = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to modelbuilder:ModulePath:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to modelbuilder:ModulePath:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to modelbuilder:ModulePath:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to modelbuilder:ModulePath:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to modelbuilder:ModulePath:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to modelbuilder:ModulePath:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to modelbuilder:ModulePath:kernel#Object#hash */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__to_s, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to modelbuilder:ModulePath:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to modelbuilder:ModulePath:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to modelbuilder:ModulePath:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to modelbuilder:ModulePath:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to modelbuilder:ModulePath:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to modelbuilder:ModulePath:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to modelbuilder:ModulePath:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to modelbuilder:ModulePath:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to modelbuilder:ModulePath:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to modelbuilder:ModulePath:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to modelbuilder:ModulePath:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to modelbuilder:ModulePath:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to modelbuilder:ModulePath:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to modelbuilder:ModulePath:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to modelbuilder:ModulePath:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to modelbuilder:ModulePath:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to modelbuilder:ModulePath:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to modelbuilder:ModulePath:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to modelbuilder:ModulePath:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to modelbuilder:ModulePath:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to modelbuilder:ModulePath:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__name, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#name */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__filepath, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#filepath */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__mgroup, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#mgroup */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__mmodule, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#mmodule */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__mmodule_61d, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#mmodule= */
(nitmethod_t)VIRTUAL_modelbuilder__ModulePath__init, /* pointer to modelbuilder:ModulePath:modelbuilder#ModulePath#init */
}
};
/* allocate ModulePath */
val* NEW_modelbuilder__ModulePath(const struct type* type) {
val* self /* : ModulePath */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_modelbuilder__ModulePath;
var = NULL;
self->attrs[COLOR_modelbuilder__ModulePath___mmodule].val = var; /* _mmodule on <self:ModulePath exact> */
return self;
}
/* runtime class model__ConcernsTree */
/* allocate ConcernsTree */
val* NEW_model__ConcernsTree(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ConcernsTree is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class model__MClassDefSorter */
const struct class class_model__MClassDefSorter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClassDefSorter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClassDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClassDefSorter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClassDefSorter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClassDefSorter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClassDefSorter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClassDefSorter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to model:MClassDefSorter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClassDefSorter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClassDefSorter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClassDefSorter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClassDefSorter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClassDefSorter:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClassDefSorter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClassDefSorter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClassDefSorter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClassDefSorter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClassDefSorter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to model:MClassDefSorter:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClassDefSorter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClassDefSorter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClassDefSorter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClassDefSorter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClassDefSorter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClassDefSorter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClassDefSorter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClassDefSorter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClassDefSorter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClassDefSorter:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__compare, /* pointer to model:MClassDefSorter:model#MClassDefSorter#compare */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_sorter__Comparator__sort, /* pointer to model:MClassDefSorter:sorter#Comparator#sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__sub_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#sub_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__quick_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#quick_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__bubble_sort, /* pointer to model:MClassDefSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__mmodule, /* pointer to model:MClassDefSorter:model#MClassDefSorter#mmodule */
(nitmethod_t)VIRTUAL_model__MClassDefSorter__init, /* pointer to model:MClassDefSorter:model#MClassDefSorter#init */
}
};
/* allocate MClassDefSorter */
val* NEW_model__MClassDefSorter(const struct type* type) {
val* self /* : MClassDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClassDefSorter;
return self;
}
/* runtime class model__MPropDefSorter */
const struct class class_model__MPropDefSorter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MPropDefSorter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MPropDefSorter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MPropDefSorter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MPropDefSorter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MPropDefSorter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MPropDefSorter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MPropDefSorter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to model:MPropDefSorter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MPropDefSorter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MPropDefSorter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MPropDefSorter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MPropDefSorter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MPropDefSorter:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MPropDefSorter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MPropDefSorter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MPropDefSorter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MPropDefSorter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MPropDefSorter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to model:MPropDefSorter:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MPropDefSorter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MPropDefSorter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MPropDefSorter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MPropDefSorter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MPropDefSorter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MPropDefSorter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MPropDefSorter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MPropDefSorter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MPropDefSorter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MPropDefSorter:model#Object#extern_kind */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__compare, /* pointer to model:MPropDefSorter:model#MPropDefSorter#compare */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_sorter__Comparator__sort, /* pointer to model:MPropDefSorter:sorter#Comparator#sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__sub_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#sub_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__quick_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#quick_sort */
(nitmethod_t)VIRTUAL_sorter__Comparator__bubble_sort, /* pointer to model:MPropDefSorter:sorter#Comparator#bubble_sort */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__mmodule, /* pointer to model:MPropDefSorter:model#MPropDefSorter#mmodule */
(nitmethod_t)VIRTUAL_model__MPropDefSorter__init, /* pointer to model:MPropDefSorter:model#MPropDefSorter#init */
}
};
/* allocate MPropDefSorter */
val* NEW_model__MPropDefSorter(const struct type* type) {
val* self /* : MPropDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MPropDefSorter;
return self;
}
/* runtime class model__MClass */
const struct class class_model__MClass = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to model:MClass:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to model:MClass:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to model:MClass:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to model:MClass:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to model:MClass:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to model:MClass:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to model:MClass:kernel#Object#hash */
(nitmethod_t)VIRTUAL_model__MClass__to_s, /* pointer to model:MClass:model#MClass#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to model:MClass:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to model:MClass:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to model:MClass:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to model:MClass:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to model:MClass:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to model:MClass:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to model:MClass:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to model:MClass:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to model:MClass:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to model:MClass:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to model:MClass:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to model:MClass:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to model:MClass:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to model:MClass:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to model:MClass:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to model:MClass:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to model:MClass:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to model:MClass:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to model:MClass:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to model:MClass:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to model:MClass:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_model__MClass__name, /* pointer to model:MClass:model#MClass#name */
(nitmethod_t)VIRTUAL_model__MClass__model, /* pointer to model:MClass:model#MClass#model */
(nitmethod_t)VIRTUAL_model_base__MEntity__init, /* pointer to model:MClass:model_base#MEntity#init */
(nitmethod_t)VIRTUAL_mdoc__MEntity__mdoc, /* pointer to model:MClass:mdoc#MEntity#mdoc */
(nitmethod_t)VIRTUAL_mdoc__MEntity__mdoc_61d, /* pointer to model:MClass:mdoc#MEntity#mdoc= */
(nitmethod_t)VIRTUAL_model__MClass__intro_mmodule, /* pointer to model:MClass:model#MClass#intro_mmodule */
(nitmethod_t)VIRTUAL_model__MClass__intro_mmodule_61d, /* pointer to model:MClass:model#MClass#intro_mmodule= */
(nitmethod_t)VIRTUAL_model__MClass__name_61d, /* pointer to model:MClass:model#MClass#name= */
(nitmethod_t)VIRTUAL_model__MClass__full_name, /* pointer to model:MClass:model#MClass#full_name */
(nitmethod_t)VIRTUAL_model__MClass__arity, /* pointer to model:MClass:model#MClass#arity */
(nitmethod_t)VIRTUAL_model__MClass__arity_61d, /* pointer to model:MClass:model#MClass#arity= */
(nitmethod_t)VIRTUAL_model__MClass__kind, /* pointer to model:MClass:model#MClass#kind */
(nitmethod_t)VIRTUAL_model__MClass__kind_61d, /* pointer to model:MClass:model#MClass#kind= */
(nitmethod_t)VIRTUAL_model__MClass__visibility, /* pointer to model:MClass:model#MClass#visibility */
(nitmethod_t)VIRTUAL_model__MClass__visibility_61d, /* pointer to model:MClass:model#MClass#visibility= */
(nitmethod_t)VIRTUAL_model__MClass__init, /* pointer to model:MClass:model#MClass#init */
(nitmethod_t)VIRTUAL_model__MClass__mclassdefs, /* pointer to model:MClass:model#MClass#mclassdefs */
(nitmethod_t)VIRTUAL_model__MClass__intro, /* pointer to model:MClass:model#MClass#intro */
(nitmethod_t)VIRTUAL_model__MClass__in_hierarchy, /* pointer to model:MClass:model#MClass#in_hierarchy */
(nitmethod_t)VIRTUAL_model__MClass__mclass_type, /* pointer to model:MClass:model#MClass#mclass_type */
(nitmethod_t)VIRTUAL_model__MClass__mclass_type_61d, /* pointer to model:MClass:model#MClass#mclass_type= */
(nitmethod_t)VIRTUAL_model__MClass__get_mtype, /* pointer to model:MClass:model#MClass#get_mtype */
(nitmethod_t)VIRTUAL_model__MClass__get_mtype_cache, /* pointer to model:MClass:model#MClass#get_mtype_cache */
(nitmethod_t)VIRTUAL_modelize_property__MClass__inherit_init_from, /* pointer to model:MClass:modelize_property#MClass#inherit_init_from */
(nitmethod_t)VIRTUAL_modelize_property__MClass__inherit_init_from_61d, /* pointer to model:MClass:modelize_property#MClass#inherit_init_from= */
(nitmethod_t)VIRTUAL_abstract_compiler__MClass__c_name, /* pointer to model:MClass:abstract_compiler#MClass#c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MClass__c_name_cache, /* pointer to model:MClass:abstract_compiler#MClass#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__MClass__c_name_cache_61d, /* pointer to model:MClass:abstract_compiler#MClass#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__MClass__c_instance_name, /* pointer to model:MClass:separate_compiler#MClass#c_instance_name */
}
};
/* allocate MClass */
val* NEW_model__MClass(const struct type* type) {
val* self /* : MClass */;
val* var /* : Array[MClassDef] */;
val* var1 /* : Array[MGenericType] */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_model__MClass;
var = NEW_array__Array(&type_array__Arraymodel__MClassDef);
{
array__Array__init(var); /* Direct call array#Array#init on <var:Array[MClassDef]>*/
}
self->attrs[COLOR_model__MClass___mclassdefs].val = var; /* _mclassdefs on <self:MClass exact> */
var1 = NEW_array__Array(&type_array__Arraymodel__MGenericType);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[MGenericType]>*/
}
self->attrs[COLOR_model__MClass___get_mtype_cache].val = var1; /* _get_mtype_cache on <self:MClass exact> */
var2 = NULL;
self->attrs[COLOR_modelize_property__MClass___inherit_init_from].val = var2; /* _inherit_init_from on <self:MClass exact> */
return self;
}
