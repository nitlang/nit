#include "nith.classes.0.h"
/* runtime class parser_nodes__ANewExpr */
const struct class class_parser_nodes__ANewExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ANewExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ANewExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANewExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANewExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANewExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ANewExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ANewExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ANewExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANewExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANewExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANewExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANewExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANewExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ANewExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ANewExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ANewExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ANewExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ANewExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ANewExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ANewExpr:annotation#AExpr#as_id */
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
(nitmethod_t)VIRTUAL_typing__ANewExpr__recvtype, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#recvtype */
(nitmethod_t)VIRTUAL_typing__ANewExpr__recvtype_61d, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#recvtype= */
(nitmethod_t)VIRTUAL_astbuilder__ANewExpr__make, /* pointer to parser_nodes:ANewExpr:astbuilder#ANewExpr#make */
}
};
/* allocate ANewExpr */
val* NEW_parser_nodes__ANewExpr(const struct type* type) {
val* self /* : ANewExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANewExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ANewExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANewExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ANewExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ANewExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ANewExpr exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__ANewExpr___n_id].val = var5; /* _n_id on <self:ANewExpr exact> */
return self;
}
/* runtime class parser_nodes__AAttrFormExpr */
/* allocate AAttrFormExpr */
val* NEW_parser_nodes__AAttrFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAttrFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AAttrExpr */
const struct class class_parser_nodes__AAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAttrExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAttrExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAttrExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAttrExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAttrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAttrExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAttrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAttrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AAttrExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AAttrExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAttrExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAttrExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAttrExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAttrExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAttrAssignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAttrAssignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAttrAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAttrAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAttrAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAttrAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAttrAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AAttrAssignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AAttrAssignExpr:annotation#AExpr#as_id */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AAttrAssignExpr__expr, /* pointer to parser_nodes:AAttrAssignExpr:abstract_compiler#AAttrAssignExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AAttrAssignExpr:abstract_compiler#AExpr#stmt */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAttrAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAttrAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAttrAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAttrAssignExpr exact> */
return self;
}
/* runtime class parser_nodes__ACallFormExpr */
/* allocate ACallFormExpr */
val* NEW_parser_nodes__ACallFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ACallFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__ASendReassignFormExpr */
/* allocate ASendReassignFormExpr */
val* NEW_parser_nodes__ASendReassignFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ASendReassignFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AAttrReassignExpr */
const struct class class_parser_nodes__AAttrReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAttrReassignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAttrReassignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAttrReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAttrReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAttrReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAttrReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAttrReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AAttrReassignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AAttrReassignExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAttrReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAttrReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAttrReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAttrReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var5; /* _read_type on <self:AAttrReassignExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ACallExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ACallExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACallExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACallExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACallExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACallExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACallExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACallExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ACallExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACallExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACallExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACallExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACallExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ACallExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ACallExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ACallExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACallExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ACallExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACallExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACallExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ACallAssignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACallAssignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ACallAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACallAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACallAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACallAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACallAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ACallAssignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ACallAssignExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ACallAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACallAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ACallAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACallAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACallAssignExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ACallReassignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACallReassignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ACallReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACallReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACallReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACallReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACallReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ACallReassignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ACallReassignExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACallReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ACallReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACallReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ACallReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACallReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACallReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var5; /* _read_type on <self:ACallReassignExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ASuperExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ASuperExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASuperExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ASuperExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASuperExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASuperExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASuperExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASuperExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ASuperExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ASuperExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASuperExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ASuperExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASuperExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ASuperExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASuperExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASuperExpr exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__ASuperExpr___n_qualified].val = var5; /* _n_qualified on <self:ASuperExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInitExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInitExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInitExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AInitExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AInitExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AInitExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AInitExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AInitExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AInitExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AInitExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AInitExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AInitExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AInitExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AInitExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AInitExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AInitExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AInitExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AInitExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AInitExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AInitExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AInitExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AInitExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AInitExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AInitExpr exact> */
return self;
}
/* runtime class parser_nodes__ABraFormExpr */
/* allocate ABraFormExpr */
val* NEW_parser_nodes__ABraFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ABraFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__ABraExpr */
const struct class class_parser_nodes__ABraExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ABraExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ABraExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ABraExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABraExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABraExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ABraExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ABraExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ABraExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABraExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABraExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ABraAssignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraAssignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ABraAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABraAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABraAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ABraAssignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ABraAssignExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ABraAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABraAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABraAssignExpr exact> */
return self;
}
/* runtime class parser_nodes__AVarFormExpr */
/* allocate AVarFormExpr */
val* NEW_parser_nodes__AVarFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AVarFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__ABraReassignExpr */
const struct class class_parser_nodes__ABraReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ABraReassignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraReassignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ABraReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ABraReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ABraReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ABraReassignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ABraReassignExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ABraReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABraReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABraReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var5; /* _read_type on <self:ABraReassignExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AVarExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AVarExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AVarExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AVarExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AVarExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AVarAssignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarAssignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AVarAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarAssignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AVarAssignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AVarAssignExpr:annotation#AExpr#as_id */
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
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AVarAssignExpr:abstract_compiler#AExpr#stmt */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarAssignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarAssignExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AVarReassignExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarReassignExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AVarReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarReassignExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AVarReassignExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AVarReassignExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarReassignExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var5; /* _read_type on <self:AVarReassignExpr exact> */
return self;
}
/* runtime class parser_nodes__ARangeExpr */
/* allocate ARangeExpr */
val* NEW_parser_nodes__ARangeExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ARangeExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__ACrangeExpr */
const struct class class_parser_nodes__ACrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ACrangeExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACrangeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ACrangeExpr__n_annotations_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ACrangeExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACrangeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACrangeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACrangeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACrangeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ACrangeExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ACrangeExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACrangeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ACrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ACrangeExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACrangeExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACrangeExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AOrangeExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AOrangeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AOrangeExpr__n_annotations_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AOrangeExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AOrangeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AOrangeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AOrangeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AOrangeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AOrangeExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AOrangeExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AOrangeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AOrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AOrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AOrangeExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AOrangeExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AOrangeExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AArrayExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AArrayExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AArrayExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AArrayExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AArrayExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AArrayExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_annotations_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AArrayExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AArrayExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AArrayExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AArrayExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AArrayExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AArrayExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AArrayExpr:annotation#AExpr#as_id */
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
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_obra_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_obra= */
(nitmethod_t)VIRTUAL_parser_nodes__AArrayExpr__n_exprs, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AArrayExpr#n_exprs */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_exprs_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_exprs= */
(nitmethod_t)VIRTUAL_parser_nodes__AArrayExpr__n_type, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AArrayExpr#n_type */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_type_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_prod__AArrayExpr__n_cbra_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_cbra= */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AArrayExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AArrayExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AArrayExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AArrayExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AArrayExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AArrayExpr exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AArrayExpr___n_type].val = var5; /* _n_type on <self:AArrayExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASelfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASelfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASelfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_parser_nodes__ASelfExpr__init, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ASelfExpr#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ASelfExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASelfExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ASelfExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASelfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASelfExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASelfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASelfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ASelfExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ASelfExpr:annotation#AExpr#as_id */
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
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ASelfExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ASelfExpr:scope#ANode#accept_scope_visitor */
}
};
/* allocate ASelfExpr */
val* NEW_parser_nodes__ASelfExpr(const struct type* type) {
val* self /* : ASelfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASelfExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ASelfExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ASelfExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASelfExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASelfExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_parser_nodes__ASelfExpr__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ASelfExpr#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AImplicitSelfExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AImplicitSelfExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASelfExpr__n_annotations_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AImplicitSelfExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AImplicitSelfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AImplicitSelfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#AExpr#as_id */
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
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#init */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AImplicitSelfExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AImplicitSelfExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AImplicitSelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AImplicitSelfExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AImplicitSelfExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AImplicitSelfExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATrueExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATrueExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATrueExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ATrueExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ATrueExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ATrueExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ATrueExpr__n_annotations_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ATrueExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ATrueExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ATrueExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ATrueExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ATrueExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ATrueExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ATrueExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ATrueExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ATrueExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ATrueExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ATrueExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ATrueExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ATrueExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFalseExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFalseExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFalseExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AFalseExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AFalseExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AFalseExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFalseExpr__n_annotations_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AFalseExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AFalseExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AFalseExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AFalseExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AFalseExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AFalseExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AFalseExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AFalseExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AFalseExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AFalseExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AFalseExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AFalseExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AFalseExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ANullExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ANullExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ANullExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ANullExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ANullExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ANullExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ANullExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ANullExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ANullExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ANullExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ANullExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ANullExpr__n_annotations_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ANullExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ANullExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ANullExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ANullExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ANullExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ANullExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ANullExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ANullExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ANullExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANullExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ANullExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ANullExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ANullExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ADecIntExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ADecIntExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ADecIntExpr__n_annotations_61d, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ADecIntExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ADecIntExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ADecIntExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ADecIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ADecIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ADecIntExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ADecIntExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADecIntExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ADecIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADecIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ADecIntExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADecIntExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ADecIntExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AHexIntExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AHexIntExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AHexIntExpr__n_annotations_61d, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AHexIntExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AHexIntExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AHexIntExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AHexIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AHexIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AHexIntExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AHexIntExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AHexIntExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AHexIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AHexIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AHexIntExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AHexIntExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AHexIntExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AFloatExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AFloatExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AFloatExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AFloatExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AFloatExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AFloatExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AFloatExpr__n_annotations_61d, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AFloatExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AFloatExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AFloatExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AFloatExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AFloatExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AFloatExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AFloatExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AFloatExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AFloatExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AFloatExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AFloatExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AFloatExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AFloatExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ACharExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ACharExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ACharExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ACharExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ACharExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ACharExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ACharExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ACharExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ACharExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ACharExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ACharExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ACharExpr__n_annotations_61d, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ACharExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ACharExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ACharExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ACharExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ACharExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ACharExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ACharExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ACharExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ACharExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACharExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ACharExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACharExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACharExpr exact> */
return self;
}
/* runtime class parser_nodes__AStringFormExpr */
/* allocate AStringFormExpr */
val* NEW_parser_nodes__AStringFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AStringFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AStringExpr */
const struct class class_parser_nodes__AStringExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AStringExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AStringExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AStringExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AStringExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AStringExpr__n_annotations_61d, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AStringExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AStringExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AStringExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStringExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AStartStringExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AStartStringExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AStartStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AStartStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AStartStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AStartStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AStartStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AStartStringExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AStartStringExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AStartStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AStartStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStartStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AStartStringExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStartStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStartStringExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AMidStringExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AMidStringExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AMidStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AMidStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AMidStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AMidStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AMidStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AMidStringExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AMidStringExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMidStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AMidStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMidStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AMidStringExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AMidStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AMidStringExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AEndStringExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AEndStringExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AEndStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AEndStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AEndStringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AEndStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AEndStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AEndStringExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AEndStringExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AEndStringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AEndStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AEndStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AEndStringExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AEndStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AEndStringExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ASuperstringExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ASuperstringExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__ASuperstringExpr__n_annotations_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ASuperstringExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ASuperstringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ASuperstringExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ASuperstringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ASuperstringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ASuperstringExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ASuperstringExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ASuperstringExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ASuperstringExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASuperstringExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ASuperstringExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASuperstringExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASuperstringExpr exact> */
var5 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
((void (*)(val*, val*))(var5->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var5, self) /* parent= on <var5:ANodes[AExpr]>*/;
}
{
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:ANodes[AExpr]>*/;
}
self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val = var5; /* _n_exprs on <self:ASuperstringExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AParExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AParExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AParExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AParExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AParExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AParExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AParExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AParExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__replace_child, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__visit_all, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AParExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AParExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__AParExpr__accept_flow_visitor, /* pointer to parser_nodes:AParExpr:flow#AParExpr#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AParExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AParExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AParExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__AParExpr__accept_transform_visitor, /* pointer to parser_nodes:AParExpr:transform#AParExpr#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_annotations_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AParExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AParExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AParExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AParExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AParExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AParExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AParExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AParExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AParExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AParExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AParExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AParExpr__accept_typing, /* pointer to parser_nodes:AParExpr:typing#AParExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AParExpr__expr, /* pointer to parser_nodes:AParExpr:abstract_compiler#AParExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AParExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_opar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_opar= */
(nitmethod_t)VIRTUAL_parser_nodes__AParExpr__n_expr, /* pointer to parser_nodes:AParExpr:parser_nodes#AParExpr#n_expr */
(nitmethod_t)VIRTUAL_parser_prod__AParExpr__n_expr_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_expr= */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AParExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AParExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AParExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AParExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AParExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AParExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAsCastExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAsCastExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAsCastExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAsCastExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAsCastExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAsCastExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAsCastExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AAsCastExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AAsCastExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAsCastExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAsCastExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAsCastExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAsCastExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAsCastExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAsCastExpr exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_opar].val = var5; /* _n_opar on <self:AAsCastExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAsCastExpr___n_cpar].val = var6; /* _n_cpar on <self:AAsCastExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAsNotnullExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAsNotnullExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAsNotnullExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAsNotnullExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAsNotnullExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAsNotnullExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAsNotnullExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AAsNotnullExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AAsNotnullExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAsNotnullExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAsNotnullExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAsNotnullExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAsNotnullExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAsNotnullExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAsNotnullExpr exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_opar].val = var5; /* _n_opar on <self:AAsNotnullExpr exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAsNotnullExpr___n_cpar].val = var6; /* _n_cpar on <self:AAsNotnullExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AIssetAttrExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AIssetAttrExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AIssetAttrExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AIssetAttrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AIssetAttrExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AIssetAttrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AIssetAttrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AIssetAttrExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AIssetAttrExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIssetAttrExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AIssetAttrExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIssetAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AIssetAttrExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AIssetAttrExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AIssetAttrExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AVarargExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AVarargExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AVarargExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AVarargExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AVarargExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AVarargExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AVarargExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AVarargExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AVarargExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AVarargExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AVarargExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AVarargExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AVarargExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AVarargExpr__accept_typing, /* pointer to parser_nodes:AVarargExpr:typing#AVarargExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AVarargExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AVarargExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AVarargExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AVarargExpr__n_expr, /* pointer to parser_nodes:AVarargExpr:parser_nodes#AVarargExpr#n_expr */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AVarargExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarargExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarargExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarargExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarargExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarargExpr exact> */
return self;
}
/* runtime class parser_nodes__AManyExpr */
const struct class class_parser_nodes__AManyExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AManyExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AManyExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AManyExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AManyExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AManyExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AManyExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AManyExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AManyExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AManyExpr:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AManyExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AManyExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AManyExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AManyExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AManyExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AManyExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AManyExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AManyExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AManyExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AManyExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AManyExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AManyExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AManyExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AManyExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AManyExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AManyExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AManyExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__AManyExpr__replace_child, /* pointer to parser_nodes:AManyExpr:parser_prod#AManyExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AManyExpr__visit_all, /* pointer to parser_nodes:AManyExpr:parser_prod#AManyExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AManyExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AManyExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AManyExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AManyExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AManyExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AManyExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AManyExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AManyExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AManyExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AManyExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AManyExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AManyExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AManyExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AManyExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AManyExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AManyExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AManyExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AManyExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AManyExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to parser_nodes:AManyExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AManyExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AManyExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AManyExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_nodes__AManyExpr__n_exprs, /* pointer to parser_nodes:AManyExpr:parser_nodes#AManyExpr#n_exprs */
(nitmethod_t)VIRTUAL_parser_prod__AManyExpr__init_amanyexpr, /* pointer to parser_nodes:AManyExpr:parser_prod#AManyExpr#init_amanyexpr */
}
};
/* allocate AManyExpr */
val* NEW_parser_nodes__AManyExpr(const struct type* type) {
val* self /* : AManyExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AManyExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AManyExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AManyExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AManyExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AManyExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AManyExpr exact> */
var5 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
((void (*)(val*, val*))(var5->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var5, self) /* parent= on <var5:ANodes[AExpr]>*/;
}
{
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:ANodes[AExpr]>*/;
}
self->attrs[COLOR_parser_nodes__AManyExpr___n_exprs].val = var5; /* _n_exprs on <self:AManyExpr exact> */
return self;
}
/* runtime class parser_nodes__ATypeExpr */
const struct class class_parser_nodes__ATypeExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:ATypeExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:ATypeExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:ATypeExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:ATypeExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ATypeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ATypeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ATypeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ATypeExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ATypeExpr:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:ATypeExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:ATypeExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:ATypeExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:ATypeExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:ATypeExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:ATypeExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:ATypeExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:ATypeExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:ATypeExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:ATypeExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:ATypeExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ATypeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__ATypeExpr__replace_child, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__ATypeExpr__visit_all, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:ATypeExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:ATypeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:ATypeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:ATypeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:ATypeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:ATypeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ATypeExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:ATypeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ATypeExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ATypeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ATypeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ATypeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ATypeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ATypeExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ATypeExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:ATypeExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:ATypeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:ATypeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_prod__ATypeExpr__n_type_61d, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#n_type= */
(nitmethod_t)VIRTUAL_parser_prod__ATypeExpr__init_atypeexpr, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#init_atypeexpr */
}
};
/* allocate ATypeExpr */
val* NEW_parser_nodes__ATypeExpr(const struct type* type) {
val* self /* : ATypeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ATypeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ATypeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ATypeExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ATypeExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ATypeExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ATypeExpr exact> */
return self;
}
/* runtime class parser_nodes__AMethidExpr */
const struct class class_parser_nodes__AMethidExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AMethidExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AMethidExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AMethidExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AMethidExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMethidExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMethidExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMethidExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AMethidExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AMethidExpr:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AMethidExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AMethidExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AMethidExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AMethidExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AMethidExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AMethidExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AMethidExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AMethidExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AMethidExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AMethidExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AMethidExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AMethidExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__AMethidExpr__replace_child, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AMethidExpr__visit_all, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AMethidExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AMethidExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AMethidExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AMethidExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AMethidExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AMethidExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMethidExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AMethidExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AMethidExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AMethidExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AMethidExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AMethidExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AMethidExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AMethidExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AMethidExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AMethidExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AMethidExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AMethidExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_prod__AMethidExpr__n_expr_61d, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#n_expr= */
(nitmethod_t)VIRTUAL_parser_prod__AMethidExpr__n_id_61d, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#n_id= */
(nitmethod_t)VIRTUAL_parser_prod__AMethidExpr__init_amethidexpr, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#init_amethidexpr */
}
};
/* allocate AMethidExpr */
val* NEW_parser_nodes__AMethidExpr(const struct type* type) {
val* self /* : AMethidExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMethidExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AMethidExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMethidExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AMethidExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AMethidExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AMethidExpr exact> */
return self;
}
/* runtime class parser_nodes__AAtExpr */
const struct class class_parser_nodes__AAtExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AAtExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AAtExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AAtExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AAtExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAtExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAtExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAtExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAtExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAtExpr:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AAtExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AAtExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AAtExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AAtExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AAtExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AAtExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AAtExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AAtExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AAtExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AAtExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AAtExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAtExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAtExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAtExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAtExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAtExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAtExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__AAtExpr__replace_child, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AAtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AAtExpr__visit_all, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AAtExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AAtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AAtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AAtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AAtExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to parser_nodes:AAtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAtExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AAtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AAtExpr__n_annotations_61d, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAtExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAtExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAtExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:AAtExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:AAtExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:AAtExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:AAtExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to parser_nodes:AAtExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to parser_nodes:AAtExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to parser_nodes:AAtExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to parser_nodes:AAtExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to parser_nodes:AAtExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to parser_nodes:AAtExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to parser_nodes:AAtExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AAtExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_parser_prod__AAtExpr__init_aatexpr, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#init_aatexpr */
}
};
/* allocate AAtExpr */
val* NEW_parser_nodes__AAtExpr(const struct type* type) {
val* self /* : AAtExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAtExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAtExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAtExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAtExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAtExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAtExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ADebugTypeExpr:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ADebugTypeExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ADebugTypeExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ADebugTypeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ADebugTypeExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to parser_nodes:ADebugTypeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to parser_nodes:ADebugTypeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to parser_nodes:ADebugTypeExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to parser_nodes:ADebugTypeExpr:annotation#AExpr#as_id */
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
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADebugTypeExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ADebugTypeExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADebugTypeExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ADebugTypeExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADebugTypeExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ADebugTypeExpr exact> */
return self;
}
/* runtime class parser_nodes__AExprs */
/* allocate AExprs */
val* NEW_parser_nodes__AExprs(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AExprs is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AListExprs */
const struct class class_parser_nodes__AListExprs = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AListExprs:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AListExprs:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AListExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AListExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AListExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AListExprs:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AListExprs:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AListExprs:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AListExprs:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AListExprs:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AListExprs:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AListExprs:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AListExprs:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AListExprs:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AListExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AListExprs:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:AListExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)VIRTUAL_typing__AExprs__to_a, /* pointer to parser_nodes:AListExprs:typing#AExprs#to_a */
(nitmethod_t)VIRTUAL_parser_prod__AListExprs__init_alistexprs, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#init_alistexprs */
}
};
/* allocate AListExprs */
val* NEW_parser_nodes__AListExprs(const struct type* type) {
val* self /* : AListExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AListExprs;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AListExprs exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AListExprs exact> */
var2 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
((void (*)(val*, val*))(var2->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExpr]>*/;
}
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:ANodes[AExpr]>*/;
}
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var2; /* _n_exprs on <self:AListExprs exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AParExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AParExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AParExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AParExprs:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AParExprs:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AParExprs:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AParExprs:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AParExprs:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AParExprs:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AParExprs:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AParExprs:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AParExprs:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AParExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AParExprs:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:AParExprs:parser_nodes#AExprs#n_exprs */
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
val* var2 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AParExprs;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AParExprs exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AParExprs exact> */
var2 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
((void (*)(val*, val*))(var2->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExpr]>*/;
}
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:ANodes[AExpr]>*/;
}
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var2; /* _n_exprs on <self:AParExprs exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ABraExprs:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ABraExprs:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ABraExprs:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ABraExprs:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ABraExprs:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ABraExprs:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ABraExprs:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ABraExprs:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ABraExprs:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ABraExprs:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ABraExprs:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ABraExprs:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ABraExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ABraExprs:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AExprs__n_exprs, /* pointer to parser_nodes:ABraExprs:parser_nodes#AExprs#n_exprs */
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
val* var2 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ABraExprs;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraExprs exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraExprs exact> */
var2 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
((void (*)(val*, val*))(var2->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExpr]>*/;
}
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:ANodes[AExpr]>*/;
}
self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val = var2; /* _n_exprs on <self:ABraExprs exact> */
return self;
}
/* runtime class parser_nodes__AAssignOp */
/* allocate AAssignOp */
val* NEW_parser_nodes__AAssignOp(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAssignOp is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__APlusAssignOp */
const struct class class_parser_nodes__APlusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:APlusAssignOp:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:APlusAssignOp:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:APlusAssignOp:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:APlusAssignOp:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:APlusAssignOp:annotation#Prod#get_annotations */
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
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__APlusAssignOp;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:APlusAssignOp exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APlusAssignOp exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AMinusAssignOp:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AMinusAssignOp:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AMinusAssignOp:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AMinusAssignOp:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AMinusAssignOp:annotation#Prod#get_annotations */
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
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AMinusAssignOp;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AMinusAssignOp exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMinusAssignOp exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AModuleName:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AModuleName:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AModuleName:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AModuleName:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AModuleName:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AModuleName:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AModuleName:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AModuleName:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AModuleName:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AModuleName:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AModuleName:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AModuleName:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AModuleName:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AModuleName:annotation#Prod#get_annotations */
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
val* var3 /* : ANodes[TId] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AModuleName;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AModuleName exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AModuleName exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__AModuleName___n_quad].val = var2; /* _n_quad on <self:AModuleName exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
{
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[TId]>*/;
}
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:ANodes[TId]>*/;
}
self->attrs[COLOR_parser_nodes__AModuleName___n_path].val = var3; /* _n_path on <self:AModuleName exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AInLanguage:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AInLanguage:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AInLanguage:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AInLanguage:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AInLanguage:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AInLanguage:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AInLanguage:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AInLanguage:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AInLanguage:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AInLanguage:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AInLanguage:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AInLanguage:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AInLanguage:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AInLanguage:annotation#Prod#get_annotations */
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
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AInLanguage;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AInLanguage exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AInLanguage exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AExternCodeBlock:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AExternCodeBlock:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AExternCodeBlock:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AExternCodeBlock:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AExternCodeBlock:annotation#Prod#get_annotations */
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
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AExternCodeBlock;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AExternCodeBlock exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AExternCodeBlock exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__AExternCodeBlock___n_in_language].val = var2; /* _n_in_language on <self:AExternCodeBlock exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AQualified:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AQualified:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AQualified:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AQualified:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AQualified:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AQualified:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AQualified:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AQualified:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AQualified:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AQualified:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AQualified:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AQualified:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AQualified:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AQualified:annotation#Prod#get_annotations */
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
val* var3 /* : ANodes[TId] */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AQualified;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AQualified exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AQualified exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_quad].val = var2; /* _n_quad on <self:AQualified exact> */
var3 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TId);
{
((void (*)(val*, val*))(var3->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[TId]>*/;
}
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:ANodes[TId]>*/;
}
self->attrs[COLOR_parser_nodes__AQualified___n_id].val = var3; /* _n_id on <self:AQualified exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AQualified___n_classid].val = var4; /* _n_classid on <self:AQualified exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:ADoc:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:ADoc:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:ADoc:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:ADoc:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:ADoc:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:ADoc:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:ADoc:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:ADoc:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:ADoc:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:ADoc:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:ADoc:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:ADoc:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:ADoc:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:ADoc:annotation#Prod#get_annotations */
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
val* var2 /* : ANodes[TComment] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__ADoc;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:ADoc exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADoc exact> */
var2 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__TComment);
{
((void (*)(val*, val*))(var2->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[TComment]>*/;
}
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:ANodes[TComment]>*/;
}
self->attrs[COLOR_parser_nodes__ADoc___n_comment].val = var2; /* _n_comment on <self:ADoc exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAnnotations:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAnnotations:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAnnotations:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAnnotations:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAnnotations:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAnnotations:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAnnotations:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAnnotations:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAnnotations:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAnnotations:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAnnotations:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAnnotations:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAnnotations:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAnnotations:annotation#Prod#get_annotations */
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
val* var4 /* : ANodes[AAnnotation] */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAnnotations;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAnnotations exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAnnotations exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_at].val = var2; /* _n_at on <self:AAnnotations exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_opar].val = var3; /* _n_opar on <self:AAnnotations exact> */
var4 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AAnnotation);
{
((void (*)(val*, val*))(var4->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var4, self) /* parent= on <var4:ANodes[AAnnotation]>*/;
}
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:ANodes[AAnnotation]>*/;
}
self->attrs[COLOR_parser_nodes__AAnnotations___n_items].val = var4; /* _n_items on <self:AAnnotations exact> */
var5 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotations___n_cpar].val = var5; /* _n_cpar on <self:AAnnotations exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AAnnotation:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AAnnotation:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AAnnotation:kernel#Object#sys */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__init, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AAnnotation:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AAnnotation:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AAnnotation:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AAnnotation:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AAnnotation:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AAnnotation:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AAnnotation:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_prod__AAnnotation__n_annotations_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AAnnotation:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AAnnotation:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AAnnotation:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAnnotation__n_doc, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_doc */
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
(nitmethod_t)VIRTUAL_annotation__AAnnotation__arg_as_string, /* pointer to parser_nodes:AAnnotation:annotation#AAnnotation#arg_as_string */
(nitmethod_t)VIRTUAL_annotation__AAnnotation__arg_as_id, /* pointer to parser_nodes:AAnnotation:annotation#AAnnotation#arg_as_id */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AAnnotation:kernel#Object#init */
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
val* var5 /* : ANodes[AExpr] */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AAnnotation;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AAnnotation exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAnnotation exact> */
var2 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_doc].val = var2; /* _n_doc on <self:AAnnotation exact> */
var3 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_kwredef].val = var3; /* _n_kwredef on <self:AAnnotation exact> */
var4 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_opar].val = var4; /* _n_opar on <self:AAnnotation exact> */
var5 = NEW_parser_nodes__ANodes(&type_parser_nodes__ANodesparser_nodes__AExpr);
{
((void (*)(val*, val*))(var5->class->vft[COLOR_parser_nodes__ANodes__parent_61d]))(var5, self) /* parent= on <var5:ANodes[AExpr]>*/;
}
{
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:ANodes[AExpr]>*/;
}
self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val = var5; /* _n_args on <self:AAnnotation exact> */
var6 = NULL;
self->attrs[COLOR_parser_nodes__AAnnotation___n_cpar].val = var6; /* _n_cpar on <self:AAnnotation exact> */
return self;
}
/* runtime class parser_nodes__AAtid */
/* allocate AAtid */
val* NEW_parser_nodes__AAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AIdAtid */
const struct class class_parser_nodes__AIdAtid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AIdAtid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AIdAtid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AIdAtid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AIdAtid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AIdAtid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AIdAtid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AIdAtid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AIdAtid:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AIdAtid:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AIdAtid:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AIdAtid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AIdAtid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AIdAtid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AIdAtid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AIdAtid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AIdAtid:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AIdAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AIdAtid:annotation#Prod#get_annotations */
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
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AIdAtid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AIdAtid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIdAtid exact> */
return self;
}
/* runtime class parser_nodes__AKwexternAtid */
const struct class class_parser_nodes__AKwexternAtid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AKwexternAtid:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AKwexternAtid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AKwexternAtid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AKwexternAtid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AKwexternAtid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AKwexternAtid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AKwexternAtid:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AKwexternAtid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AKwexternAtid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AKwexternAtid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AKwexternAtid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AKwexternAtid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AKwexternAtid:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__AKwexternAtid__replace_child, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AKwexternAtid__visit_all, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AKwexternAtid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AKwexternAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AKwexternAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AKwexternAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AKwexternAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AKwexternAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AKwexternAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AKwexternAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AKwexternAtid:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AKwexternAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AKwexternAtid:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtid__n_id, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AKwexternAtid__n_id_61d, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#n_id= */
(nitmethod_t)VIRTUAL_parser_prod__AKwexternAtid__init_akwexternatid, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#init_akwexternatid */
}
};
/* allocate AKwexternAtid */
val* NEW_parser_nodes__AKwexternAtid(const struct type* type) {
val* self /* : AKwexternAtid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AKwexternAtid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AKwexternAtid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AKwexternAtid exact> */
return self;
}
/* runtime class parser_nodes__AKwimportAtid */
/* allocate AKwimportAtid */
val* NEW_parser_nodes__AKwimportAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AKwimportAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class parser_nodes__AKwabstractAtid */
const struct class class_parser_nodes__AKwabstractAtid = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:AKwabstractAtid:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_nodes:AKwabstractAtid:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_nodes:AKwabstractAtid:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_nodes:AKwabstractAtid:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_nodes:AKwabstractAtid:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_nodes:AKwabstractAtid:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_nodes:AKwabstractAtid:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_nodes:AKwabstractAtid:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_nodes:AKwabstractAtid:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_nodes:AKwabstractAtid:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_nodes:AKwabstractAtid:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_nodes:AKwabstractAtid:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:AKwabstractAtid:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_prod__AKwabstractAtid__replace_child, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_prod__AKwabstractAtid__visit_all, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to parser_nodes:AKwabstractAtid:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to parser_nodes:AKwabstractAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to parser_nodes:AKwabstractAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to parser_nodes:AKwabstractAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to parser_nodes:AKwabstractAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to parser_nodes:AKwabstractAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AKwabstractAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to parser_nodes:AKwabstractAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:AKwabstractAtid:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:AKwabstractAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:AKwabstractAtid:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__AAtid__n_id, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)VIRTUAL_parser_prod__AKwabstractAtid__n_id_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#n_id= */
(nitmethod_t)VIRTUAL_parser_prod__AKwabstractAtid__init_akwabstractatid, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#init_akwabstractatid */
}
};
/* allocate AKwabstractAtid */
val* NEW_parser_nodes__AKwabstractAtid(const struct type* type) {
val* self /* : AKwabstractAtid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__AKwabstractAtid;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:AKwabstractAtid exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AKwabstractAtid exact> */
return self;
}
/* runtime class parser_nodes__Start */
const struct class class_parser_nodes__Start = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_nodes:Start:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_nodes:Start:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_nodes:Start:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_nodes:Start:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_nodes:Start:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_nodes:Start:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_nodes:Start:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_nodes:Start:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_nodes:Start:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_nodes:Start:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_nodes:Start:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_nodes:Start:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_nodes:Start:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_nodes:Start:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_nodes:Start:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_nodes:Start:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_nodes:Start:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_nodes:Start:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_nodes:Start:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_nodes:Start:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to parser_nodes:Start:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to parser_nodes:Start:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to parser_nodes:Start:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to parser_nodes:Start:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to parser_nodes:Start:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to parser_nodes:Start:parser_nodes#ANode#parent= */
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
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to parser_nodes:Start:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:Start:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to parser_nodes:Start:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to parser_nodes:Start:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to parser_nodes:Start:annotation#Prod#get_annotations */
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
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_nodes__Start;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:Start exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:Start exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to lexer_work:Lexer:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to lexer_work:Lexer:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to lexer_work:Lexer:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to lexer_work:Lexer:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to lexer_work:Lexer:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to lexer_work:Lexer:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to lexer_work:Lexer:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to lexer_work:Lexer:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to lexer_work:Lexer:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to lexer_work:Lexer:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to lexer_work:Lexer:version#Object#nit_version */
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
/* runtime class tables__TablesCapable */
const struct class class_tables__TablesCapable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to tables:TablesCapable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to tables:TablesCapable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to tables:TablesCapable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to tables:TablesCapable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to tables:TablesCapable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to tables:TablesCapable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to tables:TablesCapable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to tables:TablesCapable:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to tables:TablesCapable:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to tables:TablesCapable:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to tables:TablesCapable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to tables:TablesCapable:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to tables:TablesCapable:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to tables:TablesCapable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to tables:TablesCapable:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to tables:TablesCapable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to tables:TablesCapable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to tables:TablesCapable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to tables:TablesCapable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to tables:TablesCapable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to tables:TablesCapable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to tables:TablesCapable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to tables:TablesCapable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to tables:TablesCapable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to tables:TablesCapable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to tables:TablesCapable:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to tables:TablesCapable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to tables:TablesCapable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to tables:TablesCapable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to tables:TablesCapable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to tables:TablesCapable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_tables__TablesCapable__lexer_goto, /* pointer to tables:TablesCapable:tables#TablesCapable#lexer_goto */
(nitmethod_t)VIRTUAL_tables__TablesCapable__lexer_accept, /* pointer to tables:TablesCapable:tables#TablesCapable#lexer_accept */
(nitmethod_t)VIRTUAL_tables__TablesCapable__parser_goto, /* pointer to tables:TablesCapable:tables#TablesCapable#parser_goto */
(nitmethod_t)VIRTUAL_tables__TablesCapable__parser_action, /* pointer to tables:TablesCapable:tables#TablesCapable#parser_action */
}
};
/* allocate TablesCapable */
val* NEW_tables__TablesCapable(const struct type* type) {
val* self /* : TablesCapable */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_tables__TablesCapable;
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:State:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:State:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:State:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_work:State:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_work:State:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:State:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:State:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:State:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:State:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:State:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:State:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:Parser:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:Parser:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:Parser:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_work:Parser:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_work:Parser:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:Parser:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:Parser:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:Parser:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:Parser:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:Parser:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:Parser:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_work:ComputeProdLocationVisitor:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:ComputeProdLocationVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_work__ComputeProdLocationVisitor__visit, /* pointer to parser_work:ComputeProdLocationVisitor:parser_work#ComputeProdLocationVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#current_node */
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
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[Prod]>*/;
}
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_first_prods].val = var1; /* _need_first_prods on <self:ComputeProdLocationVisitor exact> */
var2 = NEW_array__Array(&type_array__Arrayparser_nodes__Prod);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:Array[Prod]>*/;
}
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___need_after_epsilons].val = var2; /* _need_after_epsilons on <self:ComputeProdLocationVisitor exact> */
var3 = NULL;
self->attrs[COLOR_parser_work__ComputeProdLocationVisitor___last_location].val = var3; /* _last_location on <self:ComputeProdLocationVisitor exact> */
return self;
}
/* runtime class parser_work__TextCollectorVisitor */
const struct class class_parser_work__TextCollectorVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to parser_work:TextCollectorVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to parser_work:TextCollectorVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to parser_work:TextCollectorVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to parser_work:TextCollectorVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to parser_work:TextCollectorVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to parser_work:TextCollectorVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to parser_work:TextCollectorVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to parser_work:TextCollectorVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to parser_work:TextCollectorVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to parser_work:TextCollectorVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to parser_work:TextCollectorVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to parser_work:TextCollectorVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to parser_work:TextCollectorVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_work__TextCollectorVisitor__visit, /* pointer to parser_work:TextCollectorVisitor:parser_work#TextCollectorVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to parser_work:TextCollectorVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to parser_work:TextCollectorVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_parser_work__TextCollectorVisitor__text, /* pointer to parser_work:TextCollectorVisitor:parser_work#TextCollectorVisitor#text */
(nitmethod_t)VIRTUAL_parser_work__TextCollectorVisitor__text_61d, /* pointer to parser_work:TextCollectorVisitor:parser_work#TextCollectorVisitor#text= */
}
};
/* allocate TextCollectorVisitor */
val* NEW_parser_work__TextCollectorVisitor(const struct type* type) {
val* self /* : TextCollectorVisitor */;
val* var /* : null */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_parser_work__TextCollectorVisitor;
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
self->attrs[COLOR_parser_work__TextCollectorVisitor___text].val = var1; /* _text on <self:TextCollectorVisitor exact> */
return self;
}
/* runtime class parser_work__ReduceAction */
/* allocate ReduceAction */
val* NEW_parser_work__ReduceAction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReduceAction is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class literal__LiteralPhase */
const struct class class_literal__LiteralPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to literal:LiteralPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to literal:LiteralPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to literal:LiteralPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to literal:LiteralPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to literal:LiteralPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to literal:LiteralPhase:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to literal:LiteralPhase:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to literal:LiteralVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to literal:LiteralVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to literal:LiteralVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to literal:LiteralVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to literal:LiteralVisitor:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to literal:LiteralVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to literal:LiteralVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to literal:LiteralVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to literal:LiteralVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to literal:LiteralVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to literal:LiteralVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_literal__LiteralVisitor__visit, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node */
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
/* runtime class mmodule_data__MModuleData */
/* allocate MModuleData[Object] */
val* NEW_mmodule_data__MModuleData(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MModuleData is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class mmodule_data__MModuleMultiData */
/* allocate MModuleMultiData[nullable Object] */
val* NEW_mmodule_data__MModuleMultiData(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MModuleMultiData is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class transform__TransformPhase */
const struct class class_transform__TransformPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to transform:TransformPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to transform:TransformPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to transform:TransformPhase:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to transform:TransformPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to transform:TransformPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to transform:TransformPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to transform:TransformPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to transform:TransformPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to transform:TransformPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to transform:TransformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to transform:TransformPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to transform:TransformPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to transform:TransformPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to transform:TransformPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to transform:TransformPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to transform:TransformPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to transform:TransformPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to transform:TransformPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to transform:TransformPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to transform:TransformPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to transform:TransformPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to transform:TransformPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to transform:TransformPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to transform:TransformPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to transform:TransformPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to transform:TransformPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to transform:TransformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_transform__TransformPhase__process_npropdef, /* pointer to transform:TransformPhase:transform#TransformPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to transform:TransformPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to transform:TransformPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate TransformPhase */
val* NEW_transform__TransformPhase(const struct type* type) {
val* self /* : TransformPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_transform__TransformPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:TransformPhase exact> */
return self;
}
/* runtime class transform__TransformVisitor */
const struct class class_transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to transform:TransformVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to transform:TransformVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to transform:TransformVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to transform:TransformVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to transform:TransformVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to transform:TransformVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to transform:TransformVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to transform:TransformVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to transform:TransformVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to transform:TransformVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to transform:TransformVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to transform:TransformVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to transform:TransformVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to transform:TransformVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to transform:TransformVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to transform:TransformVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to transform:TransformVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to transform:TransformVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to transform:TransformVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to transform:TransformVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to transform:TransformVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to transform:TransformVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to transform:TransformVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to transform:TransformVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to transform:TransformVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to transform:TransformVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__visit, /* pointer to transform:TransformVisitor:transform#TransformVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__phase, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__phase_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mmodule, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mmodule_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mclassdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mclassdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mpropdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__mpropdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__builder, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__builder_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder= */
(nitmethod_t)VIRTUAL_transform__TransformVisitor__init, /* pointer to transform:TransformVisitor:transform#TransformVisitor#init */
}
};
/* allocate TransformVisitor */
val* NEW_transform__TransformVisitor(const struct type* type) {
val* self /* : TransformVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_transform__TransformVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:TransformVisitor exact> */
return self;
}
/* runtime class astbuilder__ASTBuilder */
const struct class class_astbuilder__ASTBuilder = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:ASTBuilder:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:ASTBuilder:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:ASTBuilder:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:ASTBuilder:kernel#Object#sys */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__init, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to astbuilder:ASTBuilder:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:ASTBuilder:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:ASTBuilder:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:ASTBuilder:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:ASTBuilder:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:ASTBuilder:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:ASTBuilder:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astbuilder:ASTBuilder:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astbuilder:ASTBuilder:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astbuilder:ASTBuilder:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to astbuilder:ASTBuilder:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astbuilder:ASTBuilder:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astbuilder:ASTBuilder:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astbuilder:ASTBuilder:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astbuilder:ASTBuilder:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astbuilder:ASTBuilder:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__mmodule, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__mmodule_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule= */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__anchor, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__anchor_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor= */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_int, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_int */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_new, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_new */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_call, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_call */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_block, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_block */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_loop, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_loop */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_var_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_var_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_assign */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_attr_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_read */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_attr_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_assign */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_do, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_do */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_break, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_break */
(nitmethod_t)VIRTUAL_astbuilder__ASTBuilder__make_if, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_if */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to astbuilder:ASTBuilder:kernel#Object#init */
}
};
/* allocate ASTBuilder */
val* NEW_astbuilder__ASTBuilder(const struct type* type) {
val* self /* : ASTBuilder */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astbuilder__ASTBuilder;
return self;
}
/* runtime class astbuilder__APlaceholderExpr */
const struct class class_astbuilder__APlaceholderExpr = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to astbuilder:APlaceholderExpr:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astbuilder:APlaceholderExpr:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astbuilder:APlaceholderExpr:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astbuilder:APlaceholderExpr:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astbuilder:APlaceholderExpr:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astbuilder:APlaceholderExpr:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to astbuilder:APlaceholderExpr:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__location_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__hot_location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__debug, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#debug */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__parent_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent= */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_child, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_child */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__visit_all, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#visit_all */
(nitmethod_t)VIRTUAL_literal__ANode__accept_literal, /* pointer to astbuilder:APlaceholderExpr:literal#ANode#accept_literal */
(nitmethod_t)VIRTUAL_scope__ANode__accept_scope_visitor, /* pointer to astbuilder:APlaceholderExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)VIRTUAL_flow__ANode__accept_flow_visitor, /* pointer to astbuilder:APlaceholderExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)VIRTUAL_local_var_init__ANode__accept_local_var_visitor, /* pointer to astbuilder:APlaceholderExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)VIRTUAL_auto_super_init__ANode__accept_auto_super_init, /* pointer to astbuilder:APlaceholderExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)VIRTUAL_astvalidation__APlaceholderExpr__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#APlaceholderExpr#accept_ast_validation */
(nitmethod_t)VIRTUAL_rapid_type_analysis__ANode__accept_rapid_type_visitor, /* pointer to astbuilder:APlaceholderExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)VIRTUAL_transform__ANode__accept_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__Prod__n_annotations_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)VIRTUAL_parser_work__Prod__collect_text, /* pointer to astbuilder:APlaceholderExpr:parser_work#Prod#collect_text */
(nitmethod_t)VIRTUAL_annotation__Prod__get_single_annotation, /* pointer to astbuilder:APlaceholderExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)VIRTUAL_annotation__Prod__get_annotations, /* pointer to astbuilder:APlaceholderExpr:annotation#Prod#get_annotations */
(nitmethod_t)VIRTUAL_parser_nodes__ANode__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context */
(nitmethod_t)VIRTUAL_flow__AExpr__after_flow_context_61d, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_string, /* pointer to astbuilder:APlaceholderExpr:annotation#AExpr#as_string */
(nitmethod_t)VIRTUAL_annotation__AExpr__as_id, /* pointer to astbuilder:APlaceholderExpr:annotation#AExpr#as_id */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype */
(nitmethod_t)VIRTUAL_typing__AExpr__mtype_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype= */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed */
(nitmethod_t)VIRTUAL_typing__AExpr__is_typed_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed= */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)VIRTUAL_typing__AExpr__implicit_cast_to_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)VIRTUAL_typing__AExpr__its_variable, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#its_variable */
(nitmethod_t)VIRTUAL_typing__AExpr__accept_typing, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#accept_typing */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__make_var_read, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__variable_cache_61d, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__detach_with_placeholder, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)VIRTUAL_astbuilder__AExpr__add, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__expr, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AExpr__stmt, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)VIRTUAL_astvalidation__ANode__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)VIRTUAL_astbuilder__APlaceholderExpr__make, /* pointer to astbuilder:APlaceholderExpr:astbuilder#APlaceholderExpr#make */
(nitmethod_t)VIRTUAL_astvalidation__AExpr__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#AExpr#accept_ast_validation */
}
};
/* allocate APlaceholderExpr */
val* NEW_astbuilder__APlaceholderExpr(const struct type* type) {
val* self /* : APlaceholderExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astbuilder__APlaceholderExpr;
var = NULL;
self->attrs[COLOR_parser_nodes__ANode___parent].val = var; /* _parent on <self:APlaceholderExpr exact> */
var1 = NULL;
self->attrs[COLOR_parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APlaceholderExpr exact> */
var2 = NULL;
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:APlaceholderExpr exact> */
var3 = 0;
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:APlaceholderExpr exact> */
var4 = NULL;
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:APlaceholderExpr exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypingPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to typing:TypingPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to typing:TypingPhase:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:TypingPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:TypingPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:TypingPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:TypingPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:TypingPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to typing:TypingPhase:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:TypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to typing:TypeVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to typing:TypeVisitor:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:TypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:TypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:TypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:TypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:TypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to typing:TypeVisitor:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_typing__TypeVisitor__null_test, /* pointer to typing:TypeVisitor:typing#TypeVisitor#null_test */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_mproperty_by_name2, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mproperty_by_name2 */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__resolve_mtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_mtype */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mclass */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_mclass */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__type_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#type_bool */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_method */
(nitmethod_t)VIRTUAL_typing__TypeVisitor__try_get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_method */
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
((void (*)(val*, val*))(var->class->vft[COLOR_scope__Variable__name_61d]))(var, var1) /* name= on <var:Variable>*/;
}
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Variable>*/;
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to typing:CallSite:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)VIRTUAL_typing__CallSite__init, /* pointer to typing:CallSite:typing#CallSite#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to typing:CallSite:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to typing:CallSite:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to typing:CallSite:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to typing:CallSite:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to typing:CallSite:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to typing:CallSite:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to typing:CallSite:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to typing:CallSite:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to typing:CallSite:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to typing:CallSite:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to typing:CallSite:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to typing:CallSite:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_typing__CallSite__node, /* pointer to typing:CallSite:typing#CallSite#node */
(nitmethod_t)VIRTUAL_typing__CallSite__node_61d, /* pointer to typing:CallSite:typing#CallSite#node= */
(nitmethod_t)VIRTUAL_typing__CallSite__recv, /* pointer to typing:CallSite:typing#CallSite#recv */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_61d, /* pointer to typing:CallSite:typing#CallSite#recv= */
(nitmethod_t)VIRTUAL_typing__CallSite__mmodule, /* pointer to typing:CallSite:typing#CallSite#mmodule */
(nitmethod_t)VIRTUAL_typing__CallSite__mmodule_61d, /* pointer to typing:CallSite:typing#CallSite#mmodule= */
(nitmethod_t)VIRTUAL_typing__CallSite__anchor, /* pointer to typing:CallSite:typing#CallSite#anchor */
(nitmethod_t)VIRTUAL_typing__CallSite__anchor_61d, /* pointer to typing:CallSite:typing#CallSite#anchor= */
(nitmethod_t)VIRTUAL_typing__CallSite__recv_is_self_61d, /* pointer to typing:CallSite:typing#CallSite#recv_is_self= */
(nitmethod_t)VIRTUAL_typing__CallSite__mproperty, /* pointer to typing:CallSite:typing#CallSite#mproperty */
(nitmethod_t)VIRTUAL_typing__CallSite__mproperty_61d, /* pointer to typing:CallSite:typing#CallSite#mproperty= */
(nitmethod_t)VIRTUAL_typing__CallSite__mpropdef, /* pointer to typing:CallSite:typing#CallSite#mpropdef */
(nitmethod_t)VIRTUAL_typing__CallSite__mpropdef_61d, /* pointer to typing:CallSite:typing#CallSite#mpropdef= */
(nitmethod_t)VIRTUAL_typing__CallSite__msignature, /* pointer to typing:CallSite:typing#CallSite#msignature */
(nitmethod_t)VIRTUAL_typing__CallSite__msignature_61d, /* pointer to typing:CallSite:typing#CallSite#msignature= */
(nitmethod_t)VIRTUAL_typing__CallSite__erasure_cast, /* pointer to typing:CallSite:typing#CallSite#erasure_cast */
(nitmethod_t)VIRTUAL_typing__CallSite__erasure_cast_61d, /* pointer to typing:CallSite:typing#CallSite#erasure_cast= */
(nitmethod_t)VIRTUAL_typing__CallSite__check_signature, /* pointer to typing:CallSite:typing#CallSite#check_signature */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to typing:CallSite:kernel#Object#init */
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
/* runtime class local_var_init__LocalVarInitPhase */
const struct class class_local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to local_var_init:LocalVarInitPhase:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to local_var_init:LocalVarInitPhase:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to local_var_init:LocalVarInitVisitor:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to local_var_init:LocalVarInitVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_local_var_init__LocalVarInitVisitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node */
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
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[Variable]>*/;
}
self->attrs[COLOR_local_var_init__LocalVarInitVisitor___maybe_unset_vars].val = var1; /* _maybe_unset_vars on <self:LocalVarInitVisitor exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to flow:FlowPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to flow:FlowPhase:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to flow:FlowPhase:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to flow:FlowVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to flow:FlowVisitor:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to flow:FlowVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to flow:FlowVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to flow:FlowVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to flow:FlowVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to flow:FlowVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to flow:FlowVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_flow__FlowVisitor__visit, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node */
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
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to flow:FlowContext:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to flow:FlowContext:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to flow:FlowContext:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to flow:FlowContext:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to flow:FlowContext:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to flow:FlowContext:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to flow:FlowContext:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to flow:FlowContext:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to flow:FlowContext:version#Object#nit_version */
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
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[FlowContext]>*/;
}
self->attrs[COLOR_flow__FlowContext___previous].val = var; /* _previous on <self:FlowContext exact> */
var1 = NEW_array__Array(&type_array__Arrayflow__FlowContext);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[FlowContext]>*/;
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
((void (*)(val*))(var10->class->vft[COLOR_kernel__Object__init]))(var10) /* init on <var10:HashSet[Variable]>*/;
}
self->attrs[COLOR_local_var_init__FlowContext___set_vars].val = var10; /* _set_vars on <self:FlowContext exact> */
var11 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_model__MType);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:HashMap[Variable, nullable MType]>*/;
}
self->attrs[COLOR_typing__FlowContext___vars].val = var11; /* _vars on <self:FlowContext exact> */
var12 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variablenullable_array__Arraynullable_model__MType);
{
((void (*)(val*))(var12->class->vft[COLOR_kernel__Object__init]))(var12) /* init on <var12:HashMap[Variable, nullable Array[nullable MType]]>*/;
}
self->attrs[COLOR_typing__FlowContext___cache].val = var12; /* _cache on <self:FlowContext exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopePhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to scope:ScopePhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to scope:ScopePhase:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopePhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopePhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopePhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopePhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopePhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:ScopePhase:version#Object#nit_version */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Variable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_scope__Variable__init, /* pointer to scope:Variable:scope#Variable#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to scope:Variable:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Variable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Variable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Variable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Variable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Variable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:Variable:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Variable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Variable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Variable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Variable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Variable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__Variable__name, /* pointer to scope:Variable:scope#Variable#name */
(nitmethod_t)VIRTUAL_scope__Variable__name_61d, /* pointer to scope:Variable:scope#Variable#name= */
(nitmethod_t)VIRTUAL_scope__Variable__location, /* pointer to scope:Variable:scope#Variable#location */
(nitmethod_t)VIRTUAL_scope__Variable__location_61d, /* pointer to scope:Variable:scope#Variable#location= */
(nitmethod_t)VIRTUAL_scope__Variable__warn_unread, /* pointer to scope:Variable:scope#Variable#warn_unread */
(nitmethod_t)VIRTUAL_scope__Variable__warn_unread_61d, /* pointer to scope:Variable:scope#Variable#warn_unread= */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type, /* pointer to scope:Variable:typing#Variable#declared_type */
(nitmethod_t)VIRTUAL_typing__Variable__declared_type_61d, /* pointer to scope:Variable:typing#Variable#declared_type= */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to scope:Variable:kernel#Object#init */
}
};
/* allocate Variable */
val* NEW_scope__Variable(const struct type* type) {
val* self /* : Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__Variable;
var = NULL;
self->attrs[COLOR_scope__Variable___location].val = var; /* _location on <self:Variable exact> */
var1 = 0;
self->attrs[COLOR_scope__Variable___warn_unread].s = var1; /* _warn_unread on <self:Variable exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:EscapeMark:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)VIRTUAL_scope__EscapeMark__init, /* pointer to scope:EscapeMark:scope#EscapeMark#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to scope:EscapeMark:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:EscapeMark:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:EscapeMark:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:EscapeMark:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:EscapeMark:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:EscapeMark:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:EscapeMark:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:EscapeMark:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:EscapeMark:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:EscapeMark:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:EscapeMark:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:EscapeMark:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name, /* pointer to scope:EscapeMark:scope#EscapeMark#name */
(nitmethod_t)VIRTUAL_scope__EscapeMark__name_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#name= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continue_mark, /* pointer to scope:EscapeMark:scope#EscapeMark#continue_mark */
(nitmethod_t)VIRTUAL_scope__EscapeMark__continue_mark_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#continue_mark= */
(nitmethod_t)VIRTUAL_scope__EscapeMark__escapes, /* pointer to scope:EscapeMark:scope#EscapeMark#escapes */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to scope:EscapeMark:kernel#Object#init */
}
};
/* allocate EscapeMark */
val* NEW_scope__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : null */;
val* var1 /* : Array[AEscapeExpr] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_scope__EscapeMark;
var = NULL;
self->attrs[COLOR_scope__EscapeMark___continue_mark].val = var; /* _continue_mark on <self:EscapeMark exact> */
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AEscapeExpr);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[AEscapeExpr]>*/;
}
self->attrs[COLOR_scope__EscapeMark___escapes].val = var1; /* _escapes on <self:EscapeMark exact> */
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:ScopeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to scope:ScopeVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to scope:ScopeVisitor:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:ScopeVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:ScopeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:ScopeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:ScopeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:ScopeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:ScopeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__visit, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__toolcontext_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext= */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__selfvariable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__init, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#init */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__scopes, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes */
(nitmethod_t)VIRTUAL_scope__ScopeVisitor__shift_scope, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#shift_scope */
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
((void (*)(val*, val*))(var1->class->vft[COLOR_scope__Variable__name_61d]))(var1, var2) /* name= on <var1:Variable>*/;
}
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Variable>*/;
}
self->attrs[COLOR_scope__ScopeVisitor___selfvariable].val = var1; /* _selfvariable on <self:ScopeVisitor exact> */
var6 = NEW_list__List(&type_list__Listscope__Scope);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:List[Scope]>*/;
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
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to scope:Scope:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to scope:Scope:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to scope:Scope:sorter#Object#default_comparator */
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
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to scope:Scope:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to scope:Scope:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to scope:Scope:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to scope:Scope:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to scope:Scope:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to scope:Scope:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to scope:Scope:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to scope:Scope:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to scope:Scope:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to scope:Scope:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to scope:Scope:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_scope__Scope__variables, /* pointer to scope:Scope:scope#Scope#variables */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark, /* pointer to scope:Scope:scope#Scope#escapemark */
(nitmethod_t)VIRTUAL_scope__Scope__escapemark_61d, /* pointer to scope:Scope:scope#Scope#escapemark= */
(nitmethod_t)VIRTUAL_scope__Scope__get_variable, /* pointer to scope:Scope:scope#Scope#get_variable */
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
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashMap[String, Variable]>*/;
}
self->attrs[COLOR_scope__Scope___variables].val = var; /* _variables on <self:Scope exact> */
var1 = NULL;
self->attrs[COLOR_scope__Scope___escapemark].val = var1; /* _escapemark on <self:Scope exact> */
return self;
}
/* runtime class astvalidation__ASTValidationVisitor */
const struct class class_astvalidation__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to astvalidation:ASTValidationVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to astvalidation:ASTValidationVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to astvalidation:ASTValidationVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to astvalidation:ASTValidationVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to astvalidation:ASTValidationVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to astvalidation:ASTValidationVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to astvalidation:ASTValidationVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__visit, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__path, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path */
(nitmethod_t)VIRTUAL_astvalidation__ASTValidationVisitor__seen, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen */
}
};
/* allocate ASTValidationVisitor */
val* NEW_astvalidation__ASTValidationVisitor(const struct type* type) {
val* self /* : ASTValidationVisitor */;
val* var /* : null */;
val* var1 /* : List[ANode] */;
val* var2 /* : HashSet[ANode] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_astvalidation__ASTValidationVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ASTValidationVisitor exact> */
var1 = NEW_list__List(&type_list__Listparser_nodes__ANode);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:List[ANode]>*/;
}
self->attrs[COLOR_astvalidation__ASTValidationVisitor___path].val = var1; /* _path on <self:ASTValidationVisitor exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetparser_nodes__ANode);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashSet[ANode]>*/;
}
self->attrs[COLOR_astvalidation__ASTValidationVisitor___seen].val = var2; /* _seen on <self:ASTValidationVisitor exact> */
return self;
}
/* runtime class auto_super_init__AutoSuperInitPhase */
const struct class class_auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to auto_super_init:AutoSuperInitPhase:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to auto_super_init:AutoSuperInitPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to auto_super_init:AutoSuperInitPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitPhase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init#AutoSuperInitPhase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_modelbuilder__Phase__process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate AutoSuperInitPhase */
val* NEW_auto_super_init__AutoSuperInitPhase(const struct type* type) {
val* self /* : AutoSuperInitPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_auto_super_init__AutoSuperInitPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:AutoSuperInitPhase exact> */
return self;
}
/* runtime class auto_super_init__AutoSuperInitVisitor */
const struct class class_auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to auto_super_init:AutoSuperInitVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to auto_super_init:AutoSuperInitVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to auto_super_init:AutoSuperInitVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__visit, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__has_explicit_super_init_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__is_broken, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#is_broken */
(nitmethod_t)VIRTUAL_auto_super_init__AutoSuperInitVisitor__is_broken_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#is_broken= */
}
};
/* allocate AutoSuperInitVisitor */
val* NEW_auto_super_init__AutoSuperInitVisitor(const struct type* type) {
val* self /* : AutoSuperInitVisitor */;
val* var /* : null */;
val* var1 /* : null */;
short int var2 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_auto_super_init__AutoSuperInitVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AutoSuperInitVisitor exact> */
var1 = NULL;
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = var1; /* _has_explicit_super_init on <self:AutoSuperInitVisitor exact> */
var2 = 0;
self->attrs[COLOR_auto_super_init__AutoSuperInitVisitor___is_broken].s = var2; /* _is_broken on <self:AutoSuperInitVisitor exact> */
return self;
}
/* runtime class rapid_type_analysis__RapidTypeAnalysis */
const struct class class_rapid_type_analysis__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#sys */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to rapid_type_analysis:RapidTypeAnalysis:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to rapid_type_analysis:RapidTypeAnalysis:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to rapid_type_analysis:RapidTypeAnalysis:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_classes, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_open_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methoddefs, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_callsites, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_callsites */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_targets_cache, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_targets_cache */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_targets, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_targets */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__live_super_sends, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__totry_methods_to_remove, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_methods */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__force_alive, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#force_alive */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__run_analysis, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#run_analysis */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__check_depth, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#check_depth */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_new, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_new */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_cast, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_cast */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_call, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_call */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__try_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_super_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeAnalysis__add_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_super_send */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#init */
}
};
/* allocate RapidTypeAnalysis */
val* NEW_rapid_type_analysis__RapidTypeAnalysis(const struct type* type) {
val* self /* : RapidTypeAnalysis */;
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var5 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[CallSite] */;
val* var8 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var9 /* : HashSet[MMethodDef] */;
val* var10 /* : HashSet[MMethod] */;
val* var11 /* : Array[MMethod] */;
val* var12 /* : HashSet[MMethod] */;
val* var13 /* : List[MMethodDef] */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_rapid_type_analysis__RapidTypeAnalysis;
var = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashSet[MClassType]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_types].val = var; /* _live_types on <self:RapidTypeAnalysis exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[MClassType]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_types].val = var1; /* _live_open_types on <self:RapidTypeAnalysis exact> */
var2 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashSet[MClass]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_classes].val = var2; /* _live_classes on <self:RapidTypeAnalysis exact> */
var3 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashSet[MType]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val = var3; /* _live_cast_types on <self:RapidTypeAnalysis exact> */
var4 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:HashSet[MType]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val = var4; /* _live_open_cast_types on <self:RapidTypeAnalysis exact> */
var5 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
{
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:HashSet[MMethodDef]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val = var5; /* _live_methoddefs on <self:RapidTypeAnalysis exact> */
var6 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:HashSet[MMethod]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_methods].val = var6; /* _live_methods on <self:RapidTypeAnalysis exact> */
var7 = NEW_hash_collection__HashSet(&type_hash_collection__HashSettyping__CallSite);
{
((void (*)(val*))(var7->class->vft[COLOR_kernel__Object__init]))(var7) /* init on <var7:HashSet[CallSite]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_callsites].val = var7; /* _live_callsites on <self:RapidTypeAnalysis exact> */
var8 = NEW_more_collections__HashMap2(&type_more_collections__HashMap2model__MTypemodel__MPropertyabstract_collection__Setmodel__MMethodDef);
{
((void (*)(val*))(var8->class->vft[COLOR_kernel__Object__init]))(var8) /* init on <var8:HashMap2[MType, MProperty, Set[MMethodDef]]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val = var8; /* _live_targets_cache on <self:RapidTypeAnalysis exact> */
var9 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethodDef);
{
((void (*)(val*))(var9->class->vft[COLOR_kernel__Object__init]))(var9) /* init on <var9:HashSet[MMethodDef]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val = var9; /* _live_super_sends on <self:RapidTypeAnalysis exact> */
var10 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
{
((void (*)(val*))(var10->class->vft[COLOR_kernel__Object__init]))(var10) /* init on <var10:HashSet[MMethod]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods].val = var10; /* _totry_methods on <self:RapidTypeAnalysis exact> */
var11 = NEW_array__Array(&type_array__Arraymodel__MMethod);
{
((void (*)(val*))(var11->class->vft[COLOR_kernel__Object__init]))(var11) /* init on <var11:Array[MMethod]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val = var11; /* _totry_methods_to_remove on <self:RapidTypeAnalysis exact> */
var12 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MMethod);
{
((void (*)(val*))(var12->class->vft[COLOR_kernel__Object__init]))(var12) /* init on <var12:HashSet[MMethod]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___try_methods].val = var12; /* _try_methods on <self:RapidTypeAnalysis exact> */
var13 = NEW_list__List(&type_list__Listmodel__MMethodDef);
{
((void (*)(val*))(var13->class->vft[COLOR_kernel__Object__init]))(var13) /* init on <var13:List[MMethodDef]>*/;
}
self->attrs[COLOR_rapid_type_analysis__RapidTypeAnalysis___todo].val = var13; /* _todo on <self:RapidTypeAnalysis exact> */
return self;
}
/* runtime class rapid_type_analysis__RapidTypeVisitor */
const struct class class_rapid_type_analysis__RapidTypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to rapid_type_analysis:RapidTypeVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to rapid_type_analysis:RapidTypeVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to rapid_type_analysis:RapidTypeVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__enter_visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)VIRTUAL_parser_nodes__Visitor__current_node, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__analysis_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__receiver_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__mpropdef_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef= */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#init */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__cleanup_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#cleanup_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_class, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_class */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__get_method, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_method */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_monomorphic_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_cast_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_cast_type */
(nitmethod_t)VIRTUAL_rapid_type_analysis__RapidTypeVisitor__add_callsite, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_callsite */
}
};
/* allocate RapidTypeVisitor */
val* NEW_rapid_type_analysis__RapidTypeVisitor(const struct type* type) {
val* self /* : RapidTypeVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_rapid_type_analysis__RapidTypeVisitor;
var = NULL;
self->attrs[COLOR_parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:RapidTypeVisitor exact> */
return self;
}
/* runtime class csv__CSVDocument */
/* allocate CSVDocument */
val* NEW_csv__CSVDocument(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CSVDocument is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class separate_erasure_compiler__ErasureCompilerPhase */
const struct class class_separate_erasure_compiler__ErasureCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__ErasureCompilerPhase__process_mainmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule */
}
};
/* allocate ErasureCompilerPhase */
val* NEW_separate_erasure_compiler__ErasureCompilerPhase(const struct type* type) {
val* self /* : ErasureCompilerPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__ErasureCompilerPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:ErasureCompilerPhase exact> */
return self;
}
/* runtime class separate_erasure_compiler__SeparateErasureCompiler */
const struct class class_separate_erasure_compiler__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__new_visitor, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_finalizer_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_finalizer_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_ids */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_ids= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__opentype_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#opentype_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__opentype_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#opentype_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__poset_from_mtypes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#poset_from_mtypes */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_module_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__compile_class_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__hardening_live_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__display_sizes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#display_sizes */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__isset_checks_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#isset_checks_count */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__isset_checks_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#isset_checks_count= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_read_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_read_count */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_read_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_read_count= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_isset_checks, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_isset_checks */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_ids */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_ids= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_colors */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_colors= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_colors */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_colors= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#init */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_typing_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__build_class_vts_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__retrieve_vt_bound, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__class_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables= */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompiler__vt_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables= */
}
};
/* allocate SeparateErasureCompiler */
val* NEW_separate_erasure_compiler__SeparateErasureCompiler(const struct type* type) {
val* self /* : SeparateErasureCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, ANode] */;
val* var4 /* : Array[ExternFile] */;
val* var5 /* : Array[String] */;
val* var6 /* : ArraySet[String] */;
val* var7 /* : Array[String] */;
long var8 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : HashMap[String, Int] */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashSet[MType] */;
val* var37 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var38 /* : HashMap[MClass, Int] */;
val* var39 /* : HashSet[Object] */;
val* var40 /* : HashMap[MType, Array[nullable MType]] */;
val* var41 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var42 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var43 /* : HashMap[MClass, Array[nullable MPropDef]] */;
long var44 /* : Int */;
long var45 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 36*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__SeparateErasureCompiler;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashMap[String, String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val = var; /* _names on <self:SeparateErasureCompiler exact> */
var1 = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:List[CodeFile]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val = var1; /* _files on <self:SeparateErasureCompiler exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashMap[String, String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val = var2; /* _provided_declarations on <self:SeparateErasureCompiler exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringparser_nodes__ANode);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashMap[String, ANode]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val = var3; /* _requirers_of_declarations on <self:SeparateErasureCompiler exact> */
var4 = NEW_array__Array(&type_array__Arrayc_tools__ExternFile);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[ExternFile]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val = var4; /* _extern_bodies on <self:SeparateErasureCompiler exact> */
var5 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:Array[String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val = var5; /* _files_to_copy on <self:SeparateErasureCompiler exact> */
var6 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:ArraySet[String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val = var6; /* _seen_extern on <self:SeparateErasureCompiler exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
var8 = 5;
{
array__Array__with_capacity(var7, var8); /* Direct call array#Array#with_capacity on <var7:Array[String]>*/
}
var_ = var7;
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
array__AbstractArray__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "as";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
array__AbstractArray__push(var_, var14); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "auto";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
array__AbstractArray__push(var_, var19); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "covariance";
var26 = 10;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
array__AbstractArray__push(var_, var24); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "erasure";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
array__AbstractArray__push(var_, var29); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateErasureCompiler exact> */
{
var33 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var33; /* _count_type_test_resolved on <self:SeparateErasureCompiler exact> */
{
var34 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var34; /* _count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
{
var35 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var35; /* _count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var36 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var36->class->vft[COLOR_kernel__Object__init]))(var36) /* init on <var36:HashSet[MType]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val = var36; /* _undead_types on <self:SeparateErasureCompiler exact> */
var37 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var37->class->vft[COLOR_kernel__Object__init]))(var37) /* init on <var37:HashMap[MClassDef, HashSet[MType]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val = var37; /* _live_unresolved_types on <self:SeparateErasureCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
{
((void (*)(val*))(var38->class->vft[COLOR_kernel__Object__init]))(var38) /* init on <var38:HashMap[MClass, Int]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val = var38; /* _box_kinds on <self:SeparateErasureCompiler exact> */
var39 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
{
((void (*)(val*))(var39->class->vft[COLOR_kernel__Object__init]))(var39) /* init on <var39:HashSet[Object]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___color_consts_done].val = var39; /* _color_consts_done on <self:SeparateErasureCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
{
((void (*)(val*))(var40->class->vft[COLOR_kernel__Object__init]))(var40) /* init on <var40:HashMap[MType, Array[nullable MType]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val = var40; /* _type_tables on <self:SeparateErasureCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
{
((void (*)(val*))(var41->class->vft[COLOR_kernel__Object__init]))(var41) /* init on <var41:HashMap[MClassType, Array[nullable MType]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val = var41; /* _resolution_tables on <self:SeparateErasureCompiler exact> */
var42 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var42->class->vft[COLOR_kernel__Object__init]))(var42) /* init on <var42:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val = var42; /* _method_tables on <self:SeparateErasureCompiler exact> */
var43 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var43->class->vft[COLOR_kernel__Object__init]))(var43) /* init on <var43:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val = var43; /* _attr_tables on <self:SeparateErasureCompiler exact> */
var44 = 0;
self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = var44; /* _isset_checks_count on <self:SeparateErasureCompiler exact> */
var45 = 0;
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l = var45; /* _attr_read_count on <self:SeparateErasureCompiler exact> */
return self;
}
/* runtime class separate_erasure_compiler__SeparateErasureCompilerVisitor */
const struct class class_separate_erasure_compiler__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__native_array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#native_array_instance */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__calloc_array, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__unbox_signature_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_signature_extern */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__box_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#box_extern */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__unbox_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#unbox_extern */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_escape_label, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_escape_label */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__class_name_string, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_separate_erasure_compiler__SeparateErasureCompilerVisitor__init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__set_finalizer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#set_finalizer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__value_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#value_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__vararg_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__before_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#before_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_cast_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateErasureCompilerVisitor */
val* NEW_separate_erasure_compiler__SeparateErasureCompilerVisitor(const struct type* type) {
val* self /* : SeparateErasureCompilerVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[String] */;
long var2 /* : Int */;
val* var3 /* : HashMap[EscapeMark, String] */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_erasure_compiler__SeparateErasureCompilerVisitor;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var; /* _current_node on <self:SeparateErasureCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val = var1; /* _names on <self:SeparateErasureCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l = var2; /* _last on <self:SeparateErasureCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val = var3; /* _escapemark_names on <self:SeparateErasureCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val = var4; /* _variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* runtime class separate_compiler__SeparateCompilerPhase */
const struct class class_separate_compiler__SeparateCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_compiler:SeparateCompilerPhase:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_phase__Phase__to_s, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompilerPhase:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_compiler:SeparateCompilerPhase:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#toolcontext */
(nitmethod_t)VIRTUAL_phase__Phase__toolcontext_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#toolcontext= */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#in_hierarchy */
(nitmethod_t)VIRTUAL_phase__Phase__in_hierarchy_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)VIRTUAL_phase__Phase__init, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#init */
(nitmethod_t)VIRTUAL_phase__Phase__disabled, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#disabled */
(nitmethod_t)VIRTUAL_phase__Phase__disabled_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#disabled= */
(nitmethod_t)VIRTUAL_phase__Phase__process_nmodule, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_nmodule */
(nitmethod_t)VIRTUAL_phase__Phase__process_nclassdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_nclassdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_npropdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_npropdef */
(nitmethod_t)VIRTUAL_phase__Phase__process_annotated_node, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_annotated_node */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerPhase__process_mainmodule, /* pointer to separate_compiler:SeparateCompilerPhase:separate_compiler#SeparateCompilerPhase#process_mainmodule */
}
};
/* allocate SeparateCompilerPhase */
val* NEW_separate_compiler__SeparateCompilerPhase(const struct type* type) {
val* self /* : SeparateCompilerPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompilerPhase;
var = 0;
self->attrs[COLOR_phase__Phase___disabled].s = var; /* _disabled on <self:SeparateCompilerPhase exact> */
return self;
}
/* runtime class separate_compiler__SeparateCompiler */
const struct class class_separate_compiler__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_compiler:SeparateCompiler:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompiler:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompiler:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompiler:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompiler:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompiler:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_compiler:SeparateCompiler:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__names, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__mainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__realmainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__modelbuilder_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__new_file, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__new_visitor, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#new_visitor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__header_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provide_declaration, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__provided_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__requirers_of_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__build_c_to_nit_bindings, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_finalizer_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_finalizer_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_global_ref_functions, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__files_to_copy, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__generate_init_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_resolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_unresolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__count_type_test_skipped, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__init_count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__div, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__live_unresolved_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_ids, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_ids */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_ids_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_ids= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__opentype_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#opentype_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__opentype_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#opentype_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_colors */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_colors= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__init, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_header_attribute_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__box_kind_of, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_consts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_color_const, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__color_consts_done, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_property_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__do_type_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__poset_from_mtypes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#poset_from_mtypes */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__build_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_module_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_type_resolution_table, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__compile_class_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_class_to_c */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__hardening_live_type, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__type_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__resolution_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__method_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_sizes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_sizes */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__isset_checks_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#isset_checks_count */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__isset_checks_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#isset_checks_count= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_read_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_read_count */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__attr_read_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_read_count= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompiler__display_isset_checks, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_isset_checks */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_nitni_structs */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
}
};
/* allocate SeparateCompiler */
val* NEW_separate_compiler__SeparateCompiler(const struct type* type) {
val* self /* : SeparateCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : HashMap[String, String] */;
val* var3 /* : HashMap[String, ANode] */;
val* var4 /* : Array[ExternFile] */;
val* var5 /* : Array[String] */;
val* var6 /* : ArraySet[String] */;
val* var7 /* : Array[String] */;
long var8 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : HashMap[String, Int] */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashSet[MType] */;
val* var37 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var38 /* : HashMap[MClass, Int] */;
val* var39 /* : HashSet[Object] */;
val* var40 /* : HashMap[MType, Array[nullable MType]] */;
val* var41 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var42 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var43 /* : HashMap[MClass, Array[nullable MPropDef]] */;
long var44 /* : Int */;
long var45 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 31*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompiler;
var = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:HashMap[String, String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___names].val = var; /* _names on <self:SeparateCompiler exact> */
var1 = NEW_list__List(&type_list__Listabstract_compiler__CodeFile);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:List[CodeFile]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___files].val = var1; /* _files on <self:SeparateCompiler exact> */
var2 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringstring__String);
{
((void (*)(val*))(var2->class->vft[COLOR_kernel__Object__init]))(var2) /* init on <var2:HashMap[String, String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___provided_declarations].val = var2; /* _provided_declarations on <self:SeparateCompiler exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapstring__Stringparser_nodes__ANode);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashMap[String, ANode]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___requirers_of_declarations].val = var3; /* _requirers_of_declarations on <self:SeparateCompiler exact> */
var4 = NEW_array__Array(&type_array__Arrayc_tools__ExternFile);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:Array[ExternFile]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val = var4; /* _extern_bodies on <self:SeparateCompiler exact> */
var5 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var5->class->vft[COLOR_kernel__Object__init]))(var5) /* init on <var5:Array[String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val = var5; /* _files_to_copy on <self:SeparateCompiler exact> */
var6 = NEW_array__ArraySet(&type_array__ArraySetstring__String);
{
((void (*)(val*))(var6->class->vft[COLOR_kernel__Object__init]))(var6) /* init on <var6:ArraySet[String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val = var6; /* _seen_extern on <self:SeparateCompiler exact> */
var7 = NEW_array__Array(&type_array__Arraystring__String);
var8 = 5;
{
array__Array__with_capacity(var7, var8); /* Direct call array#Array#with_capacity on <var7:Array[String]>*/
}
var_ = var7;
if (varonce) {
var9 = varonce;
} else {
var10 = "isa";
var11 = 3;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
array__AbstractArray__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "as";
var16 = 2;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
{
array__AbstractArray__push(var_, var14); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "auto";
var21 = 4;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
array__AbstractArray__push(var_, var19); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "covariance";
var26 = 10;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
array__AbstractArray__push(var_, var24); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "erasure";
var31 = 7;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
array__AbstractArray__push(var_, var29); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateCompiler exact> */
{
var33 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var33; /* _count_type_test_resolved on <self:SeparateCompiler exact> */
{
var34 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var34; /* _count_type_test_unresolved on <self:SeparateCompiler exact> */
{
var35 = abstract_compiler__AbstractCompiler__init_count_type_test_tags(self);
}
self->attrs[COLOR_abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var35; /* _count_type_test_skipped on <self:SeparateCompiler exact> */
var36 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var36->class->vft[COLOR_kernel__Object__init]))(var36) /* init on <var36:HashSet[MType]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___undead_types].val = var36; /* _undead_types on <self:SeparateCompiler exact> */
var37 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassDefhash_collection__HashSetmodel__MType);
{
((void (*)(val*))(var37->class->vft[COLOR_kernel__Object__init]))(var37) /* init on <var37:HashMap[MClassDef, HashSet[MType]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___live_unresolved_types].val = var37; /* _live_unresolved_types on <self:SeparateCompiler exact> */
var38 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClasskernel__Int);
{
((void (*)(val*))(var38->class->vft[COLOR_kernel__Object__init]))(var38) /* init on <var38:HashMap[MClass, Int]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___box_kinds].val = var38; /* _box_kinds on <self:SeparateCompiler exact> */
var39 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetkernel__Object);
{
((void (*)(val*))(var39->class->vft[COLOR_kernel__Object__init]))(var39) /* init on <var39:HashSet[Object]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___color_consts_done].val = var39; /* _color_consts_done on <self:SeparateCompiler exact> */
var40 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MTypearray__Arraynullable_model__MType);
{
((void (*)(val*))(var40->class->vft[COLOR_kernel__Object__init]))(var40) /* init on <var40:HashMap[MType, Array[nullable MType]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___type_tables].val = var40; /* _type_tables on <self:SeparateCompiler exact> */
var41 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassTypearray__Arraynullable_model__MType);
{
((void (*)(val*))(var41->class->vft[COLOR_kernel__Object__init]))(var41) /* init on <var41:HashMap[MClassType, Array[nullable MType]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___resolution_tables].val = var41; /* _resolution_tables on <self:SeparateCompiler exact> */
var42 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var42->class->vft[COLOR_kernel__Object__init]))(var42) /* init on <var42:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___method_tables].val = var42; /* _method_tables on <self:SeparateCompiler exact> */
var43 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassarray__Arraynullable_model__MPropDef);
{
((void (*)(val*))(var43->class->vft[COLOR_kernel__Object__init]))(var43) /* init on <var43:HashMap[MClass, Array[nullable MPropDef]]>*/;
}
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_tables].val = var43; /* _attr_tables on <self:SeparateCompiler exact> */
var44 = 0;
self->attrs[COLOR_separate_compiler__SeparateCompiler___isset_checks_count].l = var44; /* _isset_checks_count on <self:SeparateCompiler exact> */
var45 = 0;
self->attrs[COLOR_separate_compiler__SeparateCompiler___attr_read_count].l = var45; /* _attr_read_count on <self:SeparateCompiler exact> */
return self;
}
/* runtime class separate_compiler__SeparateCompilerVisitor */
const struct class class_separate_compiler__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_compiler:SeparateCompilerVisitor:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateCompilerVisitor:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_compiler:SeparateCompilerVisitor:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compiler_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__current_node_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__frame_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__object_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__writer_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__init, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_class, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_property, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#compile_callsite */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__calloc_array, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#calloc_array */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__native_array_def, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__varargize, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__anchor, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__resolve_for, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__autoadapt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__supercall, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__adapt_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__unbox_signature_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_signature_extern */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__autobox, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__box_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#box_extern */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__unbox_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_extern */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__is_same_type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__equal_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__monomorphic_super_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__isset_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__read_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__write_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__check_recv_notnull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__last_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__get_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_escape_label, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_escape_label */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__escapemark_names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_names */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__class_name_string, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_name_string */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variables, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__variable, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_var_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_named_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__assign, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#init_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__set_finalizer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#set_finalizer */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__int_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__bool_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__value_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#value_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__vararg_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_decl, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__require_declaration, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__declare_once, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__before_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#before_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_live_open_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__hardening_cast_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__can_be_primitive, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__maybe_null, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateCompilerVisitor__link_unresolved_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateCompilerVisitor */
val* NEW_separate_compiler__SeparateCompilerVisitor(const struct type* type) {
val* self /* : SeparateCompilerVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[String] */;
long var2 /* : Int */;
val* var3 /* : HashMap[EscapeMark, String] */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateCompilerVisitor;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var; /* _current_node on <self:SeparateCompilerVisitor exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___names].val = var1; /* _names on <self:SeparateCompilerVisitor exact> */
var2 = 0;
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___last].l = var2; /* _last on <self:SeparateCompilerVisitor exact> */
var3 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__EscapeMarkstring__String);
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:HashMap[EscapeMark, String]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___escapemark_names].val = var3; /* _escapemark_names on <self:SeparateCompilerVisitor exact> */
var4 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapscope__Variableabstract_compiler__RuntimeVariable);
{
((void (*)(val*))(var4->class->vft[COLOR_kernel__Object__init]))(var4) /* init on <var4:HashMap[Variable, RuntimeVariable]>*/;
}
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___variables].val = var4; /* _variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* runtime class separate_compiler__SeparateRuntimeFunction */
const struct class class_separate_compiler__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_compiler:SeparateRuntimeFunction:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:SeparateRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_compiler:SeparateRuntimeFunction:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__build_c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__SeparateRuntimeFunction__compile_to_c, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#init */
}
};
/* allocate SeparateRuntimeFunction */
val* NEW_separate_compiler__SeparateRuntimeFunction(const struct type* type) {
val* self /* : SeparateRuntimeFunction */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__SeparateRuntimeFunction;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var; /* _c_name_cache on <self:SeparateRuntimeFunction exact> */
return self;
}
/* runtime class separate_compiler__VirtualRuntimeFunction */
const struct class class_separate_compiler__VirtualRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to separate_compiler:VirtualRuntimeFunction:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__to_s, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to separate_compiler:VirtualRuntimeFunction:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to separate_compiler:VirtualRuntimeFunction:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to separate_compiler:VirtualRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to separate_compiler:VirtualRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to separate_compiler:VirtualRuntimeFunction:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to separate_compiler:VirtualRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__build_c_name, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#build_c_name */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d, /* pointer to separate_compiler:VirtualRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)VIRTUAL_separate_compiler__VirtualRuntimeFunction__compile_to_c, /* pointer to separate_compiler:VirtualRuntimeFunction:separate_compiler#VirtualRuntimeFunction#compile_to_c */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to separate_compiler:VirtualRuntimeFunction:kernel#Object#init */
}
};
/* allocate VirtualRuntimeFunction */
val* NEW_separate_compiler__VirtualRuntimeFunction(const struct type* type) {
val* self /* : VirtualRuntimeFunction */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_separate_compiler__VirtualRuntimeFunction;
var = NULL;
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var; /* _c_name_cache on <self:VirtualRuntimeFunction exact> */
return self;
}
/* runtime class separate_compiler__PropertyLayoutElement */
/* allocate PropertyLayoutElement */
val* NEW_separate_compiler__PropertyLayoutElement(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PropertyLayoutElement is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_compiler__Toolchain */
/* allocate Toolchain */
val* NEW_abstract_compiler__Toolchain(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Toolchain is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_compiler__MakefileToolchain */
const struct class class_abstract_compiler__MakefileToolchain = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__init, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to abstract_compiler:MakefileToolchain:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:MakefileToolchain:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:MakefileToolchain:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:MakefileToolchain:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:MakefileToolchain:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:MakefileToolchain:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:MakefileToolchain:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:MakefileToolchain:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_compiler:MakefileToolchain:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__toolcontext, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__toolcontext_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)VIRTUAL_abstract_compiler__Toolchain__compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#compile_dir */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__write_and_make, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#init */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__cc_paths, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#cc_paths */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__clib, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#clib */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__clib_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#clib= */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__gather_cc_paths, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#gather_cc_paths */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__write_files, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__makefile_name, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__default_outname, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#default_outname */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__outfile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__write_makefile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_makefile */
(nitmethod_t)VIRTUAL_abstract_compiler__MakefileToolchain__compile_c_code, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#compile_c_code */
}
};
/* allocate MakefileToolchain */
val* NEW_abstract_compiler__MakefileToolchain(const struct type* type) {
val* self /* : MakefileToolchain */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__MakefileToolchain;
var = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[String]>*/;
}
self->attrs[COLOR_abstract_compiler__MakefileToolchain___cc_paths].val = var; /* _cc_paths on <self:MakefileToolchain exact> */
return self;
}
/* runtime class abstract_compiler__AbstractCompiler */
/* allocate AbstractCompiler */
val* NEW_abstract_compiler__AbstractCompiler(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractCompiler is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_compiler__CodeFile */
const struct class class_abstract_compiler__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeFile:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeFile:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeFile:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeFile:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__init, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to abstract_compiler:CodeFile:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeFile:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeFile:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeFile:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeFile:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeFile:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeFile:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:CodeFile:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:CodeFile:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:CodeFile:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_compiler:CodeFile:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:CodeFile:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:CodeFile:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:CodeFile:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:CodeFile:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:CodeFile:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__name, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__name_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__writers, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeFile__required_declarations, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to abstract_compiler:CodeFile:kernel#Object#init */
}
};
/* allocate CodeFile */
val* NEW_abstract_compiler__CodeFile(const struct type* type) {
val* self /* : CodeFile */;
val* var /* : Array[CodeWriter] */;
val* var1 /* : HashSet[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__CodeFile;
var = NEW_array__Array(&type_array__Arrayabstract_compiler__CodeWriter);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:Array[CodeWriter]>*/;
}
self->attrs[COLOR_abstract_compiler__CodeFile___writers].val = var; /* _writers on <self:CodeFile exact> */
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetstring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:HashSet[String]>*/;
}
self->attrs[COLOR_abstract_compiler__CodeFile___required_declarations].val = var1; /* _required_declarations on <self:CodeFile exact> */
return self;
}
/* runtime class abstract_compiler__CodeWriter */
const struct class class_abstract_compiler__CodeWriter = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:CodeWriter:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:CodeWriter:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:CodeWriter:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:CodeWriter:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to abstract_compiler:CodeWriter:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to abstract_compiler:CodeWriter:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:CodeWriter:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:CodeWriter:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:CodeWriter:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:CodeWriter:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:CodeWriter:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_compiler:CodeWriter:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__file, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__file_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file= */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__decl_lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__add_decl, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#add_decl */
(nitmethod_t)VIRTUAL_abstract_compiler__CodeWriter__init, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#init */
}
};
/* allocate CodeWriter */
val* NEW_abstract_compiler__CodeWriter(const struct type* type) {
val* self /* : CodeWriter */;
val* var /* : List[String] */;
val* var1 /* : List[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__CodeWriter;
var = NEW_list__List(&type_list__Liststring__String);
{
((void (*)(val*))(var->class->vft[COLOR_kernel__Object__init]))(var) /* init on <var:List[String]>*/;
}
self->attrs[COLOR_abstract_compiler__CodeWriter___lines].val = var; /* _lines on <self:CodeWriter exact> */
var1 = NEW_list__List(&type_list__Liststring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:List[String]>*/;
}
self->attrs[COLOR_abstract_compiler__CodeWriter___decl_lines].val = var1; /* _decl_lines on <self:CodeWriter exact> */
return self;
}
/* runtime class abstract_compiler__AbstractCompilerVisitor */
/* allocate AbstractCompilerVisitor */
val* NEW_abstract_compiler__AbstractCompilerVisitor(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractCompilerVisitor is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_compiler__AbstractRuntimeFunction */
/* allocate AbstractRuntimeFunction */
val* NEW_abstract_compiler__AbstractRuntimeFunction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractRuntimeFunction is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class abstract_compiler__RuntimeVariable */
const struct class class_abstract_compiler__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#sys */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to abstract_compiler:RuntimeVariable:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#class_name */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:RuntimeVariable:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:RuntimeVariable:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:RuntimeVariable:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:RuntimeVariable:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:RuntimeVariable:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_compiler:RuntimeVariable:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__name, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__name_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mtype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mtype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__is_exact, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__is_exact_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact= */
(nitmethod_t)VIRTUAL_abstract_compiler__RuntimeVariable__init, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#init */
}
};
/* allocate RuntimeVariable */
val* NEW_abstract_compiler__RuntimeVariable(const struct type* type) {
val* self /* : RuntimeVariable */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__RuntimeVariable;
var = 0;
self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = var; /* _is_exact on <self:RuntimeVariable exact> */
return self;
}
/* runtime class abstract_compiler__Frame */
const struct class class_abstract_compiler__Frame = {
0, /* box_kind */
{
(nitmethod_t)VIRTUAL_kernel__Object__object_id, /* pointer to abstract_compiler:Frame:kernel#Object#object_id */
(nitmethod_t)VIRTUAL_kernel__Object__is_same_instance, /* pointer to abstract_compiler:Frame:kernel#Object#is_same_instance */
(nitmethod_t)VIRTUAL_kernel__Object___61d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#== */
(nitmethod_t)VIRTUAL_kernel__Object___33d_61d, /* pointer to abstract_compiler:Frame:kernel#Object#!= */
(nitmethod_t)VIRTUAL_kernel__Object__hash, /* pointer to abstract_compiler:Frame:kernel#Object#hash */
(nitmethod_t)VIRTUAL_kernel__Object__exit, /* pointer to abstract_compiler:Frame:kernel#Object#exit */
(nitmethod_t)VIRTUAL_kernel__Object__sys, /* pointer to abstract_compiler:Frame:kernel#Object#sys */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__init, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#init */
(nitmethod_t)VIRTUAL_sorter__Object__default_comparator, /* pointer to abstract_compiler:Frame:sorter#Object#default_comparator */
(nitmethod_t)VIRTUAL_string__Object__to_s, /* pointer to abstract_compiler:Frame:string#Object#to_s */
(nitmethod_t)VIRTUAL_string__Object__native_class_name, /* pointer to abstract_compiler:Frame:string#Object#native_class_name */
(nitmethod_t)VIRTUAL_string__Object__class_name, /* pointer to abstract_compiler:Frame:string#Object#class_name */
(nitmethod_t)VIRTUAL_string__Object__inspect, /* pointer to abstract_compiler:Frame:string#Object#inspect */
(nitmethod_t)VIRTUAL_string__Object__inspect_head, /* pointer to abstract_compiler:Frame:string#Object#inspect_head */
(nitmethod_t)VIRTUAL_string__Object__args, /* pointer to abstract_compiler:Frame:string#Object#args */
(nitmethod_t)VIRTUAL_time__Object__get_time, /* pointer to abstract_compiler:Frame:time#Object#get_time */
(nitmethod_t)VIRTUAL_file__Object__printn, /* pointer to abstract_compiler:Frame:file#Object#printn */
(nitmethod_t)VIRTUAL_file__Object__print, /* pointer to abstract_compiler:Frame:file#Object#print */
(nitmethod_t)VIRTUAL_file__Object__getcwd, /* pointer to abstract_compiler:Frame:file#Object#getcwd */
(nitmethod_t)VIRTUAL_file__Object__file_getcwd, /* pointer to abstract_compiler:Frame:file#Object#file_getcwd */
(nitmethod_t)VIRTUAL_model_base__Object__intrude_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#intrude_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__public_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#public_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__protected_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#protected_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__private_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#private_visibility */
(nitmethod_t)VIRTUAL_model_base__Object__none_visibility, /* pointer to abstract_compiler:Frame:model_base#Object#none_visibility */
(nitmethod_t)VIRTUAL_version__Object__nit_version, /* pointer to abstract_compiler:Frame:version#Object#nit_version */
(nitmethod_t)VIRTUAL_model__Object__abstract_kind, /* pointer to abstract_compiler:Frame:model#Object#abstract_kind */
(nitmethod_t)VIRTUAL_model__Object__concrete_kind, /* pointer to abstract_compiler:Frame:model#Object#concrete_kind */
(nitmethod_t)VIRTUAL_model__Object__interface_kind, /* pointer to abstract_compiler:Frame:model#Object#interface_kind */
(nitmethod_t)VIRTUAL_model__Object__enum_kind, /* pointer to abstract_compiler:Frame:model#Object#enum_kind */
(nitmethod_t)VIRTUAL_model__Object__extern_kind, /* pointer to abstract_compiler:Frame:model#Object#extern_kind */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__visitor_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#visitor= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__mpropdef, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#mpropdef */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__mpropdef_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#mpropdef= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__receiver, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#receiver */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__receiver_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#receiver= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__arguments, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#arguments */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__arguments_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#arguments= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnvar, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnvar */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnvar_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnvar= */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnlabel, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnlabel */
(nitmethod_t)VIRTUAL_abstract_compiler__Frame__returnlabel_61d, /* pointer to abstract_compiler:Frame:abstract_compiler#Frame#returnlabel= */
(nitmethod_t)VIRTUAL_kernel__Object__init, /* pointer to abstract_compiler:Frame:kernel#Object#init */
}
};
/* allocate Frame */
val* NEW_abstract_compiler__Frame(const struct type* type) {
val* self /* : Frame */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_abstract_compiler__Frame;
var = NULL;
self->attrs[COLOR_abstract_compiler__Frame___returnvar].val = var; /* _returnvar on <self:Frame exact> */
var1 = NULL;
self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = var1; /* _returnlabel on <self:Frame exact> */
return self;
}
