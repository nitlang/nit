#include "nit__nith.classes.0.h"
/* runtime class nit__ALtExpr */
const struct class class_nit__ALtExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALtExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALtExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALtExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALtExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALtExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALtExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALtExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALtExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALtExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALtExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALtExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALtExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALtExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALtExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALtExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALtExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALtExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALtExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALtExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALtExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALtExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALtExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALtExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALtExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALtExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALtExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALtExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALtExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALtExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALtExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALtExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ALtExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ALtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALtExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ALtExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALtExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALtExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALtExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ALtExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ALtExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ALtExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ALtExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ALtExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ALtExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ALtExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ALtExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ALtExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ALtExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ALtExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ALtExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ALtExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALtExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALtExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ALtExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ALtExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ALtExpr___ASendExpr__property_name, /* pointer to parser_nodes:ALtExpr:typing#ALtExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ALtExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ALtExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:ALtExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___ALtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___ALtExpr___init_altexpr, /* pointer to parser_nodes:ALtExpr:parser_prod#ALtExpr#init_altexpr */
}
};
/* allocate ALtExpr */
val* NEW_nit__ALtExpr(const struct type* type) {
val* self /* : ALtExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALtExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALtExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALtExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ALtExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ALtExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ALtExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ALtExpr exact> */
return self;
}
/* runtime class nit__ALeExpr */
const struct class class_nit__ALeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ALeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ALeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ALeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ALeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ALeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ALeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ALeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ALeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ALeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ALeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ALeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ALeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ALeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ALeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ALeExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ALeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ALeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ALeExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ALeExpr___ASendExpr__property_name, /* pointer to parser_nodes:ALeExpr:typing#ALeExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ALeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ALeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:ALeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___ALeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___ALeExpr___init_aleexpr, /* pointer to parser_nodes:ALeExpr:parser_prod#ALeExpr#init_aleexpr */
}
};
/* allocate ALeExpr */
val* NEW_nit__ALeExpr(const struct type* type) {
val* self /* : ALeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ALeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ALeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ALeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ALeExpr exact> */
return self;
}
/* runtime class nit__ALlExpr */
const struct class class_nit__ALlExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ALlExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ALlExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ALlExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ALlExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ALlExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ALlExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ALlExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ALlExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ALlExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ALlExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ALlExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ALlExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ALlExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ALlExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ALlExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ALlExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ALlExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ALlExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ALlExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ALlExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ALlExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ALlExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ALlExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ALlExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ALlExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ALlExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ALlExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ALlExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ALlExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ALlExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ALlExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ALlExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ALlExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ALlExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ALlExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ALlExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ALlExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ALlExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ALlExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ALlExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ALlExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ALlExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ALlExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ALlExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ALlExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ALlExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ALlExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ALlExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ALlExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ALlExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ALlExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ALlExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ALlExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ALlExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ALlExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ALlExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ALlExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ALlExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ALlExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ALlExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ALlExpr___ASendExpr__property_name, /* pointer to parser_nodes:ALlExpr:typing#ALlExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ALlExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ALlExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:ALlExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___ALlExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___ALlExpr___init_allexpr, /* pointer to parser_nodes:ALlExpr:parser_prod#ALlExpr#init_allexpr */
}
};
/* allocate ALlExpr */
val* NEW_nit__ALlExpr(const struct type* type) {
val* self /* : ALlExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ALlExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ALlExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ALlExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ALlExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ALlExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ALlExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ALlExpr exact> */
return self;
}
/* runtime class nit__AGtExpr */
const struct class class_nit__AGtExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AGtExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AGtExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AGtExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AGtExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AGtExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AGtExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AGtExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AGtExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AGtExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AGtExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AGtExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AGtExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AGtExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AGtExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AGtExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AGtExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AGtExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AGtExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AGtExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AGtExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AGtExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AGtExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AGtExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AGtExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AGtExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AGtExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AGtExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AGtExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AGtExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AGtExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AGtExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AGtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AGtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AGtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AGtExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AGtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AGtExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AGtExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AGtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AGtExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AGtExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AGtExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AGtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AGtExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AGtExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AGtExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AGtExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AGtExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AGtExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AGtExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AGtExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AGtExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AGtExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AGtExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AGtExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AGtExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AGtExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AGtExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AGtExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AGtExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AGtExpr___ASendExpr__property_name, /* pointer to parser_nodes:AGtExpr:typing#AGtExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AGtExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AGtExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AGtExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AGtExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AGtExpr___init_agtexpr, /* pointer to parser_nodes:AGtExpr:parser_prod#AGtExpr#init_agtexpr */
}
};
/* allocate AGtExpr */
val* NEW_nit__AGtExpr(const struct type* type) {
val* self /* : AGtExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AGtExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AGtExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AGtExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AGtExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AGtExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AGtExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AGtExpr exact> */
return self;
}
/* runtime class nit__AGeExpr */
const struct class class_nit__AGeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AGeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AGeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AGeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AGeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AGeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AGeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AGeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AGeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AGeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AGeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AGeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AGeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AGeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AGeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AGeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AGeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AGeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AGeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AGeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AGeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AGeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AGeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AGeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AGeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AGeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AGeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AGeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AGeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AGeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AGeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AGeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AGeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AGeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AGeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AGeExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AGeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AGeExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AGeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AGeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AGeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AGeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AGeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AGeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AGeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AGeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AGeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AGeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AGeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AGeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AGeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AGeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AGeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AGeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AGeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AGeExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AGeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AGeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AGeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AGeExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AGeExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AGeExpr___ASendExpr__property_name, /* pointer to parser_nodes:AGeExpr:typing#AGeExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AGeExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AGeExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AGeExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AGeExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AGeExpr___init_ageexpr, /* pointer to parser_nodes:AGeExpr:parser_prod#AGeExpr#init_ageexpr */
}
};
/* allocate AGeExpr */
val* NEW_nit__AGeExpr(const struct type* type) {
val* self /* : AGeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AGeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AGeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AGeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AGeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AGeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AGeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AGeExpr exact> */
return self;
}
/* runtime class nit__AGgExpr */
const struct class class_nit__AGgExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AGgExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AGgExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AGgExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AGgExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AGgExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AGgExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AGgExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AGgExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AGgExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AGgExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AGgExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AGgExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AGgExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AGgExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AGgExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AGgExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AGgExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AGgExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AGgExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AGgExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AGgExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AGgExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AGgExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AGgExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AGgExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AGgExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AGgExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AGgExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AGgExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AGgExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AGgExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AGgExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AGgExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AGgExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AGgExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AGgExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AGgExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AGgExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AGgExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AGgExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AGgExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AGgExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AGgExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AGgExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AGgExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AGgExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AGgExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AGgExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AGgExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AGgExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AGgExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AGgExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AGgExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AGgExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AGgExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AGgExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AGgExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AGgExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AGgExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AGgExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AGgExpr___ASendExpr__property_name, /* pointer to parser_nodes:AGgExpr:typing#AGgExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AGgExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AGgExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AGgExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AGgExpr___init_aggexpr, /* pointer to parser_nodes:AGgExpr:parser_prod#AGgExpr#init_aggexpr */
}
};
/* allocate AGgExpr */
val* NEW_nit__AGgExpr(const struct type* type) {
val* self /* : AGgExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AGgExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AGgExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AGgExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AGgExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AGgExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AGgExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AGgExpr exact> */
return self;
}
/* runtime class nit__AIsaExpr */
const struct class class_nit__AIsaExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIsaExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIsaExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIsaExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIsaExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIsaExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIsaExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIsaExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIsaExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIsaExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIsaExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIsaExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIsaExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIsaExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIsaExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIsaExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIsaExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIsaExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIsaExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIsaExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIsaExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIsaExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIsaExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIsaExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIsaExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIsaExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIsaExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIsaExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AIsaExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AIsaExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AIsaExpr:flow#AIsaExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIsaExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIsaExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AIsaExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AIsaExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AIsaExpr:rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AIsaExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AIsaExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIsaExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIsaExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIsaExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIsaExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AIsaExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AIsaExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AIsaExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AIsaExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AIsaExpr___AExpr__accept_typing, /* pointer to parser_nodes:AIsaExpr:typing#AIsaExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AIsaExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AIsaExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AIsaExpr___AExpr__expr, /* pointer to parser_nodes:AIsaExpr:abstract_compiler#AIsaExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AIsaExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIsaExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIsaExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AIsaExpr___n_expr, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#n_expr */
(nitmethod_t)nit__parser_prod___AIsaExpr___n_expr_61d, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#n_expr= */
(nitmethod_t)nit___nit__AIsaExpr___n_type, /* pointer to parser_nodes:AIsaExpr:parser_nodes#AIsaExpr#n_type */
(nitmethod_t)nit__parser_prod___AIsaExpr___n_type_61d, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#n_type= */
(nitmethod_t)nit__parser_prod___AIsaExpr___init_aisaexpr, /* pointer to parser_nodes:AIsaExpr:parser_prod#AIsaExpr#init_aisaexpr */
(nitmethod_t)nit__typing___AIsaExpr___cast_type, /* pointer to parser_nodes:AIsaExpr:typing#AIsaExpr#cast_type */
(nitmethod_t)nit__typing___AIsaExpr___cast_type_61d, /* pointer to parser_nodes:AIsaExpr:typing#AIsaExpr#cast_type= */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AIsaExpr:flow#ANode#accept_flow_visitor */
}
};
/* allocate AIsaExpr */
val* NEW_nit__AIsaExpr(const struct type* type) {
val* self /* : AIsaExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIsaExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIsaExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIsaExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AIsaExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AIsaExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AIsaExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AIsaExpr exact> */
return self;
}
/* runtime class nit__APlusExpr */
const struct class class_nit__APlusExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APlusExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APlusExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APlusExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APlusExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APlusExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APlusExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APlusExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APlusExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APlusExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APlusExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APlusExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APlusExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APlusExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APlusExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APlusExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APlusExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APlusExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APlusExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APlusExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APlusExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APlusExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APlusExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APlusExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APlusExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APlusExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APlusExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APlusExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APlusExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APlusExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APlusExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APlusExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APlusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APlusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APlusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:APlusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:APlusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APlusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:APlusExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APlusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APlusExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APlusExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APlusExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APlusExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:APlusExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:APlusExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:APlusExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:APlusExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:APlusExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:APlusExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:APlusExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:APlusExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:APlusExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:APlusExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:APlusExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:APlusExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:APlusExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APlusExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APlusExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:APlusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___APlusExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___APlusExpr___ASendExpr__property_name, /* pointer to parser_nodes:APlusExpr:typing#APlusExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:APlusExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:APlusExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___APlusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___APlusExpr___init_aplusexpr, /* pointer to parser_nodes:APlusExpr:parser_prod#APlusExpr#init_aplusexpr */
}
};
/* allocate APlusExpr */
val* NEW_nit__APlusExpr(const struct type* type) {
val* self /* : APlusExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APlusExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APlusExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APlusExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:APlusExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:APlusExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:APlusExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:APlusExpr exact> */
return self;
}
/* runtime class nit__AMinusExpr */
const struct class class_nit__AMinusExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMinusExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMinusExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMinusExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMinusExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMinusExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMinusExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMinusExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMinusExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMinusExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMinusExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMinusExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMinusExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMinusExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMinusExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMinusExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMinusExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMinusExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMinusExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMinusExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMinusExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMinusExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMinusExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMinusExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMinusExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMinusExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMinusExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMinusExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMinusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMinusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMinusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AMinusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AMinusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AMinusExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMinusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMinusExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMinusExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMinusExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AMinusExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AMinusExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AMinusExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AMinusExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AMinusExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AMinusExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AMinusExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AMinusExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMinusExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMinusExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AMinusExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AMinusExpr___ASendExpr__property_name, /* pointer to parser_nodes:AMinusExpr:typing#AMinusExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AMinusExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AMinusExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AMinusExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AMinusExpr___init_aminusexpr, /* pointer to parser_nodes:AMinusExpr:parser_prod#AMinusExpr#init_aminusexpr */
}
};
/* allocate AMinusExpr */
val* NEW_nit__AMinusExpr(const struct type* type) {
val* self /* : AMinusExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMinusExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMinusExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMinusExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AMinusExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AMinusExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AMinusExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AMinusExpr exact> */
return self;
}
/* runtime class nit__AStarshipExpr */
const struct class class_nit__AStarshipExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStarshipExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStarshipExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStarshipExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStarshipExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStarshipExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStarshipExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStarshipExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStarshipExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStarshipExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStarshipExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStarshipExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStarshipExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStarshipExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStarshipExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStarshipExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStarshipExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStarshipExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStarshipExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStarshipExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStarshipExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStarshipExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStarshipExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStarshipExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AStarshipExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AStarshipExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarshipExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AStarshipExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStarshipExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStarshipExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStarshipExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AStarshipExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AStarshipExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AStarshipExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AStarshipExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AStarshipExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AStarshipExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AStarshipExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AStarshipExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStarshipExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStarshipExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AStarshipExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AStarshipExpr___ASendExpr__property_name, /* pointer to parser_nodes:AStarshipExpr:typing#AStarshipExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarshipExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AStarshipExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AStarshipExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AStarshipExpr___init_astarshipexpr, /* pointer to parser_nodes:AStarshipExpr:parser_prod#AStarshipExpr#init_astarshipexpr */
}
};
/* allocate AStarshipExpr */
val* NEW_nit__AStarshipExpr(const struct type* type) {
val* self /* : AStarshipExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStarshipExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStarshipExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStarshipExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AStarshipExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStarshipExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStarshipExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AStarshipExpr exact> */
return self;
}
/* runtime class nit__AStarExpr */
const struct class class_nit__AStarExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStarExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStarExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStarExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStarExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStarExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStarExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStarExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStarExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStarExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStarExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStarExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStarExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStarExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStarExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStarExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStarExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStarExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStarExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStarExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStarExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStarExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStarExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStarExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStarExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStarExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStarExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStarExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStarExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStarExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStarExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStarExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStarExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AStarExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AStarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AStarExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStarExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStarExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStarExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStarExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AStarExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AStarExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AStarExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AStarExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AStarExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AStarExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AStarExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AStarExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AStarExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AStarExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AStarExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AStarExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AStarExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStarExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStarExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AStarExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AStarExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AStarExpr___ASendExpr__property_name, /* pointer to parser_nodes:AStarExpr:typing#AStarExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AStarExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AStarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AStarExpr___init_astarexpr, /* pointer to parser_nodes:AStarExpr:parser_prod#AStarExpr#init_astarexpr */
}
};
/* allocate AStarExpr */
val* NEW_nit__AStarExpr(const struct type* type) {
val* self /* : AStarExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStarExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStarExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStarExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AStarExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStarExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStarExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AStarExpr exact> */
return self;
}
/* runtime class nit__AStarstarExpr */
const struct class class_nit__AStarstarExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStarstarExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStarstarExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStarstarExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStarstarExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStarstarExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStarstarExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStarstarExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStarstarExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStarstarExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStarstarExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStarstarExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStarstarExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStarstarExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStarstarExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStarstarExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStarstarExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStarstarExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStarstarExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStarstarExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStarstarExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStarstarExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStarstarExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStarstarExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStarstarExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStarstarExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStarstarExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStarstarExpr:parser_prod#AStarstarExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStarstarExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStarstarExpr:parser_prod#AStarstarExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AStarstarExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStarstarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStarstarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStarstarExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AStarstarExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AStarstarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStarstarExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AStarstarExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStarstarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStarstarExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStarstarExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AStarstarExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AStarstarExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AStarstarExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AStarstarExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AStarstarExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AStarstarExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AStarstarExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AStarstarExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AStarstarExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AStarstarExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AStarstarExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AStarstarExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AStarstarExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStarstarExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStarstarExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AStarstarExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AStarstarExpr:parser_prod#AStarstarExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AStarstarExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AStarstarExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AStarstarExpr___ASendExpr__property_name, /* pointer to parser_nodes:AStarstarExpr:typing#AStarstarExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AStarstarExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AStarstarExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:AStarstarExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AStarstarExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:AStarstarExpr:parser_prod#AStarstarExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___AStarstarExpr___init_astarstarexpr, /* pointer to parser_nodes:AStarstarExpr:parser_prod#AStarstarExpr#init_astarstarexpr */
}
};
/* allocate AStarstarExpr */
val* NEW_nit__AStarstarExpr(const struct type* type) {
val* self /* : AStarstarExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStarstarExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStarstarExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStarstarExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AStarstarExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStarstarExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStarstarExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AStarstarExpr exact> */
return self;
}
/* runtime class nit__ASlashExpr */
const struct class class_nit__ASlashExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASlashExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASlashExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASlashExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASlashExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASlashExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASlashExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASlashExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASlashExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASlashExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASlashExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASlashExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASlashExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASlashExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASlashExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASlashExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASlashExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASlashExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASlashExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASlashExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASlashExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASlashExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASlashExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASlashExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASlashExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASlashExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASlashExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASlashExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASlashExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASlashExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASlashExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ASlashExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ASlashExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASlashExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ASlashExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASlashExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASlashExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASlashExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASlashExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ASlashExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ASlashExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ASlashExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ASlashExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ASlashExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ASlashExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ASlashExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ASlashExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASlashExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASlashExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ASlashExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ASlashExpr___ASendExpr__property_name, /* pointer to parser_nodes:ASlashExpr:typing#ASlashExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ASlashExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:ASlashExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___ASlashExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___ASlashExpr___init_aslashexpr, /* pointer to parser_nodes:ASlashExpr:parser_prod#ASlashExpr#init_aslashexpr */
}
};
/* allocate ASlashExpr */
val* NEW_nit__ASlashExpr(const struct type* type) {
val* self /* : ASlashExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASlashExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASlashExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASlashExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ASlashExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASlashExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASlashExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ASlashExpr exact> */
return self;
}
/* runtime class nit__APercentExpr */
const struct class class_nit__APercentExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APercentExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APercentExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APercentExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APercentExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APercentExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APercentExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APercentExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APercentExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APercentExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APercentExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APercentExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APercentExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APercentExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APercentExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APercentExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APercentExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APercentExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APercentExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APercentExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APercentExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APercentExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APercentExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APercentExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APercentExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APercentExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APercentExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APercentExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APercentExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APercentExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APercentExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APercentExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APercentExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APercentExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APercentExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:APercentExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:APercentExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:APercentExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:APercentExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APercentExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APercentExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APercentExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APercentExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APercentExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:APercentExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:APercentExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:APercentExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:APercentExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:APercentExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:APercentExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:APercentExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:APercentExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:APercentExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:APercentExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:APercentExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:APercentExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:APercentExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APercentExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APercentExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:APercentExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___APercentExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___APercentExpr___ASendExpr__property_name, /* pointer to parser_nodes:APercentExpr:typing#APercentExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABinopExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:APercentExpr:typing#ABinopExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__ABinopExpr___n_expr2, /* pointer to parser_nodes:APercentExpr:parser_nodes#ABinopExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___APercentExpr___nit__parser_nodes__ABinopExpr__n_expr2_61d, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#n_expr2= */
(nitmethod_t)nit__parser_prod___APercentExpr___init_apercentexpr, /* pointer to parser_nodes:APercentExpr:parser_prod#APercentExpr#init_apercentexpr */
}
};
/* allocate APercentExpr */
val* NEW_nit__APercentExpr(const struct type* type) {
val* self /* : APercentExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APercentExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APercentExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APercentExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:APercentExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:APercentExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:APercentExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:APercentExpr exact> */
return self;
}
/* runtime class nit__AUminusExpr */
const struct class class_nit__AUminusExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AUminusExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AUminusExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AUminusExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AUminusExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AUminusExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AUminusExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AUminusExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AUminusExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AUminusExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AUminusExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AUminusExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AUminusExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AUminusExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AUminusExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AUminusExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AUminusExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AUminusExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AUminusExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AUminusExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AUminusExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AUminusExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AUminusExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AUminusExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AUminusExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AUminusExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AUminusExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AUminusExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AUminusExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AUminusExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AUminusExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AUminusExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AUminusExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AUminusExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AUminusExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AUminusExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AUminusExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AUminusExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AUminusExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AUminusExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AUminusExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AUminusExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AUminusExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AUminusExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AUminusExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AUminusExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AUminusExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AUminusExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AUminusExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AUminusExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AUminusExpr___ASendExpr__property_name, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___AUminusExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AUminusExpr:typing#AUminusExpr#compute_raw_arguments */
(nitmethod_t)nit__parser_prod___AUminusExpr___n_minus_61d, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#n_minus= */
(nitmethod_t)nit__parser_prod___AUminusExpr___init_auminusexpr, /* pointer to parser_nodes:AUminusExpr:parser_prod#AUminusExpr#init_auminusexpr */
}
};
/* allocate AUminusExpr */
val* NEW_nit__AUminusExpr(const struct type* type) {
val* self /* : AUminusExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AUminusExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AUminusExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AUminusExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AUminusExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AUminusExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AUminusExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AUminusExpr exact> */
return self;
}
/* runtime class nit__ANewExpr */
const struct class class_nit__ANewExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ANewExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ANewExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ANewExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ANewExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ANewExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ANewExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ANewExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ANewExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ANewExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ANewExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ANewExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ANewExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ANewExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ANewExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ANewExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ANewExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ANewExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ANewExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ANewExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ANewExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ANewExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ANewExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ANewExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ANewExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ANewExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ANewExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ANewExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ANewExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ANewExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ANewExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ANewExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ANewExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ANewExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ANewExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ANewExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANewExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ANewExpr:rapid_type_analysis#ANewExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ANewExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ANewExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ANewExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ANewExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ANewExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ANewExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ANewExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ANewExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ANewExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ANewExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ANewExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ANewExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ANewExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ANewExpr___AExpr__accept_typing, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ANewExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ANewExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ANewExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ANewExpr___AExpr__expr, /* pointer to parser_nodes:ANewExpr:abstract_compiler#ANewExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ANewExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ANewExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ANewExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ANewExpr___n_kwnew_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_kwnew= */
(nitmethod_t)nit___nit__ANewExpr___n_type, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_type */
(nitmethod_t)nit__parser_prod___ANewExpr___n_type_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_type= */
(nitmethod_t)nit___nit__ANewExpr___n_id, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_id */
(nitmethod_t)nit__parser_prod___ANewExpr___n_id_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_id= */
(nitmethod_t)nit___nit__ANewExpr___n_args, /* pointer to parser_nodes:ANewExpr:parser_nodes#ANewExpr#n_args */
(nitmethod_t)nit__parser_prod___ANewExpr___n_args_61d, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#n_args= */
(nitmethod_t)nit__parser_prod___ANewExpr___init_anewexpr, /* pointer to parser_nodes:ANewExpr:parser_prod#ANewExpr#init_anewexpr */
(nitmethod_t)nit__typing___ANewExpr___callsite, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#callsite */
(nitmethod_t)nit__typing___ANewExpr___callsite_61d, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#callsite= */
(nitmethod_t)nit__typing___ANewExpr___recvtype, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#recvtype */
(nitmethod_t)nit__typing___ANewExpr___recvtype_61d, /* pointer to parser_nodes:ANewExpr:typing#ANewExpr#recvtype= */
(nitmethod_t)nit__astbuilder___ANewExpr___make, /* pointer to parser_nodes:ANewExpr:astbuilder#ANewExpr#make */
}
};
/* allocate ANewExpr */
val* NEW_nit__ANewExpr(const struct type* type) {
val* self /* : ANewExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ANewExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ANewExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANewExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ANewExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ANewExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ANewExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ANewExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ANewExpr___n_id].val = var6; /* _n_id on <self:ANewExpr exact> */
return self;
}
/* runtime class nit__AAttrFormExpr */
/* allocate AAttrFormExpr */
val* NEW_nit__AAttrFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAttrFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AAttrExpr */
const struct class class_nit__AAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAttrExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAttrExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAttrExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAttrExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAttrExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAttrExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAttrExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAttrExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAttrExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAttrExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAttrExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAttrExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAttrExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAttrExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAttrExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAttrExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAttrExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAttrExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAttrExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAttrExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAttrExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAttrExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAttrExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAttrExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAttrExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAttrExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAttrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAttrExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAttrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAttrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAttrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAttrExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAttrExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAttrExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAttrExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAttrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAttrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAttrExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAttrExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAttrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAttrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAttrExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAttrExpr:typing#AAttrExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAttrExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAttrExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AAttrExpr___AExpr__expr, /* pointer to parser_nodes:AAttrExpr:abstract_compiler#AAttrExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AAttrExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAttrExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAttrExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AAttrFormExpr___n_expr, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#n_expr= */
(nitmethod_t)nit___nit__AAttrFormExpr___n_id, /* pointer to parser_nodes:AAttrExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)nit__parser_prod___AAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#n_id= */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty_61d, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#attr_type */
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
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type_61d, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)nit__typing___AAttrFormExpr___resolve_property, /* pointer to parser_nodes:AAttrExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)nit__parser_prod___AAttrExpr___init_aattrexpr, /* pointer to parser_nodes:AAttrExpr:parser_prod#AAttrExpr#init_aattrexpr */
(nitmethod_t)nit__astbuilder___AAttrExpr___make, /* pointer to parser_nodes:AAttrExpr:astbuilder#AAttrExpr#make */
}
};
/* allocate AAttrExpr */
val* NEW_nit__AAttrExpr(const struct type* type) {
val* self /* : AAttrExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAttrExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAttrExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAttrExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAttrExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAttrExpr exact> */
return self;
}
/* runtime class nit__AAttrAssignExpr */
const struct class class_nit__AAttrAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAttrAssignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAttrAssignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAttrAssignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAttrAssignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAttrAssignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAttrAssignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAttrAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAttrAssignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAttrAssignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAttrAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAttrAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAttrAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAttrAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAttrAssignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAttrAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrAssignExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAttrAssignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAttrAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAttrAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAttrAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAttrAssignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAttrAssignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAttrAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAttrAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAttrAssignExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrAssignExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AAttrAssignExpr___AExpr__expr, /* pointer to parser_nodes:AAttrAssignExpr:abstract_compiler#AAttrAssignExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AAttrAssignExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAttrAssignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAttrAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AAttrFormExpr___n_expr, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_expr= */
(nitmethod_t)nit___nit__AAttrFormExpr___n_id, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_id= */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)nit___nit__AAssignFormExpr___n_assign, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_assign= */
(nitmethod_t)nit___nit__AAssignFormExpr___n_value, /* pointer to parser_nodes:AAttrAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#n_value= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type_61d, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)nit__typing___AAttrFormExpr___resolve_property, /* pointer to parser_nodes:AAttrAssignExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)nit__parser_prod___AAttrAssignExpr___init_aattrassignexpr, /* pointer to parser_nodes:AAttrAssignExpr:parser_prod#AAttrAssignExpr#init_aattrassignexpr */
(nitmethod_t)nit__astbuilder___AAttrAssignExpr___make, /* pointer to parser_nodes:AAttrAssignExpr:astbuilder#AAttrAssignExpr#make */
}
};
/* allocate AAttrAssignExpr */
val* NEW_nit__AAttrAssignExpr(const struct type* type) {
val* self /* : AAttrAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAttrAssignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAttrAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAttrAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAttrAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAttrAssignExpr exact> */
return self;
}
/* runtime class nit__ACallFormExpr */
/* allocate ACallFormExpr */
val* NEW_nit__ACallFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ACallFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ASendReassignFormExpr */
/* allocate ASendReassignFormExpr */
val* NEW_nit__ASendReassignFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ASendReassignFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AAttrReassignExpr */
const struct class class_nit__AAttrReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAttrReassignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAttrReassignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAttrReassignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAttrReassignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAttrReassignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAttrReassignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAttrReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAttrReassignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAttrReassignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAttrReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAttrReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AReassignFormExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AAttrReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAttrReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAttrReassignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAttrReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AAttrReassignExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAttrReassignExpr:rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAttrReassignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AAttrReassignExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AAttrReassignExpr:transform#AAttrReassignExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAttrReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAttrReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAttrReassignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAttrReassignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAttrReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAttrReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAttrReassignExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrReassignExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAttrReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AAttrReassignExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AAttrReassignExpr___AExpr__stmt, /* pointer to parser_nodes:AAttrReassignExpr:abstract_compiler#AAttrReassignExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAttrReassignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAttrReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AAttrFormExpr___n_expr, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_expr= */
(nitmethod_t)nit___nit__AAttrFormExpr___n_id, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_id= */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#attr_type */
(nitmethod_t)nit___nit__AReassignFormExpr___n_assign_op, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_assign_op= */
(nitmethod_t)nit___nit__AReassignFormExpr___n_value, /* pointer to parser_nodes:AAttrReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#n_value= */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)nit__typing___AReassignFormExpr___resolve_reassignment, /* pointer to parser_nodes:AAttrReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAttrReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type_61d, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)nit__typing___AAttrFormExpr___resolve_property, /* pointer to parser_nodes:AAttrReassignExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)nit__parser_prod___AAttrReassignExpr___init_aattrreassignexpr, /* pointer to parser_nodes:AAttrReassignExpr:parser_prod#AAttrReassignExpr#init_aattrreassignexpr */
}
};
/* allocate AAttrReassignExpr */
val* NEW_nit__AAttrReassignExpr(const struct type* type) {
val* self /* : AAttrReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAttrReassignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAttrReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAttrReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAttrReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAttrReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAttrReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAttrReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:AAttrReassignExpr exact> */
return self;
}
/* runtime class nit__ACallExpr */
const struct class class_nit__ACallExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ACallExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ACallExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ACallExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ACallExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ACallExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ACallExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ACallExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ACallExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ACallExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ACallExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ACallExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ACallExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ACallExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ACallExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ACallExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ACallExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ACallExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ACallExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ACallExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ACallExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ACallExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ACallExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ACallExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ACallExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ACallExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ACallExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ACallExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ACallExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ACallExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ACallExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ACallExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ACallFormExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ACallExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ACallExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ACallExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ACallExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ACallExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ACallExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ACallExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ACallExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ACallExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ACallExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ACallExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ACallExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ACallExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ACallExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ACallExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ACallExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ACallExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ACallExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ACallExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ACallExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ACallExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ACallExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ACallExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ACallExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ACallExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ACallExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ACallExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ACallExpr___ASendExpr__property_name, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ACallExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallExpr:typing#ACallExpr#compute_raw_arguments */
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
(nitmethod_t)nit___nit__ACallFormExpr___n_id, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_id_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_id= */
(nitmethod_t)nit___nit__ACallFormExpr___n_args, /* pointer to parser_nodes:ACallExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)nit__parser_prod___ACallExpr___nit__parser_nodes__ACallFormExpr__n_args_61d, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#n_args= */
(nitmethod_t)nit__scope___ACallExpr___ACallFormExpr__variable_create, /* pointer to parser_nodes:ACallExpr:scope#ACallExpr#variable_create */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ACallExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__parser_prod___ACallExpr___init_acallexpr, /* pointer to parser_nodes:ACallExpr:parser_prod#ACallExpr#init_acallexpr */
(nitmethod_t)nit__astbuilder___ACallExpr___make, /* pointer to parser_nodes:ACallExpr:astbuilder#ACallExpr#make */
}
};
/* allocate ACallExpr */
val* NEW_nit__ACallExpr(const struct type* type) {
val* self /* : ACallExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ACallExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ACallExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACallExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ACallExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACallExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACallExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ACallExpr exact> */
return self;
}
/* runtime class nit__ACallAssignExpr */
const struct class class_nit__ACallAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ACallAssignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ACallAssignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ACallAssignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ACallAssignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ACallAssignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ACallAssignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ACallAssignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ACallAssignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ACallAssignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ACallAssignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ACallAssignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ACallAssignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ACallAssignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ACallAssignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ACallAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ACallAssignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ACallAssignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ACallAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ACallFormExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ACallAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ACallAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ACallAssignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ACallAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallAssignExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ACallAssignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ACallAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ACallAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ACallAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ACallAssignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ACallAssignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ACallAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ACallAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ACallAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ACallAssignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ACallAssignExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ACallAssignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ACallAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ACallAssignExpr___ASendExpr__property_name, /* pointer to parser_nodes:ACallAssignExpr:typing#ACallAssignExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ACallAssignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ACallAssignExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallAssignExpr:typing#ACallAssignExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__AAssignFormExpr___n_assign, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_assign= */
(nitmethod_t)nit___nit__AAssignFormExpr___n_value, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_value= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nit___nit__ACallFormExpr___n_id, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_id= */
(nitmethod_t)nit___nit__ACallFormExpr___n_args, /* pointer to parser_nodes:ACallAssignExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#n_args= */
(nitmethod_t)nit__scope___ACallAssignExpr___ACallFormExpr__variable_create, /* pointer to parser_nodes:ACallAssignExpr:scope#ACallAssignExpr#variable_create */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ACallAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__parser_prod___ACallAssignExpr___init_acallassignexpr, /* pointer to parser_nodes:ACallAssignExpr:parser_prod#ACallAssignExpr#init_acallassignexpr */
}
};
/* allocate ACallAssignExpr */
val* NEW_nit__ACallAssignExpr(const struct type* type) {
val* self /* : ACallAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ACallAssignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ACallAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACallAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ACallAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACallAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACallAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ACallAssignExpr exact> */
return self;
}
/* runtime class nit__ACallReassignExpr */
const struct class class_nit__ACallReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ACallReassignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ACallReassignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ACallReassignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ACallReassignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ACallReassignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ACallReassignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ACallReassignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ACallReassignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ACallReassignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ACallReassignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ACallReassignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ACallReassignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ACallReassignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ACallReassignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ACallReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ACallReassignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ACallReassignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ACallReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ACallFormExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ACallFormExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___AReassignFormExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ACallReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ACallReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ACallReassignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ACallReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendReassignFormExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ACallReassignExpr:rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ACallReassignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ASendReassignFormExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:ACallReassignExpr:transform#ASendReassignFormExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ACallReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ACallReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ACallReassignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ACallReassignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ACallReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ACallReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendReassignFormExpr___AExpr__accept_typing, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ACallReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ACallReassignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___ASendReassignFormExpr___AExpr__stmt, /* pointer to parser_nodes:ACallReassignExpr:abstract_compiler#ASendReassignFormExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ACallReassignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ACallReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ACallReassignExpr___ASendExpr__property_name, /* pointer to parser_nodes:ACallReassignExpr:typing#ACallReassignExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ACallReassignExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ACallReassignExpr:typing#ACallReassignExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__AReassignFormExpr___n_assign_op, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_assign_op= */
(nitmethod_t)nit___nit__AReassignFormExpr___n_value, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_value= */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)nit__typing___AReassignFormExpr___resolve_reassignment, /* pointer to parser_nodes:ACallReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ACallReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit___nit__ACallFormExpr___n_id, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#n_id */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_id_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_id= */
(nitmethod_t)nit___nit__ACallFormExpr___n_args, /* pointer to parser_nodes:ACallReassignExpr:parser_nodes#ACallFormExpr#n_args */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___nit__parser_nodes__ACallFormExpr__n_args_61d, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#n_args= */
(nitmethod_t)nit__scope___ACallReassignExpr___ACallFormExpr__variable_create, /* pointer to parser_nodes:ACallReassignExpr:scope#ACallReassignExpr#variable_create */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ACallReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__typing___ASendReassignFormExpr___write_callsite, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_callsite */
(nitmethod_t)nit__typing___ASendReassignFormExpr___write_callsite_61d, /* pointer to parser_nodes:ACallReassignExpr:typing#ASendReassignFormExpr#write_callsite= */
(nitmethod_t)nit__parser_prod___ACallReassignExpr___init_acallreassignexpr, /* pointer to parser_nodes:ACallReassignExpr:parser_prod#ACallReassignExpr#init_acallreassignexpr */
}
};
/* allocate ACallReassignExpr */
val* NEW_nit__ACallReassignExpr(const struct type* type) {
val* self /* : ACallReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ACallReassignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ACallReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACallReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ACallReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACallReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACallReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ACallReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:ACallReassignExpr exact> */
return self;
}
/* runtime class nit__ASuperExpr */
const struct class class_nit__ASuperExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASuperExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASuperExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASuperExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASuperExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASuperExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASuperExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASuperExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASuperExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASuperExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASuperExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASuperExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASuperExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASuperExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASuperExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASuperExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASuperExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASuperExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASuperExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASuperExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASuperExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASuperExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASuperExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASuperExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASuperExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASuperExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASuperExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASuperExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASuperExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASuperExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASuperExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASuperExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ASuperExpr:auto_super_init#ASuperExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ASuperExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASuperExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperExpr:rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ASuperExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASuperExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASuperExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASuperExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASuperExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ASuperExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ASuperExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ASuperExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ASuperExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASuperExpr___AExpr__accept_typing, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ASuperExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ASuperExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASuperExpr___AExpr__expr, /* pointer to parser_nodes:ASuperExpr:abstract_compiler#ASuperExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ASuperExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASuperExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASuperExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ASuperExpr___n_qualified_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_qualified= */
(nitmethod_t)nit__parser_prod___ASuperExpr___n_kwsuper_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_kwsuper= */
(nitmethod_t)nit___nit__ASuperExpr___n_args, /* pointer to parser_nodes:ASuperExpr:parser_nodes#ASuperExpr#n_args */
(nitmethod_t)nit__parser_prod___ASuperExpr___n_args_61d, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#n_args= */
(nitmethod_t)nit__parser_prod___ASuperExpr___init_asuperexpr, /* pointer to parser_nodes:ASuperExpr:parser_prod#ASuperExpr#init_asuperexpr */
(nitmethod_t)nit__typing___ASuperExpr___callsite, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#callsite */
(nitmethod_t)nit__typing___ASuperExpr___callsite_61d, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#callsite= */
(nitmethod_t)nit__typing___ASuperExpr___mpropdef, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#mpropdef */
(nitmethod_t)nit__typing___ASuperExpr___mpropdef_61d, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#mpropdef= */
(nitmethod_t)nit__typing___ASuperExpr___process_superinit, /* pointer to parser_nodes:ASuperExpr:typing#ASuperExpr#process_superinit */
}
};
/* allocate ASuperExpr */
val* NEW_nit__ASuperExpr(const struct type* type) {
val* self /* : ASuperExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASuperExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASuperExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASuperExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ASuperExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASuperExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASuperExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ASuperExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__ASuperExpr___n_qualified].val = var6; /* _n_qualified on <self:ASuperExpr exact> */
return self;
}
/* runtime class nit__AInitExpr */
const struct class class_nit__AInitExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AInitExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AInitExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AInitExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AInitExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AInitExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AInitExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AInitExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AInitExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AInitExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AInitExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AInitExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AInitExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AInitExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AInitExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AInitExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AInitExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AInitExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AInitExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AInitExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AInitExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AInitExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AInitExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AInitExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AInitExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AInitExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AInitExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AInitExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AInitExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AInitExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AInitExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AInitExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AInitExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AInitExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AInitExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:AInitExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AInitExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AInitExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AInitExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AInitExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AInitExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AInitExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AInitExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AInitExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AInitExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AInitExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AInitExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AInitExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AInitExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AInitExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AInitExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AInitExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AInitExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AInitExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AInitExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:AInitExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AInitExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AInitExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AInitExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:AInitExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___AInitExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___AInitExpr___ASendExpr__property_name, /* pointer to parser_nodes:AInitExpr:typing#AInitExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:AInitExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___AInitExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:AInitExpr:typing#AInitExpr#compute_raw_arguments */
(nitmethod_t)nit__parser_prod___AInitExpr___n_kwinit_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_kwinit= */
(nitmethod_t)nit___nit__AInitExpr___n_args, /* pointer to parser_nodes:AInitExpr:parser_nodes#AInitExpr#n_args */
(nitmethod_t)nit__parser_prod___AInitExpr___n_args_61d, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#n_args= */
(nitmethod_t)nit__parser_prod___AInitExpr___init_ainitexpr, /* pointer to parser_nodes:AInitExpr:parser_prod#AInitExpr#init_ainitexpr */
}
};
/* allocate AInitExpr */
val* NEW_nit__AInitExpr(const struct type* type) {
val* self /* : AInitExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AInitExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AInitExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AInitExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AInitExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AInitExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AInitExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AInitExpr exact> */
return self;
}
/* runtime class nit__ABraFormExpr */
/* allocate ABraFormExpr */
val* NEW_nit__ABraFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ABraFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABraExpr */
const struct class class_nit__ABraExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABraExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABraExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABraExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABraExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABraExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABraExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABraExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABraExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABraExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABraExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABraExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABraExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABraExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABraExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABraExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABraExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABraExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABraExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABraExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABraExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABraExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABraExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABraExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABraExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABraExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABraExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABraExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABraExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABraExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABraExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABraExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABraExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABraExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ABraExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ABraExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABraExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABraExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABraExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABraExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABraExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ABraExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ABraExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ABraExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ABraExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ABraExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ABraExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ABraExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ABraExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ABraExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ABraExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ABraExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ABraExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ABraExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABraExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABraExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ABraExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ABraExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ABraExpr___ASendExpr__property_name, /* pointer to parser_nodes:ABraExpr:typing#ABraExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ABraExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABraExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraExpr:typing#ABraExpr#compute_raw_arguments */
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
(nitmethod_t)nit___nit__ABraFormExpr___n_args, /* pointer to parser_nodes:ABraExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)nit__parser_prod___ABraExpr___nit__parser_nodes__ABraFormExpr__n_args_61d, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#n_args= */
(nitmethod_t)nit__parser_prod___ABraExpr___init_abraexpr, /* pointer to parser_nodes:ABraExpr:parser_prod#ABraExpr#init_abraexpr */
}
};
/* allocate ABraExpr */
val* NEW_nit__ABraExpr(const struct type* type) {
val* self /* : ABraExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABraExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ABraExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABraExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABraExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ABraExpr exact> */
return self;
}
/* runtime class nit__ABraAssignExpr */
const struct class class_nit__ABraAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABraAssignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABraAssignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABraAssignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABraAssignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABraAssignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABraAssignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABraAssignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABraAssignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABraAssignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABraAssignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABraAssignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABraAssignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABraAssignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABraAssignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABraAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABraAssignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABraAssignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABraAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABraAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABraAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABraAssignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraAssignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ABraAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraAssignExpr:rapid_type_analysis#ASendExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ABraAssignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABraAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABraAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABraAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ABraAssignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ABraAssignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ABraAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ABraAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendExpr___AExpr__accept_typing, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ABraAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ABraAssignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ABraAssignExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABraAssignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABraAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ABraAssignExpr___ASendExpr__property_name, /* pointer to parser_nodes:ABraAssignExpr:typing#ABraAssignExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ABraAssignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABraAssignExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraAssignExpr:typing#ABraAssignExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__AAssignFormExpr___n_assign, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_assign= */
(nitmethod_t)nit___nit__AAssignFormExpr___n_value, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_value= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nit___nit__ABraFormExpr___n_args, /* pointer to parser_nodes:ABraAssignExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#n_args= */
(nitmethod_t)nit__parser_prod___ABraAssignExpr___init_abraassignexpr, /* pointer to parser_nodes:ABraAssignExpr:parser_prod#ABraAssignExpr#init_abraassignexpr */
}
};
/* allocate ABraAssignExpr */
val* NEW_nit__ABraAssignExpr(const struct type* type) {
val* self /* : ABraAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABraAssignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ABraAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABraAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABraAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ABraAssignExpr exact> */
return self;
}
/* runtime class nit__AVarFormExpr */
/* allocate AVarFormExpr */
val* NEW_nit__AVarFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AVarFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ABraReassignExpr */
const struct class class_nit__ABraReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABraReassignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABraReassignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABraReassignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABraReassignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABraReassignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABraReassignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABraReassignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABraReassignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABraReassignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABraReassignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABraReassignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABraReassignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABraReassignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABraReassignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABraReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABraReassignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABraReassignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABraReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABraReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AReassignFormExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:ABraReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABraReassignExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ASendExpr___ANode__accept_auto_super_init, /* pointer to parser_nodes:ABraReassignExpr:auto_super_init#ASendExpr#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ABraReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASendReassignFormExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ABraReassignExpr:rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ABraReassignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ASendReassignFormExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:ABraReassignExpr:transform#ASendReassignFormExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABraReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABraReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ABraReassignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ABraReassignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ABraReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ABraReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASendReassignFormExpr___AExpr__accept_typing, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ABraReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASendExpr___AExpr__expr, /* pointer to parser_nodes:ABraReassignExpr:abstract_compiler#ASendExpr#expr */
(nitmethod_t)nit__abstract_compiler___ASendReassignFormExpr___AExpr__stmt, /* pointer to parser_nodes:ABraReassignExpr:abstract_compiler#ASendReassignFormExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABraReassignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABraReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASendExpr___n_expr, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ASendExpr#n_expr */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ASendExpr__n_expr_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_expr= */
(nitmethod_t)nit__typing___ASendExpr___callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#callsite */
(nitmethod_t)nit__typing___ASendExpr___callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#callsite= */
(nitmethod_t)nit__typing___ABraReassignExpr___ASendExpr__property_name, /* pointer to parser_nodes:ABraReassignExpr:typing#ABraReassignExpr#property_name */
(nitmethod_t)nit__typing___ASendExpr___raw_arguments, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendExpr#raw_arguments */
(nitmethod_t)nit__typing___ABraReassignExpr___ASendExpr__compute_raw_arguments, /* pointer to parser_nodes:ABraReassignExpr:typing#ABraReassignExpr#compute_raw_arguments */
(nitmethod_t)nit___nit__AReassignFormExpr___n_assign_op, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_assign_op= */
(nitmethod_t)nit___nit__AReassignFormExpr___n_value, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_value= */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)nit__typing___AReassignFormExpr___resolve_reassignment, /* pointer to parser_nodes:ABraReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABraReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit___nit__ABraFormExpr___n_args, /* pointer to parser_nodes:ABraReassignExpr:parser_nodes#ABraFormExpr#n_args */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___nit__parser_nodes__ABraFormExpr__n_args_61d, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#n_args= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nit__typing___ASendReassignFormExpr___write_callsite, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_callsite */
(nitmethod_t)nit__typing___ASendReassignFormExpr___write_callsite_61d, /* pointer to parser_nodes:ABraReassignExpr:typing#ASendReassignFormExpr#write_callsite= */
(nitmethod_t)nit__parser_prod___ABraReassignExpr___init_abrareassignexpr, /* pointer to parser_nodes:ABraReassignExpr:parser_prod#ABraReassignExpr#init_abrareassignexpr */
}
};
/* allocate ABraReassignExpr */
val* NEW_nit__ABraReassignExpr(const struct type* type) {
val* self /* : ABraReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABraReassignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ABraReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ABraReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ABraReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ABraReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:ABraReassignExpr exact> */
return self;
}
/* runtime class nit__AVarExpr */
const struct class class_nit__AVarExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AVarExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AVarExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AVarExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AVarExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AVarExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AVarExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AVarExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AVarExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AVarExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AVarExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AVarExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AVarExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AVarExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AVarExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AVarExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AVarExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AVarExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AVarExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AVarExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AVarExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AVarExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AVarExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AVarExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AVarExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AVarExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AVarExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AVarExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AVarExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AVarExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AVarExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AVarExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AVarExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AVarExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___AVarExpr___ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarExpr:local_var_init#AVarExpr#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AVarExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AVarExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AVarExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AVarExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AVarExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AVarExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AVarExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AVarExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AVarExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AVarExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AVarExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AVarExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AVarExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AVarExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AVarExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AVarExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AVarExpr___AExpr__its_variable, /* pointer to parser_nodes:AVarExpr:typing#AVarExpr#its_variable */
(nitmethod_t)nit__typing___AVarExpr___AExpr__accept_typing, /* pointer to parser_nodes:AVarExpr:typing#AVarExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AVarExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AVarExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AVarExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AVarExpr___AExpr__expr, /* pointer to parser_nodes:AVarExpr:abstract_compiler#AVarExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AVarExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AVarExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AVarExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AVarExpr___nit__parser_nodes__AVarFormExpr__n_id_61d, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#n_id= */
(nitmethod_t)nit__scope___AVarFormExpr___variable, /* pointer to parser_nodes:AVarExpr:scope#AVarFormExpr#variable */
(nitmethod_t)nit__scope___AVarFormExpr___variable_61d, /* pointer to parser_nodes:AVarExpr:scope#AVarFormExpr#variable= */
(nitmethod_t)nit__parser_prod___AVarExpr___init_avarexpr, /* pointer to parser_nodes:AVarExpr:parser_prod#AVarExpr#init_avarexpr */
(nitmethod_t)nit__astbuilder___AVarExpr___make, /* pointer to parser_nodes:AVarExpr:astbuilder#AVarExpr#make */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AVarExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVarExpr */
val* NEW_nit__AVarExpr(const struct type* type) {
val* self /* : AVarExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AVarExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AVarExpr exact> */
return self;
}
/* runtime class nit__AVarAssignExpr */
const struct class class_nit__AVarAssignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AVarAssignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AVarAssignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AVarAssignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AVarAssignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AVarAssignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AVarAssignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AVarAssignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AVarAssignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AVarAssignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AVarAssignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AVarAssignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AVarAssignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AVarAssignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AVarAssignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AVarAssignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AVarAssignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AVarAssignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AVarAssignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AVarAssignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AVarAssignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AVarAssignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AVarAssignExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarAssignExpr:flow#AVarAssignExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___AVarAssignExpr___ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarAssignExpr:local_var_init#AVarAssignExpr#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AVarAssignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AVarAssignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AVarAssignExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AVarAssignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AVarAssignExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AVarAssignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AVarAssignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AVarAssignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AVarAssignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AVarAssignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AVarAssignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AVarAssignExpr___AExpr__accept_typing, /* pointer to parser_nodes:AVarAssignExpr:typing#AVarAssignExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AVarAssignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AVarAssignExpr___AExpr__expr, /* pointer to parser_nodes:AVarAssignExpr:abstract_compiler#AVarAssignExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AVarAssignExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AVarAssignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AVarAssignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_id= */
(nitmethod_t)nit__scope___AVarFormExpr___variable, /* pointer to parser_nodes:AVarAssignExpr:scope#AVarFormExpr#variable */
(nitmethod_t)nit__scope___AVarFormExpr___variable_61d, /* pointer to parser_nodes:AVarAssignExpr:scope#AVarFormExpr#variable= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nit___nit__AAssignFormExpr___n_assign, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#n_assign */
(nitmethod_t)nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_assign_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_assign= */
(nitmethod_t)nit___nit__AAssignFormExpr___n_value, /* pointer to parser_nodes:AVarAssignExpr:parser_nodes#AAssignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___AVarAssignExpr___nit__parser_nodes__AAssignFormExpr__n_value_61d, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#n_value= */
(nitmethod_t)nit__parser_prod___AVarAssignExpr___init_avarassignexpr, /* pointer to parser_nodes:AVarAssignExpr:parser_prod#AVarAssignExpr#init_avarassignexpr */
(nitmethod_t)nit__astbuilder___AVarAssignExpr___make, /* pointer to parser_nodes:AVarAssignExpr:astbuilder#AVarAssignExpr#make */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AVarAssignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AVarAssignExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVarAssignExpr */
val* NEW_nit__AVarAssignExpr(const struct type* type) {
val* self /* : AVarAssignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AVarAssignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarAssignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarAssignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarAssignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarAssignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarAssignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AVarAssignExpr exact> */
return self;
}
/* runtime class nit__AVarReassignExpr */
const struct class class_nit__AVarReassignExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AVarReassignExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AVarReassignExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AVarReassignExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AVarReassignExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AVarReassignExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AVarReassignExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AVarReassignExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AVarReassignExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AVarReassignExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AVarReassignExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AVarReassignExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AVarReassignExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AVarReassignExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AVarReassignExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AVarReassignExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AVarReassignExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AVarReassignExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AVarReassignExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AVarReassignExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AVarReassignExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AVarReassignExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AReassignFormExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AVarReassignExpr:flow#AReassignFormExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___AVarReassignExpr___ANode__accept_local_var_visitor, /* pointer to parser_nodes:AVarReassignExpr:local_var_init#AVarReassignExpr#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AVarReassignExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AVarReassignExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AVarReassignExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AVarReassignExpr:rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AVarReassignExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AVarReassignExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AVarReassignExpr:transform#AVarReassignExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AVarReassignExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AVarReassignExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AVarReassignExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AVarReassignExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AVarReassignExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AVarReassignExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AVarReassignExpr___AExpr__accept_typing, /* pointer to parser_nodes:AVarReassignExpr:typing#AVarReassignExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AVarReassignExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AVarReassignExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AVarReassignExpr___AExpr__stmt, /* pointer to parser_nodes:AVarReassignExpr:abstract_compiler#AVarReassignExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AVarReassignExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AVarReassignExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AVarFormExpr__n_id_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_id= */
(nitmethod_t)nit__scope___AVarFormExpr___variable, /* pointer to parser_nodes:AVarReassignExpr:scope#AVarFormExpr#variable */
(nitmethod_t)nit__scope___AVarFormExpr___variable_61d, /* pointer to parser_nodes:AVarReassignExpr:scope#AVarFormExpr#variable= */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nit___nit__AReassignFormExpr___n_assign_op, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#n_assign_op */
(nitmethod_t)nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_assign_op_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_assign_op= */
(nitmethod_t)nit___nit__AReassignFormExpr___n_value, /* pointer to parser_nodes:AVarReassignExpr:parser_nodes#AReassignFormExpr#n_value */
(nitmethod_t)nit__parser_prod___AVarReassignExpr___nit__parser_nodes__AReassignFormExpr__n_value_61d, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#n_value= */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_callsite */
(nitmethod_t)nit__typing___AReassignFormExpr___reassign_callsite_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#reassign_callsite= */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#read_type */
(nitmethod_t)nit__typing___AReassignFormExpr___read_type_61d, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#read_type= */
(nitmethod_t)nit__typing___AReassignFormExpr___resolve_reassignment, /* pointer to parser_nodes:AVarReassignExpr:typing#AReassignFormExpr#resolve_reassignment */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AVarReassignExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__parser_prod___AVarReassignExpr___init_avarreassignexpr, /* pointer to parser_nodes:AVarReassignExpr:parser_prod#AVarReassignExpr#init_avarreassignexpr */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AVarReassignExpr:local_var_init#ANode#accept_local_var_visitor */
}
};
/* allocate AVarReassignExpr */
val* NEW_nit__AVarReassignExpr(const struct type* type) {
val* self /* : AVarReassignExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AVarReassignExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarReassignExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarReassignExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarReassignExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarReassignExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarReassignExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AVarReassignExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var6; /* _read_type on <self:AVarReassignExpr exact> */
return self;
}
/* runtime class nit__ARangeExpr */
/* allocate ARangeExpr */
val* NEW_nit__ARangeExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ARangeExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ACrangeExpr */
const struct class class_nit__ACrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ACrangeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ACrangeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ACrangeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ACrangeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ACrangeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ACrangeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ACrangeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ACrangeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ACrangeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ACrangeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ACrangeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ACrangeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ACrangeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ACrangeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ACrangeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ACrangeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ACrangeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ACrangeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ACrangeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ACrangeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ACrangeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ACrangeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ACrangeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ACrangeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ACrangeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ACrangeExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ACrangeExpr:rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ACrangeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ACrangeExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:ACrangeExpr:transform#ACrangeExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ACrangeExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ACrangeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ACrangeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ACrangeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ACrangeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ACrangeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ACrangeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ARangeExpr___AExpr__accept_typing, /* pointer to parser_nodes:ACrangeExpr:typing#ARangeExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ACrangeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ACrangeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ACrangeExpr___AExpr__expr, /* pointer to parser_nodes:ACrangeExpr:abstract_compiler#ACrangeExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ACrangeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ACrangeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ACrangeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ARangeExpr___n_expr, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ARangeExpr#n_expr */
(nitmethod_t)nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_expr= */
(nitmethod_t)nit___nit__ARangeExpr___n_expr2, /* pointer to parser_nodes:ACrangeExpr:parser_nodes#ARangeExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___ACrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_expr2= */
(nitmethod_t)nit__typing___ARangeExpr___init_callsite, /* pointer to parser_nodes:ACrangeExpr:typing#ARangeExpr#init_callsite */
(nitmethod_t)nit__typing___ARangeExpr___init_callsite_61d, /* pointer to parser_nodes:ACrangeExpr:typing#ARangeExpr#init_callsite= */
(nitmethod_t)nit__parser_prod___ACrangeExpr___n_obra_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_obra= */
(nitmethod_t)nit__parser_prod___ACrangeExpr___n_cbra_61d, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#n_cbra= */
(nitmethod_t)nit__parser_prod___ACrangeExpr___init_acrangeexpr, /* pointer to parser_nodes:ACrangeExpr:parser_prod#ACrangeExpr#init_acrangeexpr */
}
};
/* allocate ACrangeExpr */
val* NEW_nit__ACrangeExpr(const struct type* type) {
val* self /* : ACrangeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ACrangeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ACrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ACrangeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACrangeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACrangeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ACrangeExpr exact> */
return self;
}
/* runtime class nit__AOrangeExpr */
const struct class class_nit__AOrangeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AOrangeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AOrangeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AOrangeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AOrangeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AOrangeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AOrangeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AOrangeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AOrangeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AOrangeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AOrangeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AOrangeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AOrangeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AOrangeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AOrangeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AOrangeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AOrangeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AOrangeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AOrangeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AOrangeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AOrangeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AOrangeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AOrangeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AOrangeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AOrangeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AOrangeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AOrangeExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AOrangeExpr:rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AOrangeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AOrangeExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AOrangeExpr:transform#AOrangeExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AOrangeExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AOrangeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AOrangeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AOrangeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AOrangeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AOrangeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AOrangeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ARangeExpr___AExpr__accept_typing, /* pointer to parser_nodes:AOrangeExpr:typing#ARangeExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AOrangeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AOrangeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AOrangeExpr___AExpr__expr, /* pointer to parser_nodes:AOrangeExpr:abstract_compiler#AOrangeExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AOrangeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AOrangeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AOrangeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ARangeExpr___n_expr, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ARangeExpr#n_expr */
(nitmethod_t)nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_expr= */
(nitmethod_t)nit___nit__ARangeExpr___n_expr2, /* pointer to parser_nodes:AOrangeExpr:parser_nodes#ARangeExpr#n_expr2 */
(nitmethod_t)nit__parser_prod___AOrangeExpr___nit__parser_nodes__ARangeExpr__n_expr2_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_expr2= */
(nitmethod_t)nit__typing___ARangeExpr___init_callsite, /* pointer to parser_nodes:AOrangeExpr:typing#ARangeExpr#init_callsite */
(nitmethod_t)nit__typing___ARangeExpr___init_callsite_61d, /* pointer to parser_nodes:AOrangeExpr:typing#ARangeExpr#init_callsite= */
(nitmethod_t)nit__parser_prod___AOrangeExpr___n_obra_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_obra= */
(nitmethod_t)nit__parser_prod___AOrangeExpr___n_cbra_61d, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#n_cbra= */
(nitmethod_t)nit__parser_prod___AOrangeExpr___init_aorangeexpr, /* pointer to parser_nodes:AOrangeExpr:parser_prod#AOrangeExpr#init_aorangeexpr */
}
};
/* allocate AOrangeExpr */
val* NEW_nit__AOrangeExpr(const struct type* type) {
val* self /* : AOrangeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AOrangeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AOrangeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AOrangeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AOrangeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AOrangeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AOrangeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AOrangeExpr exact> */
return self;
}
/* runtime class nit__AArrayExpr */
const struct class class_nit__AArrayExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AArrayExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AArrayExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AArrayExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AArrayExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AArrayExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AArrayExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AArrayExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AArrayExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AArrayExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AArrayExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AArrayExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AArrayExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AArrayExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AArrayExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AArrayExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AArrayExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AArrayExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AArrayExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AArrayExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AArrayExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AArrayExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AArrayExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AArrayExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AArrayExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AArrayExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AArrayExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AArrayExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AArrayExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AArrayExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AArrayExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AArrayExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AArrayExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AArrayExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AArrayExpr:rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AArrayExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AArrayExpr:transform#AArrayExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AArrayExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AArrayExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AArrayExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AArrayExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AArrayExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AArrayExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AArrayExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AArrayExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AArrayExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AArrayExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AArrayExpr___AExpr__accept_typing, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AArrayExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AArrayExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AArrayExpr___AExpr__expr, /* pointer to parser_nodes:AArrayExpr:abstract_compiler#AArrayExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AArrayExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AArrayExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AArrayExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AArrayExpr___n_obra_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_obra= */
(nitmethod_t)nit___nit__AArrayExpr___n_exprs, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AArrayExpr#n_exprs */
(nitmethod_t)nit___nit__AArrayExpr___n_type, /* pointer to parser_nodes:AArrayExpr:parser_nodes#AArrayExpr#n_type */
(nitmethod_t)nit__parser_prod___AArrayExpr___n_type_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_type= */
(nitmethod_t)nit__parser_prod___AArrayExpr___n_cbra_61d, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#n_cbra= */
(nitmethod_t)nit__parser_prod___AArrayExpr___init_aarrayexpr, /* pointer to parser_nodes:AArrayExpr:parser_prod#AArrayExpr#init_aarrayexpr */
(nitmethod_t)nit__typing___AArrayExpr___with_capacity_callsite, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#with_capacity_callsite */
(nitmethod_t)nit__typing___AArrayExpr___with_capacity_callsite_61d, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#with_capacity_callsite= */
(nitmethod_t)nit__typing___AArrayExpr___push_callsite, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#push_callsite */
(nitmethod_t)nit__typing___AArrayExpr___push_callsite_61d, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#push_callsite= */
(nitmethod_t)nit__typing___AArrayExpr___element_mtype, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#element_mtype */
(nitmethod_t)nit__typing___AArrayExpr___element_mtype_61d, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#element_mtype= */
(nitmethod_t)nit__typing___AArrayExpr___set_comprehension, /* pointer to parser_nodes:AArrayExpr:typing#AArrayExpr#set_comprehension */
(nitmethod_t)nit__transform___AArrayExpr___nnew, /* pointer to parser_nodes:AArrayExpr:transform#AArrayExpr#nnew */
(nitmethod_t)nit__transform___AArrayExpr___nnew_61d, /* pointer to parser_nodes:AArrayExpr:transform#AArrayExpr#nnew= */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AArrayExpr:transform#AExpr#full_transform_visitor */
}
};
/* allocate AArrayExpr */
val* NEW_nit__AArrayExpr(const struct type* type) {
val* self /* : AArrayExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AArrayExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AArrayExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AArrayExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AArrayExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AArrayExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AArrayExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AArrayExpr exact> */
var6 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var6, self) /* parent= on <var6:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6) /* init on <var6:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_exprs].val = var6; /* _n_exprs on <self:AArrayExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AArrayExpr___n_type].val = var7; /* _n_type on <self:AArrayExpr exact> */
return self;
}
/* runtime class nit__ASelfExpr */
const struct class class_nit__ASelfExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASelfExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASelfExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASelfExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASelfExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASelfExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASelfExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASelfExpr:kernel#Object#sys */
(nitmethod_t)nit___nit__ASelfExpr___standard__kernel__Object__init, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ASelfExpr#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASelfExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASelfExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASelfExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASelfExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASelfExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASelfExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASelfExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASelfExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASelfExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASelfExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASelfExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASelfExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASelfExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASelfExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASelfExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASelfExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASelfExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASelfExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASelfExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ASelfExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:ASelfExpr:scope#ASelfExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASelfExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASelfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ASelfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ASelfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ASelfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ASelfExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASelfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ASelfExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASelfExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASelfExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASelfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASelfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ASelfExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ASelfExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ASelfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ASelfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___ASelfExpr___AExpr__its_variable, /* pointer to parser_nodes:ASelfExpr:typing#ASelfExpr#its_variable */
(nitmethod_t)nit__typing___ASelfExpr___AExpr__accept_typing, /* pointer to parser_nodes:ASelfExpr:typing#ASelfExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ASelfExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ASelfExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASelfExpr___AExpr__expr, /* pointer to parser_nodes:ASelfExpr:abstract_compiler#ASelfExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ASelfExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASelfExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASelfExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ASelfExpr___n_kwself_61d, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#n_kwself= */
(nitmethod_t)nit__parser_prod___ASelfExpr___init_aselfexpr, /* pointer to parser_nodes:ASelfExpr:parser_prod#ASelfExpr#init_aselfexpr */
(nitmethod_t)nit__scope___ASelfExpr___variable_61d, /* pointer to parser_nodes:ASelfExpr:scope#ASelfExpr#variable= */
(nitmethod_t)nit__typing___ASelfExpr___its_variable_61d, /* pointer to parser_nodes:ASelfExpr:typing#ASelfExpr#its_variable= */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASelfExpr:kernel#Object#init */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASelfExpr:scope#ANode#accept_scope_visitor */
}
};
/* allocate ASelfExpr */
val* NEW_nit__ASelfExpr(const struct type* type) {
val* self /* : ASelfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASelfExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASelfExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ASelfExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASelfExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASelfExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ASelfExpr exact> */
return self;
}
/* runtime class nit__AImplicitSelfExpr */
const struct class class_nit__AImplicitSelfExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#sys */
(nitmethod_t)nit___nit__ASelfExpr___standard__kernel__Object__init, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ASelfExpr#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AImplicitSelfExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AImplicitSelfExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AImplicitSelfExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AImplicitSelfExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AImplicitSelfExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AImplicitSelfExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AImplicitSelfExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AImplicitSelfExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AImplicitSelfExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AImplicitSelfExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AImplicitSelfExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ASelfExpr___ANode__accept_scope_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AImplicitSelfExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AImplicitSelfExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ASelfExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AImplicitSelfExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AImplicitSelfExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AImplicitSelfExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AImplicitSelfExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AImplicitSelfExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AImplicitSelfExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AImplicitSelfExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___ASelfExpr___AExpr__its_variable, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#its_variable */
(nitmethod_t)nit__typing___ASelfExpr___AExpr__accept_typing, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AImplicitSelfExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASelfExpr___AExpr__expr, /* pointer to parser_nodes:AImplicitSelfExpr:abstract_compiler#ASelfExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AImplicitSelfExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AImplicitSelfExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ASelfExpr___n_kwself_61d, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#n_kwself= */
(nitmethod_t)nit__parser_prod___ASelfExpr___init_aselfexpr, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#ASelfExpr#init_aselfexpr */
(nitmethod_t)nit__scope___ASelfExpr___variable_61d, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ASelfExpr#variable= */
(nitmethod_t)nit__typing___ASelfExpr___its_variable_61d, /* pointer to parser_nodes:AImplicitSelfExpr:typing#ASelfExpr#its_variable= */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AImplicitSelfExpr:kernel#Object#init */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AImplicitSelfExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__parser_prod___AImplicitSelfExpr___init_aimplicitselfexpr, /* pointer to parser_nodes:AImplicitSelfExpr:parser_prod#AImplicitSelfExpr#init_aimplicitselfexpr */
}
};
/* allocate AImplicitSelfExpr */
val* NEW_nit__AImplicitSelfExpr(const struct type* type) {
val* self /* : AImplicitSelfExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AImplicitSelfExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AImplicitSelfExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AImplicitSelfExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AImplicitSelfExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AImplicitSelfExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AImplicitSelfExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AImplicitSelfExpr exact> */
return self;
}
/* runtime class nit__ATrueExpr */
const struct class class_nit__ATrueExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ATrueExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ATrueExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ATrueExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ATrueExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ATrueExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ATrueExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ATrueExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ATrueExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ATrueExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ATrueExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ATrueExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ATrueExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ATrueExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ATrueExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ATrueExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ATrueExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ATrueExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ATrueExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ATrueExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ATrueExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ATrueExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ATrueExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ATrueExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ATrueExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ATrueExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ATrueExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ATrueExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ATrueExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ATrueExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ATrueExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ATrueExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ATrueExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ATrueExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ATrueExpr:rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ATrueExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ATrueExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ATrueExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ATrueExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ATrueExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ATrueExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ATrueExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ATrueExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ATrueExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ATrueExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ATrueExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ATrueExpr___AExpr__accept_typing, /* pointer to parser_nodes:ATrueExpr:typing#ATrueExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ATrueExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ATrueExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ATrueExpr___AExpr__expr, /* pointer to parser_nodes:ATrueExpr:abstract_compiler#ATrueExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ATrueExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ATrueExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ATrueExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ATrueExpr___n_kwtrue_61d, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#n_kwtrue= */
(nitmethod_t)nit__parser_prod___ATrueExpr___init_atrueexpr, /* pointer to parser_nodes:ATrueExpr:parser_prod#ATrueExpr#init_atrueexpr */
}
};
/* allocate ATrueExpr */
val* NEW_nit__ATrueExpr(const struct type* type) {
val* self /* : ATrueExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ATrueExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ATrueExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ATrueExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ATrueExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ATrueExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ATrueExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ATrueExpr exact> */
return self;
}
/* runtime class nit__AFalseExpr */
const struct class class_nit__AFalseExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AFalseExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AFalseExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AFalseExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AFalseExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AFalseExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AFalseExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AFalseExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AFalseExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AFalseExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AFalseExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AFalseExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AFalseExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AFalseExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AFalseExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AFalseExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AFalseExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AFalseExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AFalseExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AFalseExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AFalseExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AFalseExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AFalseExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AFalseExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AFalseExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AFalseExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AFalseExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AFalseExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AFalseExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AFalseExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AFalseExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AFalseExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AFalseExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AFalseExpr:rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AFalseExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AFalseExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AFalseExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AFalseExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AFalseExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AFalseExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AFalseExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AFalseExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AFalseExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AFalseExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AFalseExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AFalseExpr___AExpr__accept_typing, /* pointer to parser_nodes:AFalseExpr:typing#AFalseExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AFalseExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AFalseExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AFalseExpr___AExpr__expr, /* pointer to parser_nodes:AFalseExpr:abstract_compiler#AFalseExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AFalseExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AFalseExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AFalseExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AFalseExpr___n_kwfalse_61d, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#n_kwfalse= */
(nitmethod_t)nit__parser_prod___AFalseExpr___init_afalseexpr, /* pointer to parser_nodes:AFalseExpr:parser_prod#AFalseExpr#init_afalseexpr */
}
};
/* allocate AFalseExpr */
val* NEW_nit__AFalseExpr(const struct type* type) {
val* self /* : AFalseExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AFalseExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AFalseExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AFalseExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AFalseExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AFalseExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AFalseExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AFalseExpr exact> */
return self;
}
/* runtime class nit__ANullExpr */
const struct class class_nit__ANullExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ANullExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ANullExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ANullExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ANullExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ANullExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ANullExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ANullExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ANullExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ANullExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ANullExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ANullExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ANullExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ANullExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ANullExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ANullExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ANullExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ANullExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ANullExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ANullExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ANullExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ANullExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ANullExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ANullExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ANullExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ANullExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ANullExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ANullExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ANullExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ANullExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ANullExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ANullExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ANullExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ANullExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ANullExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ANullExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ANullExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ANullExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ANullExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ANullExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ANullExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ANullExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ANullExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ANullExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ANullExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ANullExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ANullExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ANullExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ANullExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ANullExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ANullExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ANullExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ANullExpr___AExpr__accept_typing, /* pointer to parser_nodes:ANullExpr:typing#ANullExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ANullExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ANullExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ANullExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ANullExpr___AExpr__expr, /* pointer to parser_nodes:ANullExpr:abstract_compiler#ANullExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ANullExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ANullExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ANullExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ANullExpr___n_kwnull_61d, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#n_kwnull= */
(nitmethod_t)nit__parser_prod___ANullExpr___init_anullexpr, /* pointer to parser_nodes:ANullExpr:parser_prod#ANullExpr#init_anullexpr */
}
};
/* allocate ANullExpr */
val* NEW_nit__ANullExpr(const struct type* type) {
val* self /* : ANullExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ANullExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ANullExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ANullExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ANullExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ANullExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ANullExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ANullExpr exact> */
return self;
}
/* runtime class nit__AIntExpr */
/* allocate AIntExpr */
val* NEW_nit__AIntExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AIntExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ADecIntExpr */
const struct class class_nit__ADecIntExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ADecIntExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ADecIntExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ADecIntExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ADecIntExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ADecIntExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ADecIntExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ADecIntExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ADecIntExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ADecIntExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ADecIntExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ADecIntExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ADecIntExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ADecIntExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ADecIntExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ADecIntExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ADecIntExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ADecIntExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ADecIntExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#visit_all */
(nitmethod_t)nit__literal___ADecIntExpr___ANode__accept_literal, /* pointer to parser_nodes:ADecIntExpr:literal#ADecIntExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ADecIntExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ADecIntExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ADecIntExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ADecIntExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ADecIntExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AIntExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ADecIntExpr:rapid_type_analysis#AIntExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ADecIntExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ADecIntExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ADecIntExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ADecIntExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ADecIntExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ADecIntExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ADecIntExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ADecIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ADecIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AIntExpr___AExpr__accept_typing, /* pointer to parser_nodes:ADecIntExpr:typing#AIntExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ADecIntExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ADecIntExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AIntExpr___AExpr__expr, /* pointer to parser_nodes:ADecIntExpr:abstract_compiler#AIntExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ADecIntExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ADecIntExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ADecIntExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__literal___AIntExpr___value, /* pointer to parser_nodes:ADecIntExpr:literal#AIntExpr#value */
(nitmethod_t)nit__literal___AIntExpr___value_61d, /* pointer to parser_nodes:ADecIntExpr:literal#AIntExpr#value= */
(nitmethod_t)nit___nit__ADecIntExpr___n_number, /* pointer to parser_nodes:ADecIntExpr:parser_nodes#ADecIntExpr#n_number */
(nitmethod_t)nit__parser_prod___ADecIntExpr___n_number_61d, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#n_number= */
(nitmethod_t)nit__parser_prod___ADecIntExpr___init_adecintexpr, /* pointer to parser_nodes:ADecIntExpr:parser_prod#ADecIntExpr#init_adecintexpr */
(nitmethod_t)nit__astbuilder___ADecIntExpr___make, /* pointer to parser_nodes:ADecIntExpr:astbuilder#ADecIntExpr#make */
}
};
/* allocate ADecIntExpr */
val* NEW_nit__ADecIntExpr(const struct type* type) {
val* self /* : ADecIntExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ADecIntExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ADecIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADecIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ADecIntExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADecIntExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ADecIntExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ADecIntExpr exact> */
return self;
}
/* runtime class nit__AHexIntExpr */
const struct class class_nit__AHexIntExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AHexIntExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AHexIntExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AHexIntExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AHexIntExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AHexIntExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AHexIntExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AHexIntExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AHexIntExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AHexIntExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AHexIntExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AHexIntExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AHexIntExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AHexIntExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AHexIntExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AHexIntExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AHexIntExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AHexIntExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AHexIntExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#visit_all */
(nitmethod_t)nit__literal___AHexIntExpr___ANode__accept_literal, /* pointer to parser_nodes:AHexIntExpr:literal#AHexIntExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AHexIntExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AHexIntExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AHexIntExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AHexIntExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AHexIntExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AIntExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AHexIntExpr:rapid_type_analysis#AIntExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AHexIntExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AHexIntExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AHexIntExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AHexIntExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AHexIntExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AHexIntExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AHexIntExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AHexIntExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AHexIntExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AIntExpr___AExpr__accept_typing, /* pointer to parser_nodes:AHexIntExpr:typing#AIntExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AHexIntExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AHexIntExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AIntExpr___AExpr__expr, /* pointer to parser_nodes:AHexIntExpr:abstract_compiler#AIntExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AHexIntExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AHexIntExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AHexIntExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__literal___AIntExpr___value, /* pointer to parser_nodes:AHexIntExpr:literal#AIntExpr#value */
(nitmethod_t)nit__literal___AIntExpr___value_61d, /* pointer to parser_nodes:AHexIntExpr:literal#AIntExpr#value= */
(nitmethod_t)nit___nit__AHexIntExpr___n_hex_number, /* pointer to parser_nodes:AHexIntExpr:parser_nodes#AHexIntExpr#n_hex_number */
(nitmethod_t)nit__parser_prod___AHexIntExpr___n_hex_number_61d, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#n_hex_number= */
(nitmethod_t)nit__parser_prod___AHexIntExpr___init_ahexintexpr, /* pointer to parser_nodes:AHexIntExpr:parser_prod#AHexIntExpr#init_ahexintexpr */
}
};
/* allocate AHexIntExpr */
val* NEW_nit__AHexIntExpr(const struct type* type) {
val* self /* : AHexIntExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AHexIntExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AHexIntExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AHexIntExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AHexIntExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AHexIntExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AHexIntExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AHexIntExpr exact> */
return self;
}
/* runtime class nit__AFloatExpr */
const struct class class_nit__AFloatExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AFloatExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AFloatExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AFloatExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AFloatExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AFloatExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AFloatExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AFloatExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AFloatExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AFloatExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AFloatExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AFloatExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AFloatExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AFloatExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AFloatExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AFloatExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AFloatExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AFloatExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AFloatExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AFloatExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AFloatExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AFloatExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AFloatExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AFloatExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AFloatExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AFloatExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#visit_all */
(nitmethod_t)nit__literal___AFloatExpr___ANode__accept_literal, /* pointer to parser_nodes:AFloatExpr:literal#AFloatExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AFloatExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AFloatExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AFloatExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AFloatExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AFloatExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AFloatExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AFloatExpr:rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AFloatExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AFloatExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AFloatExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AFloatExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AFloatExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AFloatExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AFloatExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AFloatExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AFloatExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AFloatExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AFloatExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AFloatExpr___AExpr__accept_typing, /* pointer to parser_nodes:AFloatExpr:typing#AFloatExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AFloatExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AFloatExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AFloatExpr___AExpr__expr, /* pointer to parser_nodes:AFloatExpr:abstract_compiler#AFloatExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AFloatExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AFloatExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AFloatExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AFloatExpr___n_float, /* pointer to parser_nodes:AFloatExpr:parser_nodes#AFloatExpr#n_float */
(nitmethod_t)nit__parser_prod___AFloatExpr___n_float_61d, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#n_float= */
(nitmethod_t)nit__parser_prod___AFloatExpr___init_afloatexpr, /* pointer to parser_nodes:AFloatExpr:parser_prod#AFloatExpr#init_afloatexpr */
(nitmethod_t)nit__literal___AFloatExpr___value_61d, /* pointer to parser_nodes:AFloatExpr:literal#AFloatExpr#value= */
}
};
/* allocate AFloatExpr */
val* NEW_nit__AFloatExpr(const struct type* type) {
val* self /* : AFloatExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AFloatExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AFloatExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AFloatExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AFloatExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AFloatExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AFloatExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AFloatExpr exact> */
return self;
}
/* runtime class nit__ACharExpr */
const struct class class_nit__ACharExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ACharExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ACharExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ACharExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ACharExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ACharExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ACharExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ACharExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ACharExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ACharExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ACharExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ACharExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ACharExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ACharExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ACharExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ACharExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ACharExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ACharExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ACharExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ACharExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ACharExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ACharExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ACharExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ACharExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ACharExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ACharExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ACharExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ACharExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ACharExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ACharExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#visit_all */
(nitmethod_t)nit__literal___ACharExpr___ANode__accept_literal, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ACharExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ACharExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ACharExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ACharExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ACharExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ACharExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ACharExpr:rapid_type_analysis#ACharExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ACharExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ACharExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ACharExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ACharExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ACharExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ACharExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ACharExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ACharExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ACharExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ACharExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ACharExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ACharExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ACharExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ACharExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ACharExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ACharExpr___AExpr__accept_typing, /* pointer to parser_nodes:ACharExpr:typing#ACharExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ACharExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ACharExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ACharExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ACharExpr___AExpr__expr, /* pointer to parser_nodes:ACharExpr:abstract_compiler#ACharExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ACharExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ACharExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ACharExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ACharExpr___n_char, /* pointer to parser_nodes:ACharExpr:parser_nodes#ACharExpr#n_char */
(nitmethod_t)nit__parser_prod___ACharExpr___n_char_61d, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#n_char= */
(nitmethod_t)nit__parser_prod___ACharExpr___init_acharexpr, /* pointer to parser_nodes:ACharExpr:parser_prod#ACharExpr#init_acharexpr */
(nitmethod_t)nit__literal___ACharExpr___value, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#value */
(nitmethod_t)nit__literal___ACharExpr___value_61d, /* pointer to parser_nodes:ACharExpr:literal#ACharExpr#value= */
}
};
/* allocate ACharExpr */
val* NEW_nit__ACharExpr(const struct type* type) {
val* self /* : ACharExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ACharExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ACharExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ACharExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ACharExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ACharExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ACharExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ACharExpr exact> */
return self;
}
/* runtime class nit__AStringFormExpr */
/* allocate AStringFormExpr */
val* NEW_nit__AStringFormExpr(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AStringFormExpr is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AStringExpr */
const struct class class_nit__AStringExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStringExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStringExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStringExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStringExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStringExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStringExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStringExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStringExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStringExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStringExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStringExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStringExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStringExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStringExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStringExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStringExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStringExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStringExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStringExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStringExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStringExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStringExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStringExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStringExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStringExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStringExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStringExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#visit_all */
(nitmethod_t)nit__literal___AStringFormExpr___ANode__accept_literal, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AStringExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AStringExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStringExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AStringExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AStringExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AStringExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AStringExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AStringExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AStringFormExpr___AExpr__accept_typing, /* pointer to parser_nodes:AStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AStringExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AStringExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AStringExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AStringFormExpr___AExpr__expr, /* pointer to parser_nodes:AStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStringExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AStringFormExpr___n_string, /* pointer to parser_nodes:AStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)nit__parser_prod___AStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#n_string= */
(nitmethod_t)nit__literal___AStringFormExpr___value, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)nit__literal___AStringFormExpr___value_61d, /* pointer to parser_nodes:AStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)nit__parser_prod___AStringExpr___init_astringexpr, /* pointer to parser_nodes:AStringExpr:parser_prod#AStringExpr#init_astringexpr */
}
};
/* allocate AStringExpr */
val* NEW_nit__AStringExpr(const struct type* type) {
val* self /* : AStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStringExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AStringExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AStringExpr exact> */
return self;
}
/* runtime class nit__AStartStringExpr */
const struct class class_nit__AStartStringExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AStartStringExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AStartStringExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AStartStringExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AStartStringExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AStartStringExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AStartStringExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AStartStringExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AStartStringExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AStartStringExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AStartStringExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AStartStringExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AStartStringExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AStartStringExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AStartStringExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AStartStringExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AStartStringExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AStartStringExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AStartStringExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AStartStringExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#visit_all */
(nitmethod_t)nit__literal___AStringFormExpr___ANode__accept_literal, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AStartStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AStartStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AStartStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AStartStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AStartStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AStartStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AStartStringExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AStartStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AStartStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AStartStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AStartStringExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AStartStringExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AStartStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AStartStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AStringFormExpr___AExpr__accept_typing, /* pointer to parser_nodes:AStartStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AStartStringExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AStartStringExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AStringFormExpr___AExpr__expr, /* pointer to parser_nodes:AStartStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AStartStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AStartStringExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AStartStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AStringFormExpr___n_string, /* pointer to parser_nodes:AStartStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)nit__parser_prod___AStartStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#n_string= */
(nitmethod_t)nit__literal___AStringFormExpr___value, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)nit__literal___AStringFormExpr___value_61d, /* pointer to parser_nodes:AStartStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)nit__parser_prod___AStartStringExpr___init_astartstringexpr, /* pointer to parser_nodes:AStartStringExpr:parser_prod#AStartStringExpr#init_astartstringexpr */
}
};
/* allocate AStartStringExpr */
val* NEW_nit__AStartStringExpr(const struct type* type) {
val* self /* : AStartStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AStartStringExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AStartStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AStartStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AStartStringExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AStartStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AStartStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AStartStringExpr exact> */
return self;
}
/* runtime class nit__AMidStringExpr */
const struct class class_nit__AMidStringExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMidStringExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMidStringExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMidStringExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMidStringExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMidStringExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMidStringExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMidStringExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMidStringExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMidStringExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMidStringExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMidStringExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMidStringExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMidStringExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMidStringExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMidStringExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMidStringExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMidStringExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMidStringExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMidStringExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#visit_all */
(nitmethod_t)nit__literal___AStringFormExpr___ANode__accept_literal, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMidStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMidStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMidStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMidStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AMidStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AMidStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AMidStringExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMidStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMidStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMidStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AMidStringExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AMidStringExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AMidStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AMidStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AStringFormExpr___AExpr__accept_typing, /* pointer to parser_nodes:AMidStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AMidStringExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AMidStringExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AStringFormExpr___AExpr__expr, /* pointer to parser_nodes:AMidStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AMidStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMidStringExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMidStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AStringFormExpr___n_string, /* pointer to parser_nodes:AMidStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)nit__parser_prod___AMidStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#n_string= */
(nitmethod_t)nit__literal___AStringFormExpr___value, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)nit__literal___AStringFormExpr___value_61d, /* pointer to parser_nodes:AMidStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)nit__parser_prod___AMidStringExpr___init_amidstringexpr, /* pointer to parser_nodes:AMidStringExpr:parser_prod#AMidStringExpr#init_amidstringexpr */
}
};
/* allocate AMidStringExpr */
val* NEW_nit__AMidStringExpr(const struct type* type) {
val* self /* : AMidStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMidStringExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMidStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMidStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AMidStringExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AMidStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AMidStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AMidStringExpr exact> */
return self;
}
/* runtime class nit__AEndStringExpr */
const struct class class_nit__AEndStringExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AEndStringExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AEndStringExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AEndStringExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AEndStringExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AEndStringExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AEndStringExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AEndStringExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AEndStringExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AEndStringExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AEndStringExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AEndStringExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AEndStringExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AEndStringExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AEndStringExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AEndStringExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AEndStringExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AEndStringExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AEndStringExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AEndStringExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#visit_all */
(nitmethod_t)nit__literal___AStringFormExpr___ANode__accept_literal, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AEndStringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AEndStringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AEndStringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AEndStringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AEndStringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AEndStringExpr:rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AEndStringExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AEndStringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AEndStringExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AEndStringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AEndStringExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AEndStringExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AEndStringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AEndStringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AStringFormExpr___AExpr__accept_typing, /* pointer to parser_nodes:AEndStringExpr:typing#AStringFormExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AEndStringExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AEndStringExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AStringFormExpr___AExpr__expr, /* pointer to parser_nodes:AEndStringExpr:abstract_compiler#AStringFormExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AEndStringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AEndStringExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AEndStringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AStringFormExpr___n_string, /* pointer to parser_nodes:AEndStringExpr:parser_nodes#AStringFormExpr#n_string */
(nitmethod_t)nit__parser_prod___AEndStringExpr___nit__parser_nodes__AStringFormExpr__n_string_61d, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#n_string= */
(nitmethod_t)nit__literal___AStringFormExpr___value, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#value */
(nitmethod_t)nit__literal___AStringFormExpr___value_61d, /* pointer to parser_nodes:AEndStringExpr:literal#AStringFormExpr#value= */
(nitmethod_t)nit__parser_prod___AEndStringExpr___init_aendstringexpr, /* pointer to parser_nodes:AEndStringExpr:parser_prod#AEndStringExpr#init_aendstringexpr */
}
};
/* allocate AEndStringExpr */
val* NEW_nit__AEndStringExpr(const struct type* type) {
val* self /* : AEndStringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AEndStringExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AEndStringExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AEndStringExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AEndStringExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AEndStringExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AEndStringExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AEndStringExpr exact> */
return self;
}
/* runtime class nit__ASuperstringExpr */
const struct class class_nit__ASuperstringExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ASuperstringExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ASuperstringExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ASuperstringExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ASuperstringExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ASuperstringExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ASuperstringExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ASuperstringExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ASuperstringExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ASuperstringExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ASuperstringExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ASuperstringExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ASuperstringExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ASuperstringExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ASuperstringExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ASuperstringExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ASuperstringExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ASuperstringExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ASuperstringExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ASuperstringExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ASuperstringExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ASuperstringExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ASuperstringExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ASuperstringExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ASuperstringExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ASuperstringExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ASuperstringExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:ASuperstringExpr:rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ASuperstringExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ASuperstringExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___ASuperstringExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ASuperstringExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ASuperstringExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ASuperstringExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ASuperstringExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ASuperstringExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ASuperstringExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ASuperstringExpr___AExpr__accept_typing, /* pointer to parser_nodes:ASuperstringExpr:typing#ASuperstringExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ASuperstringExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ASuperstringExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___ASuperstringExpr___AExpr__expr, /* pointer to parser_nodes:ASuperstringExpr:abstract_compiler#ASuperstringExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ASuperstringExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ASuperstringExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ASuperstringExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__ASuperstringExpr___n_exprs, /* pointer to parser_nodes:ASuperstringExpr:parser_nodes#ASuperstringExpr#n_exprs */
(nitmethod_t)nit__parser_prod___ASuperstringExpr___init_asuperstringexpr, /* pointer to parser_nodes:ASuperstringExpr:parser_prod#ASuperstringExpr#init_asuperstringexpr */
}
};
/* allocate ASuperstringExpr */
val* NEW_nit__ASuperstringExpr(const struct type* type) {
val* self /* : ASuperstringExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASuperstringExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ASuperstringExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ASuperstringExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ASuperstringExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ASuperstringExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ASuperstringExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ASuperstringExpr exact> */
var6 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var6, self) /* parent= on <var6:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6) /* init on <var6:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__ASuperstringExpr___n_exprs].val = var6; /* _n_exprs on <self:ASuperstringExpr exact> */
return self;
}
/* runtime class nit__AParExpr */
const struct class class_nit__AParExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AParExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AParExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AParExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AParExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AParExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AParExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AParExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AParExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AParExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AParExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AParExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AParExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AParExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AParExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AParExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AParExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AParExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AParExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AParExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AParExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AParExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AParExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AParExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AParExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AParExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AParExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AParExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AParExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AParExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AParExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AParExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AParExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___AParExpr___ANode__accept_flow_visitor, /* pointer to parser_nodes:AParExpr:flow#AParExpr#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AParExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AParExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AParExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AParExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___AParExpr___ANode__accept_transform_visitor, /* pointer to parser_nodes:AParExpr:transform#AParExpr#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AParExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AParExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AParExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AParExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AParExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AParExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AParExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AParExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AParExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AParExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AParExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AParExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AParExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AParExpr___AExpr__accept_typing, /* pointer to parser_nodes:AParExpr:typing#AParExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AParExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AParExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AParExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AParExpr___AExpr__expr, /* pointer to parser_nodes:AParExpr:abstract_compiler#AParExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AParExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AParExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AParExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AParExpr___n_opar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_opar= */
(nitmethod_t)nit___nit__AParExpr___n_expr, /* pointer to parser_nodes:AParExpr:parser_nodes#AParExpr#n_expr */
(nitmethod_t)nit__parser_prod___AParExpr___n_expr_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AParExpr___n_cpar_61d, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#n_cpar= */
(nitmethod_t)nit__parser_prod___AParExpr___init_aparexpr, /* pointer to parser_nodes:AParExpr:parser_prod#AParExpr#init_aparexpr */
}
};
/* allocate AParExpr */
val* NEW_nit__AParExpr(const struct type* type) {
val* self /* : AParExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AParExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AParExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AParExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AParExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AParExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AParExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AParExpr exact> */
return self;
}
/* runtime class nit__AAsCastForm */
/* allocate AAsCastForm */
val* NEW_nit__AAsCastForm(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAsCastForm is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AAsCastExpr */
const struct class class_nit__AAsCastExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAsCastExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAsCastExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAsCastExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAsCastExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAsCastExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAsCastExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAsCastExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAsCastExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAsCastExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAsCastExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAsCastExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAsCastExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAsCastExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAsCastExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAsCastExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAsCastExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAsCastExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAsCastExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAsCastExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAsCastExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAsCastExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAsCastExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAsCastExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAsCastExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAsCastExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___AAsCastExpr___ANode__accept_rapid_type_visitor, /* pointer to parser_nodes:AAsCastExpr:rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAsCastExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAsCastExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAsCastExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAsCastExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAsCastExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAsCastExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAsCastExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAsCastExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAsCastExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAsCastExpr:typing#AAsCastExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAsCastExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAsCastExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AAsCastExpr___AExpr__expr, /* pointer to parser_nodes:AAsCastExpr:abstract_compiler#AAsCastExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AAsCastExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAsCastExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAsCastExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AAsCastForm___n_expr, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastForm#n_expr */
(nitmethod_t)nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_expr_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_kwas= */
(nitmethod_t)nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_opar_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_opar= */
(nitmethod_t)nit__parser_prod___AAsCastExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_cpar= */
(nitmethod_t)nit___nit__AAsCastExpr___n_type, /* pointer to parser_nodes:AAsCastExpr:parser_nodes#AAsCastExpr#n_type */
(nitmethod_t)nit__parser_prod___AAsCastExpr___n_type_61d, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#n_type= */
(nitmethod_t)nit__parser_prod___AAsCastExpr___init_aascastexpr, /* pointer to parser_nodes:AAsCastExpr:parser_prod#AAsCastExpr#init_aascastexpr */
}
};
/* allocate AAsCastExpr */
val* NEW_nit__AAsCastExpr(const struct type* type) {
val* self /* : AAsCastExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAsCastExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAsCastExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAsCastExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAsCastExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAsCastExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAsCastExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAsCastExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var6; /* _n_opar on <self:AAsCastExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var7; /* _n_cpar on <self:AAsCastExpr exact> */
return self;
}
/* runtime class nit__AAsNotnullExpr */
const struct class class_nit__AAsNotnullExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAsNotnullExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAsNotnullExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAsNotnullExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAsNotnullExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAsNotnullExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAsNotnullExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAsNotnullExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAsNotnullExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAsNotnullExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAsNotnullExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAsNotnullExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAsNotnullExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAsNotnullExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAsNotnullExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAsNotnullExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAsNotnullExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAsNotnullExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAsNotnullExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAsNotnullExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAsNotnullExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAsNotnullExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAsNotnullExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAsNotnullExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAsNotnullExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AAsNotnullExpr___AExpr__accept_typing, /* pointer to parser_nodes:AAsNotnullExpr:typing#AAsNotnullExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAsNotnullExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAsNotnullExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AAsNotnullExpr___AExpr__expr, /* pointer to parser_nodes:AAsNotnullExpr:abstract_compiler#AAsNotnullExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AAsNotnullExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAsNotnullExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAsNotnullExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AAsCastForm___n_expr, /* pointer to parser_nodes:AAsNotnullExpr:parser_nodes#AAsCastForm#n_expr */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_expr_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_kwas_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwas= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_opar_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_opar= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___nit__parser_nodes__AAsCastForm__n_cpar_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_cpar= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___n_kwnot_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwnot= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___n_kwnull_61d, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#n_kwnull= */
(nitmethod_t)nit__parser_prod___AAsNotnullExpr___init_aasnotnullexpr, /* pointer to parser_nodes:AAsNotnullExpr:parser_prod#AAsNotnullExpr#init_aasnotnullexpr */
}
};
/* allocate AAsNotnullExpr */
val* NEW_nit__AAsNotnullExpr(const struct type* type) {
val* self /* : AAsNotnullExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : null */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAsNotnullExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAsNotnullExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAsNotnullExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAsNotnullExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAsNotnullExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAsNotnullExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAsNotnullExpr exact> */
var6 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_opar].val = var6; /* _n_opar on <self:AAsNotnullExpr exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAsCastForm___n_cpar].val = var7; /* _n_cpar on <self:AAsNotnullExpr exact> */
return self;
}
/* runtime class nit__AIssetAttrExpr */
const struct class class_nit__AIssetAttrExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIssetAttrExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIssetAttrExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIssetAttrExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIssetAttrExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIssetAttrExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIssetAttrExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIssetAttrExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIssetAttrExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIssetAttrExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIssetAttrExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AIssetAttrExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AIssetAttrExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIssetAttrExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIssetAttrExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AIssetAttrExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AIssetAttrExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AIssetAttrExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AIssetAttrExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIssetAttrExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIssetAttrExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AIssetAttrExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AIssetAttrExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AIssetAttrExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AIssetAttrExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AIssetAttrExpr___AExpr__accept_typing, /* pointer to parser_nodes:AIssetAttrExpr:typing#AIssetAttrExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AIssetAttrExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AIssetAttrExpr___AExpr__expr, /* pointer to parser_nodes:AIssetAttrExpr:abstract_compiler#AIssetAttrExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AIssetAttrExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIssetAttrExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIssetAttrExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AAttrFormExpr___n_expr, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#n_expr */
(nitmethod_t)nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_expr_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_expr= */
(nitmethod_t)nit___nit__AAttrFormExpr___n_id, /* pointer to parser_nodes:AIssetAttrExpr:parser_nodes#AAttrFormExpr#n_id */
(nitmethod_t)nit__parser_prod___AIssetAttrExpr___nit__parser_nodes__AAttrFormExpr__n_id_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_id= */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#mproperty */
(nitmethod_t)nit__typing___AAttrFormExpr___mproperty_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#mproperty= */
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#attr_type */
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
(nitmethod_t)nit__typing___AAttrFormExpr___attr_type_61d, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#attr_type= */
(nitmethod_t)nit__typing___AAttrFormExpr___resolve_property, /* pointer to parser_nodes:AIssetAttrExpr:typing#AAttrFormExpr#resolve_property */
(nitmethod_t)nit__parser_prod___AIssetAttrExpr___n_kwisset_61d, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#n_kwisset= */
(nitmethod_t)nit__parser_prod___AIssetAttrExpr___init_aissetattrexpr, /* pointer to parser_nodes:AIssetAttrExpr:parser_prod#AIssetAttrExpr#init_aissetattrexpr */
}
};
/* allocate AIssetAttrExpr */
val* NEW_nit__AIssetAttrExpr(const struct type* type) {
val* self /* : AIssetAttrExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIssetAttrExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIssetAttrExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIssetAttrExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AIssetAttrExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AIssetAttrExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AIssetAttrExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AIssetAttrExpr exact> */
return self;
}
/* runtime class nit__AVarargExpr */
const struct class class_nit__AVarargExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AVarargExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AVarargExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AVarargExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AVarargExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AVarargExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AVarargExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AVarargExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AVarargExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AVarargExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AVarargExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AVarargExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AVarargExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AVarargExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AVarargExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AVarargExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AVarargExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AVarargExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AVarargExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AVarargExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AVarargExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AVarargExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AVarargExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AVarargExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AVarargExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AVarargExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AVarargExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AVarargExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AVarargExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AVarargExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AVarargExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AVarargExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AVarargExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AVarargExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AVarargExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AVarargExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AVarargExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AVarargExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AVarargExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AVarargExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AVarargExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AVarargExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AVarargExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AVarargExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AVarargExpr___AExpr__accept_typing, /* pointer to parser_nodes:AVarargExpr:typing#AVarargExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AVarargExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AVarargExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AVarargExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AVarargExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AVarargExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AVarargExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AVarargExpr___n_expr, /* pointer to parser_nodes:AVarargExpr:parser_nodes#AVarargExpr#n_expr */
(nitmethod_t)nit__parser_prod___AVarargExpr___n_expr_61d, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AVarargExpr___n_dotdotdot_61d, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#n_dotdotdot= */
(nitmethod_t)nit__parser_prod___AVarargExpr___init_avarargexpr, /* pointer to parser_nodes:AVarargExpr:parser_prod#AVarargExpr#init_avarargexpr */
}
};
/* allocate AVarargExpr */
val* NEW_nit__AVarargExpr(const struct type* type) {
val* self /* : AVarargExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AVarargExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AVarargExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AVarargExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AVarargExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AVarargExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AVarargExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AVarargExpr exact> */
return self;
}
/* runtime class nit__AManyExpr */
const struct class class_nit__AManyExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AManyExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AManyExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AManyExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AManyExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AManyExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AManyExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AManyExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AManyExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AManyExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AManyExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AManyExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AManyExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AManyExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AManyExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AManyExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AManyExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AManyExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AManyExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AManyExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AManyExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AManyExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AManyExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AManyExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AManyExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AManyExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AManyExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AManyExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AManyExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AManyExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AManyExpr:parser_prod#AManyExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AManyExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AManyExpr:parser_prod#AManyExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AManyExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AManyExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AManyExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AManyExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AManyExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AManyExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AManyExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AManyExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AManyExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AManyExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AManyExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AManyExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AManyExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AManyExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AManyExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AManyExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AManyExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AManyExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AManyExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AManyExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AManyExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AExpr___accept_typing, /* pointer to parser_nodes:AManyExpr:typing#AExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AManyExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AManyExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AManyExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AManyExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AManyExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AManyExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AManyExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__AManyExpr___n_exprs, /* pointer to parser_nodes:AManyExpr:parser_nodes#AManyExpr#n_exprs */
(nitmethod_t)nit__parser_prod___AManyExpr___init_amanyexpr, /* pointer to parser_nodes:AManyExpr:parser_prod#AManyExpr#init_amanyexpr */
}
};
/* allocate AManyExpr */
val* NEW_nit__AManyExpr(const struct type* type) {
val* self /* : AManyExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AManyExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AManyExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AManyExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AManyExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AManyExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AManyExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AManyExpr exact> */
var6 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var6, self) /* parent= on <var6:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6) /* init on <var6:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AManyExpr___n_exprs].val = var6; /* _n_exprs on <self:AManyExpr exact> */
return self;
}
/* runtime class nit__ATypeExpr */
const struct class class_nit__ATypeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ATypeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ATypeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ATypeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ATypeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ATypeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ATypeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ATypeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ATypeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ATypeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ATypeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ATypeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ATypeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ATypeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ATypeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ATypeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ATypeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ATypeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ATypeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ATypeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ATypeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ATypeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ATypeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ATypeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ATypeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ATypeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ATypeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ATypeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ATypeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ATypeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ATypeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ATypeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ATypeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ATypeExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ATypeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ATypeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ATypeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ATypeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ATypeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ATypeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ATypeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ATypeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ATypeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ATypeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AExpr___accept_typing, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ATypeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ATypeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:ATypeExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:ATypeExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ATypeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ATypeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ATypeExpr___n_type_61d, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#n_type= */
(nitmethod_t)nit__parser_prod___ATypeExpr___init_atypeexpr, /* pointer to parser_nodes:ATypeExpr:parser_prod#ATypeExpr#init_atypeexpr */
}
};
/* allocate ATypeExpr */
val* NEW_nit__ATypeExpr(const struct type* type) {
val* self /* : ATypeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ATypeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ATypeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ATypeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ATypeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ATypeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ATypeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ATypeExpr exact> */
return self;
}
/* runtime class nit__AMethidExpr */
const struct class class_nit__AMethidExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMethidExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMethidExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMethidExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMethidExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMethidExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMethidExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMethidExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMethidExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMethidExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMethidExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMethidExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMethidExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMethidExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMethidExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMethidExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMethidExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMethidExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMethidExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMethidExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMethidExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMethidExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMethidExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMethidExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMethidExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMethidExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMethidExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMethidExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMethidExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMethidExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMethidExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMethidExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AMethidExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AMethidExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AMethidExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMethidExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMethidExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMethidExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMethidExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMethidExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AMethidExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AMethidExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AMethidExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AMethidExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AExpr___accept_typing, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AMethidExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AMethidExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AMethidExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AMethidExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMethidExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMethidExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AMethidExpr___n_expr_61d, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#n_expr= */
(nitmethod_t)nit__parser_prod___AMethidExpr___n_id_61d, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#n_id= */
(nitmethod_t)nit__parser_prod___AMethidExpr___init_amethidexpr, /* pointer to parser_nodes:AMethidExpr:parser_prod#AMethidExpr#init_amethidexpr */
}
};
/* allocate AMethidExpr */
val* NEW_nit__AMethidExpr(const struct type* type) {
val* self /* : AMethidExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMethidExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMethidExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMethidExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AMethidExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AMethidExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AMethidExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AMethidExpr exact> */
return self;
}
/* runtime class nit__AAtExpr */
const struct class class_nit__AAtExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAtExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAtExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAtExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAtExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAtExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAtExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAtExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAtExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAtExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAtExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAtExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAtExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAtExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAtExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAtExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAtExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAtExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAtExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAtExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAtExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAtExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAtExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAtExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAtExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAtExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAtExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAtExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAtExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAtExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAtExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAtExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAtExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAtExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAtExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAtExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAtExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:AAtExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAtExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:AAtExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAtExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAtExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AAtExpr___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAtExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAtExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAtExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAtExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:AAtExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:AAtExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:AAtExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:AAtExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:AAtExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:AAtExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:AAtExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:AAtExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AExpr___accept_typing, /* pointer to parser_nodes:AAtExpr:typing#AExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:AAtExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:AAtExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:AAtExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:AAtExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to parser_nodes:AAtExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAtExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAtExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___AAtExpr___init_aatexpr, /* pointer to parser_nodes:AAtExpr:parser_prod#AAtExpr#init_aatexpr */
}
};
/* allocate AAtExpr */
val* NEW_nit__AAtExpr(const struct type* type) {
val* self /* : AAtExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAtExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAtExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAtExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:AAtExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAtExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:AAtExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:AAtExpr exact> */
return self;
}
/* runtime class nit__ADebugTypeExpr */
const struct class class_nit__ADebugTypeExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ADebugTypeExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ADebugTypeExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ADebugTypeExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ADebugTypeExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ADebugTypeExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ADebugTypeExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ADebugTypeExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ADebugTypeExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ADebugTypeExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ADebugTypeExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ADebugTypeExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ADebugTypeExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ADebugTypeExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ADebugTypeExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to parser_nodes:ADebugTypeExpr:astvalidation#AExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ADebugTypeExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to parser_nodes:ADebugTypeExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ADebugTypeExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ADebugTypeExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ADebugTypeExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to parser_nodes:ADebugTypeExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to parser_nodes:ADebugTypeExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to parser_nodes:ADebugTypeExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to parser_nodes:ADebugTypeExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___ADebugTypeExpr___AExpr__accept_typing, /* pointer to parser_nodes:ADebugTypeExpr:typing#ADebugTypeExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to parser_nodes:ADebugTypeExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to parser_nodes:ADebugTypeExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to parser_nodes:ADebugTypeExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___ADebugTypeExpr___AExpr__stmt, /* pointer to parser_nodes:ADebugTypeExpr:abstract_compiler#ADebugTypeExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ADebugTypeExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ADebugTypeExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___n_kwdebug_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_kwdebug= */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___n_kwtype_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_kwtype= */
(nitmethod_t)nit___nit__ADebugTypeExpr___n_expr, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_expr */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___n_expr_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_expr= */
(nitmethod_t)nit___nit__ADebugTypeExpr___n_type, /* pointer to parser_nodes:ADebugTypeExpr:parser_nodes#ADebugTypeExpr#n_type */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___n_type_61d, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#n_type= */
(nitmethod_t)nit__parser_prod___ADebugTypeExpr___init_adebugtypeexpr, /* pointer to parser_nodes:ADebugTypeExpr:parser_prod#ADebugTypeExpr#init_adebugtypeexpr */
}
};
/* allocate ADebugTypeExpr */
val* NEW_nit__ADebugTypeExpr(const struct type* type) {
val* self /* : ADebugTypeExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ADebugTypeExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ADebugTypeExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADebugTypeExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:ADebugTypeExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADebugTypeExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:ADebugTypeExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:ADebugTypeExpr exact> */
return self;
}
/* runtime class nit__AExprs */
/* allocate AExprs */
val* NEW_nit__AExprs(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AExprs is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AListExprs */
const struct class class_nit__AListExprs = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AListExprs:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AListExprs:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AListExprs:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AListExprs:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AListExprs:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AListExprs:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AListExprs:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AListExprs:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AListExprs:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AListExprs:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AListExprs:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AListExprs:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AListExprs:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AListExprs:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AListExprs:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AListExprs:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AListExprs:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AListExprs:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AListExprs:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AListExprs:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AListExprs:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AListExprs:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AListExprs:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AListExprs:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AListExprs:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AListExprs:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AListExprs:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AListExprs___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AListExprs___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AListExprs:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AListExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AListExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AListExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AListExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AListExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AListExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AListExprs:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AListExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AListExprs:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AListExprs:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AListExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AListExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AExprs___n_exprs, /* pointer to parser_nodes:AListExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)nit__typing___AExprs___to_a, /* pointer to parser_nodes:AListExprs:typing#AExprs#to_a */
(nitmethod_t)nit__parser_prod___AListExprs___init_alistexprs, /* pointer to parser_nodes:AListExprs:parser_prod#AListExprs#init_alistexprs */
}
};
/* allocate AListExprs */
val* NEW_nit__AListExprs(const struct type* type) {
val* self /* : AListExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AListExprs;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AListExprs exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AListExprs exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val = var2; /* _n_exprs on <self:AListExprs exact> */
return self;
}
/* runtime class nit__AParExprs */
const struct class class_nit__AParExprs = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AParExprs:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AParExprs:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AParExprs:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AParExprs:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AParExprs:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AParExprs:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AParExprs:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AParExprs:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AParExprs:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AParExprs:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AParExprs:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AParExprs:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AParExprs:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AParExprs:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AParExprs:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AParExprs:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AParExprs:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AParExprs:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AParExprs:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AParExprs:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AParExprs:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AParExprs:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AParExprs:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AParExprs:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AParExprs:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AParExprs:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AParExprs:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AParExprs:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AParExprs___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AParExprs___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AParExprs:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AParExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AParExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AParExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AParExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AParExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AParExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AParExprs:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AParExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AParExprs:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AParExprs:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AParExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AParExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AExprs___n_exprs, /* pointer to parser_nodes:AParExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)nit__typing___AExprs___to_a, /* pointer to parser_nodes:AParExprs:typing#AExprs#to_a */
(nitmethod_t)nit__parser_prod___AParExprs___n_opar_61d, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#n_opar= */
(nitmethod_t)nit__parser_prod___AParExprs___n_cpar_61d, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#n_cpar= */
(nitmethod_t)nit__parser_prod___AParExprs___init_aparexprs, /* pointer to parser_nodes:AParExprs:parser_prod#AParExprs#init_aparexprs */
}
};
/* allocate AParExprs */
val* NEW_nit__AParExprs(const struct type* type) {
val* self /* : AParExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AParExprs;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AParExprs exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AParExprs exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val = var2; /* _n_exprs on <self:AParExprs exact> */
return self;
}
/* runtime class nit__ABraExprs */
const struct class class_nit__ABraExprs = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ABraExprs:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ABraExprs:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ABraExprs:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ABraExprs:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ABraExprs:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ABraExprs:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ABraExprs:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ABraExprs:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ABraExprs:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ABraExprs:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ABraExprs:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ABraExprs:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ABraExprs:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ABraExprs:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ABraExprs:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ABraExprs:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ABraExprs:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ABraExprs:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ABraExprs:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ABraExprs:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ABraExprs:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ABraExprs:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ABraExprs:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ABraExprs:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ABraExprs:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ABraExprs:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ABraExprs:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ABraExprs:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ABraExprs___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ABraExprs___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ABraExprs:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ABraExprs:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ABraExprs:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ABraExprs:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ABraExprs:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ABraExprs:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ABraExprs:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ABraExprs:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ABraExprs:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ABraExprs:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ABraExprs:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ABraExprs:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ABraExprs:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AExprs___n_exprs, /* pointer to parser_nodes:ABraExprs:parser_nodes#AExprs#n_exprs */
(nitmethod_t)nit__typing___AExprs___to_a, /* pointer to parser_nodes:ABraExprs:typing#AExprs#to_a */
(nitmethod_t)nit__parser_prod___ABraExprs___n_obra_61d, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#n_obra= */
(nitmethod_t)nit__parser_prod___ABraExprs___n_cbra_61d, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#n_cbra= */
(nitmethod_t)nit__parser_prod___ABraExprs___init_abraexprs, /* pointer to parser_nodes:ABraExprs:parser_prod#ABraExprs#init_abraexprs */
}
};
/* allocate ABraExprs */
val* NEW_nit__ABraExprs(const struct type* type) {
val* self /* : ABraExprs */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[AExpr] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ABraExprs;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ABraExprs exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ABraExprs exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AExprs___n_exprs].val = var2; /* _n_exprs on <self:ABraExprs exact> */
return self;
}
/* runtime class nit__AAssignOp */
/* allocate AAssignOp */
val* NEW_nit__AAssignOp(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAssignOp is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__APlusAssignOp */
const struct class class_nit__APlusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:APlusAssignOp:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:APlusAssignOp:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:APlusAssignOp:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:APlusAssignOp:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:APlusAssignOp:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:APlusAssignOp:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:APlusAssignOp:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:APlusAssignOp:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:APlusAssignOp:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:APlusAssignOp:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:APlusAssignOp:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:APlusAssignOp:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:APlusAssignOp:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:APlusAssignOp:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:APlusAssignOp:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:APlusAssignOp:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:APlusAssignOp:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___APlusAssignOp___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:APlusAssignOp:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:APlusAssignOp:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:APlusAssignOp:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:APlusAssignOp:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:APlusAssignOp:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:APlusAssignOp:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:APlusAssignOp:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:APlusAssignOp:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:APlusAssignOp:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:APlusAssignOp:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:APlusAssignOp:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:APlusAssignOp:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___APlusAssignOp___n_pluseq_61d, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#n_pluseq= */
(nitmethod_t)nit__parser_prod___APlusAssignOp___init_aplusassignop, /* pointer to parser_nodes:APlusAssignOp:parser_prod#APlusAssignOp#init_aplusassignop */
}
};
/* allocate APlusAssignOp */
val* NEW_nit__APlusAssignOp(const struct type* type) {
val* self /* : APlusAssignOp */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APlusAssignOp;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APlusAssignOp exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APlusAssignOp exact> */
return self;
}
/* runtime class nit__AMinusAssignOp */
const struct class class_nit__AMinusAssignOp = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AMinusAssignOp:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AMinusAssignOp:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AMinusAssignOp:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AMinusAssignOp:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AMinusAssignOp:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AMinusAssignOp:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AMinusAssignOp:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AMinusAssignOp:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AMinusAssignOp:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AMinusAssignOp:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AMinusAssignOp:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AMinusAssignOp:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AMinusAssignOp:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AMinusAssignOp:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AMinusAssignOp:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AMinusAssignOp:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AMinusAssignOp:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AMinusAssignOp___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AMinusAssignOp:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AMinusAssignOp:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AMinusAssignOp:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AMinusAssignOp:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AMinusAssignOp:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AMinusAssignOp:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AMinusAssignOp:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AMinusAssignOp:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AMinusAssignOp:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AMinusAssignOp:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AMinusAssignOp:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AMinusAssignOp:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AMinusAssignOp___n_minuseq_61d, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#n_minuseq= */
(nitmethod_t)nit__parser_prod___AMinusAssignOp___init_aminusassignop, /* pointer to parser_nodes:AMinusAssignOp:parser_prod#AMinusAssignOp#init_aminusassignop */
}
};
/* allocate AMinusAssignOp */
val* NEW_nit__AMinusAssignOp(const struct type* type) {
val* self /* : AMinusAssignOp */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AMinusAssignOp;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AMinusAssignOp exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AMinusAssignOp exact> */
return self;
}
/* runtime class nit__AModuleName */
const struct class class_nit__AModuleName = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AModuleName:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AModuleName:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AModuleName:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AModuleName:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AModuleName:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AModuleName:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AModuleName:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AModuleName:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AModuleName:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AModuleName:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AModuleName:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AModuleName:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AModuleName:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AModuleName:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AModuleName:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AModuleName:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AModuleName:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AModuleName:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AModuleName:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AModuleName:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AModuleName:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AModuleName:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AModuleName:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AModuleName:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AModuleName:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AModuleName:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AModuleName:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AModuleName:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AModuleName___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AModuleName___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AModuleName:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AModuleName:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AModuleName:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AModuleName:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AModuleName:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AModuleName:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AModuleName:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AModuleName:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AModuleName:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AModuleName:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AModuleName:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AModuleName:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AModuleName:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AModuleName___n_quad, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_quad */
(nitmethod_t)nit__parser_prod___AModuleName___n_quad_61d, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#n_quad= */
(nitmethod_t)nit___nit__AModuleName___n_path, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_path */
(nitmethod_t)nit___nit__AModuleName___n_id, /* pointer to parser_nodes:AModuleName:parser_nodes#AModuleName#n_id */
(nitmethod_t)nit__parser_prod___AModuleName___n_id_61d, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#n_id= */
(nitmethod_t)nit__parser_prod___AModuleName___init_amodulename, /* pointer to parser_nodes:AModuleName:parser_prod#AModuleName#init_amodulename */
}
};
/* allocate AModuleName */
val* NEW_nit__AModuleName(const struct type* type) {
val* self /* : AModuleName */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[TId] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AModuleName;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AModuleName exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AModuleName exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_quad].val = var2; /* _n_quad on <self:AModuleName exact> */
var3 = NEW_nit__ANodes(&type_nit__ANodes__nit__TId);
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[TId]>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:ANodes[TId]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AModuleName___n_path].val = var3; /* _n_path on <self:AModuleName exact> */
return self;
}
/* runtime class nit__AInLanguage */
const struct class class_nit__AInLanguage = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AInLanguage:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AInLanguage:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AInLanguage:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AInLanguage:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AInLanguage:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AInLanguage:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AInLanguage:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AInLanguage:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AInLanguage:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AInLanguage:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AInLanguage:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AInLanguage:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AInLanguage:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AInLanguage:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AInLanguage:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AInLanguage:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AInLanguage:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AInLanguage:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AInLanguage:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AInLanguage:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AInLanguage:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AInLanguage:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AInLanguage:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AInLanguage:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AInLanguage:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AInLanguage:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AInLanguage:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AInLanguage:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AInLanguage___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AInLanguage___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AInLanguage:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AInLanguage:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AInLanguage:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AInLanguage:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AInLanguage:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AInLanguage:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AInLanguage:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AInLanguage:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AInLanguage:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AInLanguage:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AInLanguage:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AInLanguage:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AInLanguage:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AInLanguage___n_kwin_61d, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#n_kwin= */
(nitmethod_t)nit__parser_prod___AInLanguage___n_string_61d, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#n_string= */
(nitmethod_t)nit__parser_prod___AInLanguage___init_ainlanguage, /* pointer to parser_nodes:AInLanguage:parser_prod#AInLanguage#init_ainlanguage */
}
};
/* allocate AInLanguage */
val* NEW_nit__AInLanguage(const struct type* type) {
val* self /* : AInLanguage */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AInLanguage;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AInLanguage exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AInLanguage exact> */
return self;
}
/* runtime class nit__AExternCodeBlock */
const struct class class_nit__AExternCodeBlock = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AExternCodeBlock:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AExternCodeBlock:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AExternCodeBlock:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AExternCodeBlock:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AExternCodeBlock:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AExternCodeBlock:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AExternCodeBlock:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AExternCodeBlock:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AExternCodeBlock:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AExternCodeBlock:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AExternCodeBlock:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AExternCodeBlock:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AExternCodeBlock:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AExternCodeBlock:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AExternCodeBlock:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AExternCodeBlock:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AExternCodeBlock:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AExternCodeBlock___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AExternCodeBlock___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AExternCodeBlock:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AExternCodeBlock:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AExternCodeBlock:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AExternCodeBlock:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AExternCodeBlock:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AExternCodeBlock:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AExternCodeBlock:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AExternCodeBlock:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AExternCodeBlock:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AExternCodeBlock:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AExternCodeBlock:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AExternCodeBlock:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AExternCodeBlock___n_in_language_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#n_in_language= */
(nitmethod_t)nit__parser_prod___AExternCodeBlock___n_extern_code_segment_61d, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#n_extern_code_segment= */
(nitmethod_t)nit__parser_prod___AExternCodeBlock___init_aexterncodeblock, /* pointer to parser_nodes:AExternCodeBlock:parser_prod#AExternCodeBlock#init_aexterncodeblock */
}
};
/* allocate AExternCodeBlock */
val* NEW_nit__AExternCodeBlock(const struct type* type) {
val* self /* : AExternCodeBlock */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AExternCodeBlock;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AExternCodeBlock exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AExternCodeBlock exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AExternCodeBlock___n_in_language].val = var2; /* _n_in_language on <self:AExternCodeBlock exact> */
return self;
}
/* runtime class nit__AQualified */
const struct class class_nit__AQualified = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AQualified:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AQualified:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AQualified:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AQualified:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AQualified:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AQualified:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AQualified:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AQualified:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AQualified:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AQualified:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AQualified:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AQualified:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AQualified:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AQualified:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AQualified:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AQualified:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AQualified:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AQualified:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AQualified:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AQualified:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AQualified:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AQualified:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AQualified:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AQualified:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AQualified:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AQualified:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AQualified:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AQualified:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AQualified___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AQualified___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AQualified:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AQualified:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AQualified:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AQualified:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AQualified:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AQualified:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AQualified:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AQualified:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AQualified:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AQualified:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AQualified:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AQualified:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AQualified:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AQualified___n_id, /* pointer to parser_nodes:AQualified:parser_nodes#AQualified#n_id */
(nitmethod_t)nit__parser_prod___AQualified___n_classid_61d, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#n_classid= */
(nitmethod_t)nit__parser_prod___AQualified___init_aqualified, /* pointer to parser_nodes:AQualified:parser_prod#AQualified#init_aqualified */
}
};
/* allocate AQualified */
val* NEW_nit__AQualified(const struct type* type) {
val* self /* : AQualified */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : ANodes[TId] */;
val* var4 /* : null */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AQualified;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AQualified exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AQualified exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AQualified___n_quad].val = var2; /* _n_quad on <self:AQualified exact> */
var3 = NEW_nit__ANodes(&type_nit__ANodes__nit__TId);
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var3, self) /* parent= on <var3:ANodes[TId]>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:ANodes[TId]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AQualified___n_id].val = var3; /* _n_id on <self:AQualified exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__AQualified___n_classid].val = var4; /* _n_classid on <self:AQualified exact> */
return self;
}
/* runtime class nit__ADoc */
const struct class class_nit__ADoc = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:ADoc:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:ADoc:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:ADoc:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:ADoc:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:ADoc:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:ADoc:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:ADoc:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:ADoc:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:ADoc:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:ADoc:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:ADoc:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:ADoc:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:ADoc:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:ADoc:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:ADoc:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:ADoc:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:ADoc:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:ADoc:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:ADoc:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:ADoc:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:ADoc:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:ADoc:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:ADoc:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:ADoc:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:ADoc:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:ADoc:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:ADoc:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:ADoc:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___ADoc___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___ADoc___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:ADoc:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:ADoc:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:ADoc:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:ADoc:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:ADoc:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:ADoc:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:ADoc:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:ADoc:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:ADoc:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:ADoc:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:ADoc:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:ADoc:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:ADoc:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__ADoc___n_comment, /* pointer to parser_nodes:ADoc:parser_nodes#ADoc#n_comment */
(nitmethod_t)nit__parser_prod___ADoc___init_adoc, /* pointer to parser_nodes:ADoc:parser_prod#ADoc#init_adoc */
(nitmethod_t)nit__modelbuilder_base___ADoc___mdoc_cache, /* pointer to parser_nodes:ADoc:modelbuilder_base#ADoc#mdoc_cache */
(nitmethod_t)nit__modelbuilder_base___ADoc___mdoc_cache_61d, /* pointer to parser_nodes:ADoc:modelbuilder_base#ADoc#mdoc_cache= */
(nitmethod_t)nit__modelbuilder_base___ADoc___to_mdoc, /* pointer to parser_nodes:ADoc:modelbuilder_base#ADoc#to_mdoc */
}
};
/* allocate ADoc */
val* NEW_nit__ADoc(const struct type* type) {
val* self /* : ADoc */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : ANodes[TComment] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ADoc;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:ADoc exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:ADoc exact> */
var2 = NEW_nit__ANodes(&type_nit__ANodes__nit__TComment);
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var2, self) /* parent= on <var2:ANodes[TComment]>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:ANodes[TComment]>*/;
}
self->attrs[COLOR_nit__parser_nodes__ADoc___n_comment].val = var2; /* _n_comment on <self:ADoc exact> */
return self;
}
/* runtime class nit__AAnnotations */
const struct class class_nit__AAnnotations = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAnnotations:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAnnotations:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAnnotations:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAnnotations:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAnnotations:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAnnotations:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAnnotations:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAnnotations:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAnnotations:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAnnotations:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAnnotations:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAnnotations:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAnnotations:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAnnotations:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAnnotations:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAnnotations:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAnnotations:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAnnotations:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAnnotations:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAnnotations:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAnnotations:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAnnotations:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAnnotations:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAnnotations:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAnnotations:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAnnotations:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAnnotations:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAnnotations:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAnnotations___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAnnotations___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAnnotations:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAnnotations:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAnnotations:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAnnotations:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAnnotations:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___AAnnotations___ANode__accept_ast_validation, /* pointer to parser_nodes:AAnnotations:astvalidation#AAnnotations#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAnnotations:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAnnotations:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAnnotations:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAnnotations:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAnnotations:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAnnotations:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAnnotations:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__parser_prod___AAnnotations___n_at_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_at= */
(nitmethod_t)nit__parser_prod___AAnnotations___n_opar_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_opar= */
(nitmethod_t)nit___nit__AAnnotations___n_items, /* pointer to parser_nodes:AAnnotations:parser_nodes#AAnnotations#n_items */
(nitmethod_t)nit__parser_prod___AAnnotations___n_cpar_61d, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#n_cpar= */
(nitmethod_t)nit__parser_prod___AAnnotations___init_aannotations, /* pointer to parser_nodes:AAnnotations:parser_prod#AAnnotations#init_aannotations */
}
};
/* allocate AAnnotations */
val* NEW_nit__AAnnotations(const struct type* type) {
val* self /* : AAnnotations */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : ANodes[AAnnotation] */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAnnotations;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAnnotations exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAnnotations exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_at].val = var2; /* _n_at on <self:AAnnotations exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_opar].val = var3; /* _n_opar on <self:AAnnotations exact> */
var4 = NEW_nit__ANodes(&type_nit__ANodes__nit__AAnnotation);
{
((void (*)(val* self, val* p0))(var4->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var4, self) /* parent= on <var4:ANodes[AAnnotation]>*/;
}
{
((void (*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4) /* init on <var4:ANodes[AAnnotation]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_items].val = var4; /* _n_items on <self:AAnnotations exact> */
var5 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAnnotations___n_cpar].val = var5; /* _n_cpar on <self:AAnnotations exact> */
return self;
}
/* runtime class nit__AAnnotation */
const struct class class_nit__AAnnotation = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AAnnotation:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AAnnotation:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AAnnotation:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AAnnotation:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AAnnotation:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AAnnotation:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AAnnotation:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AAnnotation:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AAnnotation:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AAnnotation:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AAnnotation:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AAnnotation:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AAnnotation:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AAnnotation:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AAnnotation:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AAnnotation:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AAnnotation:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AAnnotation:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AAnnotation:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AAnnotation:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AAnnotation:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AAnnotation:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AAnnotation:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AAnnotation:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AAnnotation:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AAnnotation:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AAnnotation:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AAnnotation:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AAnnotation___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AAnnotation___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AAnnotation:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AAnnotation:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AAnnotation:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AAnnotation:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AAnnotation:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AAnnotation:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AAnnotation:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AAnnotation:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AAnnotation:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__parser_prod___AAnnotation___nit__parser_nodes__Prod__n_annotations_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AAnnotation:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AAnnotation:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AAnnotation:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AAnnotation:parser_nodes#ANode#replace_with */
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
(nitmethod_t)nit___nit__ADefinition___n_doc, /* pointer to parser_nodes:AAnnotation:parser_nodes#ADefinition#n_doc */
(nitmethod_t)nit__parser_prod___AAnnotation___nit__parser_nodes__ADefinition__n_doc_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_doc= */
(nitmethod_t)nit___nit__ADefinition___n_kwredef, /* pointer to parser_nodes:AAnnotation:parser_nodes#ADefinition#n_kwredef */
(nitmethod_t)nit__parser_prod___AAnnotation___nit__parser_nodes__ADefinition__n_kwredef_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_kwredef= */
(nitmethod_t)nit___nit__ADefinition___n_visibility, /* pointer to parser_nodes:AAnnotation:parser_nodes#ADefinition#n_visibility */
(nitmethod_t)nit__parser_prod___AAnnotation___nit__parser_nodes__ADefinition__n_visibility_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_visibility= */
(nitmethod_t)nit___nit__AAnnotation___n_atid, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_atid */
(nitmethod_t)nit__parser_prod___AAnnotation___n_atid_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_atid= */
(nitmethod_t)nit__parser_prod___AAnnotation___n_opar_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_opar= */
(nitmethod_t)nit___nit__AAnnotation___n_args, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#n_args */
(nitmethod_t)nit__parser_prod___AAnnotation___n_cpar_61d, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#n_cpar= */
(nitmethod_t)nit___nit__AAnnotation___name, /* pointer to parser_nodes:AAnnotation:parser_nodes#AAnnotation#name */
(nitmethod_t)nit__parser_prod___AAnnotation___init_aannotation, /* pointer to parser_nodes:AAnnotation:parser_prod#AAnnotation#init_aannotation */
(nitmethod_t)nit__annotation___AAnnotation___arg_as_string, /* pointer to parser_nodes:AAnnotation:annotation#AAnnotation#arg_as_string */
(nitmethod_t)nit__annotation___AAnnotation___arg_as_id, /* pointer to parser_nodes:AAnnotation:annotation#AAnnotation#arg_as_id */
}
};
/* allocate AAnnotation */
val* NEW_nit__AAnnotation(const struct type* type) {
val* self /* : AAnnotation */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
val* var3 /* : null */;
val* var4 /* : null */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
val* var7 /* : null */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AAnnotation;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AAnnotation exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AAnnotation exact> */
var2 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_doc].val = var2; /* _n_doc on <self:AAnnotation exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_kwredef].val = var3; /* _n_kwredef on <self:AAnnotation exact> */
var4 = NULL;
self->attrs[COLOR_nit__parser_nodes__ADefinition___n_visibility].val = var4; /* _n_visibility on <self:AAnnotation exact> */
var5 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_opar].val = var5; /* _n_opar on <self:AAnnotation exact> */
var6 = NEW_nit__ANodes(&type_nit__ANodes__nit__AExpr);
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_nit__parser_nodes__ANodes__parent_61d]))(var6, self) /* parent= on <var6:ANodes[AExpr]>*/;
}
{
((void (*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6) /* init on <var6:ANodes[AExpr]>*/;
}
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val = var6; /* _n_args on <self:AAnnotation exact> */
var7 = NULL;
self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_cpar].val = var7; /* _n_cpar on <self:AAnnotation exact> */
return self;
}
/* runtime class nit__AAtid */
/* allocate AAtid */
val* NEW_nit__AAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AIdAtid */
const struct class class_nit__AIdAtid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AIdAtid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AIdAtid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AIdAtid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AIdAtid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AIdAtid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AIdAtid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AIdAtid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AIdAtid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AIdAtid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AIdAtid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AIdAtid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AIdAtid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AIdAtid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AIdAtid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AIdAtid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AIdAtid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AIdAtid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AIdAtid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AIdAtid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AIdAtid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AIdAtid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AIdAtid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AIdAtid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AIdAtid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AIdAtid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AIdAtid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AIdAtid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AIdAtid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AIdAtid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AIdAtid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AIdAtid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AIdAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AIdAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AIdAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AIdAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AIdAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AIdAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AIdAtid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AIdAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AIdAtid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AIdAtid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AIdAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AIdAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AAtid___n_id, /* pointer to parser_nodes:AIdAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)nit__parser_prod___AIdAtid___nit__parser_nodes__AAtid__n_id_61d, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#n_id= */
(nitmethod_t)nit__parser_prod___AIdAtid___init_aidatid, /* pointer to parser_nodes:AIdAtid:parser_prod#AIdAtid#init_aidatid */
}
};
/* allocate AIdAtid */
val* NEW_nit__AIdAtid(const struct type* type) {
val* self /* : AIdAtid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AIdAtid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AIdAtid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AIdAtid exact> */
return self;
}
/* runtime class nit__AKwexternAtid */
const struct class class_nit__AKwexternAtid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AKwexternAtid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AKwexternAtid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AKwexternAtid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AKwexternAtid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AKwexternAtid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AKwexternAtid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AKwexternAtid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AKwexternAtid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AKwexternAtid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AKwexternAtid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AKwexternAtid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AKwexternAtid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AKwexternAtid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AKwexternAtid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AKwexternAtid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AKwexternAtid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AKwexternAtid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AKwexternAtid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AKwexternAtid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AKwexternAtid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AKwexternAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AKwexternAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AKwexternAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AKwexternAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AKwexternAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AKwexternAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AKwexternAtid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AKwexternAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AKwexternAtid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AKwexternAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AAtid___n_id, /* pointer to parser_nodes:AKwexternAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)nit__parser_prod___AKwexternAtid___nit__parser_nodes__AAtid__n_id_61d, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#n_id= */
(nitmethod_t)nit__parser_prod___AKwexternAtid___init_akwexternatid, /* pointer to parser_nodes:AKwexternAtid:parser_prod#AKwexternAtid#init_akwexternatid */
}
};
/* allocate AKwexternAtid */
val* NEW_nit__AKwexternAtid(const struct type* type) {
val* self /* : AKwexternAtid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AKwexternAtid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AKwexternAtid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AKwexternAtid exact> */
return self;
}
/* runtime class nit__AKwimportAtid */
/* allocate AKwimportAtid */
val* NEW_nit__AKwimportAtid(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AKwimportAtid is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__AKwabstractAtid */
const struct class class_nit__AKwabstractAtid = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:AKwabstractAtid:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:AKwabstractAtid:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:AKwabstractAtid:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:AKwabstractAtid:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:AKwabstractAtid:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:AKwabstractAtid:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:AKwabstractAtid:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:AKwabstractAtid:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:AKwabstractAtid:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:AKwabstractAtid:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:AKwabstractAtid:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:AKwabstractAtid:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:AKwabstractAtid:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:AKwabstractAtid:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:AKwabstractAtid:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:AKwabstractAtid:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:AKwabstractAtid:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___AKwabstractAtid___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___AKwabstractAtid___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:AKwabstractAtid:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:AKwabstractAtid:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:AKwabstractAtid:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:AKwabstractAtid:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:AKwabstractAtid:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:AKwabstractAtid:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:AKwabstractAtid:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:AKwabstractAtid:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:AKwabstractAtid:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:AKwabstractAtid:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:AKwabstractAtid:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__AAtid___n_id, /* pointer to parser_nodes:AKwabstractAtid:parser_nodes#AAtid#n_id */
(nitmethod_t)nit__parser_prod___AKwabstractAtid___nit__parser_nodes__AAtid__n_id_61d, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#n_id= */
(nitmethod_t)nit__parser_prod___AKwabstractAtid___init_akwabstractatid, /* pointer to parser_nodes:AKwabstractAtid:parser_prod#AKwabstractAtid#init_akwabstractatid */
}
};
/* allocate AKwabstractAtid */
val* NEW_nit__AKwabstractAtid(const struct type* type) {
val* self /* : AKwabstractAtid */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__AKwabstractAtid;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:AKwabstractAtid exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:AKwabstractAtid exact> */
return self;
}
/* runtime class nit__Start */
const struct class class_nit__Start = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_nodes:Start:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_nodes:Start:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_nodes:Start:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_nodes:Start:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_nodes:Start:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_nodes:Start:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_nodes:Start:kernel#Object#sys */
(nitmethod_t)nit___nit__Start___standard__kernel__Object__init, /* pointer to parser_nodes:Start:parser_nodes#Start#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_nodes:Start:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_nodes:Start:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_nodes:Start:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_nodes:Start:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_nodes:Start:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_nodes:Start:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_nodes:Start:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_nodes:Start:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_nodes:Start:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_nodes:Start:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_nodes:Start:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_nodes:Start:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_nodes:Start:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_nodes:Start:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_nodes:Start:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_nodes:Start:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_nodes:Start:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_nodes:Start:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_nodes:Start:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_nodes:Start:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_nodes:Start:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_nodes:Start:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_nodes:Start:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_nodes:Start:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to parser_nodes:Start:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to parser_nodes:Start:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to parser_nodes:Start:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to parser_nodes:Start:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to parser_nodes:Start:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to parser_nodes:Start:parser_nodes#ANode#parent= */
(nitmethod_t)nit__parser_prod___Start___nit__parser_nodes__ANode__replace_child, /* pointer to parser_nodes:Start:parser_prod#Start#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to parser_nodes:Start:parser_nodes#Prod#replace_with */
(nitmethod_t)nit__parser_prod___Start___nit__parser_nodes__ANode__visit_all, /* pointer to parser_nodes:Start:parser_prod#Start#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to parser_nodes:Start:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to parser_nodes:Start:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to parser_nodes:Start:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to parser_nodes:Start:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to parser_nodes:Start:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to parser_nodes:Start:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to parser_nodes:Start:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to parser_nodes:Start:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to parser_nodes:Start:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to parser_nodes:Start:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to parser_nodes:Start:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to parser_nodes:Start:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to parser_nodes:Start:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to parser_nodes:Start:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to parser_nodes:Start:parser_nodes#ANode#replace_with */
(nitmethod_t)nit___nit__Start___n_base, /* pointer to parser_nodes:Start:parser_nodes#Start#n_base */
(nitmethod_t)nit___nit__Start___n_base_61d, /* pointer to parser_nodes:Start:parser_nodes#Start#n_base= */
(nitmethod_t)nit___nit__Start___n_eof, /* pointer to parser_nodes:Start:parser_nodes#Start#n_eof */
(nitmethod_t)nit___nit__Start___n_eof_61d, /* pointer to parser_nodes:Start:parser_nodes#Start#n_eof= */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_nodes:Start:kernel#Object#init */
}
};
/* allocate Start */
val* NEW_nit__Start(const struct type* type) {
val* self /* : Start */;
val* var /* : null */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Start;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:Start exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:Start exact> */
return self;
}
/* runtime class nit__Lexer */
const struct class class_nit__Lexer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to lexer_work:Lexer:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to lexer_work:Lexer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to lexer_work:Lexer:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to lexer_work:Lexer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to lexer_work:Lexer:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to lexer_work:Lexer:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to lexer_work:Lexer:kernel#Object#sys */
(nitmethod_t)nit___nit__Lexer___standard__kernel__Object__init, /* pointer to lexer_work:Lexer:lexer_work#Lexer#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to lexer_work:Lexer:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to lexer_work:Lexer:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to lexer_work:Lexer:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to lexer_work:Lexer:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to lexer_work:Lexer:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to lexer_work:Lexer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to lexer_work:Lexer:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to lexer_work:Lexer:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to lexer_work:Lexer:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to lexer_work:Lexer:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to lexer_work:Lexer:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to lexer_work:Lexer:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to lexer_work:Lexer:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to lexer_work:Lexer:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to lexer_work:Lexer:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to lexer_work:Lexer:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to lexer_work:Lexer:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to lexer_work:Lexer:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to lexer_work:Lexer:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to lexer_work:Lexer:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to lexer_work:Lexer:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to lexer_work:Lexer:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to lexer_work:Lexer:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to lexer_work:Lexer:model#Object#extern_kind */
(nitmethod_t)nit___nit__TablesCapable___lexer_goto, /* pointer to lexer_work:Lexer:tables#TablesCapable#lexer_goto */
(nitmethod_t)nit___nit__TablesCapable___lexer_accept, /* pointer to lexer_work:Lexer:tables#TablesCapable#lexer_accept */
(nitmethod_t)nit___nit__TablesCapable___parser_goto, /* pointer to lexer_work:Lexer:tables#TablesCapable#parser_goto */
(nitmethod_t)nit___nit__TablesCapable___parser_action, /* pointer to lexer_work:Lexer:tables#TablesCapable#parser_action */
(nitmethod_t)nit___nit__Lexer___file, /* pointer to lexer_work:Lexer:lexer_work#Lexer#file */
(nitmethod_t)nit___nit__Lexer___file_61d, /* pointer to lexer_work:Lexer:lexer_work#Lexer#file= */
(nitmethod_t)nit___nit__Lexer___last_token, /* pointer to lexer_work:Lexer:lexer_work#Lexer#last_token */
(nitmethod_t)nit___nit__Lexer___last_token_61d, /* pointer to lexer_work:Lexer:lexer_work#Lexer#last_token= */
(nitmethod_t)nit___nit__Lexer___peek, /* pointer to lexer_work:Lexer:lexer_work#Lexer#peek */
(nitmethod_t)nit___nit__Lexer___next, /* pointer to lexer_work:Lexer:lexer_work#Lexer#next */
(nitmethod_t)nit___nit__Lexer___get_token, /* pointer to lexer_work:Lexer:lexer_work#Lexer#get_token */
(nitmethod_t)nit__lexer___Lexer___make_token, /* pointer to lexer_work:Lexer:lexer#Lexer#make_token */
(nitmethod_t)standard___standard__Object___init, /* pointer to lexer_work:Lexer:kernel#Object#init */
}
};
/* allocate Lexer */
val* NEW_nit__Lexer(const struct type* type) {
val* self /* : Lexer */;
val* var /* : null */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
val* var6 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Lexer;
var = NULL;
self->attrs[COLOR_nit__lexer_work__Lexer___token].val = var; /* _token on <self:Lexer exact> */
var1 = 0;
self->attrs[COLOR_nit__lexer_work__Lexer___state].l = var1; /* _state on <self:Lexer exact> */
var2 = 0;
self->attrs[COLOR_nit__lexer_work__Lexer___stream_pos].l = var2; /* _stream_pos on <self:Lexer exact> */
var3 = 0;
self->attrs[COLOR_nit__lexer_work__Lexer___line].l = var3; /* _line on <self:Lexer exact> */
var4 = 0;
self->attrs[COLOR_nit__lexer_work__Lexer___pos].l = var4; /* _pos on <self:Lexer exact> */
var5 = 0;
self->attrs[COLOR_nit__lexer_work__Lexer___cr].s = var5; /* _cr on <self:Lexer exact> */
var6 = NULL;
self->attrs[COLOR_nit__lexer_work__Lexer___last_token].val = var6; /* _last_token on <self:Lexer exact> */
return self;
}
/* runtime class nit__TablesCapable */
const struct class class_nit__TablesCapable = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to tables:TablesCapable:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to tables:TablesCapable:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to tables:TablesCapable:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to tables:TablesCapable:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to tables:TablesCapable:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to tables:TablesCapable:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to tables:TablesCapable:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to tables:TablesCapable:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to tables:TablesCapable:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to tables:TablesCapable:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to tables:TablesCapable:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to tables:TablesCapable:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to tables:TablesCapable:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to tables:TablesCapable:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to tables:TablesCapable:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to tables:TablesCapable:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to tables:TablesCapable:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to tables:TablesCapable:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to tables:TablesCapable:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to tables:TablesCapable:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to tables:TablesCapable:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to tables:TablesCapable:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to tables:TablesCapable:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to tables:TablesCapable:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to tables:TablesCapable:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to tables:TablesCapable:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to tables:TablesCapable:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to tables:TablesCapable:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to tables:TablesCapable:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to tables:TablesCapable:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to tables:TablesCapable:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to tables:TablesCapable:model#Object#extern_kind */
(nitmethod_t)nit___nit__TablesCapable___lexer_goto, /* pointer to tables:TablesCapable:tables#TablesCapable#lexer_goto */
(nitmethod_t)nit___nit__TablesCapable___lexer_accept, /* pointer to tables:TablesCapable:tables#TablesCapable#lexer_accept */
(nitmethod_t)nit___nit__TablesCapable___parser_goto, /* pointer to tables:TablesCapable:tables#TablesCapable#parser_goto */
(nitmethod_t)nit___nit__TablesCapable___parser_action, /* pointer to tables:TablesCapable:tables#TablesCapable#parser_action */
}
};
/* allocate TablesCapable */
val* NEW_nit__TablesCapable(const struct type* type) {
val* self /* : TablesCapable */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__TablesCapable;
return self;
}
/* runtime class nit__parser_work__State */
const struct class class_nit__parser_work__State = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_work:State:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_work:State:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_work:State:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_work:State:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_work:State:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_work:State:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_work:State:kernel#Object#sys */
(nitmethod_t)nit__parser_work___nit__parser_work__State___standard__kernel__Object__init, /* pointer to parser_work:State:parser_work#State#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_work:State:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_work:State:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_work:State:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_work:State:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_work:State:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_work:State:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_work:State:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_work:State:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_work:State:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_work:State:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_work:State:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_work:State:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_work:State:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_work:State:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_work:State:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_work:State:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_work:State:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_work:State:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_work:State:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_work:State:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_work:State:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_work:State:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_work:State:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_work:State:model#Object#extern_kind */
(nitmethod_t)nit__parser_work___nit__parser_work__State___state_61d, /* pointer to parser_work:State:parser_work#State#state= */
(nitmethod_t)nit__parser_work___nit__parser_work__State___nodes_61d, /* pointer to parser_work:State:parser_work#State#nodes= */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_work:State:kernel#Object#init */
}
};
/* allocate State */
val* NEW_nit__parser_work__State(const struct type* type) {
val* self /* : State */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser_work__State;
return self;
}
/* runtime class nit__Parser */
const struct class class_nit__Parser = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_work:Parser:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_work:Parser:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_work:Parser:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_work:Parser:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_work:Parser:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_work:Parser:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_work:Parser:kernel#Object#sys */
(nitmethod_t)nit___nit__Parser___standard__kernel__Object__init, /* pointer to parser_work:Parser:parser_work#Parser#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_work:Parser:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_work:Parser:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_work:Parser:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_work:Parser:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_work:Parser:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_work:Parser:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_work:Parser:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_work:Parser:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_work:Parser:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_work:Parser:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_work:Parser:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_work:Parser:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_work:Parser:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_work:Parser:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_work:Parser:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_work:Parser:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_work:Parser:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_work:Parser:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_work:Parser:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_work:Parser:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_work:Parser:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_work:Parser:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_work:Parser:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_work:Parser:model#Object#extern_kind */
(nitmethod_t)nit___nit__TablesCapable___lexer_goto, /* pointer to parser_work:Parser:tables#TablesCapable#lexer_goto */
(nitmethod_t)nit___nit__TablesCapable___lexer_accept, /* pointer to parser_work:Parser:tables#TablesCapable#lexer_accept */
(nitmethod_t)nit___nit__TablesCapable___parser_goto, /* pointer to parser_work:Parser:tables#TablesCapable#parser_goto */
(nitmethod_t)nit___nit__TablesCapable___parser_action, /* pointer to parser_work:Parser:tables#TablesCapable#parser_action */
(nitmethod_t)nit___nit__Parser___lexer_61d, /* pointer to parser_work:Parser:parser_work#Parser#lexer= */
(nitmethod_t)nit___nit__Parser___go_to, /* pointer to parser_work:Parser:parser_work#Parser#go_to */
(nitmethod_t)nit___nit__Parser___push, /* pointer to parser_work:Parser:parser_work#Parser#push */
(nitmethod_t)nit___nit__Parser___state, /* pointer to parser_work:Parser:parser_work#Parser#state */
(nitmethod_t)nit___nit__Parser___pop, /* pointer to parser_work:Parser:parser_work#Parser#pop */
(nitmethod_t)nit___nit__Parser___parse, /* pointer to parser_work:Parser:parser_work#Parser#parse */
(nitmethod_t)nit__parser___Parser___build_reduce_table, /* pointer to parser_work:Parser:parser#Parser#build_reduce_table */
}
};
/* allocate Parser */
val* NEW_nit__Parser(const struct type* type) {
val* self /* : Parser */;
val* var /* : Array[State] */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Parser;
var = NEW_standard__Array(&type_standard__Array__nit__parser_work__State);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[State]>*/
}
self->attrs[COLOR_nit__parser_work__Parser___stack].val = var; /* _stack on <self:Parser exact> */
var1 = 1;
{
{ /* Inline kernel#Int#unary - (var1) on <var1:Int> */
var3 = -var1;
var2 = var3;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__parser_work__Parser___stack_pos].l = var2; /* _stack_pos on <self:Parser exact> */
return self;
}
/* runtime class nit__parser_work__ComputeProdLocationVisitor */
const struct class class_nit__parser_work__ComputeProdLocationVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_work:ComputeProdLocationVisitor:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_work:ComputeProdLocationVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_work:ComputeProdLocationVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_work:ComputeProdLocationVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_work:ComputeProdLocationVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_work:ComputeProdLocationVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_work:ComputeProdLocationVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_work:ComputeProdLocationVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_work:ComputeProdLocationVisitor:model#Object#extern_kind */
(nitmethod_t)nit__parser_work___nit__parser_work__ComputeProdLocationVisitor___nit__parser_nodes__Visitor__visit, /* pointer to parser_work:ComputeProdLocationVisitor:parser_work#ComputeProdLocationVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to parser_work:ComputeProdLocationVisitor:parser_nodes#Visitor#current_node */
}
};
/* allocate ComputeProdLocationVisitor */
val* NEW_nit__parser_work__ComputeProdLocationVisitor(const struct type* type) {
val* self /* : ComputeProdLocationVisitor */;
val* var /* : null */;
val* var1 /* : Array[Prod] */;
val* var2 /* : Array[Prod] */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser_work__ComputeProdLocationVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ComputeProdLocationVisitor exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__Prod);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Prod]>*/
}
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_first_prods].val = var1; /* _need_first_prods on <self:ComputeProdLocationVisitor exact> */
var2 = NEW_standard__Array(&type_standard__Array__nit__Prod);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Prod]>*/
}
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___need_after_epsilons].val = var2; /* _need_after_epsilons on <self:ComputeProdLocationVisitor exact> */
var3 = NULL;
self->attrs[COLOR_nit__parser_work__ComputeProdLocationVisitor___last_location].val = var3; /* _last_location on <self:ComputeProdLocationVisitor exact> */
return self;
}
/* runtime class nit__parser_work__TextCollectorVisitor */
const struct class class_nit__parser_work__TextCollectorVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to parser_work:TextCollectorVisitor:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to parser_work:TextCollectorVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to parser_work:TextCollectorVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to parser_work:TextCollectorVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to parser_work:TextCollectorVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to parser_work:TextCollectorVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to parser_work:TextCollectorVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to parser_work:TextCollectorVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to parser_work:TextCollectorVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to parser_work:TextCollectorVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to parser_work:TextCollectorVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to parser_work:TextCollectorVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to parser_work:TextCollectorVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to parser_work:TextCollectorVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to parser_work:TextCollectorVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to parser_work:TextCollectorVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to parser_work:TextCollectorVisitor:model#Object#extern_kind */
(nitmethod_t)nit__parser_work___nit__parser_work__TextCollectorVisitor___nit__parser_nodes__Visitor__visit, /* pointer to parser_work:TextCollectorVisitor:parser_work#TextCollectorVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to parser_work:TextCollectorVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to parser_work:TextCollectorVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__parser_work___nit__parser_work__TextCollectorVisitor___text, /* pointer to parser_work:TextCollectorVisitor:parser_work#TextCollectorVisitor#text */
(nitmethod_t)nit__parser_work___nit__parser_work__TextCollectorVisitor___text_61d, /* pointer to parser_work:TextCollectorVisitor:parser_work#TextCollectorVisitor#text= */
}
};
/* allocate TextCollectorVisitor */
val* NEW_nit__parser_work__TextCollectorVisitor(const struct type* type) {
val* self /* : TextCollectorVisitor */;
val* var /* : null */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__parser_work__TextCollectorVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:TextCollectorVisitor exact> */
if (varonce) {
var1 = varonce;
} else {
var2 = "";
var3 = 0;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
self->attrs[COLOR_nit__parser_work__TextCollectorVisitor___text].val = var1; /* _text on <self:TextCollectorVisitor exact> */
return self;
}
/* runtime class nit__parser_work__ReduceAction */
/* allocate ReduceAction */
val* NEW_nit__parser_work__ReduceAction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ReduceAction is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__phase__AnnotationPhaseVisitor */
const struct class class_nit__phase__AnnotationPhaseVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to phase:AnnotationPhaseVisitor:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to phase:AnnotationPhaseVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to phase:AnnotationPhaseVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to phase:AnnotationPhaseVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to phase:AnnotationPhaseVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to phase:AnnotationPhaseVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to phase:AnnotationPhaseVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to phase:AnnotationPhaseVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to phase:AnnotationPhaseVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to phase:AnnotationPhaseVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to phase:AnnotationPhaseVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to phase:AnnotationPhaseVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to phase:AnnotationPhaseVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to phase:AnnotationPhaseVisitor:model#Object#extern_kind */
(nitmethod_t)nit__phase___nit__phase__AnnotationPhaseVisitor___nit__parser_nodes__Visitor__visit, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to phase:AnnotationPhaseVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__phase___nit__phase__AnnotationPhaseVisitor___annotations, /* pointer to phase:AnnotationPhaseVisitor:phase#AnnotationPhaseVisitor#annotations */
}
};
/* allocate AnnotationPhaseVisitor */
val* NEW_nit__phase__AnnotationPhaseVisitor(const struct type* type) {
val* self /* : AnnotationPhaseVisitor */;
val* var /* : null */;
val* var1 /* : Array[AAnnotation] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__phase__AnnotationPhaseVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AnnotationPhaseVisitor exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__AAnnotation);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AAnnotation]>*/
}
self->attrs[COLOR_nit__phase__AnnotationPhaseVisitor___annotations].val = var1; /* _annotations on <self:AnnotationPhaseVisitor exact> */
return self;
}
/* runtime class nit__Phase */
/* allocate Phase */
val* NEW_nit__Phase(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Phase is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__literal__LiteralPhase */
const struct class class_nit__literal__LiteralPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to literal:LiteralPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to literal:LiteralPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to literal:LiteralPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to literal:LiteralPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to literal:LiteralPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to literal:LiteralPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to literal:LiteralPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to literal:LiteralPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to literal:LiteralPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to literal:LiteralPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to literal:LiteralPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to literal:LiteralPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to literal:LiteralPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to literal:LiteralPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to literal:LiteralPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to literal:LiteralPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to literal:LiteralPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to literal:LiteralPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to literal:LiteralPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to literal:LiteralPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to literal:LiteralPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to literal:LiteralPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to literal:LiteralPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to literal:LiteralPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to literal:LiteralPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to literal:LiteralPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to literal:LiteralPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to literal:LiteralPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to literal:LiteralPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to literal:LiteralPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to literal:LiteralPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to literal:LiteralPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to literal:LiteralPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to literal:LiteralPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to literal:LiteralPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to literal:LiteralPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to literal:LiteralPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to literal:LiteralPhase:phase#Phase#disabled= */
(nitmethod_t)nit__literal___nit__literal__LiteralPhase___nit__phase__Phase__process_nmodule, /* pointer to literal:LiteralPhase:literal#LiteralPhase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to literal:LiteralPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to literal:LiteralPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to literal:LiteralPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to literal:LiteralPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate LiteralPhase */
val* NEW_nit__literal__LiteralPhase(const struct type* type) {
val* self /* : LiteralPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__literal__LiteralPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:LiteralPhase exact> */
return self;
}
/* runtime class nit__literal__LiteralVisitor */
const struct class class_nit__literal__LiteralVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to literal:LiteralVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to literal:LiteralVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to literal:LiteralVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to literal:LiteralVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to literal:LiteralVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to literal:LiteralVisitor:kernel#Object#sys */
(nitmethod_t)nit__literal___nit__literal__LiteralVisitor___standard__kernel__Object__init, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to literal:LiteralVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to literal:LiteralVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to literal:LiteralVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to literal:LiteralVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to literal:LiteralVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to literal:LiteralVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to literal:LiteralVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to literal:LiteralVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to literal:LiteralVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to literal:LiteralVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to literal:LiteralVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to literal:LiteralVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to literal:LiteralVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to literal:LiteralVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to literal:LiteralVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to literal:LiteralVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to literal:LiteralVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to literal:LiteralVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to literal:LiteralVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to literal:LiteralVisitor:model#Object#extern_kind */
(nitmethod_t)nit__literal___nit__literal__LiteralVisitor___nit__parser_nodes__Visitor__visit, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to literal:LiteralVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__literal___nit__literal__LiteralVisitor___toolcontext, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext */
(nitmethod_t)nit__literal___nit__literal__LiteralVisitor___toolcontext_61d, /* pointer to literal:LiteralVisitor:literal#LiteralVisitor#toolcontext= */
(nitmethod_t)standard___standard__Object___init, /* pointer to literal:LiteralVisitor:kernel#Object#init */
}
};
/* allocate LiteralVisitor */
val* NEW_nit__literal__LiteralVisitor(const struct type* type) {
val* self /* : LiteralVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__literal__LiteralVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LiteralVisitor exact> */
return self;
}
/* runtime class nit__MModuleData */
/* allocate MModuleData[Object] */
val* NEW_nit__MModuleData(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MModuleData is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MModuleMultiData */
/* allocate MModuleMultiData[nullable Object] */
val* NEW_nit__MModuleMultiData(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "MModuleMultiData is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__transform__TransformPhase */
const struct class class_nit__transform__TransformPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to transform:TransformPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to transform:TransformPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to transform:TransformPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to transform:TransformPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to transform:TransformPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to transform:TransformPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to transform:TransformPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to transform:TransformPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to transform:TransformPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to transform:TransformPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to transform:TransformPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to transform:TransformPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to transform:TransformPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to transform:TransformPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to transform:TransformPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to transform:TransformPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to transform:TransformPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to transform:TransformPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to transform:TransformPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to transform:TransformPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to transform:TransformPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to transform:TransformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to transform:TransformPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to transform:TransformPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to transform:TransformPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to transform:TransformPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to transform:TransformPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to transform:TransformPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to transform:TransformPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to transform:TransformPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to transform:TransformPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to transform:TransformPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to transform:TransformPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to transform:TransformPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to transform:TransformPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to transform:TransformPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to transform:TransformPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to transform:TransformPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to transform:TransformPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to transform:TransformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__transform___nit__transform__TransformPhase___nit__phase__Phase__process_npropdef, /* pointer to transform:TransformPhase:transform#TransformPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to transform:TransformPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to transform:TransformPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate TransformPhase */
val* NEW_nit__transform__TransformPhase(const struct type* type) {
val* self /* : TransformPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__transform__TransformPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:TransformPhase exact> */
return self;
}
/* runtime class nit__transform__TransformVisitor */
const struct class class_nit__transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to transform:TransformVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to transform:TransformVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___standard__kernel__Object__init, /* pointer to transform:TransformVisitor:transform#TransformVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to transform:TransformVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to transform:TransformVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to transform:TransformVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to transform:TransformVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to transform:TransformVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to transform:TransformVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to transform:TransformVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to transform:TransformVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to transform:TransformVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to transform:TransformVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to transform:TransformVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to transform:TransformVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to transform:TransformVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to transform:TransformVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to transform:TransformVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to transform:TransformVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to transform:TransformVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to transform:TransformVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to transform:TransformVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to transform:TransformVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to transform:TransformVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to transform:TransformVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to transform:TransformVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to transform:TransformVisitor:model#Object#extern_kind */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___nit__parser_nodes__Visitor__visit, /* pointer to transform:TransformVisitor:transform#TransformVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___phase, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___phase_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mmodule, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mmodule_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mclassdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mclassdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mpropdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mpropdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___builder, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___builder_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder= */
(nitmethod_t)standard___standard__Object___init, /* pointer to transform:TransformVisitor:kernel#Object#init */
}
};
/* allocate TransformVisitor */
val* NEW_nit__transform__TransformVisitor(const struct type* type) {
val* self /* : TransformVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__transform__TransformVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:TransformVisitor exact> */
return self;
}
/* runtime class nit__ASTBuilder */
const struct class class_nit__ASTBuilder = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to astbuilder:ASTBuilder:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to astbuilder:ASTBuilder:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to astbuilder:ASTBuilder:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to astbuilder:ASTBuilder:kernel#Object#sys */
(nitmethod_t)nit___nit__ASTBuilder___standard__kernel__Object__init, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to astbuilder:ASTBuilder:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to astbuilder:ASTBuilder:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to astbuilder:ASTBuilder:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to astbuilder:ASTBuilder:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to astbuilder:ASTBuilder:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to astbuilder:ASTBuilder:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to astbuilder:ASTBuilder:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to astbuilder:ASTBuilder:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to astbuilder:ASTBuilder:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to astbuilder:ASTBuilder:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to astbuilder:ASTBuilder:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to astbuilder:ASTBuilder:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to astbuilder:ASTBuilder:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to astbuilder:ASTBuilder:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to astbuilder:ASTBuilder:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to astbuilder:ASTBuilder:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to astbuilder:ASTBuilder:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to astbuilder:ASTBuilder:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to astbuilder:ASTBuilder:model#Object#extern_kind */
(nitmethod_t)nit___nit__ASTBuilder___mmodule, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule */
(nitmethod_t)nit___nit__ASTBuilder___mmodule_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule= */
(nitmethod_t)nit___nit__ASTBuilder___anchor, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor */
(nitmethod_t)nit___nit__ASTBuilder___anchor_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor= */
(nitmethod_t)nit___nit__ASTBuilder___make_int, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_int */
(nitmethod_t)nit___nit__ASTBuilder___make_new, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_new */
(nitmethod_t)nit___nit__ASTBuilder___make_call, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_call */
(nitmethod_t)nit___nit__ASTBuilder___make_block, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_block */
(nitmethod_t)nit___nit__ASTBuilder___make_loop, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_loop */
(nitmethod_t)nit___nit__ASTBuilder___make_var_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_read */
(nitmethod_t)nit___nit__ASTBuilder___make_var_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_assign */
(nitmethod_t)nit___nit__ASTBuilder___make_attr_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_read */
(nitmethod_t)nit___nit__ASTBuilder___make_attr_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_assign */
(nitmethod_t)nit___nit__ASTBuilder___make_do, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_do */
(nitmethod_t)nit___nit__ASTBuilder___make_break, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_break */
(nitmethod_t)nit___nit__ASTBuilder___make_if, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_if */
(nitmethod_t)standard___standard__Object___init, /* pointer to astbuilder:ASTBuilder:kernel#Object#init */
}
};
/* allocate ASTBuilder */
val* NEW_nit__ASTBuilder(const struct type* type) {
val* self /* : ASTBuilder */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASTBuilder;
return self;
}
/* runtime class nit__APlaceholderExpr */
const struct class class_nit__APlaceholderExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to astbuilder:APlaceholderExpr:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to astbuilder:APlaceholderExpr:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to astbuilder:APlaceholderExpr:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to astbuilder:APlaceholderExpr:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to astbuilder:APlaceholderExpr:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to astbuilder:APlaceholderExpr:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to astbuilder:APlaceholderExpr:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to astbuilder:APlaceholderExpr:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to astbuilder:APlaceholderExpr:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to astbuilder:APlaceholderExpr:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to astbuilder:APlaceholderExpr:model#Object#extern_kind */
(nitmethod_t)nit___nit__ANode___location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__ANode___replace_child, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_child */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit___nit__ANode___visit_all, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#visit_all */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to astbuilder:APlaceholderExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to astbuilder:APlaceholderExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to astbuilder:APlaceholderExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to astbuilder:APlaceholderExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to astbuilder:APlaceholderExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__astvalidation___APlaceholderExpr___ANode__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#APlaceholderExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to astbuilder:APlaceholderExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to astbuilder:APlaceholderExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to astbuilder:APlaceholderExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to astbuilder:APlaceholderExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to astbuilder:APlaceholderExpr:literal#AExpr#as_id */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AExpr___accept_typing, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__transform___ANode___full_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#ANode#full_transform_visitor */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__APlaceholderExpr___make, /* pointer to astbuilder:APlaceholderExpr:astbuilder#APlaceholderExpr#make */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#AExpr#accept_ast_validation */
}
};
/* allocate APlaceholderExpr */
val* NEW_nit__APlaceholderExpr(const struct type* type) {
val* self /* : APlaceholderExpr */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : null */;
val* var5 /* : null */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APlaceholderExpr;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__ANode___parent].val = var; /* _parent on <self:APlaceholderExpr exact> */
var1 = NULL;
self->attrs[COLOR_nit__parser_nodes__Prod___n_annotations].val = var1; /* _n_annotations on <self:APlaceholderExpr exact> */
var2 = NULL;
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var2; /* _mtype on <self:APlaceholderExpr exact> */
var3 = 0;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:APlaceholderExpr exact> */
var4 = NULL;
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var4; /* _implicit_cast_to on <self:APlaceholderExpr exact> */
var5 = NULL;
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = var5; /* _comprehension on <self:APlaceholderExpr exact> */
return self;
}
/* runtime class nit__typing__TypingPhase */
const struct class class_nit__typing__TypingPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:TypingPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:TypingPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:TypingPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:TypingPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to typing:TypingPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to typing:TypingPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to typing:TypingPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to typing:TypingPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:TypingPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:TypingPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:TypingPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:TypingPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to typing:TypingPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to typing:TypingPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:TypingPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to typing:TypingPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to typing:TypingPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to typing:TypingPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to typing:TypingPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to typing:TypingPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to typing:TypingPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to typing:TypingPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to typing:TypingPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to typing:TypingPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to typing:TypingPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to typing:TypingPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to typing:TypingPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to typing:TypingPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to typing:TypingPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to typing:TypingPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to typing:TypingPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to typing:TypingPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to typing:TypingPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to typing:TypingPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to typing:TypingPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to typing:TypingPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to typing:TypingPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to typing:TypingPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__typing___nit__typing__TypingPhase___nit__phase__Phase__process_npropdef, /* pointer to typing:TypingPhase:typing#TypingPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to typing:TypingPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to typing:TypingPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate TypingPhase */
val* NEW_nit__typing__TypingPhase(const struct type* type) {
val* self /* : TypingPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__typing__TypingPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:TypingPhase exact> */
return self;
}
/* runtime class nit__typing__TypeVisitor */
const struct class class_nit__typing__TypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:TypeVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:TypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:TypeVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:TypeVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to typing:TypeVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___standard__kernel__Object__init, /* pointer to typing:TypeVisitor:typing#TypeVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to typing:TypeVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to typing:TypeVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:TypeVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:TypeVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:TypeVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:TypeVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to typing:TypeVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to typing:TypeVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:TypeVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to typing:TypeVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to typing:TypeVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to typing:TypeVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to typing:TypeVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to typing:TypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to typing:TypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to typing:TypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to typing:TypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to typing:TypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to typing:TypeVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to typing:TypeVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to typing:TypeVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to typing:TypeVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to typing:TypeVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to typing:TypeVisitor:model#Object#extern_kind */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___modelbuilder, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___modelbuilder_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mmodule, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mmodule_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___anchor, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___anchor_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mclassdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mclassdef */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mclassdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mclassdef= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mpropdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mpropdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___selfvariable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___selfvariable_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___is_toplevel_context, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_toplevel_context */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___is_toplevel_context_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_toplevel_context= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___anchor_to, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor_to */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___is_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_subtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___resolve_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_for */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___check_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_subtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_stmt, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_stmt */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_subtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_bool */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr_cast, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_cast */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___null_test, /* pointer to typing:TypeVisitor:typing#TypeVisitor#null_test */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mproperty_by_name2 */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___resolve_mtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_mtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___try_get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mclass */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_mclass */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___type_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#type_bool */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_method */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___try_get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_method */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___check_signature, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_signature */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___error, /* pointer to typing:TypeVisitor:typing#TypeVisitor#error */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___get_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_variable */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___set_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#set_variable */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___merge_types, /* pointer to typing:TypeVisitor:typing#TypeVisitor#merge_types */
}
};
/* allocate TypeVisitor */
val* NEW_nit__typing__TypeVisitor(const struct type* type) {
val* self /* : TypeVisitor */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : Variable */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
short int var7 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__typing__TypeVisitor;
var = NULL;
self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val = var; /* _anchor on <self:TypeVisitor exact> */
var1 = NULL;
self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val = var1; /* _mclassdef on <self:TypeVisitor exact> */
var2 = NEW_nit__Variable(&type_nit__Variable);
if (varonce) {
var3 = varonce;
} else {
var4 = "self";
var5 = 4;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
((void (*)(val* self, val* p0))(var2->class->vft[COLOR_nit__scope__Variable__name_61d]))(var2, var3) /* name= on <var2:Variable>*/;
}
{
((void (*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2) /* init on <var2:Variable>*/;
}
self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val = var2; /* _selfvariable on <self:TypeVisitor exact> */
var7 = 0;
self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s = var7; /* _is_toplevel_context on <self:TypeVisitor exact> */
return self;
}
/* runtime class nit__CallSite */
const struct class class_nit__CallSite = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:CallSite:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:CallSite:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:CallSite:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:CallSite:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to typing:CallSite:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)nit___nit__CallSite___standard__kernel__Object__init, /* pointer to typing:CallSite:typing#CallSite#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to typing:CallSite:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to typing:CallSite:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:CallSite:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:CallSite:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:CallSite:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:CallSite:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to typing:CallSite:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to typing:CallSite:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:CallSite:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to typing:CallSite:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to typing:CallSite:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to typing:CallSite:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to typing:CallSite:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to typing:CallSite:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to typing:CallSite:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to typing:CallSite:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to typing:CallSite:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to typing:CallSite:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to typing:CallSite:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to typing:CallSite:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to typing:CallSite:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to typing:CallSite:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to typing:CallSite:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to typing:CallSite:model#Object#extern_kind */
(nitmethod_t)nit___nit__CallSite___node, /* pointer to typing:CallSite:typing#CallSite#node */
(nitmethod_t)nit___nit__CallSite___node_61d, /* pointer to typing:CallSite:typing#CallSite#node= */
(nitmethod_t)nit___nit__CallSite___recv, /* pointer to typing:CallSite:typing#CallSite#recv */
(nitmethod_t)nit___nit__CallSite___recv_61d, /* pointer to typing:CallSite:typing#CallSite#recv= */
(nitmethod_t)nit___nit__CallSite___mmodule, /* pointer to typing:CallSite:typing#CallSite#mmodule */
(nitmethod_t)nit___nit__CallSite___mmodule_61d, /* pointer to typing:CallSite:typing#CallSite#mmodule= */
(nitmethod_t)nit___nit__CallSite___anchor, /* pointer to typing:CallSite:typing#CallSite#anchor */
(nitmethod_t)nit___nit__CallSite___anchor_61d, /* pointer to typing:CallSite:typing#CallSite#anchor= */
(nitmethod_t)nit___nit__CallSite___recv_is_self_61d, /* pointer to typing:CallSite:typing#CallSite#recv_is_self= */
(nitmethod_t)nit___nit__CallSite___mproperty, /* pointer to typing:CallSite:typing#CallSite#mproperty */
(nitmethod_t)nit___nit__CallSite___mproperty_61d, /* pointer to typing:CallSite:typing#CallSite#mproperty= */
(nitmethod_t)nit___nit__CallSite___mpropdef, /* pointer to typing:CallSite:typing#CallSite#mpropdef */
(nitmethod_t)nit___nit__CallSite___mpropdef_61d, /* pointer to typing:CallSite:typing#CallSite#mpropdef= */
(nitmethod_t)nit___nit__CallSite___msignature, /* pointer to typing:CallSite:typing#CallSite#msignature */
(nitmethod_t)nit___nit__CallSite___msignature_61d, /* pointer to typing:CallSite:typing#CallSite#msignature= */
(nitmethod_t)nit___nit__CallSite___erasure_cast, /* pointer to typing:CallSite:typing#CallSite#erasure_cast */
(nitmethod_t)nit___nit__CallSite___erasure_cast_61d, /* pointer to typing:CallSite:typing#CallSite#erasure_cast= */
(nitmethod_t)nit___nit__CallSite___check_signature, /* pointer to typing:CallSite:typing#CallSite#check_signature */
(nitmethod_t)standard___standard__Object___init, /* pointer to typing:CallSite:kernel#Object#init */
}
};
/* allocate CallSite */
val* NEW_nit__CallSite(const struct type* type) {
val* self /* : CallSite */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__CallSite;
return self;
}
/* runtime class nit__local_var_init__LocalVarInitPhase */
const struct class class_nit__local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to local_var_init:LocalVarInitPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to local_var_init:LocalVarInitPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to local_var_init:LocalVarInitPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to local_var_init:LocalVarInitPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to local_var_init:LocalVarInitPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to local_var_init:LocalVarInitPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to local_var_init:LocalVarInitPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to local_var_init:LocalVarInitPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to local_var_init:LocalVarInitPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to local_var_init:LocalVarInitPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitPhase___nit__phase__Phase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init#LocalVarInitPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate LocalVarInitPhase */
val* NEW_nit__local_var_init__LocalVarInitPhase(const struct type* type) {
val* self /* : LocalVarInitPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__local_var_init__LocalVarInitPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:LocalVarInitPhase exact> */
return self;
}
/* runtime class nit__local_var_init__LocalVarInitVisitor */
const struct class class_nit__local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___standard__kernel__Object__init, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to local_var_init:LocalVarInitVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to local_var_init:LocalVarInitVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to local_var_init:LocalVarInitVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to local_var_init:LocalVarInitVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to local_var_init:LocalVarInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to local_var_init:LocalVarInitVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to local_var_init:LocalVarInitVisitor:model#Object#extern_kind */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___nit__parser_nodes__Visitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext= */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_unset, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_unset */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_set */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___check_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#check_is_set */
(nitmethod_t)standard___standard__Object___init, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#init */
}
};
/* allocate LocalVarInitVisitor */
val* NEW_nit__local_var_init__LocalVarInitVisitor(const struct type* type) {
val* self /* : LocalVarInitVisitor */;
val* var /* : null */;
val* var1 /* : HashSet[Variable] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__local_var_init__LocalVarInitVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:LocalVarInitVisitor exact> */
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__Variable);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[Variable]>*/
}
self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val = var1; /* _maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* runtime class nit__flow__FlowPhase */
const struct class class_nit__flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to flow:FlowPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to flow:FlowPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to flow:FlowPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to flow:FlowPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to flow:FlowPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to flow:FlowPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to flow:FlowPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to flow:FlowPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to flow:FlowPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to flow:FlowPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to flow:FlowPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to flow:FlowPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to flow:FlowPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to flow:FlowPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to flow:FlowPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to flow:FlowPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to flow:FlowPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to flow:FlowPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to flow:FlowPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to flow:FlowPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to flow:FlowPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to flow:FlowPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to flow:FlowPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to flow:FlowPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to flow:FlowPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to flow:FlowPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to flow:FlowPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to flow:FlowPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to flow:FlowPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to flow:FlowPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to flow:FlowPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to flow:FlowPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to flow:FlowPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to flow:FlowPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to flow:FlowPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to flow:FlowPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to flow:FlowPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to flow:FlowPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__flow___nit__flow__FlowPhase___nit__phase__Phase__process_npropdef, /* pointer to flow:FlowPhase:flow#FlowPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to flow:FlowPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to flow:FlowPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate FlowPhase */
val* NEW_nit__flow__FlowPhase(const struct type* type) {
val* self /* : FlowPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__flow__FlowPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:FlowPhase exact> */
return self;
}
/* runtime class nit__flow__FlowVisitor */
const struct class class_nit__flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to flow:FlowVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to flow:FlowVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to flow:FlowVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to flow:FlowVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to flow:FlowVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___standard__kernel__Object__init, /* pointer to flow:FlowVisitor:flow#FlowVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to flow:FlowVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to flow:FlowVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to flow:FlowVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to flow:FlowVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to flow:FlowVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to flow:FlowVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to flow:FlowVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to flow:FlowVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to flow:FlowVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to flow:FlowVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to flow:FlowVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to flow:FlowVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to flow:FlowVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to flow:FlowVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to flow:FlowVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to flow:FlowVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to flow:FlowVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to flow:FlowVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to flow:FlowVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to flow:FlowVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to flow:FlowVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to flow:FlowVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to flow:FlowVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to flow:FlowVisitor:model#Object#extern_kind */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___nit__parser_nodes__Visitor__visit, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___current_flow_context, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___current_flow_context_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context= */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___toolcontext, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___toolcontext_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext= */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___first, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___first_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first= */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___visit_expr, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit_expr */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___flows, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_sub_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_merge_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_merge_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_true_false_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_sub_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_true_false_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_unreachable_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_unreachable_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___merge_continues_to, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_continues_to */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___merge_breaks, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_breaks */
(nitmethod_t)standard___standard__Object___init, /* pointer to flow:FlowVisitor:kernel#Object#init */
}
};
/* allocate FlowVisitor */
val* NEW_nit__flow__FlowVisitor(const struct type* type) {
val* self /* : FlowVisitor */;
val* var /* : null */;
val* var1 /* : FlowContext */;
val* var2 /* : null */;
val* var3 /* : Array[FlowContext] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__flow__FlowVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:FlowVisitor exact> */
var1 = NEW_nit__FlowContext(&type_nit__FlowContext);
{
{ /* Inline kernel#Object#init (var1) on <var1:FlowContext> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__flow__FlowVisitor___current_flow_context].val = var1; /* _current_flow_context on <self:FlowVisitor exact> */
var2 = NULL;
self->attrs[COLOR_nit__flow__FlowVisitor___first].val = var2; /* _first on <self:FlowVisitor exact> */
var3 = NEW_standard__Array(&type_standard__Array__nit__FlowContext);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[FlowContext]>*/
}
self->attrs[COLOR_nit__flow__FlowVisitor___flows].val = var3; /* _flows on <self:FlowVisitor exact> */
return self;
}
